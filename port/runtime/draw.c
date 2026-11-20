/* draw.c: the frame's triangle records drawn with OpenGL 3.3 core.

   The PowerVR takes screen-space vertices: x and y in pixels of the 640x480 frame, and 1/w for depth (larger is nearer).
   Its colour is texture x base colour + offset colour. Opaque and punch-through polygons are drawn first, translucent
   ones after, sorted back to front by triangle (the PowerVR auto-sorts translucent polygons; the game relies on it for
   glass over objects). Depth is written per fragment as a logarithm of W: the PowerVR keeps 1/W in a 32-bit float, whose
   relative precision a 24-bit fixed buffer holding 0.1/W cannot match at a distance (wall decals fought the wall). */
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__                 /* macOS: its OpenGL core profile header (the C tests run there, tests/c) */
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

#include <stdint.h>

#include "render.h"
#include "port.h"
#include "game.h"

#define MAX_VERTS (1 << 20)
#define MAX_DRAWS (1 << 15)

static struct rvert *verts;
static struct rdraw *draws;
static unsigned nverts, ndraws;
static GLuint program, vao, vbo, white;
extern int render_target_w, render_target_h;   /* a render into a texture (below) */
static int view_x, view_y, view_w, view_h;      /* the picture's place in the window (render_flush) */
static float scr_w = 640.0f;                    /* the game's width in pixels for this render (640; a render into a texture: its own) */
static GLint u_screen, u_squeeze, u_anchor, u_tex, u_alpha_test, u_shade, u_textured, u_ignore_tex_alpha, u_alpha_ref;

static const char *vs_src =
    "#version 330 core\n"
    "layout(location=0) in vec3 pos;\n"
    "layout(location=1) in vec2 uv;\n"
    "layout(location=2) in vec4 col;\n"
    "layout(location=3) in vec4 ofs;\n"
    "layout(location=4) in float flatw;\n"
    "uniform vec2 screen;\n"
    "uniform float squeeze;\n"
    "uniform float anchor;\n"
    "noperspective out vec2 v_uv; noperspective out vec4 v_col; noperspective out vec4 v_ofs; noperspective out float v_invw;\n"
    "flat out float v_flat;\n"
    "void main() {\n"
    /* pos.z is W. The vertices are in screen space already (the TA takes them projected), and OpenGL gets them with W 1:
       cutting a triangle at the screen's edge is then plain 2D. The PowerVR's way: 1/W and every attribute over W are
       linear in screen space, and each pixel divides by its 1/W. Given to OpenGL with the vertex's W instead, a far
       triangle it cut at the edge (W in the thousands) came out with a 1/W near the cut that made it the nearest thing
       on the screen: the sky over the road and the HUD */
    "  float w = clamp(pos.z, 1e-6, 1e9);\n"
    /* a wider picture (PORT_WIDESCREEN): the game drew a wider view into its 640 pixels and they are spread over the wider screen;
       a draw of the PowerVR's sprites (the HUD, the menus: render_draw squeeze) is drawn squeezed back to its 4:3 shape, in
       the middle */
    "  float x = anchor + (pos.x - anchor) * squeeze;\n"
    "  gl_Position = vec4(x / screen.x * 2.0 - 1.0, 1.0 - pos.y / screen.y * 2.0, 0.0, 1.0);\n"
    "  float iw = 1.0 / w;\n"
    "  v_uv = uv * iw; v_col = col * iw; v_ofs = ofs * iw; v_invw = iw; v_flat = flatw;\n"
    "}\n";

static const char *fs_src =
    "#version 330 core\n"
    "noperspective in vec2 v_uv; noperspective in vec4 v_col; noperspective in vec4 v_ofs; noperspective in float v_invw;\n"
    "flat in float v_flat;\n"
    "uniform sampler2D tex;\n"
    "uniform int alpha_test, shade, textured, ignore_tex_alpha;\n"
    "uniform float alpha_ref;\n"
    "out vec4 o;\n"
    "void main() {\n"
    "  float pw = 1.0 / v_invw;\n"                  /* this pixel's W: the attributes over W, back to themselves */
    "  vec2 uv = v_uv * pw; vec4 col = v_col * pw; vec4 ofs = v_ofs * pw;\n"
    "  vec4 t = texture(tex, uv);\n"
    "  if (ignore_tex_alpha != 0) t.a = 1.0;\n"
    "  vec4 c;\n"
    /* the PowerVR's shading instructions: decal, modulate, decal alpha, modulate alpha */
    "  if (textured == 0) c = col;\n"
    "  else if (shade == 0) c = t;\n"
    "  else if (shade == 1) c = vec4(t.rgb * col.rgb, t.a);\n"
    "  else if (shade == 2) c = vec4(mix(col.rgb, t.rgb, t.a), col.a);\n"
    "  else c = t * col;\n"
    "  c.rgb += ofs.rgb;\n"
    "  if (alpha_test != 0 && c.a < alpha_ref) discard;\n"
    "  o = c;\n"
    /* nearness as a logarithm of W, 0 at W = 2^20 and 1 at W = 2^-20: even relative steps in W over the whole range */
    /* a screen sprite has one W over the whole triangle: its constant, not an interpolation that rounding can tilt (two
       sprites at the same depth, the menu's text over its shadow, would otherwise win by triangle halves) */
    "  float w = v_flat > 0.0 ? v_flat : pw;\n"
    "  gl_FragDepth = clamp((20.0 - log2(max(w, 1e-6))) / 40.0, 0.0, 1.0);\n"
    "}\n";

static GLuint shader(GLenum kind, const char *src)
{
    GLuint s = glCreateShader(kind);
    GLint ok;
    glShaderSource(s, 1, &src, 0);
    glCompileShader(s);
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        glGetShaderInfoLog(s, sizeof log, 0, log);
        fprintf(stderr, PORT_NAME ": shader: %s\n", log);
        exit(2);
    }
    return s;
}

void render_setup(void)
{
    verts = malloc(sizeof *verts * MAX_VERTS);
    draws = malloc(sizeof *draws * MAX_DRAWS);
    program = glCreateProgram();
    glAttachShader(program, shader(GL_VERTEX_SHADER, vs_src));
    glAttachShader(program, shader(GL_FRAGMENT_SHADER, fs_src));
    glLinkProgram(program);
    u_screen = glGetUniformLocation(program, "screen");
    u_squeeze = glGetUniformLocation(program, "squeeze");
    u_anchor = glGetUniformLocation(program, "anchor");
    u_tex = glGetUniformLocation(program, "tex");
    u_alpha_test = glGetUniformLocation(program, "alpha_test");
    u_shade = glGetUniformLocation(program, "shade");
    u_textured = glGetUniformLocation(program, "textured");
    u_ignore_tex_alpha = glGetUniformLocation(program, "ignore_tex_alpha");
    u_alpha_ref = glGetUniformLocation(program, "alpha_ref");
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);
    glBindVertexArray(vao);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(struct rvert), (void *)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(struct rvert), (void *)12);
    glVertexAttribPointer(2, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(struct rvert), (void *)20);
    glVertexAttribPointer(3, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(struct rvert), (void *)24);
    glVertexAttribPointer(4, 1, GL_FLOAT, GL_FALSE, sizeof(struct rvert), (void *)28);
    for (int i = 0; i < 5; i++)
        glEnableVertexAttribArray(i);
    uint32_t px = 0xFFFFFFFF;
    glGenTextures(1, &white);
    glBindTexture(GL_TEXTURE_2D, white);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &px);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
}

static uint32_t argb_to_rgba(uint32_t c)
{
    /* the attribute reads bytes r g b a */
    return ((c >> 16) & 255) | (((c >> 8) & 255) << 8) | ((c & 255) << 16) | ((c >> 24) << 24);
}

void render_tris(const struct rvert *v, unsigned n, const struct rdraw *mode)
{
    if (!verts || nverts + n > MAX_VERTS || ndraws >= MAX_DRAWS || n == 0)
        return;
    struct rdraw *last = ndraws ? &draws[ndraws - 1] : 0;
    if (last && last->first + last->count == nverts && !memcmp((const char *)last + 8, (const char *)mode + 8, sizeof *mode - 8)) {
        last->count += n;
    } else {
        draws[ndraws] = *mode;
        draws[ndraws].first = nverts;
        draws[ndraws].count = n;
        ndraws++;
    }
    for (unsigned i = 0; i < n; i++) {
        verts[nverts] = v[i];
        verts[nverts].argb = argb_to_rgba(v[i].argb);
        verts[nverts].offset = argb_to_rgba(v[i].offset);
        nverts++;
    }
    for (unsigned i = 0; i + 2 < n; i += 3) {     /* flat triangles: one W at all three vertices */
        float w = v[i].z;
        float f = (w > 0.0f && v[i + 1].z == w && v[i + 2].z == w) ? w : 0.0f;
        verts[nverts - n + i].flatw = verts[nverts - n + i + 1].flatw = verts[nverts - n + i + 2].flatw = f;
    }
}

/* the TSP's blend factors: 2 and 3 are the "other" colour, which is the destination's for the source factor and the
   source's for the destination factor */
static const GLenum src_factor[8] = {GL_ZERO, GL_ONE, GL_DST_COLOR, GL_ONE_MINUS_DST_COLOR,
                                     GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA};
static const GLenum dst_factor[8] = {GL_ZERO, GL_ONE, GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR,
                                     GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA, GL_DST_ALPHA, GL_ONE_MINUS_DST_ALPHA};

static void bind_state(const struct rdraw *d)
{
    static const GLenum func[8] = {GL_NEVER, GL_LESS, GL_EQUAL, GL_LEQUAL, GL_GREATER, GL_NOTEQUAL, GL_GEQUAL, GL_ALWAYS};
    glBindTexture(GL_TEXTURE_2D, d->texture ? d->texture : white);
    GLint filter = d->filter ? GL_LINEAR : GL_NEAREST;
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, filter);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, filter);
    /* a draw whose coordinates stay inside the texture (0..1) repeats nothing: it is clamped, so that the smoothing at
       its edges does not take texels from the texture's far side. A picture built of several pieces (the title's logo)
       showed every seam between its pieces as a line */
    int inside_u = 1, inside_v = 1;
    for (unsigned i = d->first; i < d->first + d->count && (inside_u || inside_v); i++) {
        if (verts[i].u < -0.0001f || verts[i].u > 1.0001f)
            inside_u = 0;
        if (verts[i].v < -0.0001f || verts[i].v > 1.0001f)
            inside_v = 0;
    }
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, d->clamp_u || inside_u ? GL_CLAMP_TO_EDGE : d->flip_u ? GL_MIRRORED_REPEAT : GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, d->clamp_v || inside_v ? GL_CLAMP_TO_EDGE : d->flip_v ? GL_MIRRORED_REPEAT : GL_REPEAT);
    if (d->blend == 2) {
        glEnable(GL_BLEND);
        glBlendFunc(src_factor[d->src & 7], dst_factor[d->dst & 7]);
    } else {
        glDisable(GL_BLEND);
    }
    glUniform1i(u_alpha_test, d->blend == 1);
    /* squeezed: the 2D the game draws (HUD, menus, their text: flat2d), not its 3D, and not a picture of the game's own render
       (no_squeeze) or a render into a texture. A triangle whose corners share one W was the first test: the camera-facing 3D
       models matched it too (the passengers' dollar marker, the SEGA logo) and were pulled to the middle; the PowerVR's sprite
       type the second: menu text comes as polygons and stayed stretched */
    /* and not a band across the whole width (bar: mark_bars) */
    /* in a render into a texture too: the game shows that picture full-screen (the pause, the register and "try again"
       screens, dimmed) with the wider view in it, and its menus were drawn there unsqueezed: stretched */
    int squeezed = !(!d->flat2d || d->no_squeeze || d->bar);
    glUniform1f(u_squeeze, squeezed ? 1.0f / PORT_WIDE : 1.0f);
    /* the point the squeeze keeps in place: the middle, or a side for a HUD piece pinned there (mark_hud) */
    glUniform1f(u_anchor, d->anchor == 1 ? 0.0f : d->anchor == 2 ? scr_w : scr_w * 0.5f);
    /* squeezed 2D is cut at the 4:3 picture's edges, as the console's screen cuts it: what the game slides in and out from
       off its 640 pixels (the menus' pieces, the header's title) showed in the wider screen's sides */
    if (squeezed && !d->extended && !d->anchor && PORT_WIDE > 1.0f) {
        glEnable(GL_SCISSOR_TEST);
        glScissor(view_x + (int)(view_w * (1.0f - 1.0f / PORT_WIDE) * 0.5f), view_y, (int)(view_w / PORT_WIDE + 0.5f), view_h);
    } else
        glDisable(GL_SCISSOR_TEST);
    glUniform1i(u_shade, d->shade);
    glUniform1i(u_textured, d->textured);
    glUniform1i(u_ignore_tex_alpha, d->ignore_tex_alpha);
    /* PT_ALPHA_REF: the punch-through list's alpha threshold (0-255) */
    glUniform1f(u_alpha_ref, (float)(*(volatile uint32_t *)(uintptr_t)0xA05F811Cu & 255) / 255.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(func[d->depth_func & 7]);
    glDepthMask(d->depth_write ? GL_TRUE : GL_FALSE);
}

static void draw_opaque(void)
{
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        if (d->blend == 2)
            continue;
        bind_state(d);
        glDrawArrays(GL_TRIANGLES, d->first, d->count);
    }
}

/* translucent polygons, farthest first, the game's order among equals: the PowerVR's auto-sort. It sorts whole polygons (a
   strip, a lone triangle, a sprite) by their farthest vertex; sorting single triangles split a quad and drew half of a
   panel over the text on it. */
struct tpoly {
    float key;                   /* the largest W of its vertices */
    unsigned first, count, draw; /* its vertices in the buffer, and the draw whose state it uses */
};
static struct tpoly *tpolys;

static int tpoly_cmp(const void *a, const void *b)
{
    const struct tpoly *x = a, *y = b;
    if (x->key != y->key)
        return x->key > y->key ? -1 : 1;
    return x->first < y->first ? -1 : x->first > y->first;
}

static void draw_translucent(void)
{
    if (!tpolys)
        tpolys = malloc(sizeof *tpolys * (MAX_VERTS / 3));
    unsigned n = 0;
    for (unsigned i = 0; i < ndraws; i++) {
        const struct rdraw *d = &draws[i];
        if (d->blend != 2)
            continue;
        for (unsigned k = d->first; k + 2 < d->first + d->count;) {
            unsigned e = k + 3;                                   /* the triangles of one polygon follow each other */
            while (e + 2 < d->first + d->count && verts[e].group == verts[k].group)
                e += 3;
            if (n >= MAX_VERTS / 3)
                break;
            float key = 0.0f;
            for (unsigned q = k; q < e; q++)
                if (verts[q].z > key)
                    key = verts[q].z;
            tpolys[n].key = key;
            tpolys[n].first = k;
            tpolys[n].count = e - k;
            tpolys[n].draw = i;
            n++;
            k = e;
        }
    }
    qsort(tpolys, n, sizeof *tpolys, tpoly_cmp);
    for (unsigned i = 0; i < n;) {
        unsigned j = i + 1, total = tpolys[i].count;     /* a run: the same state, consecutive in the buffer */
        while (j < n && tpolys[j].draw == tpolys[i].draw && tpolys[j].first == tpolys[j - 1].first + tpolys[j - 1].count) {
            total += tpolys[j].count;
            j++;
        }
        bind_state(&draws[tpolys[i].draw]);
        glDrawArrays(GL_TRIANGLES, tpolys[i].first, total);
        i = j;
    }
}

int render_target_w, render_target_h;

/* a band across the whole 640 pixels: the 2D draws of one texture that together reach both edges and are at most 160 high,
   or any height for a plain fill (untextured, or a texture of at most 32x32: the result screen's white sheet, 0-640 x 112-592,
   a screen-wide dimming)
   (a menu's header: Crazy Taxi's is 240 tiles of one texture, x 0-640, y 0-96, no single tile spans it; the driver screen's
   the same texture as one quad, y 0-136). Drawn edge to
   edge on a wider screen; a full-screen picture is taller and keeps its 4:3 shape */
static void mark_bars(void)
{
    enum { N = 64 };
    unsigned tex[N], n = 0, fill[N];
    float box[N][4];
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        d->bar = 0;
        if (!d->flat2d || d->no_squeeze || !d->count)
            continue;
        unsigned k = 0;
        while (k < n && tex[k] != d->texture)
            k++;
        if (k == n) {
            if (n == N)
                continue;
            tex[n] = d->texture, fill[n] = d->fill, box[n][0] = box[n][2] = 1e9f, box[n][1] = box[n][3] = -1e9f, n++;
        }
        for (unsigned v = d->first; v < d->first + d->count; v++) {
            box[k][0] = verts[v].x < box[k][0] ? verts[v].x : box[k][0], box[k][1] = verts[v].x > box[k][1] ? verts[v].x : box[k][1];
            box[k][2] = verts[v].y < box[k][2] ? verts[v].y : box[k][2], box[k][3] = verts[v].y > box[k][3] ? verts[v].y : box[k][3];
        }
    }
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        if (!d->flat2d || d->no_squeeze || !d->count)
            continue;
        if (d->fill) {      /* a plain fill that alone covers the width (the register screen's dimming: the untextured draws,
                               all of texture 0, together ran past the edges and missed "exactly the width") */
            float x0 = 1e9f, x1 = -1e9f;
            for (unsigned v = d->first; v < d->first + d->count; v++)
                x0 = verts[v].x < x0 ? verts[v].x : x0, x1 = verts[v].x > x1 ? verts[v].x : x1;
            if (fabsf(x0) <= 1.0f && fabsf(x1 - scr_w) <= 1.0f) {
                d->bar = 1;
                continue;
            }
        }
        for (unsigned k = 0; k < n; k++)
            if (tex[k] == d->texture)
                d->bar = fabsf(box[k][0]) <= 1.0f && fabsf(box[k][1] - scr_w) <= 1.0f &&     /* exactly the screen's width: */
                         (box[k][3] - box[k][2] <= 160.0f || fill[k]);                        /* not pieces sliding past it */
    }
}

/* a piece of a band that starts at the screen's left edge and stops short of the right (the menu's bottom bar, a checker
   pattern with a round right end): its corners at x 0 go out to the wider screen's left edge, the texture carried along
   with them, so the pattern repeats into the new room instead of stretching; the rest stays squeezed with the 4:3 picture.
   A piece at most 128 high, of the 2D drawn squeezed */
static void extend_left(void)
{
    if (PORT_WIDE <= 1.0f)
        return;
    const float edge = scr_w * 0.5f * (1.0f - PORT_WIDE);  /* the x that the squeeze puts at the wider screen's left edge */
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        d->extended = 0;
        if (!d->flat2d || d->no_squeeze || d->bar || !d->count)
            continue;
        float x0 = 1e9f, x1 = -1e9f, y0 = 1e9f, y1 = -1e9f;
        for (unsigned v = d->first; v < d->first + d->count; v++) {
            x0 = verts[v].x < x0 ? verts[v].x : x0, x1 = verts[v].x > x1 ? verts[v].x : x1;
            y0 = verts[v].y < y0 ? verts[v].y : y0, y1 = verts[v].y > y1 ? verts[v].y : y1;
        }
        if (!(fabsf(x0) <= 1.0f && x1 < scr_w - 1.0f && y1 - y0 <= 128.0f))   /* at the edge exactly: not a piece sliding in */
            continue;
        /* each corner at x 0 with the nearest corner to its right on the same row, from all of the draw's corners: a quad
           is two triangles, and its bottom-left corner has that partner in only one of them (taken triangle by triangle,
           one copy of the corner moved and the other stayed: a dent and an overlap in the checker) */
        unsigned e = d->first + d->count;
        for (unsigned a = d->first; a < e; a++) {
            if (fabsf(verts[a].x) > 1.0f)
                continue;
            int b = -1;
            for (unsigned k = d->first; k < e; k++)
                if (verts[k].x > verts[a].x + 0.5f && fabsf(verts[k].y - verts[a].y) < 0.5f && (b < 0 || verts[k].x < verts[b].x))
                    b = (int)k;
            if (b < 0)
                continue;
            float s = (edge - verts[a].x) / (verts[b].x - verts[a].x);
            verts[a].u += (verts[b].u - verts[a].u) * s, verts[a].v += (verts[b].v - verts[a].v) * s;
            verts[a].x = edge;
            d->extended = 1;
        }
    }
}

/* the play HUD on a wider picture (GAME_HUD_MODE, game.h): a squeezed 2D piece at the top or bottom of the screen, wholly in
   the left half, is pinned to the screen's left edge, one wholly in the right half to the right edge, so the HUD sits at
   the sides; a piece across the middle stays in the middle. Not in a render into a texture, nor in another mode */
static void mark_hud(void)
{
    for (unsigned i = 0; i < ndraws; i++)
        draws[i].anchor = 0;
#ifdef GAME_HUD_MODE
    if (PORT_WIDE <= 1.0f || render_target_w > 0 || *(volatile int32_t *)(uintptr_t)GAME_MAIN_MODE != GAME_HUD_MODE)
        return;
    /* a race: the city's 3D on screen (6,000 to 24,000 vertices in the recorded races; the driver select, in the same mode,
       about 1,800 in all) */
    unsigned world = 0;
    for (unsigned i = 0; i < ndraws; i++)
        world += draws[i].flat2d ? 0 : draws[i].count;
    if (world < 4000)
        return;
    for (unsigned i = 0; i < ndraws; i++) {
        struct rdraw *d = &draws[i];
        if (!d->flat2d || d->no_squeeze || d->bar || d->extended || !d->count)
            continue;
        float x0 = 1e9f, x1 = -1e9f, y0 = 1e9f, y1 = -1e9f;
        for (unsigned v = d->first; v < d->first + d->count; v++) {
            x0 = verts[v].x < x0 ? verts[v].x : x0, x1 = verts[v].x > x1 ? verts[v].x : x1;
            y0 = verts[v].y < y0 ? verts[v].y : y0, y1 = verts[v].y > y1 ? verts[v].y : y1;
        }
        /* HUD-shaped: in the top or bottom 120 pixels and narrower than half the screen. The driver select, "time up" and
           result screens share the play mode; their pictures mid-screen, built of several pieces, came apart in three */
        if (!(y1 <= 120.0f || y0 >= 360.0f) || x1 - x0 > scr_w * 0.5f)
            continue;
        d->anchor = x1 <= scr_w * 0.5f ? 1 : x0 >= scr_w * 0.5f ? 2 : 0;
    }
#endif
}

void render_flush(int w, int h)
{
    if (getenv("PORT_DEBUG_DRAW")) {
        static unsigned long frame;
        if (++frame % 600 == 0)
            for (unsigned i = 0; i < ndraws; i++) {
                struct rdraw *d = &draws[i];
                float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
                for (unsigned k = d->first; k < d->first + d->count; k++) {
                    if (verts[k].x < x0) x0 = verts[k].x;
                    if (verts[k].x > x1) x1 = verts[k].x;
                    if (verts[k].y < y0) y0 = verts[k].y;
                    if (verts[k].y > y1) y1 = verts[k].y;
                }
                fprintf(stderr, "draw %lu: tex %u blend %d n %u box %.0f,%.0f-%.0f,%.0f col %08X z %g\n", frame, d->texture, d->blend,
                        d->count, x0, y0, x1, y1, verts[d->first].argb, verts[d->first].z);
            }
    }
    /* the picture in its shape (PORT_WIDESCREEN: the console's 4:3, or 16:9), centred in the window; a render to a texture
       (render_target_w > 0): the target's pixels one for one (512 wide in Crazy Taxi: the game draws it in those
       coordinates), its 2D squeezed as on the screen */
    int vw = w, vh = h;
    float sw = 640.0f, sh = 480.0f;
    if (render_target_w > 0) {
        sw = (float)render_target_w;
        sh = (float)render_target_h;
        glViewport(0, 0, render_target_w, render_target_h);
        view_x = 0, view_y = 0, view_w = render_target_w, view_h = render_target_h;
    } else {
        if (w * PORT_ASPECT_H > h * PORT_ASPECT_W)
            vw = h * PORT_ASPECT_W / PORT_ASPECT_H;
        else
            vh = w * PORT_ASPECT_H / PORT_ASPECT_W;
        glViewport((w - vw) / 2, (h - vh) / 2, vw, vh);
        view_x = (w - vw) / 2, view_y = (h - vh) / 2, view_w = vw, view_h = vh;
    }
    if (ndraws) {
        glUseProgram(program);
        glUniform2f(u_screen, sw, sh);
        glUniform1i(u_tex, 0);
        glActiveTexture(GL_TEXTURE0);
        glBindVertexArray(vao);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        scr_w = sw;
        mark_bars();
        extend_left();
        mark_hud();
        glBufferData(GL_ARRAY_BUFFER, sizeof(struct rvert) * nverts, verts, GL_STREAM_DRAW);
        draw_opaque();
        draw_translucent();
        glDisable(GL_SCISSOR_TEST);
        glDepthMask(GL_TRUE);
        glDisable(GL_BLEND);
    }
    nverts = ndraws = 0;
}
