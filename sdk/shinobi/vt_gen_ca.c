/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
extern int _builtin_tas(char *);
int gdFsGetStatG(void);
int hwInit(void);
int kdDevGetTimerInfo(int, int);
int kdGetDeviceInfo(int);
int kdGetGunLatchedPort(void);
int kdRecvFrame(void);
int kdSetDriverMode(int, int);
int kdSetHandler(int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_bwrite(int, ...);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_end_ns(void);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getminfo_ns(int, int, int);
int mpdrv_set_setcond_ns(int, int, int, int);
int mpdrv_set_transagain_ns(int);
int mpdrv_setcmd(int, int, int, int, int, int);
int ovInit(int, int);
int pdVibMxIsReady(int);
int pdVibStart(int, int, int);
int pdVmsLcdBltAsm(int, int);
int pdVmsLcdBltAsmFlipH(int, int);
int pdVmsLcdBltAsmFlipHV(int, int);
int pdVmsLcdBltAsmFlipV(int, int);
int syCacheInit_P2_(int);
int syChainAddHandler(int, int, int, int);
int syG2Write(int, int, int, int, int, int);
int syIntInit(int, int);
int syRtcDateToCount(int, int);
int syRtcGetAndCheckCount(int);
int syRtcGetCountForce(void);
int sySqInit(void);
int syTmrInit(void);
int vmsfs_c_getstate(int);
int vmsfs_fsetparam(int, int, int);
int vmsio_ismount(int);
int buSetFileParam(int a4, int a5, int a6);
int kdSetBlockWrite(Stk4 s);
int fmcalccrc(int a4, int a5, int a6, int a7);
int syRtcCompareDate(int a4, int a5);
int vmsfs_ismount(int a4);
int mpdrv_set_bread(int a4, int a5, int a6, int a7, int a8);
int kdDevGetFD(int a4, int a5);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int vmsfs_setdevicetype(int a4);
int search_free_dir(int a4);
int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8);
int mpdrv_set_dreq(int a4);
int mpdrv_set_getcond(int a4, int a5);
int mpdrv_set_dreset(int a4);
int mpdrv_set_dkill(int a4);
int mpdrv_set_allstatreq(int a4);
int mpdrv_set_getminfo(int a4, int a5, int a6);
int mpdrv_set_arctrl(int a4, int a5);
int mpdrv_set_ft4ctrl(int a4, int a5);
int mpdrv_set_transagain(int a4);
int mpdrv_set_setcond(int a4, int a5, int a6, int a7);
int mpdrv_set_end(void);
int syRtcInit(void);
int syRtcExecServer(void);
int syHwInit(void);
int pdVmsLcdBlt(int a4, int a5, int a6);
int vmsfs_unmount(int a4);
int gdFsGetDrvStatG(void);
int ovGetLibTbl(int a4);
int pdGunLeave(void);
int syRtcAicaSetDateHi(int a4);
int buGetLastError(int a4);
int pdVibMxStart(int a4, int a5);
int vmsfs_c_execcallback(int a4, int a5, int a6);
void syMmuDeleteEntry(int a4, int a5, int a6);
int gdFsExecServerG(void);
int pdGunEnter(int a4);
int kdSetCallback(int a4, int a5, int a6);
void vmsfs_c_setvolume(int a4, int a5);
void kmytex_FBEnQueueTop(int a4, int a5, int a6, int a7);
int pdVibMxStop(int a4);
int vmsfs_c_progress(int a4);
int pdTmrIsReady(int a4);
int syRtcDbgWriteLog(int a4, int a5, int a6);
int get_fat(int a4, int a5);
int vmsfs_memcmp(int a4, int a5);
int gdFsFinish(void);
int pdGunGetLatchedPort(void);
int vmsfs_c_setcompletecallback(int a4);
int vmsfs_c_setprogresscallback(int a4);
int vmsfs_c_setcallbackparam(int a4);


int buSetFileParam(int a4, int a5, int a6)
{
    int t2;
    int stk[5];
    int R1004;

    R1004 = *(int *)((int)stk + 4);

    R1004 = a4;
    *(unsigned short *)(((int)stk + 8)) = a5;
    *(unsigned char *)(((int)stk + 12)) = a6;
    t2 = vmsfs_c_getstate((*(int *)(((R1004) + 0x28))));
    if (t2 != 0) {
        return 0xFFFFFFFF;
    }
    return vmsfs_fsetparam((R1004), (*(short *)(((int)stk + 8))), (*(signed char *)(((int)stk + 12))));
}


int syRtcCompareDate(int a4, int a5)
{
    int t4;
    int t10;
    int t7;
    int stk[5];

    *(unsigned int *)(((int)stk + 12)) = a5;
    syRtcDateToCount(a4, ((int)stk + 8));
    syRtcDateToCount((*(int *)(((int)stk + 12))), ((int)stk + 4));
    t4 = *(int *)(((int)stk + 4));
    t10 = 0x0;
    if ((*(int *)(((int)stk + 8))) == t4) {
    } else {
        t7 = 0xFFFFFFFF;
        if ((unsigned int)(*(int *)(((int)stk + 8))) > (unsigned int)t4) {
            t7 = 0x1;
        }
        t10 = t7;
    }
    return t10;
}


int vmsfs_ismount(int a4)
{
    int t0;
    int t1;

    t0 = vmsio_ismount(a4);
    if ((t0 != 0) && (t1 = *(signed char *)((((a4 * 0x148) + 0x0C2EE990) + 0x8)), t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}


int syHwInit(void)
{
    hwInit();
    syIntInit((*(int *)0x0C175060), (*(int *)0x0C177A9C));
    sySqInit();
    syCacheInit_P2_((*(int *)0x0C17505C));
    return syTmrInit();
}


int pdVmsLcdBlt(int a4, int a5, int a6)
{
    if (a6 != 1) {
        if (a6 != 2) {
            if (a6 != 3) {
                return pdVmsLcdBltAsm(a4, a5);
            }
            return pdVmsLcdBltAsmFlipHV(a4, a5);
        }
        return pdVmsLcdBltAsmFlipV(a4, a5);
    }
    return pdVmsLcdBltAsmFlipH(a4, a5);
}


int vmsfs_unmount(int a4)
{
    if ((*(signed char *)((((a4 * 0x148) + 0x0C2EE990) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0x9)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0x8)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x148) + 0x0C2EE990) + 0xC)) = 0x0;
    *(unsigned int *)((((a4 * 0x148) + 0x0C2EE990) + 0x4)) = 0x0;
    return 0x0;
}


int ovGetLibTbl(int a4)
{
    int t7;

    if ((*(int *)0x8C00FFF0) == 0) {
        ovInit(0x8C00FC00, 0x78);
    }
    t7 = *(int *)0x8C00FFF0;
    *(unsigned int *)((a4 + 0x0)) = (*(int *)0x8C00FFF4);
    return t7;
}


int vmsfs_c_execcallback(int a4, int a5, int a6)
{
    int t1;
    int t2;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x0C2EC578) + 0x74))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x0C2EC578) + 0x74));
        t2 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x0C2EC578) + 0x7C));
        return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, t2);
    }
    return 0x74;
}


void syMmuDeleteEntry(int a4, int a5, int a6)
{
    if ((unsigned int)a4 < (unsigned int)0x40) {
        *(unsigned int *)(((0xF6000000 + (a4 << 8)) + 0x0)) = ((*(int *)((((a4 << 8) + 0xF6000000) + 0x0))) & 0xFFFFFEFF);
        *(unsigned int *)((((a4 << 8) + 0xF7000000) + 0x0)) = 0x0;
    }
}


int kdSetCallback(int a4, int a5, int a6)
{
    int t1;

    t1 = *(int *)(((*(int *)0x0C2FA538) + 0xFC0));
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x0C2EC294) + 0x8)) = a5;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x0C2EC294) + 0x4)) = a6;
    *(unsigned int *)((((((((a4 << 1) + t1) << 1) + ((a4 << 1) + t1)) << 2) + 0x0C2EC294) + 0x0)) = a4;
    return 0x0;
}


int vmsfs_c_progress(int a4)
{
    int t1;

    if ((*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x0C2EC578) + 0x78))) != 0) {
        t1 = *(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0x0C2EC578) + 0x78));
        return ((int (*)(int))(t1))(a4);
    }
    return 0x78;
}


int syRtcDbgWriteLog(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;

    t0 = *(int *)0x0C2B936C;
    if (((t0 & 8) != 0) && (t1 = *(int *)0x0C2B937C, t2 = *(int *)0x0C2B9378, (unsigned int)t2 < (unsigned int)t1)) {
        *(unsigned int *)((t2 + 0x0)) = a4;
        *(unsigned int *)0x0C2B9378 = ((*(int *)0x0C2B9378) + 0x4);
    }
    return t0;
}


int gdFsFinish(void)
{
    int t0;
    int t2;
    int t3;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t2 = ((int (*)(void))((*(int *)((t0 + 0x14)))))();
        *(unsigned int *)0x0C177A98 = 0x0;
        t3 = t2;
    }
    return t3;
}


int mpdrv_set_getlerr_ns(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];

    *(unsigned int *)((((int)stk + 12) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 12) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    return (mpdrv_setcmd(a4, 0xD, ((int)stk + 12), 0x2, 0x0, 0x0));
}
