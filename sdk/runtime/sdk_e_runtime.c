/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int vsprintf(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int nlLoadMatrix8(void *m);
extern int nlCopyMatrix(int n, void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int nlstripSetVertexContextTex(void *a, int b);
extern int nldispstripTexSub(int a, int b);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short g_0c2aecc8[];
extern char g_0c2af368[];
extern float g_0c14a7bc;
extern char g_0c2b31dc[];
extern float g_0c14a958[];
extern int g_0c2b356c;
extern int g_0c2b77dc[];
extern int g_0c2b76fc;
extern int g_0c2b7940;
extern char g_0c14ab18[];


char *strncpy(char *dst, char *src, unsigned int n)
{
    char *d;
    unsigned int i;

    d = dst;
    i = 0;
    while (i < n && *src != 0) {
        *d++ = *src++;
        i++;
    }
    while (i < n) {
        *d++ = 0;
        i++;
    }
    return dst;
}
