/* render.c: the game's pictures with OpenGL 3.3. The NAOMI library's drawing calls (nl*, the sprite and polygon
   submission) record what a frame draws; port_render_frame draws the records and clears them. */
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>
#include <stdint.h>
#include <stdio.h>

#include "port.h"
#include "render.h"

static float background[3];

/* the colour the frame is cleared to: the background plane's (pvr.c) */
void render_set_background(float r, float g, float b)
{
    background[0] = r;
    background[1] = g;
    background[2] = b;
}

void port_render_init(void)
{
    fprintf(stderr, PORT_NAME ": OpenGL %s, %s\n", (const char *)glGetString(GL_VERSION), (const char *)glGetString(GL_RENDERER));
    render_setup();
}

void port_render_frame(int w, int h)
{
    glViewport(0, 0, w, h);
    glClearColor(background[0], background[1], background[2], 1.0f);
    glClearDepth(0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    render_flush(w, h);
}

/* a render to a texture: the frame's records drawn into an off-screen target of w x h, the pixels read back as RGBA
   (rows top first) */
extern int render_target_w, render_target_h;

void port_render_to(uint32_t *out, int w, int h)
{
    static GLuint fbo, color, depth;
    static int fw, fh;
    if (!fbo || w > fw || h > fh) {
        if (!fbo) {
            glGenFramebuffers(1, &fbo);
            glGenTextures(1, &color);
            glGenRenderbuffers(1, &depth);
        }
        fw = w > fw ? w : fw;
        fh = h > fh ? h : fh;
        glBindTexture(GL_TEXTURE_2D, color);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, fw, fh, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);
        glBindRenderbuffer(GL_RENDERBUFFER, depth);
        glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, fw, fh);
        glBindFramebuffer(GL_FRAMEBUFFER, fbo);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, color, 0);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, depth);
    }
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glViewport(0, 0, w, h);
    glClearColor(background[0], background[1], background[2], 1.0f);
    glClearDepth(0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    render_target_w = w;
    render_target_h = h;
    render_flush(w, h);
    render_target_w = render_target_h = 0;
    static uint32_t rows[1024 * 1024];
    glPixelStorei(GL_PACK_ALIGNMENT, 4);
    glReadPixels(0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, rows);
    for (int y = 0; y < h; y++)                       /* GL's rows bottom first */
        for (int x = 0; x < w; x++)
            out[y * w + x] = rows[(h - 1 - y) * w + x];
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}
