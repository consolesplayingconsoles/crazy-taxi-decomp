#include <math.h>
#include <stdlib.h>
#include "port.h"
#include "game.h"
/* nlib.c: host C for code of the NAOMI library (0x0C0739C0-0x0C089F26) the game reaches and the decomp lists no
   function for, or has no C for. */
#include <stdint.h>
#include <stdio.h>

#define U32(a) (*(volatile uint32_t *)(uintptr_t)(a))
#define U8(a) (*(volatile uint8_t *)(uintptr_t)(a))

/* nlSetIntrFunction's setters for events 0-2 are functions of their own in Crazy Taxi (nlIntrSetEORFunction,
   nlIntrSetEvent900Function, nlIntrSetEvent920Function, with C): no host entry is needed for them here */

/* --- matrices: the current matrix is the SH-4's XMTRX (shim.c's port_xmtrx), column by column -------------------- */

#include <string.h>
#include "play_math.h"

/* nlMultiMatrix(m), nlMultiMatrix8(m): XMTRX = XMTRX . M, each column of M through FTRV (the console's bits) */
static void multi(uint32_t m)
{
    float r[16], c[4];
    for (int i = 0; i < 4; i++) {
        memcpy(c, (const void *)(uintptr_t)(m + 16u * (uint32_t)i), sizeof c);
        sa_ftrv(port_xmtrx, c, r + 4 * i);
    }
    memcpy(port_xmtrx, r, sizeof r);
}
void nl_multi_matrix(uint32_t m) __asm__("nlMultiMatrix");
void nl_multi_matrix(uint32_t m) { multi(m); }
void nl_multi_matrix8(uint32_t m) __asm__("nlMultiMatrix8");
void nl_multi_matrix8(uint32_t m) { multi(m); }

/* nlScale(sx, sy, sz): XMTRX's first three columns scaled */
void nl_scale(float sx, float sy, float sz) __asm__("nlScale");
void nl_scale(float sx, float sy, float sz)
{
    for (int i = 0; i < 4; i++) {
        port_xmtrx[i] *= sx;
        port_xmtrx[4 + i] *= sy;
        port_xmtrx[8 + i] *= sz;
    }
}

/* setBorderColor(rgb): Kamui's border colour, opaque */
int32_t kmSetBorderColor(uint32_t argb);
int32_t set_border_color(uint32_t rgb) __asm__("setBorderColor");
int32_t set_border_color(uint32_t rgb) { return kmSetBorderColor(rgb | 0xFF000000u); }

/* nlSynchFunction(fn): the function Kamui calls while it waits for the V-blank */
int32_t kmSetWaitVsyncCallback(uint32_t fn, uint32_t arg);
int32_t nl_synch_function(uint32_t fn) __asm__("nlSynchFunction");
int32_t nl_synch_function(uint32_t fn)
{
    kmSetWaitVsyncCallback(fn, 0);
    return 0;
}

/* nlObjPutInit: the objects' global ambience from the library's, and the specular table at 0x8C2B3578 (32 rows of 128:
   row r, column c: ((c * K1 / K2 + K3)^2 * 2 - 1)^2 to the power r, rows 0 and 1 the power 1). The constants are the
   ones in its literal pool; the arithmetic runs under the game's rounding */
void nl_obj_put_init(void) __asm__("nlObjPutInit");
void nl_obj_put_init(void)
{
    float k1, k2, k3;
    memcpy(&k1, (const void *)(uintptr_t)0x8C07AE58u, 4);
    memcpy(&k3, (const void *)(uintptr_t)0x8C07AE5Cu, 4);
    memcpy(&k2, (const void *)(uintptr_t)0x8C07AE60u, 4);
    *(volatile float *)(uintptr_t)0x8C2B316Cu = *(volatile float *)(uintptr_t)0x8C14A910u;
    U32(0x8C2B3568u) = 0;
    for (int row = 0; row < 32; row++)
        for (int col = 0; col < 128; col++) {
            volatile float f = (float)col;
            f = f * k1;
            f = f / k2;
            float x = f + k3;
            x = x * x;
            x = x + x;
            x = x - 1.0f;
            x = x * x;
            float v = x;
            if (row >= 2) {
                v = 1.0f;
                for (int k = 0; k < row; k++)
                    v = v * x;
            }
            *(volatile float *)(uintptr_t)(0x8C2B3578u + (uint32_t)row * 512u + (uint32_t)col * 4u) = v;
        }
}

/* --- the models' kernel: nlobjput_sub, nlobjput_sub_trnsl, displaypolygondata_sidx(_trnsl) -------------------------

   The library's assembly (nlobjput_sub at 0x0C07B340, displaypolygondata_sidx at 0x0C081660) takes a model in the NAOMI library's format and sends it to the tile
   accelerator: per mesh a polygon header, per strip its vertices transformed by XMTRX, lit, and near-clipped. This is
   that kernel in C, from its disassembly; its output goes where the assembly's store queues write: the vertex buffer
   of the polygon's list (the list pointers, list_ptr_array below), so it reaches the TA with the rest of the frame.

   The model: a format word (0 or 1) at +0, its meshes from +0x18. A mesh: PCW, ISP, TSP, TCW, the bounding sphere's
   centre and radius (+0x10), the shading row at +0x24 (a byte: >= 0 lit, -1 unlit, -2 bump, -3 vertex colours), the
   ambient at +0x28, the face colour (A R G B) at +0x2C, the offset colour at +0x3C, the size of its strips at +0x4C,
   the strips from +0x50; the next mesh follows (its PCW), 0 ends the model. A strip: flags (bits 0-1 the cull mode,
   0x10 a strip, else triangles), a count, the vertices: 32 bytes (position, normal, u, v; bit 0 of the first word
   set), or 8 bytes referring to an earlier vertex (+4: its offset from the reference's end).

   The lighting context (0x8C2B3150): words 0-2 the eye vector (specular), word 3 the near W (bit 0 a flag), words 4-6
   the light's direction in the model's space, word 7 the ambient's scale. Each vertex's intensity: the mesh's ambient
   (scaled) plus max(0, normal . light). Specular highlights and the saturation, bump and vertex colour variants are
   drawn as plain lit meshes. */

void hw_bus_write(uint32_t a, const void *src, uint32_t n);
int32_t nlPopMatrix(int32_t n);

#define F32(a) (*(volatile float *)(uintptr_t)(a))

struct mvert { float w, xw, yw, u, v, i, o, c[4]; };  /* i, o: base and offset intensity */  /* c: A R G B, for meshes with vertex colours */

static uint32_t list_ptr_array(void) { return U32(GAME_NL_LIST_PTRS); }

/* ta_emit: n bytes onto list `list`'s buffer, advancing its pointer as the kernel's store queues do. The buffers in RAM
   sit one after another (Kamui gives a list it was not asked for no room: its pointer sits at the end of RAM), so a
   buffer ends where the next list's pointer, or RAM, begins: data that would pass that is dropped (the console's
   kernel never gets there; written on, it ran past RAM's end and came round onto the exception vectors at
   0x8C000000). The TA's input (0x10000000, a FIFO) has no end. Each list that fills up says so once */
/* PORT_DEBUG_LISTS: what fills the lists, per frame (port_models_frame_end reports a frame whose translucent list
   passes 700 KB: the models that wrote most, how often, their alpha and callers) */
static int list_debug = -1;
static uint32_t emitted[5];
static struct use { uint32_t obj, bytes, calls; float alpha; void *bt[6]; int nbt; } uses[512];
static int nuses;
static struct use *cur_use;

static void ta_emit(int list, const void *data, uint32_t n)
{
    if (list_debug > 0 && list >= 0 && list < 5) {
        emitted[list] += n;
        if (cur_use && list == 2)
            cur_use->bytes += n;
    }
    uint32_t arr = list_ptr_array();
    if (!arr || list < 0 || list > 4)
        return;
    uint32_t dst = U32(arr + 4u * (uint32_t)list);
    if (!dst)
        return;
    uint32_t phys = dst & 0x1FFFFFFFu;
    if (phys >= 0x0C000000u && phys < 0x10000000u) {     /* RAM, and past its end (the bus mirrors it back to the start) */
        uint32_t limit = 0x0D000000u;
        for (int k = 0; k < 5; k++) {
            uint32_t o = U32(arr + 4u * (uint32_t)k) & 0x1FFFFFFFu;
            if (k != list && o > phys && o < limit)
                limit = o;
        }
        if (phys >= 0x0D000000u || phys + n > limit) {
            static int warned[5];
            if (!warned[list]++)
                fprintf(stderr, PORT_NAME ": list %d's buffer is full at %08X (it ends at %08X): its polygons are dropped\n",
                        list, dst, 0x80000000u | limit);
            return;
        }
    }
    hw_bus_write(dst, data, n);
    U32(arr + 4u * (uint32_t)list) = dst + n;
}

static float fbits(uint32_t v) { float f; memcpy(&f, &v, 4); return f; }
static uint32_t ubits(float f) { uint32_t v; memcpy(&v, &f, 4); return v; }

/* one vertex, projected, as the TA's intensity vertex (kind 7: float u v; kind 2 untextured) */
static void emit_vertex(int list, uint32_t pcw, const struct mvert *m, int end)
{
    uint32_t w[16] = {0};
    float iw = 1.0f / m->w;
    w[0] = 0xE0000000u | (end ? 0x10000000u : 0);
    w[1] = ubits(m->xw * iw);
    w[2] = ubits(m->yw * iw);
    w[3] = ubits(iw);
    if (((pcw >> 4) & 3) == 1) {               /* float colours: kind 5 (textured, 64 bytes) or kind 1 */
        if (pcw & 8) {
            w[4] = ubits(m->u);
            w[5] = ubits(m->v);
            for (int k = 0; k < 4; k++)
                w[8 + k] = ubits(m->c[k]);
            ta_emit(list, w, 64);
        } else {
            for (int k = 0; k < 4; k++)
                w[4 + k] = ubits(m->c[k]);
            ta_emit(list, w, 32);
        }
        return;
    }
    if (pcw & 8) {
        w[4] = ubits(m->u);
        w[5] = ubits(m->v);
    }
    w[6] = ubits(m->i);
    w[7] = ubits(m->o);
    ta_emit(list, w, 32);
}

/* a triangle, clipped against W = near: none, or a fan of one or two triangles */
static void emit_tri(int list, uint32_t pcw, const struct mvert *a, const struct mvert *b, const struct mvert *c, float near)
{
    const struct mvert *in[3] = {a, b, c};
    struct mvert out[4];
    int n = 0;
    for (int k = 0; k < 3; k++) {
        const struct mvert *p = in[k], *q = in[(k + 1) % 3];
        int pin = p->w >= near, qin = q->w >= near;
        if (pin)
            out[n++] = *p;
        if (pin != qin) {
            float t = (near - p->w) / (q->w - p->w);
            struct mvert r;
            r.w = near;
            r.xw = p->xw + t * (q->xw - p->xw);
            r.yw = p->yw + t * (q->yw - p->yw);
            r.u = p->u + t * (q->u - p->u);
            r.v = p->v + t * (q->v - p->v);
            r.i = p->i + t * (q->i - p->i);
            r.o = p->o + t * (q->o - p->o);
            for (int c = 0; c < 4; c++)
                r.c[c] = p->c[c] + t * (q->c[c] - p->c[c]);
            out[n++] = r;
        }
    }
    if (n < 3)
        return;
    /* a strip of n vertices in fan order: 0 1 (n-1) 2 for a quad */
    if (n == 3) {
        emit_vertex(list, pcw, &out[0], 0);
        emit_vertex(list, pcw, &out[1], 0);
        emit_vertex(list, pcw, &out[2], 1);
    } else {
        emit_vertex(list, pcw, &out[0], 0);
        emit_vertex(list, pcw, &out[1], 0);
        emit_vertex(list, pcw, &out[3], 0);
        emit_vertex(list, pcw, &out[2], 1);
    }
}

/* F12 (platform.c): the next frame's model draws, with the matrix and the game's callers, to models.txt */
int port_dump_models;
static FILE *model_dump;

static int use_cmp(const void *a, const void *b)
{
    const struct use *x = a, *y = b;
    return x->bytes < y->bytes ? 1 : x->bytes > y->bytes ? -1 : 0;
}

void port_models_frame_end(void)
{
    if (list_debug > 0) {
        extern unsigned long port_frames;
        uint32_t arr = U32(GAME_NL_LIST_PTRS);
        uint32_t l2 = arr ? U32(arr + 8) : 0;
        static uint32_t base2;
        if (!base2 || (l2 && l2 < base2))
            base2 = l2;
        uint32_t used = l2 - base2;
        if (l2 && used > 700u * 1024u) {
            fprintf(stderr, PORT_NAME ": frame %lu: the translucent list holds %u KB (%u KB of it from models); its biggest writers:\n",
                    port_frames, used >> 10, emitted[2] >> 10);
            qsort(uses, (size_t)nuses, sizeof uses[0], use_cmp);
            for (int i = 0; i < nuses && i < 8; i++) {
                fprintf(stderr, "  model %08X: %u KB in %u draws, alpha %g, callers", uses[i].obj, uses[i].bytes >> 10,
                        uses[i].calls, uses[i].alpha);
                for (int k = 1; k < uses[i].nbt; k++)
                    fprintf(stderr, " %p", uses[i].bt[k]);
                fprintf(stderr, "\n");
            }
        }
        memset(emitted, 0, sizeof emitted);
        nuses = 0;
        cur_use = 0;
    }
    if (model_dump) {
        fclose(model_dump);
        model_dump = 0;
        port_dump_models = 0;
    } else if (port_dump_models)
        model_dump = fopen("models.txt", "w");
}

#include <execinfo.h>

/* whether a bounding sphere (model space: centre, radius) is wholly out of sight: behind the near plane, or off the
   screen (640 x 480, a margin around it) on its projected bounds, taken over the box the sphere fits in. The console's
   kernel culls meshes on these spheres; drawing them all made a stadium's crowd fill the translucent list's buffer */
static int sphere_unseen(const float *m, float cx, float cy, float cz, float r, float near)
{
    if (!(r > 0.0f))
        return 0;
    float w = m[0] * cx + m[4] * cy + m[8] * cz + m[12];
    float x = m[1] * cx + m[5] * cy + m[9] * cz + m[13];
    float y = m[2] * cx + m[6] * cy + m[10] * cz + m[14];
    float rw = r * sqrtf(m[0] * m[0] + m[4] * m[4] + m[8] * m[8]);
    float rx = r * sqrtf(m[1] * m[1] + m[5] * m[5] + m[9] * m[9]);
    float ry = r * sqrtf(m[2] * m[2] + m[6] * m[6] + m[10] * m[10]);
    if (w + rw < near)
        return 1;                               /* wholly behind */
    if (w - rw <= near)
        return 0;                               /* across the near plane: clipped, not culled */
    float w0 = w - rw, w1 = w + rw;
    float xlo = fminf((x - rx) / w0, (x - rx) / w1), xhi = fmaxf((x + rx) / w0, (x + rx) / w1);
    float ylo = fminf((y - ry) / w0, (y - ry) / w1), yhi = fmaxf((y + ry) / w0, (y + ry) / w1);
    const float margin = 64.0f;
    return xhi < -margin || xlo > 640.0f + margin || yhi < -margin || ylo > 480.0f + margin;
}

static void draw_model(uint32_t obj, uint32_t ctx, float alpha)
{
    uint32_t fmt = U32(obj);
    if (model_dump) {
        fprintf(model_dump, "model %08X fmt %u alpha %g\n  M", obj, fmt, alpha);
        for (int i = 0; i < 16; i++)
            fprintf(model_dump, " %g", port_xmtrx[i]);
        void *bt[10];
        int n = backtrace(bt, 10);
        fprintf(model_dump, "\n  callers");
        for (int i = 1; i < n; i++)
            fprintf(model_dump, " %p", bt[i]);
        fprintf(model_dump, "\n");
    }
    if (fmt > 1)
        return;
    if (list_debug < 0)
        list_debug = getenv("PORT_DEBUG_LISTS") != 0;
    cur_use = 0;
    if (list_debug > 0) {
        for (int i = 0; i < nuses; i++)
            if (uses[i].obj == obj) {
                cur_use = &uses[i];
                break;
            }
        if (!cur_use && nuses < 512) {
            cur_use = &uses[nuses++];
            memset(cur_use, 0, sizeof *cur_use);
            cur_use->obj = obj;
            cur_use->nbt = backtrace(cur_use->bt, 6);
        }
        if (cur_use) {
            cur_use->calls++;
            cur_use->alpha = alpha;
        }
    }
    /* the lighting context; the light's scale is used once and set back to 1 */
    float scale = F32(0x8C2B7BE8u);
    float inv = scale != 0.0f ? 1.0f / (scale < 0 ? -scale : scale) : 1.0f;
    F32(0x8C2B7BE8u) = 1.0f;
    float near = fbits(U32(ctx + 12) & ~1u);
    if (!(near > 1e-4f))                        /* no near W in the context: the library's near plane, as nlPerspective
                                                   and nlFrustum set it. Clipped at 1e-4 instead, a strip crossing the
                                                   camera came out with points 10^10 pixels away: triangles over the screen */
        near = F32(GAME_NL_NEAR);
    if (!(near > 1e-4f))
        near = 1e-4f;
    float lx = F32(ctx + 16) * inv, ly = F32(ctx + 20) * inv, lz = F32(ctx + 24) * inv;
    float ex = F32(ctx + 0), ey = F32(ctx + 4), ez = F32(ctx + 8); /* the eye vector, for the specular */
    float amb_scale = F32(ctx + 28);
    float fade[3] = {F32(0x8C14A948u), F32(0x8C14A94Cu), F32(0x8C14A950u)};
    float fade_ofs[3] = {F32(0x8C14A958u), F32(0x8C14A95Cu), F32(0x8C14A960u)};
    uint32_t pcw_or = U32(0x8C2B7948u), tsp_or = U32(0x8C2B794Cu);
    int mirror = (int32_t)pcw_or < 0;
    const float *m = port_xmtrx;
    static struct mvert sv[8192];
    if (sphere_unseen(m, F32(obj + 8), F32(obj + 0xC), F32(obj + 0x10), F32(obj + 0x14), near))
        return;

    uint32_t mesh = obj + 0x18;
    for (int guard = 0; guard < 4096 && U32(mesh) != 0; guard++) {
        uint32_t pcw = U32(mesh) | pcw_or, isp = U32(mesh + 4), tsp = U32(mesh + 8) | tsp_or, tcw = U32(mesh + 0xC);
        uint32_t size = U32(mesh + 0x4C);
        if (sphere_unseen(m, F32(mesh + 0x10), F32(mesh + 0x14), F32(mesh + 0x18), F32(mesh + 0x1C), near)) {
            mesh = mesh + 0x50 + size;
            continue;
        }
        int list = (int)((pcw >> 24) & 7);
        if (alpha < 1.0f) {                     /* see-through: the translucent list, blended by alpha */
            list = 2;
            pcw = (pcw & ~0x07000000u) | 0x02000000u;
            tsp = (tsp & 0x03FFFFFFu) | (4u << 29) | (5u << 26) | (1u << 20);
            tsp |= 3u << 6;                     /* modulate alpha */
        }
        float amb = F32(mesh + 0x28) * amb_scale;
        int8_t shading = (int8_t)U8(mesh + 0x24);
        int vcol = shading == -3;               /* vertex colours (nlObjPut_vtxcolbridge): float colours per vertex */
        if (vcol)
            pcw = (pcw & ~0x35u) | 0x10u;       /* colour kind 1, no offset, float u v */
        else
            pcw = (pcw & ~0x31u) | 0x24u;       /* intensity colours with offset (the global parameter of kind 2) */
        float face[4] = {F32(mesh + 0x2C) * alpha, F32(mesh + 0x30) * fade[0], F32(mesh + 0x34) * fade[1], F32(mesh + 0x38) * fade[2]};
        float ofs[4] = {F32(mesh + 0x3C), F32(mesh + 0x40) * fade_ofs[0], F32(mesh + 0x44) * fade_ofs[1], F32(mesh + 0x48) * fade_ofs[2]};
        uint32_t p = mesh + 0x50, end = p + size;
        while (p + 8 <= end) {
            uint32_t flags = U32(p);
            int32_t count = (int32_t)U32(p + 4);
            p += 8;
            if ((int32_t)flags <= 0)
                break;
            int strip = (flags & 0x10) != 0;
            int nv = strip ? count : count * 3;
            if (nv <= 0 || nv > 8192)
                break;
            /* the strip's header: the mesh's words, the cull mode from the strip's flags (flipped when mirrored) */
            uint32_t cull = (flags & 3) ^ (mirror && (flags & 2) ? 1u : 0u);
            uint32_t g[16];
            g[0] = pcw;
            g[1] = (isp & ~(3u << 27)) | (cull << 27);
            g[2] = tsp;
            g[3] = tcw;
            g[4] = g[5] = g[6] = g[7] = 0;
            for (int k = 0; k < 4; k++) {
                g[8 + k] = ubits(face[k]);
                g[12 + k] = ubits(ofs[k]);
            }
            ta_emit(list, g, vcol ? 32 : 64);
            int need_clip = 0;
            for (int k = 0; k < nv && p < end; k++) {
                uint32_t vp = p;
                if (!(U32(p) & 1)) {             /* a reference to an earlier vertex */
                    vp = p + 8 + U32(p + 4);
                    p += 8;
                } else
                    p += 32;
                float x = F32(vp), y = F32(vp + 4), z = F32(vp + 8);
                float nx = F32(vp + 12), ny = F32(vp + 16), nz = F32(vp + 20);
                struct mvert *o = &sv[k];
                o->w = m[0] * x + m[4] * y + m[8] * z + m[12];
                o->xw = m[1] * x + m[5] * y + m[9] * z + m[13];
                o->yw = m[2] * x + m[6] * y + m[10] * z + m[14];
                o->u = F32(vp + 24);
                o->v = F32(vp + 28);
                if (vcol) {
                    /* +12: the normal in three signed bytes, the fourth > 0 when lit; +16: the colour A R G B */
                    uint32_t pn = U32(vp + 12), pc = U32(vp + 16);
                    float li = 1.0f;
                    if ((int8_t)(pn >> 24) > 0) {
                        float d = ((int8_t)pn * lx + (int8_t)(pn >> 8) * ly + (int8_t)(pn >> 16) * lz) * (1.0f / 128.0f);
                        li = amb + (d > 0 ? d : 0);
                    }
                    o->c[0] = (float)(pc >> 24) * (1.0f / 255.0f) * alpha;
                    o->c[1] = (float)((pc >> 16) & 255) * (1.0f / 255.0f) * fade[0] * li;
                    o->c[2] = (float)((pc >> 8) & 255) * (1.0f / 255.0f) * fade[1] * li;
                    o->c[3] = (float)(pc & 255) * (1.0f / 255.0f) * fade[2] * li;
                    o->i = 1.0f;
                    o->o = 0.0f;
                } else {
                    /* the kernel's three shadings: -1 unlit; 0 lit (ambient + max(0, n.L)); > 0 lit, and the offset
                       intensity from the specular table: (int)(n.E) past 309 indexes row `shading` (0x8C2B30A4 +
                       shading * 512 + index * 4) */
                    float d = nx * lx + ny * ly + nz * lz;
                    o->i = shading == -1 ? 1.0f : amb + (d > 0 ? d : 0);
                    o->o = 0.0f;
                    if (shading > 0) {
                        int idx = (int)(nx * ex + ny * ey + nz * ez);
                        if (idx > 309)
                            o->o = F32(0x8C2B30A4u + (uint32_t)shading * 512u + (uint32_t)idx * 4u);
                    }
                }
                if (o->w < near)
                    need_clip = 1;
            }
            if (!need_clip && strip) {           /* the strip as it is */
                for (int k = 0; k < nv; k++)
                    emit_vertex(list, pcw, &sv[k], k == nv - 1);
            } else {
                for (int k = 0; k + 2 < nv; k += strip ? 1 : 3) {
                    if (strip && (k & 1))
                        emit_tri(list, pcw, &sv[k + 1], &sv[k], &sv[k + 2], near);
                    else
                        emit_tri(list, pcw, &sv[k], &sv[k + 1], &sv[k + 2], near);
                }
            }
        }
        mesh = mesh + 0x50 + size;
    }
}

void nl_objput_sub(uint32_t obj) __asm__("nlobjput_sub");
void nl_objput_sub(uint32_t obj)
{
    draw_model(obj, 0x8C2B3150u, 1.0f);
    nlPopMatrix(1);
}

void nl_objput_sub_trnsl(uint32_t obj, float alpha) __asm__("nlobjput_sub_trnsl");
void nl_objput_sub_trnsl(uint32_t obj, float alpha)
{
    draw_model(obj, 0x8C2B3150u, alpha);
    nlPopMatrix(1);
}

/* displaypolygondata_sidx_trnsl(model, context, alpha): the kernel itself (the model's meshes, not its header) */
void nl_display_polygon_trnsl(uint32_t obj, uint32_t ctx, float alpha) __asm__("displaypolygondata_sidx_trnsl");
void nl_display_polygon_trnsl(uint32_t obj, uint32_t ctx, float alpha) { draw_model(obj, ctx ? ctx : 0x8C2B3150u, alpha); }

/* nlObjPutMVAsm(model, context, ...): the model as a modifier volume (the players' shadows). The renderer has no
   modifier volumes yet: nothing is drawn */
int32_t nl_objput_mv(void) __asm__("nlObjPutMVAsm");
int32_t nl_objput_mv(void) { return 0; }

/* --- the matrix stack and the "8" matrix functions ------------------------------------------------------------------

   The library moves XMTRX to and from memory with pair moves (fschg, fmov DRn/XDn), which keep the singles' order:
   XF(2n) at the lower address (the console's behaviour, and the simulator's the decomp is proven in). The decomp's C
   of nlPushMatrix, nlPopMatrix and nlGetMatrix8 writes each pair the other way round; their round trips hide it, but
   every other reader of the stack or of the matrices nlGetMatrix8 stores (nlMultiPushedMatrix, nlLoadMatrix(0),
   gNlObjectMatrix through nlMultiMatrix8) saw the pairs swapped: the player-select screen's model lay on its side.
   These are the functions from their assembly, in the singles' order. The stack's descriptor (0x8C2B31DC): the depth
   (16 bits), the limit (16 bits), its base, its top. */
#define NL_STACK 0x8C2B31DCu

void nl_push_matrix(uint32_t m) __asm__("nlPushMatrix");
void nl_push_matrix(uint32_t m)
{
    uint32_t top = U32(NL_STACK + 8);
    memcpy((void *)(uintptr_t)top, port_xmtrx, 64);
    U32(NL_STACK + 8) = top + 64;
    *(volatile uint16_t *)(uintptr_t)NL_STACK = (uint16_t)(*(volatile int16_t *)(uintptr_t)NL_STACK + 1);
    if (m)
        memcpy(port_xmtrx, (const void *)(uintptr_t)m, 64);
}

int32_t nl_pop_matrix(int32_t n) __asm__("nlPopMatrix");
int32_t nl_pop_matrix(int32_t n)
{
    if (n <= 0)
        n = 1;
    int32_t depth = *(volatile int16_t *)(uintptr_t)NL_STACK, limit = *(volatile int16_t *)(uintptr_t)(NL_STACK + 2);
    int32_t ok = depth >= n;
    int32_t nd = ok ? depth - n : 0;
    uint32_t p = U32(NL_STACK + 4) + (uint32_t)nd * 64;
    *(volatile uint16_t *)(uintptr_t)NL_STACK = (uint16_t)nd;
    if (!(nd >= limit))
        U32(NL_STACK + 8) = p;
    memcpy(port_xmtrx, (const void *)(uintptr_t)p, 64);
    return ok;
}

uint32_t nl_get_matrix8(uint32_t dst) __asm__("nlGetMatrix8");
uint32_t nl_get_matrix8(uint32_t dst)
{
    if (!dst)
        dst = U32(NL_STACK + 8);
    memcpy((void *)(uintptr_t)dst, port_xmtrx, 64);
    return dst;
}

void nl_load_matrix8(uint32_t src) __asm__("nlLoadMatrix8");
void nl_load_matrix8(uint32_t src)
{
    if (!src)
        src = U32(NL_STACK + 8);
    memcpy(port_xmtrx, (const void *)(uintptr_t)src, 64);
}

/* nlMultiMatrixRevOrder8(m): XMTRX = M . XMTRX (each column of the old XMTRX through M) */
void nl_multi_matrix_rev8(uint32_t m) __asm__("nlMultiMatrixRevOrder8");
void nl_multi_matrix_rev8(uint32_t m)
{
    float mm[16], r[16];
    memcpy(mm, (const void *)(uintptr_t)m, 64);
    for (int i = 0; i < 4; i++)
        sa_ftrv(mm, port_xmtrx + 4 * i, r + 4 * i);
    memcpy(port_xmtrx, r, sizeof r);
}

/* nlPow(x, y): the library's power function. Its result travels in fr0, which the decomp's C (typed void) leaves to
   the registers: on the host the callers read garbage (the run animation's speed in playerMoveToTarget, among eight
   files). From its assembly: x == 0 gives 0 when y > 0, else 1; an integral y, x multiplied out (1/x for y < 0); a
   negative x, 0; otherwise nlExp(y * nlLog(x)) */
extern float nlLog(float) __asm__("nlLog");
extern float nlExp(float) __asm__("nlExp");

float nl_pow(float x, float y) __asm__("nlPow");
float nl_pow(float x, float y)
{
    if (x == 0.0f)
        return y > 0.0f ? 0.0f : 1.0f;
    /* ftrc: out of range (and NaN) saturates, as on the SH-4 */
    int32_t n = y != y ? INT32_MIN : y >= 2147483648.0f ? INT32_MAX : y < -2147483648.0f ? INT32_MIN : (int32_t)y;
    if (y == (float)n) {
        float b = x, r = 1.0f;
        if (n < 0) {
            n = (int32_t)(0u - (uint32_t)n);            /* neg: INT32_MIN stays INT32_MIN */
            b = 1.0f / x;
        }
        for (;;) {
            if (n & 1)
                r *= b;
            /* cmp/gt, addc, shar: halve toward zero, so a negative n ends at 0 too */
            int64_t v = (int64_t)n + (n < 0 ? 1 : 0);
            n = (int32_t)(v >= 0 ? v / 2 : -((-v + 1) / 2));   /* shar: v >> 1, rounding down */
            if (!n)
                break;
            b *= b;
        }
        return r;
    }
    if (0.0f > x)
        return 0.0f;
    return nlExp(y * nlLog(x));
}
