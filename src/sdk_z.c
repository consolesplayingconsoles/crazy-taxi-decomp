/* Small loops the generator skips (backward branches): fills, copies, polling loops and table scans. */

extern int buExit(void);
extern void ADXSTMF_ExecHndl(void *stm);
extern int vmsio_isready(int drive);
extern int pdGetPeripheral(int port);
extern int vibStart(int port);

/* Fill n words at dst with val; returns n. */
int mpdrv_memset_l(int *dst, int val, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        dst[i] = val;
    }
    return n;
}

/* Copy n bytes; the source comes first. */
void gdFsMemcpy(char *src, char *dst, int n)
{
    while (n > 0) {
        *dst++ = *src++;
        n--;
    }
}

/* Retry buExit until it reports success (0). */
void vmuExit(void)
{
    while (buExit() != 0) {
    }
}

/* Copy a drive's 32-byte volume label into its 128-byte work record (at +76). */
void vmsfs_c_setvolume(int drive, unsigned char *src)
{
    unsigned char *rec = (unsigned char *)0x0C2EC578 + drive * 128;
    unsigned char *dst = rec + 76;

    do {
        *dst++ = *src++;
    } while (dst < rec + 108);
}

/* Run every open ADX stream handle (32 handles of 100 bytes; byte 0 == 1 means in use). */
void ADXAMP_ExecServer(void)
{
    unsigned char *p = (unsigned char *)0x0C2F53DC;
    unsigned char *end = p + 3200;

    do {
        if (*(signed char *)p == 1) {
            ADXSTMF_ExecHndl(p);
        }
        p += 100;
    } while (p < end);
}

/* Store 1/z in the four 20-byte records' z slot (+8); z <= 0 leaves them alone. */
void pfSetZ(float z)
{
    int i;
    float inv;

    if (z > 0.0f) {
        inv = 1.0f / z;
        for (i = 0; i < 4; i++) {
            *(float *)(0x0C0ED1E0 + i * 20 + 8) = inv;
        }
    }
}

/* tbl[0] is a bit mask (bit 31 first); each set bit owns the next word after it. Returns the word
   owned by bit `dev`, or 0 when that bit is not set. */
unsigned int *kdDevGetFD(unsigned int *tbl, unsigned int dev)
{
    unsigned int mask = tbl[0];
    unsigned int *p = tbl + 1;
    unsigned int bit = 0x80000000;
    int i;

    for (i = 0; i < 32; i++) {
        if (mask & bit) {
            if (dev == bit) {
                return p;
            }
            p++;
        }
        bit >>= 1;
    }
    return 0;
}

/* Bit i set when VMU drive i (0-7) is ready. */
int vmsfs_isready(void)
{
    int mask = 0;
    int bit = 1;
    int i;

    for (i = 0; i < 8; i++) {
        if (vmsio_isready(i) != 0) {
            mask |= bit;
        }
        bit <<= 1;
    }
    return mask;
}

/* Puru Puru (vibration) reset: in vibration mode 2 with the pack present (bit 8), restart it until
   vibStart takes; then clear the pending flag. */
void ndPuru2Reset(int port)
{
    pdGetPeripheral(port);
    if (*(unsigned char *)(0x0C1EE24C + 44) == 2) {
        if ((**(int **)(*(int *)0x0C2A9C70 + 48) & 0x100) == 0) {
            return;
        }
        while (vibStart(port) == 0) {
        }
    }
    *(int *)0x0C2A9C8C = 0;
}

extern int FUN_0c1727b0(void *ch);
extern int syG2DmaResume(void *ch);

/* Suspend the four G2 DMA channels (52-byte records after a 4-byte header) and note it. */
int syG2DmaSuspendAll(void)
{
    unsigned int off;

    for (off = 0; off < 208; off += 52) {
        FUN_0c1727b0((char *)*(int *)0x0C178700 + 4 + off);
    }
    *(int *)0x0C2F9338 = 1;
    return 0;
}

/* Resume the four G2 DMA channels and clear the suspended note. */
int syG2DmaResumeAll(void)
{
    unsigned int off;

    for (off = 0; off < 208; off += 52) {
        syG2DmaResume((char *)*(int *)0x0C178700 + 4 + off);
    }
    *(int *)0x0C2F9338 = 0;
    return 0;
}
