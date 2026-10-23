/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFBallocSub(int, int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int kmiMIPallocSub(int, int, int);
typedef struct {
    int w[63];
} Block252;

int kmiSetVideoTimings(int a, int b, int c, int d, Block252 v);
int kmiCopyToFrameBuffer(int, int, int, int);
int vmsfs_c_getstate(int, int, int, int);
int vmsfs_c_setfname(int, int, int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_c_settime(int, int);

void buSaveFile(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6, a7);
    if (t0 == 0) {
        vmsfs_c_setfunc(a4, 0xC);
        vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, a9);
        vmsfs_c_setfname(a4, a5, a5);
        vmsfs_c_settime(a4, a8);
    }
}

void buSaveExecFile(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;

    t0 = vmsfs_c_getstate(a4, a5, a6, a7);
    if (t0 == 0) {
        vmsfs_c_setfunc(a4, 0xD);
        vmsfs_c_setparam(a4, a4, a5, a6, a7, a8, a9);
        vmsfs_c_setfname(a4, a5, a5);
        vmsfs_c_settime(a4, a8);
    }
}

void kmiMIPalloc(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int stk[18];

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t2 = kmiMIPallocSub(0x0, t1, a5);
    t5 = t2;
    if (t2 == 0) {
        t3 = kmiMIPallocSub(0x1, t1, a5);
        t5 = t3;
    }
    if (t5 != 0) {
        t6 = *(int *)((t5 + 0xC));
        *(unsigned int *)((a5 + 0x1C)) = t6;
        *(unsigned int *)((t5 + 0x14)) = a5;
        t7 = *(short *)((t5 + 0x0));
        *(unsigned short *)((t5 + 0x0)) = (t7 | 0x4);
    } else {
        t8 = kmiFBallocSub(t1, a5);
        if (t8 != -1) {
            t9 = kmytex_ABSalloc(0x0, t8, t1, a5, 0x1, 0x1);
            if (t9 == 0) {
                t10 = *(int *)0xC177FB0;
                kmytex_ABSalloc(0x1, (t10 + t8), t1, (((int)stk + 4) + 0x8), 0x1, 0x0);
            }
        }
    }
}

void kmLoadRectangleTexturePart(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)((a4 + 0x18));
    if ((0x4 & t0) == 0) {
        if ((0x1 & t0) == 0) {
            if ((0x8 & t0) == 0) {
                if ((0x20 & t0) == 0) {
                    t1 = *(int *)((a4 + 0xC));
                    t2 = *(int *)((a4 + 0x1C));
                    t3 = ((((unsigned int)((a11 * (a12 << 1)) + (a10 << 1)) >> 2) << 2) + a5);
                    t5 = (a12 << 1);
                    if (a12 == 0) {
                        t3 = a5;
                        t5 = (a6 << 1);
                    }
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t6 = 0x0;
                        t7 = t3;
                        t8 = (((a9 * (t1 << 1)) + (a8 << 1)) + t2);
                        do {
                            kmiCopyToFrameBuffer(t8, t7, (a6 << 1), t1);
                            t6 = (t6 + 0x1);
                            t8 = (t8 + (t1 << 1));
                            t7 = (t7 + (((unsigned int)t5 >> 2) << 2));
                        } while ((unsigned int)t6 < (unsigned int)a7);
                    }
                }
            }
        }
    }
}

void kmiInitVGA(void)
{
    int t0;
    int t2;
    int t3;
    int t4;
    Block252 v;

    *(unsigned int *)((((int)&v) + 0x8)) = 0x359;
    *(unsigned int *)((((int)&v) + 0x14)) = 0x20C;
    *(unsigned int *)((((int)&v) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)&v) + 0x4)) = 0x345;
    *(unsigned int *)((((int)&v) + 0xC)) = 0x28;
    *(unsigned int *)((((int)&v) + 0x10)) = 0x208;
    *(unsigned int *)((((int)&v) + 0x18)) = 0x3F;
    *(unsigned int *)((((int)&v) + 0x1C)) = 0x3;
    *(unsigned int *)((((int)&v) + 0x20)) = 0x319;
    *(unsigned int *)((((int)&v) + 0x24)) = 0xF;
    *(unsigned int *)((((int)&v) + 0x74)) = 0x208;
    *(unsigned int *)((((int)&v) + 0x78)) = 0x15;
    *(unsigned int *)((((int)&v) + 0x34)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x38)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x3C)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x40)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x44)) = 0x0;
    t0 = *(int *)0xC2EA680;
    if (t0 == 6) {
        *(unsigned int *)((((int)&v) + 0x70)) = 0x16;
    } else {
        *(unsigned int *)((((int)&v) + 0x70)) = 0x1F;
    }
    *(unsigned int *)((((int)&v) + 0x6C)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x28)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x2C)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x30)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x48)) = 0x1;
    *(unsigned int *)((((int)&v) + 0x4C)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x50)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x54)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x58)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x5C)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x68)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x60)) = 0x0;
    *(unsigned int *)((((int)&v) + 0x64)) = 0x1E0;
    *(unsigned int *)((((int)&v) + 0xF8)) = 0x90;
    *(unsigned int *)((((int)&v) + 0xF0)) = 0x23;
    *(unsigned int *)((((int)&v) + 0xF4)) = 0x23;
    *(unsigned int *)((((int)&v) + 0xF8)) = 0xA8;
    *(unsigned int *)((((int)&v) + 0xF0)) = 0x28;
    *(unsigned int *)((((int)&v) + 0xF4)) = 0x28;
    *(unsigned int *)0xC2EA9A0 = 0x1E0;
    t2 = *(int *)0xC2EA9A0;
    t3 = *(int *)((((int)&v) + 0xC));
    *(unsigned int *)0xC2EA998 = (t3 + t2);
    t4 = *(int *)((((int)&v) + 0xC));
    *(unsigned int *)0xC2EA99C = t4;
    kmiSetVideoTimings(0x1E0, 0x28, 0x23, 0, v);
}
