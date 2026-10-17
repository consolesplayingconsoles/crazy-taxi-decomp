/* Functions whose control flow the generator cannot follow (an unconditional jump over a block). */

extern void ADXSTM_Stop(int *h);
extern void gdFsClose(int fd);
extern void FUN_0c1689c0(int *h);

/* Stop the stream, close its file if it has one, then release the handle. */
void ADXSTM_Close(int *h)
{
    if (h) {
        ADXSTM_Stop(h);
        if (h[2]) {
            gdFsClose(h[2]);
        }
        FUN_0c1689c0(h);
    }
}

/* Zero the root z (+8) of each of the motion's n frames; a frame is (2 * (nodes + 1) + 1) * 12 bytes. */
void motionClearRootZ(unsigned int *m)
{
    char *f = (char *)m[2];
    unsigned int i;

    for (i = 0; i < m[0]; i++) {
        *(float *)(f + 8) = 0.0f;
        f += ((m[1] + 1) * 2 + 1) * 12;
    }
}

/* First empty (name byte 0) 32-byte entry in a drive's directory buffer, or -1. */
int search_free_dir(int drive)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    unsigned char *p = *(unsigned char **)(rec + 40);
    int i;

    for (i = 0; i < *(int *)(*(int *)(rec + 28) + 48); i++) {
        if (*p == 0) {
            return i;
        }
        p += 32;
    }
    return -1;
}

/* CRC-16 (CCITT table at 0C176FF4, initial 0xFFFF, inverted) of n bytes. */
unsigned int fmcalccrc(int n, unsigned char *p)
{
    unsigned int crc = 0xFFFF;
    unsigned int c;

    while (--n >= 0) {
        c = crc & 0xFFFF;
        crc = (c << 8) ^ ((short *)0x0C176FF4)[(c >> 8) ^ *p++];
    }
    return (unsigned short)~crc;
}

extern void kmfSetFatalErrorCallback(void *f);

/* Install one of the two fatal error handlers (0C075560 when on, 0C0754D0 when off). */
void FUN_0c075570(int on)
{
    kmfSetFatalErrorCallback(on ? (void *)0x0C075560 : (void *)0x0C0754D0);
}

extern void set_file_info(unsigned char *dir, void *info);
extern int search_fat(int drive, int value);
extern int check_fat_xross(int drive, int block);
extern int set_fat(int drive, int block, int value);

/* The drive's executable (directory entry type 0xCC): fills info and returns its index, or -1. */
int search_exec_file(int drive, void *info)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    unsigned char *p = *(unsigned char **)(rec + 40);
    int i;

    for (i = 0; i < *(int *)(*(int *)(rec + 28) + 48); i++) {
        if (*p == 0xCC) {
            set_file_info(p, info);
            return i;
        }
        p += 32;
    }
    return -1;
}

/* A free FAT block whose chain does not cross a used one; each crossing block found on the way is
   marked 0xFFFA. -1 when none is left. */
int search_fat_free_xross(int drive)
{
    int b;

    for (;;) {
        b = search_fat(drive, 0xFFFC);
        if (b < 0) {
            return -1;
        }
        if (check_fat_xross(drive, b) >= 0) {
            return b;
        }
        set_fat(drive, b, 0xFFFA);
    }
}
