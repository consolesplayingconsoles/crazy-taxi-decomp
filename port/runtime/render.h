/* render.h: the renderer's records (render.c, draw.c) */
#ifndef RENDER_H
#define RENDER_H
#include <stdint.h>

/* a vertex as the renderer draws it: screen x, y in the console's 640x480, z = W (the PowerVR compares 1/W, greater is
   nearer), colour (ARGB) and texture coordinates */
struct rvert {
    float x, y, z;
    float u, v;
    uint32_t argb;
    uint32_t offset; /* the specular (offset) colour PowerVR adds */
    float flatw;     /* set by render_tris: W of a triangle whose three vertices share one W (a screen sprite), else 0 */
    uint32_t group;  /* the polygon (a strip, a lone triangle or a sprite) this vertex belongs to: translucent polygons are sorted whole */
};

/* a draw: a run of triangles sharing one texture and blend mode */
struct rdraw {
    unsigned first, count; /* vertices (whole triangles) */
    unsigned texture;      /* GL texture name, 0 none */
    uint8_t blend;         /* 0 opaque, 1 punch-through, 2 translucent */
    uint8_t src, dst;      /* PowerVR blend factors (0-7) */
    uint8_t depth_func;    /* the PowerVR's compare on 1/W: 0 never, 1 less, 2 equal, 3 lequal, 4 greater, 5 notequal, 6 gequal, 7 always */
    uint8_t depth_write, filter, clamp_u, clamp_v, flip_u, flip_v;
    uint8_t textured;         /* the polygon takes a texture (texture 0 then: one that was not found, drawn white) */
    uint8_t shade;            /* the TSP's shading instruction: 0 decal, 1 modulate, 2 decal alpha, 3 modulate alpha */
    uint8_t ignore_tex_alpha; /* the TSP's: the texture's alpha counts as 1 */
};

void render_setup(void);
void render_flush(int w, int h);
/* a triangle list in the frame's records */
void render_tris(const struct rvert *v, unsigned n, const struct rdraw *mode);
void render_set_background(float r, float g, float b);
#endif
