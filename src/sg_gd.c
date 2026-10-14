/* Shinobi library, SG_GD (the GD-ROM file system): our own C, written from the disassembly. */

typedef struct {
    int f0;
    int f4;
    int f8;
    int f12;
    int blocks;     /* 16 */
    int f20, f24, f28, f32, f36;
    int f40;        /* untouched */
    int f44;
    int f48;        /* untouched */
    int f52;
    int f56;        /* untouched */
    int f60;
    int f64;
    int f68;
    short s72;
    short s74;
    short active;   /* 76 */
    short s78;
    short state;    /* 80 */
    short s82;
} GdHandle;

typedef struct {
    char p0[20];
    int handle;
} GdState;

extern GdState *g_8c20c204;
extern short gGdFsDefaultTag;

int gdFsReopenHn(int h, int a, int b, int c);
int gdFsRead(int h, int a, int b);

int gdFsReadWG(int a, int b, int c)
{
    int h = gdFsReopenHn(g_8c20c204->handle, 0, a, b << 11);

    if (h == 0)
        return -13;
    return gdFsRead(h, b, c);
}

GdHandle *gdFsCreateHnG(GdHandle *h, int a, int b, int size)
{
    if (h->active != 0)
        return 0;
    h->f4 = a;
    h->f8 = b;
    h->f12 = size;
    h->blocks = (size + 2047) >> 11;
    h->f20 = 0;
    h->f24 = 0;
    h->f28 = 0;
    h->f32 = 0;
    h->f36 = 0;
    h->f44 = 0;
    h->f52 = 0;
    h->f60 = 0;
    h->f64 = 0;
    h->f68 = 0;
    h->s72 = 0;
    h->s74 = 0;
    h->active = 1;
    h->s78 = gGdFsDefaultTag;
    h->state = 0;
    h->s82 = 0;
    return h;
}
