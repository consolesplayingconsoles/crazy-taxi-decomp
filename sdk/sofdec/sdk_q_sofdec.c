/* Small library functions (batch q): the individual ID checksum, SJ unit reset, ADX output bit depth, G2 bus status. */

/* The ID block's check: byte 1 is the sum of bytes 2-7 and byte 0 is its complement. */

/* A chain of 16-byte cells in h's buffer (count at +16): each linked to the next, the last to 0, the counters cleared. */
int *SJUNI_Reset(int *h)
{
    int *cells = (int *)h[3];
    int *e;
    int i = 0;
    int *p;

    h[5] = (int)cells;
    while (i < h[4] - 1) {
        e = cells + i * 4;
        e[0] = (int)(cells + (i + 1) * 4);
        e[2] = 0;
        e[3] = 0;
        i++;
    }
    e = cells + i * 4;
    e[0] = 0;
    e[2] = 0;
    e[3] = 0;
    for (p = h + 6; p < h + 10; p++)
        *p = 0;
    return e;
}

/* An ADX decoder's output bit depth: 4, 8 or 16 from its two mode halfwords at +168 and +170. */
int ADXB_GetOutBps(char *a)
{
    short x = *(short *)(a + 168);

    if (!x)
        return 16;
    if (x == 2) {
        if (*(short *)(a + 170) == 2)
            return 4;
        if (*(short *)(a + 170) == 1)
            return 8;
        return 16;
    }
    if (x == 1 && *(short *)(a + 170) == 2)
        return 4;
    return 16;
}

/* The G2 bus state read by mode (0C2FD444): mode 0 waits for the status halfword's low byte, then returns the signed byte
   at +20; mode 1 returns 13 when bit 2 of the byte at +28 of the other block is set; else b is returned unchanged. */

/* Mode 0 only: the block's halfwords set to their start values; then bit 0 of the status byte at FFC00004 set. */
