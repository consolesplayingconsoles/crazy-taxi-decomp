/* Wrappers that pass a fifth or sixth argument on the stack. Where the original leaves r6/r7 as they
   came in, the C takes them as parameters and passes them on. */

extern int kdSetDriverMode(int mode, int a, int b, int c);
extern int mpdrv_setcmd(int port, int cmd, void *p, int n, int e, int f);
extern int syG2Write(void *src, unsigned int dst, int size, int n, int e, int f);
extern int kmSetFogTableColor(int a, int b, int c, int d, int e);
extern int kmSetFogVertexColor(int a, int b, int c, int d, int e);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

int pdGunSetFlashColor(int color, int b, int c, int d)
{
    return kdSetDriverMode(9, color, c, d);
}

int pdSetMode(int mode, int b, int c, int d)
{
    return kdSetDriverMode(5, mode, c, d);
}

int pdSetOptimize(int on, int b, int c, int d)
{
    return kdSetDriverMode(0, on, c, d);
}

int mpdrv_set_dreq_ns(int port)
{
    return mpdrv_setcmd(port, 1, 0, 0, 0, 0);
}

int mpdrv_set_allstatreq_ns(int port)
{
    return mpdrv_setcmd(port, 2, 0, 0, 0, 0);
}

int mpdrv_set_dreset_ns(int port)
{
    return mpdrv_setcmd(port, 3, 0, 0, 0, 0);
}

int mpdrv_set_dkill_ns(int port)
{
    return mpdrv_setcmd(port, 4, 0, 0, 0, 0);
}

int mpdrv_set_transagain_ns(int port)
{
    return mpdrv_setcmd(port, 252, 0, 0, 0, 0);
}

/* AR control: a two-word parameter block {32, value}. */
int mpdrv_set_arctrl_ns(int port, int value)
{
    int p[2];

    p[0] = 32;
    p[1] = value;
    return mpdrv_setcmd(port, 16, p, 1, value, 1);
}

/* The AICA real-time clock registers (date low / high word, write enable) through syG2Write. */
int syRtcAicaSetWriteFlag(void)
{
    short v = 1;

    syG2Write(&v, 0xA0710008, 4, 1, 0, 0);
    return 0;
}

int syRtcAicaSetDateLo(int lo)
{
    int v = lo;

    syG2Write(&v, 0xA0710004, 4, 1, 0, 0);
    return 0;
}

int syRtcAicaSetDateHi(int hi)
{
    int v = hi;

    syG2Write(&v, 0xA0710000, 4, 1, 0, 0);
    return 0;
}


/* Set the first sample to play (+68); a null handle is reported instead. */

extern void Voice_ShutUp(int ch);
extern void Voice_Request(int voice, int ch, int a, int b);

/* Cut the current voice, then play voice table entry i (0C1321C0) at full volume. */

/* Ask for a flush (byte +6 = 1). */

/* The filter pair (+124, +128). */

/* The effect pair (+108, +112); -1 for both on a null handle. */

/* The pitch pair (+116, +120); -1 for both on a null handle. */

/* Block read request: {block, (a << 24) | (b << 16) | c}, two words. */
int mpdrv_set_bread_ns(int port, int block, int a, int b, int c)
{
    int p[2];

    p[0] = block;
    p[1] = (a << 24) | (b << 16) | c;
    return mpdrv_setcmd(port, 11, p, 2, 0, 0);
}

/* G2 bus settings at 0C2EA82C: mode (low 3 bits of m) in bits 24-26, bit 28 for c, bit 27 for b. */
