/* Wrappers that pass a fifth or sixth argument on the stack. Where the original leaves r6/r7 as they
   came in, the C takes them as parameters and passes them on. */

extern int kdSetDriverMode(int mode, int a, int b, int c);
extern int mpdrv_setcmd(int port, int cmd, void *p, int n, int e, int f);
extern int syG2Write(void *src, unsigned int dst, int size, int n, int e, int f);
extern int kmSetFogTableColor(int a, int b, int c, int d, int e);
extern int kmSetFogVertexColor(int a, int b, int c, int d, int e);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);


/* AR control: a two-word parameter block {32, value}. */

/* The AICA real-time clock registers (date low / high word, write enable) through syG2Write. */


/* Set the first sample to play (+68); a null handle is reported instead. */

extern void Voice_ShutUp(int ch);
extern void Voice_Request(int voice, int ch, int a, int b);

/* Cut the current voice, then play voice table entry i (0C1321C0) at full volume. */

/* Ask for a flush (byte +6 = 1). */

/* The filter pair (+124, +128). */

/* The effect pair (+108, +112); -1 for both on a null handle. */

/* The pitch pair (+116, +120); -1 for both on a null handle. */

/* Block read request: {block, (a << 24) | (b << 16) | c}, two words. */

/* G2 bus settings at 0C2EA82C: mode (low 3 bits of m) in bits 24-26, bit 28 for c, bit 27 for b. */
void kmiBGPlaneSetPCW(int m, int b, int c)
{
    *(int *)0x0C2EA82C = (m & 7) << 24;
    if (c) {
        *(int *)0x0C2EA82C |= 0x10000000;
    }
    if (b) {
        *(int *)0x0C2EA82C |= 0x08000000;
    }
}
