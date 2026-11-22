/* pvr.c: the PowerVR on the host: its tile accelerator (TA), texture memory and rendering, at the level the hardware
   takes them, so that whatever the library draws comes out without the port knowing the library's drawing code.

   - The TA takes 32-byte parameters (hw.c sends what DMA and the store queues write to its FIFO): global parameters
     (polygon headers with the PCW, ISP, TSP and TCW words, sprite headers), vertices of 15 kinds, end of list. They
     become triangles in screen space (x, y in pixels, 1/W) with the PowerVR's render state, kept per TA buffer
     (TA_ISP_BASE at the list init) since the library prepares one frame while the previous one renders.
   - STARTRENDER draws the buffer PARAM_BASE names (draw.c: opaque, punch-through, then translucent sorted), over the
     background plane (ISP_BACKGND_T), and shows it.
   - Textures are decoded from texture memory (the 64-bit view runner.c maps at 0xA4000000) by their TCW and TSP:
     ARGB1555, RGB565, ARGB4444, YUV422, 4 and 8 bit palettes (palette RAM at 0xA05F9000), twiddled, VQ, mipmaps,
     strides; a decoded texture is kept while the bytes it came from (and its palette) hash the same. */
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__                 /* macOS: its OpenGL header (the C tests run there, tests/c) */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl3.h>
#else
#include <GL/gl.h>
#include <GL/glext.h>
#endif
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "port.h"
#include "render.h"

#define REG(a) (*(volatile uint32_t *)(uintptr_t)(a))
#define PVR 0xA05F8000u
#define VRAM64 ((uint8_t *)(uintptr_t)0xA4000000u)
#define VRAM32 ((uint8_t *)(uintptr_t)0xA5000000u)
#define VRAM_MASK 0x007FFFFFu

unsigned port_host_fp_enter(void);
void port_host_fp_leave(unsigned);
void hw_raise(int bit);
void hw_raise_later(int bit, unsigned us);
void hw_raise_err(int bit);
void port_frame_end(void);
extern int port_headless;

static int pvr_debug;

/* --- texture memory ------------------------------------------------------------------------------------------------ */

/* the 64-bit view's offset of a 32-bit path offset: the two banks interleave every 32 bits */
static uint32_t map32(uint32_t a)
{
    return (a & 3) | ((a & 0x3FFFFCu) << 1) | ((a & 0x400000u) ? 4 : 0);
}

void pvr_vram_write(uint32_t addr, const void *src, uint32_t n, int path32)
{
    addr &= VRAM_MASK;
    if (!path32) {
        if (addr + n > VRAM_MASK + 1)
            n = VRAM_MASK + 1 - addr;
        memcpy(VRAM64 + addr, src, n);
        return;
    }
    const uint8_t *s = src;
    for (uint32_t i = 0; i + 4 <= n; i += 4) {
        uint32_t a = (addr + i) & VRAM_MASK;
        memcpy(VRAM32 + a, s + i, 4);
        memcpy(VRAM64 + map32(a), s + i, 4);
    }
}

/* --- textures ------------------------------------------------------------------------------------------------------ */

static uint32_t twiddle(uint32_t x, uint32_t y)
{
    uint32_t r = 0;
    for (int b = 0; b < 10; b++)
        r |= ((y >> b) & 1) << (2 * b) | ((x >> b) & 1) << (2 * b + 1);
    return r;
}

/* (x, y)'s index in a twiddled w x h picture: square blocks of the shorter side, one after another */
static uint32_t twiddled(uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    uint32_t m = w < h ? w : h;
    uint32_t block = w < h ? y / m : x / m;
    return block * m * m + twiddle(x % m, y % m);
}

static uint32_t argb_rgba(uint32_t c) /* 0xAARRGGBB -> the bytes r g b a */
{
    return ((c >> 16) & 255) | (c & 0xFF00) | ((c & 255) << 16) | (c & 0xFF000000u);
}

static uint32_t px16(uint16_t p, int fmt)
{
    uint32_t r, g, b, a;
    switch (fmt) {
    case 0: /* ARGB1555 */
        a = p & 0x8000 ? 255 : 0;
        r = (p >> 10) & 31; g = (p >> 5) & 31; b = p & 31;
        r = r << 3 | r >> 2; g = g << 3 | g >> 2; b = b << 3 | b >> 2;
        break;
    case 1: /* RGB565 */
        a = 255;
        r = (p >> 11) & 31; g = (p >> 5) & 63; b = p & 31;
        r = r << 3 | r >> 2; g = g << 2 | g >> 4; b = b << 3 | b >> 2;
        break;
    case 2: /* ARGB4444 */
        a = ((p >> 12) & 15) * 17; r = ((p >> 8) & 15) * 17; g = ((p >> 4) & 15) * 17; b = (p & 15) * 17;
        break;
    default: /* bump map and others: grey */
        return 0xFF808080u;
    }
    return r | g << 8 | b << 16 | a << 24;
}

static uint32_t palette(uint32_t i)
{
    uint32_t e = REG(0xA05F9000u + (i & 1023) * 4);
    switch (REG(PVR + 0x108) & 3) {
    case 0: return px16((uint16_t)e, 0);
    case 1: return px16((uint16_t)e, 1);
    case 2: return px16((uint16_t)e, 2);
    default: return argb_rgba(e);
    }
}

static uint32_t yuv(int y, int u, int v)
{
    float fy = (float)y, fu = (float)(u - 128), fv = (float)(v - 128);
    int r = (int)(fy + 1.375f * fv), g = (int)(fy - 0.34375f * fu - 0.6875f * fv), b = (int)(fy + 1.71875f * fu);
    r = r < 0 ? 0 : r > 255 ? 255 : r;
    g = g < 0 ? 0 : g > 255 ? 255 : g;
    b = b < 0 ? 0 : b > 255 ? 255 : b;
    return (uint32_t)r | (uint32_t)g << 8 | (uint32_t)b << 16 | 0xFF000000u;
}

/* the byte offset of the top level in a mipmapped texture of side w: the smaller levels come first */
static uint32_t mip_offset(uint32_t w, int fmt, int vq)
{
    uint32_t texels = 3; /* 16 bits: the 1x1 level at texel 3 */
    for (uint32_t s = 1; s < w; s *= 2)
        texels += s * s;
    if (vq) {
        uint32_t off = 1;
        for (uint32_t s = 2; s < w; s *= 2)
            off += (s / 2) * (s / 2);
        return off;
    }
    if (fmt == 5)
        return texels / 2;
    if (fmt == 6)
        return texels;
    return texels * 2;
}

struct tex {
    uint32_t tcw, tsp_size, extra; /* the key: TCW, the TSP's size bits, palette and stride state */
    uint64_t hash;
    uint32_t checked;               /* the render it was last checked in */
    GLuint gl;
    int w, h, alpha;
    int used;
};
#define TEX_SLOTS 4096
static struct tex texs[TEX_SLOTS];
static uint32_t render_no;

static uint64_t fnv(const uint8_t *p, size_t n, uint64_t h)
{
    const uint32_t *q = (const uint32_t *)p;
    for (size_t i = 0; i < n / 4; i++)
        h = (h ^ q[i]) * 0x100000001B3ull;
    return h;
}

/* the texture's bytes in texture memory: where they start and how many */
static void tex_span(uint32_t tcw, int w, int h, int stride_w, uint32_t *start, uint32_t *bytes)
{
    int fmt = (tcw >> 27) & 7, vq = (tcw >> 30) & 1, mip = (tcw >> 31) & 1;
    int scan = fmt < 5 && ((tcw >> 26) & 1);
    uint32_t addr = (tcw & 0x1FFFFF) << 3;
    uint32_t n;
    int bw = scan && stride_w ? stride_w : w;
    if (vq)
        n = 2048 + (uint32_t)(w * h / 4) + (mip ? mip_offset((uint32_t)w, fmt, 1) : 0);
    else {
        uint32_t texels = (uint32_t)(bw * h);
        n = fmt == 5 ? texels / 2 : fmt == 6 ? texels : texels * 2;
        if (mip && !scan)
            n += mip_offset((uint32_t)w, fmt, 0);
    }
    *start = addr & VRAM_MASK;
    *bytes = n;
    if (*start + *bytes > VRAM_MASK + 1)
        *bytes = VRAM_MASK + 1 - *start;
}

static void decode(uint32_t tcw, int w, int h, int stride_w, uint32_t *out, int *has_alpha)
{
    int fmt = (tcw >> 27) & 7, vq = (tcw >> 30) & 1, mip = (tcw >> 31) & 1;
    int scan = fmt < 5 && ((tcw >> 26) & 1);
    uint32_t base = ((tcw & 0x1FFFFF) << 3) & VRAM_MASK;
    const uint8_t *d = VRAM64 + base;
    int alpha = 0;
    uint32_t palbase = fmt == 5 ? ((tcw >> 21) & 63) * 16 : fmt == 6 ? ((tcw >> 25) & 3) * 256 : 0;
    if (vq) {
        const uint16_t *book = (const uint16_t *)d;
        const uint8_t *idx = d + 2048 + (mip ? mip_offset((uint32_t)w, fmt, 1) : 0);
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++) {
                uint8_t i = idx[twiddled((uint32_t)x / 2, (uint32_t)y / 2, (uint32_t)w / 2, (uint32_t)h / 2)];
                uint16_t p = book[i * 4 + (x & 1) * 2 + (y & 1)];
                uint32_t c = fmt == 3 ? 0xFF808080u : px16(p, fmt);
                out[y * w + x] = c;
            }
    } else if (fmt == 5 || fmt == 6) {
        uint32_t off = mip ? mip_offset((uint32_t)w, fmt, 0) : 0;
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++) {
                uint32_t i = twiddled((uint32_t)x, (uint32_t)y, (uint32_t)w, (uint32_t)h), v;
                if (fmt == 5)
                    v = (d[off + i / 2] >> ((i & 1) * 4)) & 15;
                else
                    v = d[off + i];
                out[y * w + x] = palette(palbase + v);
            }
    } else if (fmt == 3) { /* YUV422: pairs of texels share U and V */
        int bw = scan && stride_w ? stride_w : w;
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x += 2) {
                uint16_t p0, p1;
                if (scan) {
                    p0 = ((const uint16_t *)d)[y * bw + x];
                    p1 = ((const uint16_t *)d)[y * bw + x + 1];
                } else { /* twiddled: the pair is the two texels of a 2x2 block's column */
                    p0 = ((const uint16_t *)d)[twiddled((uint32_t)x, (uint32_t)y, (uint32_t)w, (uint32_t)h)];
                    p1 = ((const uint16_t *)d)[twiddled((uint32_t)x + 1, (uint32_t)y, (uint32_t)w, (uint32_t)h)];
                }
                int u = p0 & 255, y0 = p0 >> 8, v = p1 & 255, y1 = p1 >> 8;
                out[y * w + x] = yuv(y0, u, v);
                out[y * w + x + 1] = yuv(y1, u, v);
            }
    } else {
        uint32_t off = mip && !scan ? mip_offset((uint32_t)w, fmt, 0) : 0;
        int bw = scan && stride_w ? stride_w : w;
        const uint16_t *p = (const uint16_t *)(d + off);
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                out[y * w + x] = px16(scan ? p[y * bw + x] : p[twiddled((uint32_t)x, (uint32_t)y, (uint32_t)w, (uint32_t)h)], fmt);
    }
    for (int i = 0; i < w * h && !alpha; i++)
        alpha = (out[i] >> 24) != 255;
    *has_alpha = alpha;
}

/* the GL texture for a polygon's TCW and TSP; 0 for none */
static int dump_textures;

static struct tex *texture(uint32_t tcw, uint32_t tsp)
{
    int w = 8 << ((tsp >> 3) & 7), h = 8 << (tsp & 7);
    int fmt = (tcw >> 27) & 7;
    int scan = fmt < 5 && ((tcw >> 26) & 1);
    int stride_w = scan && ((tcw >> 25) & 1) ? (int)(REG(PVR + 0x0E4) & 31) * 32 : 0;
    uint32_t extra = (fmt == 5 || fmt == 6) ? (REG(PVR + 0x108) & 3) | 4 : 0;
    extra |= (uint32_t)stride_w << 8;
    uint32_t key_tcw = fmt == 5 || fmt == 6 ? tcw : tcw & ~(0x3Fu << 21 & (scan ? 0 : 0)); /* palette selector stays in */
    uint32_t hkey = (key_tcw * 2654435761u) ^ ((tsp & 0x3F) * 40503u) ^ extra;
    struct tex *t = 0, *free_slot = 0;
    for (int probe = 0; probe < 64; probe++) {
        struct tex *c = &texs[(hkey + (uint32_t)probe) % TEX_SLOTS];
        if (c->used && c->tcw == key_tcw && c->tsp_size == (tsp & 0x3F) && c->extra == extra) {
            t = c;
            break;
        }
        if (!c->used && !free_slot)
            free_slot = c;
    }
    if (!t) {
        if (!free_slot) /* full around here: take the first one */
            free_slot = &texs[hkey % TEX_SLOTS];
        t = free_slot;
        t->used = 1;
        t->tcw = key_tcw;
        t->tsp_size = tsp & 0x3F;
        t->extra = extra;
        t->hash = 0;
        t->checked = 0;
    }
    static uint32_t dumped_render;
    if (dump_textures && t->checked != render_no) {      /* F12: this render's textures to texdump/ */
        if (dumped_render != render_no) {
            dumped_render = render_no;
            mkdir("texdump", 0755);
        }
        static uint32_t dpx[1024 * 1024];
        int a;
        if (w <= 1024 && h <= 1024) {
            decode(tcw, w, h, stride_w, dpx, &a);
            char name[256];
            snprintf(name, sizeof name, "texdump/%08X_%02X_%dx%d.ppm", tcw, tsp & 0x3F, w, h);
            FILE *f = fopen(name, "wb");
            if (f) {
                fprintf(f, "P6\n%d %d\n255\n", w, h);
                for (int i = 0; i < w * h; i++)
                    fwrite(&dpx[i], 1, 3, f);
                fclose(f);
            }
        }
    }
    if (t->checked == render_no && t->gl)
        return t;
    t->checked = render_no;
    uint32_t start, bytes;
    tex_span(tcw, w, h, stride_w, &start, &bytes);
    uint64_t hsh = fnv(VRAM64 + start, bytes, 0xCBF29CE484222325ull);
    if (fmt == 5 || fmt == 6) {
        uint32_t palbase = fmt == 5 ? ((tcw >> 21) & 63) * 16 : ((tcw >> 25) & 3) * 256;
        hsh = fnv((const uint8_t *)(uintptr_t)(0xA05F9000u + palbase * 4), (fmt == 5 ? 16 : 256) * 4, hsh);
    }
    if (t->gl && hsh == t->hash)
        return t;
    t->hash = hsh;
    static uint32_t px[1024 * 1024];
    if (w > 1024 || h > 1024)
        return 0;
    decode(tcw, w, h, stride_w, px, &t->alpha);
    t->w = w;
    t->h = h;
    if (!t->gl)
        glGenTextures(1, &t->gl);
    glBindTexture(GL_TEXTURE_2D, t->gl);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
    if (getenv("PORT_DUMP_TEX")) {
        char name[512];
        snprintf(name, sizeof name, "%s/t_%08X_%02X_%dx%d.ppm", getenv("PORT_DUMP_TEX"), tcw, tsp & 0x3F, w, h);
        FILE *f = fopen(name, "wb");
        if (f) {
            fprintf(f, "P6\n%d %d\n255\n", w, h);
            for (int i = 0; i < w * h; i++)
                fwrite(&px[i], 1, 3, f);
            fclose(f);
        }
    }
    return t;
}

/* --- the TA's output: triangles per TA buffer ----------------------------------------------------------------------- */

/* a polygon as recorded: its render state (the four control words) and its vertices; textures are looked up at the
   render, when texture memory holds what the frame uses */
struct poly {
    uint32_t pcw, isp, tsp, tcw;
    unsigned first, count; /* triangles' vertices in the buffer's array */
    int list;
};

struct tabuf {
    uint32_t key;          /* TA_ISP_BASE at its list init */
    struct rvert *v;
    unsigned nv, capv;
    struct poly *p;
    unsigned np, capp;
    unsigned long frame;
};
#define TABUFS 4
static struct tabuf bufs[TABUFS];
static struct tabuf *cur;
static unsigned long ta_inits;

static void buf_add_vert(struct tabuf *b, const struct rvert *v)
{
    if (b->nv == b->capv) {
        b->capv = b->capv ? b->capv * 2 : 65536;
        b->v = realloc(b->v, sizeof *b->v * b->capv);
    }
    b->v[b->nv++] = *v;
}

/* the TA's state between parameters */
static struct {
    int list;               /* the list being filled: 0 opaque, 1 opaque modifier volume, 2 translucent, 3 translucent
                               modifier volume, 4 punch-through; -1 none since the last end of list */
    uint32_t pcw, isp, tsp, tcw;
    float face[4], face_ofs[4]; /* a r g b */
    int vtype;              /* the vertex parameter kind for the current polygon */
    int sprite;
    uint32_t sprite_base, sprite_ofs;
    struct rvert strip[2];
    int nstrip, strip_k;
    uint32_t group;
    int poly_open;          /* a poly record is open in cur */
    uint8_t half[32];       /* the first half of a 64-byte parameter */
    int have_half;
} ta = {.list = -1};

static uint32_t group_counter;

static void open_poly(void)
{
    if (!cur)
        return;
    struct tabuf *b = cur;
    if (ta.poly_open && b->np && b->p[b->np - 1].count == 0) { /* an empty record: reuse it */
        b->np--;
    }
    if (b->np == b->capp) {
        b->capp = b->capp ? b->capp * 2 : 8192;
        b->p = realloc(b->p, sizeof *b->p * b->capp);
    }
    struct poly *p = &b->p[b->np++];
    p->pcw = ta.pcw;
    p->isp = ta.isp;
    p->tsp = ta.tsp;
    p->tcw = ta.tcw;
    p->first = b->nv;
    p->count = 0;
    p->list = ta.list;
    ta.poly_open = 1;
}

static void add_tri(const struct rvert *a, const struct rvert *b, const struct rvert *c)
{
    if (!cur || !ta.poly_open)
        return;
    /* the PowerVR's culling: 2 drops a negative screen area, 3 a positive one (a vertex behind the eye: left to the clip) */
    int cull = (ta.isp >> 27) & 3;
    if (cull >= 2 && a->z > 0 && b->z > 0 && c->z > 0) {
        float det = (b->x - a->x) * (c->y - a->y) - (c->x - a->x) * (b->y - a->y);
        if (cull == 2 ? det < 0 : det > 0)
            return;
    }
    buf_add_vert(cur, a);
    buf_add_vert(cur, b);
    buf_add_vert(cur, c);
    cur->p[cur->np - 1].count += 3;
}

static float f32(const uint32_t *w, int i)
{
    float f;
    memcpy(&f, &w[i], 4);
    return f;
}

/* W from the vertex's 1/W: the PowerVR compares 1/W, any value; W kept positive and finite for the GL side */
static float w_of(float iz)
{
    if (!(iz > 1e-9f))              /* 0, negative, NaN: as far as it gets */
        return 1e9f;
    if (iz > 1e6f)                  /* infinity included: as near as it gets */
        return 1e-6f;
    return 1.0f / iz;
}

static uint32_t fcolour(float a, float r, float g, float b)
{
#define C8(v) ((uint32_t)((v) <= 0 ? 0 : (v) >= 1 ? 255 : (int)((v) * 255.0f + 0.5f)))
    return C8(a) << 24 | C8(r) << 16 | C8(g) << 8 | C8(b);
#undef C8
}

static uint32_t intensity(const float *face, float i)
{
    return fcolour(face[0], face[1] * i, face[2] * i, face[3] * i);
}

static void uv16(uint32_t w, float *u, float *v)
{
    uint32_t hu = w & 0xFFFF0000u, hv = w << 16;
    memcpy(u, &hu, 4);
    memcpy(v, &hv, 4);
}

/* the vertex kind of a polygon's header (the PCW's object control bits) */
static int vertex_kind(uint32_t pcw)
{
    int col = (pcw >> 4) & 3, tex = (pcw >> 3) & 1, vol = (pcw >> 6) & 1, u16 = pcw & 1;
    if (!vol) {
        if (!tex)
            return col == 0 ? 0 : col == 1 ? 1 : 2;
        return col == 0 ? (u16 ? 4 : 3) : col == 1 ? (u16 ? 6 : 5) : (u16 ? 8 : 7);
    }
    if (!tex)
        return col == 0 ? 9 : 10;
    return col == 0 ? (u16 ? 12 : 11) : (u16 ? 14 : 13);
}

static int vertex_size(int kind)
{
    return kind == 5 || kind == 6 || kind == 11 || kind == 12 || kind == 13 || kind == 14 ? 64 : 32;
}

static void vertex(const uint32_t *w)
{
    struct rvert v;
    memset(&v, 0, sizeof v);
    v.x = f32(w, 1);
    v.y = f32(w, 2);
    float iz = f32(w, 3);
    v.z = w_of(iz);
    switch (ta.vtype) {
    case 0: v.argb = w[6]; break;
    case 1: v.argb = fcolour(f32(w, 4), f32(w, 5), f32(w, 6), f32(w, 7)); break;
    case 2: v.argb = intensity(ta.face, f32(w, 6)); break;
    case 3: v.u = f32(w, 4); v.v = f32(w, 5); v.argb = w[6]; v.offset = w[7]; break;
    case 4: uv16(w[4], &v.u, &v.v); v.argb = w[6]; v.offset = w[7]; break;
    case 5:
        v.u = f32(w, 4); v.v = f32(w, 5);
        v.argb = fcolour(f32(w, 8), f32(w, 9), f32(w, 10), f32(w, 11));
        v.offset = fcolour(f32(w, 12), f32(w, 13), f32(w, 14), f32(w, 15));
        break;
    case 6:
        uv16(w[4], &v.u, &v.v);
        v.argb = fcolour(f32(w, 8), f32(w, 9), f32(w, 10), f32(w, 11));
        v.offset = fcolour(f32(w, 12), f32(w, 13), f32(w, 14), f32(w, 15));
        break;
    case 7: v.u = f32(w, 4); v.v = f32(w, 5); v.argb = intensity(ta.face, f32(w, 6)); v.offset = intensity(ta.face_ofs, f32(w, 7)); break;
    case 8: uv16(w[4], &v.u, &v.v); v.argb = intensity(ta.face, f32(w, 6)); v.offset = intensity(ta.face_ofs, f32(w, 7)); break;
    case 9: v.argb = w[4]; break;
    case 10: v.argb = intensity(ta.face, f32(w, 4)); break;
    case 11: v.u = f32(w, 4); v.v = f32(w, 5); v.argb = w[6]; v.offset = w[7]; break;
    case 12: uv16(w[4], &v.u, &v.v); v.argb = w[6]; v.offset = w[7]; break;
    case 13: v.u = f32(w, 4); v.v = f32(w, 5); v.argb = intensity(ta.face, f32(w, 6)); v.offset = intensity(ta.face_ofs, f32(w, 7)); break;
    case 14: uv16(w[4], &v.u, &v.v); v.argb = intensity(ta.face, f32(w, 6)); v.offset = intensity(ta.face_ofs, f32(w, 7)); break;
    }
    if (!((ta.pcw >> 2) & 1))
        v.offset = 0;                                  /* no offset colour in this polygon */
    if (!((ta.tsp >> 20) & 1))
        v.argb |= 0xFF000000u;                         /* "use alpha" off: the base colour's alpha counts as 1 */
    v.group = ta.group;
    if (ta.nstrip == 0)
        ta.strip_k = 0;
    if (ta.nstrip < 2) {
        ta.strip[ta.nstrip++] = v;
    } else {
        if (ta.strip_k & 1)
            add_tri(&ta.strip[1], &ta.strip[0], &v);
        else
            add_tri(&ta.strip[0], &ta.strip[1], &v);
        ta.strip_k++;
        ta.strip[0] = ta.strip[1];
        ta.strip[1] = v;
    }
    if (w[0] & 0x10000000u) {                          /* end of strip */
        ta.nstrip = 0;
        ta.group = ++group_counter;
    }
}

/* a sprite: four corners A B C D, D's depth and texture coordinates from the plane through A, B, C */
static void sprite_vertex(const uint32_t *w)
{
    struct rvert q[4];
    memset(q, 0, sizeof q);
    float ax = f32(w, 1), ay = f32(w, 2), az = f32(w, 3), bx = f32(w, 4), by = f32(w, 5), bz = f32(w, 6);
    float cx = f32(w, 7), cy = f32(w, 8), cz = f32(w, 9), dx = f32(w, 10), dy = f32(w, 11);
    float uv[4][2] = {{0}};
    if ((ta.pcw >> 3) & 1) {
        uv16(w[13], &uv[0][0], &uv[0][1]);
        uv16(w[14], &uv[1][0], &uv[1][1]);
        uv16(w[15], &uv[2][0], &uv[2][1]);
    }
    /* the plane z = a x + b y + c through A, B, C, for D's 1/W; and the same for u and v */
    float det = (bx - ax) * (cy - ay) - (cx - ax) * (by - ay);
    float dz = cz, du = uv[2][0], dv = uv[2][1];
    if (det != 0) {
        float k1 = ((dx - ax) * (cy - ay) - (cx - ax) * (dy - ay)) / det;
        float k2 = ((bx - ax) * (dy - ay) - (dx - ax) * (by - ay)) / det;
        dz = az + k1 * (bz - az) + k2 * (cz - az);
        du = uv[0][0] + k1 * (uv[1][0] - uv[0][0]) + k2 * (uv[2][0] - uv[0][0]);
        dv = uv[0][1] + k1 * (uv[1][1] - uv[0][1]) + k2 * (uv[2][1] - uv[0][1]);
    }
    float xs[4] = {ax, bx, cx, dx}, ys[4] = {ay, by, cy, dy}, zs[4] = {az, bz, cz, dz};
    uv[3][0] = du;
    uv[3][1] = dv;
    uint32_t gid = ++group_counter;
    for (int i = 0; i < 4; i++) {
        q[i].x = xs[i];
        q[i].y = ys[i];
        q[i].z = w_of(zs[i]);
        q[i].u = uv[i][0];
        q[i].v = uv[i][1];
        q[i].argb = ta.sprite_base | (((ta.tsp >> 20) & 1) ? 0 : 0xFF000000u);
        q[i].offset = (ta.pcw >> 2) & 1 ? ta.sprite_ofs : 0;
        q[i].group = gid;
    }
    add_tri(&q[0], &q[1], &q[2]);
    add_tri(&q[0], &q[2], &q[3]);
}

static void end_of_list(void)
{
    static const int bit[5] = {7, 8, 9, 10, 21};      /* SB_ISTNRM: opaque, opaque modifier, translucent, its modifier,
                                                         punch-through list done */
    if (ta.list >= 0 && ta.list < 5)
        hw_raise_later(bit[ta.list], 10);
    ta.list = -1;
    ta.nstrip = 0;
    ta.poly_open = 0;
}

/* PORT_DEBUG_TA: a frame that brought the TA under 1 KB (a stall's frames: almost nothing drawn) prints its control
   parameters at the next list init: each one's PCW, the list the TA had open when it came, and whether an end of list
   raised its interrupt */
static int ta_debug = -1;
static struct { uint32_t pcw; int list, raised; } ta_log[32];
static int ta_nlog;
static uint32_t ta_frame_bytes;

static void ta_log_param(uint32_t pcw, int list, int raised)
{
    if (ta_nlog < 32) {
        ta_log[ta_nlog].pcw = pcw;
        ta_log[ta_nlog].list = list;
        ta_log[ta_nlog].raised = raised;
        ta_nlog++;
    }
}

/* one parameter of 32 or 64 bytes */
static void parameter(const uint32_t *w)
{
    uint32_t pcw = w[0];
    int type = (int)(pcw >> 29);
    if (ta_debug > 0 && (type == 0 || type == 1 || type == 2 || type == 4 || type == 5))
        ta_log_param(pcw, ta.list, type == 0 && ta.list >= 0 && ta.list < 5);
    switch (type) {
    case 0:                                           /* end of list */
        end_of_list();
        return;
    case 1:                                           /* user tile clip */
    case 2:                                           /* object list set */
        return;
    case 4:                                           /* polygon or modifier volume */
    case 5:                                           /* sprite */
        if (ta.list < 0)
            ta.list = (int)((pcw >> 24) & 7);
        ta.nstrip = 0;
        if (ta.list == 1 || ta.list == 3) {           /* modifier volume: no picture of its own */
            ta.poly_open = 0;
            return;
        }
        ta.pcw = pcw;
        ta.isp = w[1];
        ta.tsp = w[2];
        ta.tcw = w[3];
        ta.sprite = type == 5;
        ta.group = ++group_counter;
        if (ta.sprite) {
            ta.sprite_base = w[4];
            ta.sprite_ofs = w[5];
        } else {
            int col = (pcw >> 4) & 3, vol = (pcw >> 6) & 1, ofs = (pcw >> 2) & 1;
            if (!vol && col == 2 && !ofs) {           /* intensity, face colour */
                for (int i = 0; i < 4; i++)
                    ta.face[i] = f32(w, 4 + i);
            } else if (!vol && col == 2) {            /* intensity, face colour and face offset colour */
                for (int i = 0; i < 4; i++) {
                    ta.face[i] = f32(w, 8 + i);
                    ta.face_ofs[i] = f32(w, 12 + i);
                }
            } else if (vol && col == 2) {
                for (int i = 0; i < 4; i++)
                    ta.face[i] = f32(w, 8 + i);
            }
            ta.vtype = vertex_kind(pcw);
        }
        open_poly();
        return;
    case 7:                                           /* vertex */
        if (ta.list == 1 || ta.list == 3 || !ta.poly_open)
            return;
        if (ta.sprite)
            sprite_vertex(w);
        else
            vertex(w);
        return;
    default:
        return;
    }
}

/* how many bytes the parameter starting with these 32 takes */
static int parameter_size(const uint32_t *w)
{
    uint32_t pcw = w[0];
    int type = (int)(pcw >> 29);
    int list = ta.list >= 0 ? ta.list : (int)((pcw >> 24) & 7);
    if (type == 4) {
        if (list == 1 || list == 3)
            return 32;
        int col = (pcw >> 4) & 3, vol = (pcw >> 6) & 1, ofs = (pcw >> 2) & 1;
        return (!vol && col == 2 && ofs) || (vol && col == 2) ? 64 : 32;
    }
    if (type == 7) {
        if (list == 1 || list == 3 || ta.sprite)
            return 64;
        return vertex_size(ta.vtype);
    }
    return 32;
}

static unsigned long ta_bytes;

/* TA_ITP_CURRENT (0x138): where the TA writes the next polygon parameters. A list init sets it to TA_ISP_BASE and the
   frame's parameters move it up; here by the bytes the TA takes in, which is at least what the hardware writes. Kamui
   reads it (kmiFinalizeRender, when its flags' bit 0 is set) to put the background plane right after
   the frame's parameters and to point the render at it; it read 0 here, and every frame's background went to the start
   of video memory. Past TA_ISP_LIMIT the TA reports a parameter overflow (SB_ISTERR bit 2), once a frame, which Kamui's
   kmiErrorISR04 handles */
static int ta_overflow;

static void ta_param_advance(uint32_t bytes)
{
    uint32_t base = REG(PVR + 0x124) & VRAM_MASK, limit = REG(PVR + 0x130) & VRAM_MASK;
    uint32_t cur = (REG(PVR + 0x138) & VRAM_MASK) + bytes;
    REG(PVR + 0x138) = cur;
    if (!ta_overflow && limit > base && cur > limit) {
        ta_overflow = 1;
        hw_raise_err(2);
    }
}

void pvr_ta_write(const void *data, uint32_t bytes)
{
    unsigned game = port_host_fp_enter();
    const uint8_t *p = data;
    ta_bytes += bytes;
    ta_frame_bytes += bytes;
    ta_param_advance(bytes);
    for (uint32_t i = 0; i + 32 <= bytes; i += 32) {
        uint32_t w[16];
        if (ta.have_half) {
            memcpy(w, ta.half, 32);
            memcpy(w + 8, p + i, 32);
            ta.have_half = 0;
            parameter(w);
            continue;
        }
        memcpy(w, p + i, 32);
        if (parameter_size(w) == 64) {
            memcpy(ta.half, p + i, 32);
            ta.have_half = 1;
            continue;
        }
        parameter(w);
    }
    port_host_fp_leave(game);
}

/* TA_LIST_INIT: a new frame's lists, into the buffer TA_ISP_BASE names */
void pvr_ta_list_init(void)
{
    uint32_t key = REG(PVR + 0x124) & VRAM_MASK;   /* TA_ISP_BASE: where the TA puts this frame's polygons */
    struct tabuf *b = 0;
    for (int i = 0; i < TABUFS; i++)
        if (bufs[i].key == key && bufs[i].frame) {
            b = &bufs[i];
            break;
        }
    if (!b) { /* the least recently used */
        b = &bufs[0];
        for (int i = 1; i < TABUFS; i++)
            if (bufs[i].frame < b->frame)
                b = &bufs[i];
    }
    b->key = key;
    b->nv = b->np = 0;
    b->frame = ++ta_inits;
    cur = b;
    memset(&ta, 0, sizeof ta);
    ta.list = -1;
    REG(PVR + 0x138) = key;                  /* TA_ITP_CURRENT: the frame's parameters start at TA_ISP_BASE */
    ta_overflow = 0;
    if (ta_debug < 0)
        ta_debug = getenv("PORT_DEBUG_TA") != 0;
    if (ta_debug > 0 && ta_frame_bytes < 1024) {
        fprintf(stderr, PORT_NAME ": ta: frame of %u bytes:", ta_frame_bytes);
        for (int i = 0; i < ta_nlog; i++)
            fprintf(stderr, " %08X(list %d%s)", ta_log[i].pcw, ta_log[i].list, ta_log[i].raised ? ", end raised" : "");
        fprintf(stderr, "\n");
    }
    ta_nlog = 0;
    ta_frame_bytes = 0;
    if (pvr_debug)
        fprintf(stderr, "pvr: list init, buffer %06X\n", key);
}

void pvr_ta_list_cont(void)
{
    ta.list = -1;
    ta.nstrip = 0;
    ta.poly_open = 0;
}

/* --- rendering ----------------------------------------------------------------------------------------------------- */

void port_render_frame(int w, int h); /* render.c */
void render_set_background(float r, float g, float b);
extern int port_no_window;

/* where the last render into a texture went: a sprite drawn with that texture shows the game's own (wider) picture */
static uint32_t rtt_addr = 0xFFFFFFFFu;

static void mode_of(const struct poly *p, struct rdraw *d)
{
    memset(d, 0, sizeof *d);
    uint32_t isp = p->isp, tsp = p->tsp, pcw = p->pcw;
    d->blend = p->list == 2 ? 2 : p->list == 4 ? 1 : 0;
    d->src = (uint8_t)((tsp >> 29) & 7);
    d->dst = (uint8_t)((tsp >> 26) & 7);
    if (d->blend != 2) {
        d->src = 1;
        d->dst = 0;
    }
    d->depth_func = (uint8_t)((isp >> 29) & 7);
    d->depth_write = !((isp >> 26) & 1);
    if (d->blend == 2) {                       /* the translucent list is sorted: its depth test is "greater or equal" */
        d->depth_func = 6;
        d->depth_write = 0;
    }
    d->clamp_u = (uint8_t)((tsp >> 16) & 1);
    d->clamp_v = (uint8_t)((tsp >> 15) & 1);
    d->flip_u = (uint8_t)((tsp >> 18) & 1);
    d->flip_v = (uint8_t)((tsp >> 17) & 1);
    d->filter = (uint8_t)(((tsp >> 13) & 3) != 0);
    d->shade = (uint8_t)((tsp >> 6) & 3);
    d->ignore_tex_alpha = (uint8_t)((tsp >> 19) & 1);
    /* the 2D the game draws (HUD, menus, their text): its control words leave the group bit (23) clear; the 3D models'
       strips set it. Seen on every polygon of three race frames and a pause screen: the 3D, camera-facing models included,
       all with it; the HUD (PowerVR sprites) and the pause text (polygons) without */
    d->flat2d = !((pcw >> 23) & 1);
    d->fill = !((pcw >> 3) & 1) || (((tsp >> 3) & 7) <= 2 && (tsp & 7) <= 2);
    d->texture = 0;
    if ((pcw >> 3) & 1) {
        struct tex *t = texture(p->tcw, tsp);
        if (t)
            d->texture = t->gl;
        d->textured = 1;
        d->no_squeeze = ((p->tcw & 0x1FFFFFu) << 3) == rtt_addr;
    }
}

static unsigned long renders;

/* the background plane: ISP_BACKGND_T names a polygon in the object area (32-bit view, PARAM_BASE + tag * 4): three
   control words, then three vertices; the first one's colour clears the frame */
static void background(void)
{
    uint32_t tag = REG(PVR + 0x08C), param = REG(PVR + 0x020) & 0xF00000u;
    uint32_t addr = (param + ((tag >> 3) & 0x1FFFFF) * 4) & VRAM_MASK;
    uint32_t skip = (tag >> 24) & 7;
    const uint32_t *w = (const uint32_t *)(VRAM32 + addr);
    uint32_t isp = w[0];
    int textured = (isp >> 25) & 1, uvs = (isp >> 24) & 1 ? 1 : 2;
    (void)skip;
    uint32_t col = w[3 + 3 + (textured ? uvs : 0)];
    render_set_background(((col >> 16) & 255) / 255.0f, ((col >> 8) & 255) / 255.0f, (col & 255) / 255.0f);
}

int port_dump_polys;
void port_render_to(uint32_t *out, int w, int h);

/* the frame's records drawn into texture memory at addr: the area from FB_X_CLIP / FB_Y_CLIP (the last pixel, inclusive), the
   line stride from FB_W_LINESTRIDE (8-byte units), the pixel format from FB_W_CTRL (0 RGB555, 1 RGB565, 2 ARGB4444,
   3 ARGB1555, 4 RGB888, 5 KRGB0888, 6 ARGB8888). Not from the region array's tiles: the array can hold entries that are
   not the target's, and a size counted from them is wrong */
static void render_to_texture(uint32_t addr)
{
    rtt_addr = addr & VRAM_MASK;
    uint32_t xc = REG(PVR + 0x068), yc = REG(PVR + 0x06C), ctrl = REG(PVR + 0x048);
    int x0 = (int)(xc & 0x7FF), x1 = (int)((xc >> 16) & 0x7FF), y0 = (int)(yc & 0x3FF), y1 = (int)((yc >> 16) & 0x3FF);
    int w = x1 + 1, h = y1 + 1;
    uint32_t stride = (REG(PVR + 0x04C) & 0x1FF) * 8;
    int fmt = (int)(ctrl & 7);
    if (w <= 0 || h <= 0 || w > 1024 || h > 1024)
        return;
    static uint32_t px[1024 * 1024];
    port_render_to(px, w, h);
    int bpp = fmt <= 3 ? 2 : fmt == 4 ? 3 : 4;
    if (!stride)
        stride = (uint32_t)(w * bpp);
    if (pvr_debug)
        fprintf(stderr, "pvr: render to texture %06X, %dx%d, format %d, stride %u\n", addr, w, h, fmt, stride);
    for (int y = y0; y < h; y++)
        for (int x = x0; x < w; x++) {
            uint32_t c = px[y * w + x];
            uint32_t r = c & 255, g = (c >> 8) & 255, bl = (c >> 16) & 255, a = c >> 24;
            uint32_t at = (addr + (uint32_t)y * stride + (uint32_t)x * (uint32_t)bpp) & VRAM_MASK;
            uint32_t v;
            switch (fmt) {
            case 0: v = (r >> 3) << 10 | (g >> 3) << 5 | bl >> 3; break;
            case 1: v = (r >> 3) << 11 | (g >> 2) << 5 | bl >> 3; break;
            case 2: v = (a >> 4) << 12 | (r >> 4) << 8 | (g >> 4) << 4 | bl >> 4; break;
            case 3: v = (a >= 128 ? 0x8000u : 0) | (r >> 3) << 10 | (g >> 3) << 5 | bl >> 3; break;
            default: v = a << 24 | r << 16 | g << 8 | bl; break;
            }
            if (bpp == 2) {
                VRAM64[at] = (uint8_t)v;
                VRAM64[(at + 1) & VRAM_MASK] = (uint8_t)(v >> 8);
            } else
                for (int k = 0; k < bpp; k++)
                    VRAM64[(at + (uint32_t)k) & VRAM_MASK] = (uint8_t)(v >> (8 * k));
        }
}

void pvr_start_render(void)
{
    /* PARAM_BASE: the block the render reads. Kamui puts the TA's polygons (TA_ISP_BASE) in it at an offset (0x10B100
       above 0x400000): the render takes the buffer whose base is the nearest at or above it */
    uint32_t key = REG(PVR + 0x020) & VRAM_MASK;
    struct tabuf *b = 0;
    for (int i = 0; i < TABUFS; i++)
        if (bufs[i].frame && bufs[i].key >= key && (!b || bufs[i].key - key < b->key - key ||
                                                    (bufs[i].key == b->key && bufs[i].frame > b->frame)))
            b = &bufs[i];
    if (!b)
        b = cur;
    renders++;
    render_no++;
    if (pvr_debug && renders % 60 == 1)
        fprintf(stderr, "pvr: render %lu: buffer %06X, %u polygons, %u vertices, TA %lu bytes\n", renders, key,
                b ? b->np : 0, b ? b->nv : 0, ta_bytes);
    unsigned game = port_host_fp_enter();
    /* where the render goes: a framebuffer the display shows (FB_R_SOF1 named it), or texture memory (a render to a
       texture: FB_W_SOF1 elsewhere) */
    uint32_t wsof = REG(PVR + 0x060) & VRAM_MASK;
    int to_texture = (REG(PVR + 0x060) & 0x1000000u) != 0;   /* Kamui's render to a texture: the write address in the
                                                                texture area (kmyStartRenderTexture) */
    if (!port_headless && b) {
        background();
        /* the polygons in their lists' order: opaque, punch-through, translucent */
        static long dump_at = -2;
        if (dump_at == -2)
            dump_at = getenv("PORT_DEBUG_POLYS") ? atol(getenv("PORT_DEBUG_POLYS")) : -1;
        FILE *dump = 0;
        dump_textures = port_dump_polys;
        if (port_dump_polys || (long)renders == dump_at) {
            dump = port_dump_polys ? fopen("polys.txt", "w") : stderr;
            port_dump_polys = 0;
        }
        for (unsigned i = 0; i < b->np; i++) {
            struct poly *p = &b->p[i];
            if (dump) {
                struct rvert *v = &b->v[p->first];
                fprintf(dump, "poly %u list %d pcw %08X isp %08X tsp %08X tcw %08X n %u", i, p->list, p->pcw, p->isp, p->tsp,
                        p->tcw, p->count);
                for (unsigned k = 0; k < p->count && k < 4; k++)
                    fprintf(dump, "  (%.1f %.1f w%.3g %08X uv %.2f %.2f)", v[k].x, v[k].y, v[k].z, v[k].argb, v[k].u, v[k].v);
                fprintf(dump, "\n");
            }
            if (!p->count)
                continue;
            struct rdraw d;
            mode_of(p, &d);
            render_tris(&b->v[p->first], p->count, &d);
        }
        if (dump && dump != stderr)
            fclose(dump);
        dump_textures = 0;
    }
    if (to_texture && !port_headless && b)
        render_to_texture(wsof);
    port_host_fp_leave(game);
    if (!to_texture)
        port_frame_end();                   /* shows the picture, reads the controller */
    hw_raise_later(2, 100);                 /* render done: TSP, ISP, video */
    hw_raise_later(1, 100);
    hw_raise_later(0, 100);
}

void port_pvr_init(void)
{
    pvr_debug = getenv("PORT_DEBUG_PVR") != 0;
}
