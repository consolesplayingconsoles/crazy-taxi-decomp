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


