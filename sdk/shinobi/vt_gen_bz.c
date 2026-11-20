/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buFbrSleepFiber(int, int, int, int, float, float, float, float, float, float, float, float);
int gdFsInitOvl(void);
int gdFsLoadDirG(int, int);
int gdFsOpenG(int, int);
int kdGetDriverMode(int, int, int, int);
int kdGetGunPosition(int, int);
int kdSendFrame(void);
int memmove(int, int, int);
int mpdrv_get_device(int);
int mpdrv_get_portstatus(int);
int mpdrv_get_version(int, int);
int mpdrv_hreset(int);
int mpdrv_stat(int, int);
int pdVibIsReady(int);
int syChainDeleteHandler(int);
int syChainInit(void);
int syG2SysInit(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_write_retry(int, int, int);
int gdFsGetFileSize(int a4, int a5);
int gdFsGetFileSctSize(int a4, int a5);
int gdFsGetFileFad(int a4, int a5);
int vmsfs_c_settime(int a4, int a5);
int direntry_dirty(int a4, int a5);
void ovLockCs(int a4);
int gdFsOpenFast(void);
int gdFsGetToc(void);
int gdFsReqDrvStat(void);
void gdFsMemcpy(int a4, int a5, int a6);
int gdFsGetStat(int a4);
int read_sys(int a4);
int write_sys(int a4);
void ovUnlockCs(int a4);
int gdFsReinit(void);
int gdFsCreateHn(void);
int gdFsLoadDir(void);
int gdFsSetDir(void);
int gdFsGetDirInfo(void);
int gdFsGetWorkHn(void);
int gdFsGetSysHn(void);
void gdFsExecServer(void);
void gdFsEntryErrFuncAll(void);
int gdFsTell(int a4);
int gdFsGetNumRd(int a4);
int mpdrv_memset_l(int a4, int a5, int a6);
int syRtcDbgSetLogAddr(int a4, int a5);
int mpdrv_set_end_ns(void);
int syCblCheckCable(void);
int mpdrv_get_deviceinfo(int a4);
int syHwInit2(void);
int vmsfs_c_getstate(int a4);
void vmsfs_c_setfunc(int a4, int a5);
int mpdrv_recognize(int a4);
int mpdrv_get_timeout(void);
int mpdrv_ischanged(int a4);
int mpdrv_optimize(int a4);
int pdGetOptimize(int a4, int a5, int a6, int a7);
int pdGunGetFlashColor(int a4, int a5, int a6, int a7);
int syRtcFinish(void);
int kdGetDeviceInfo(int a4);
int kdGetPortStatus(int a4);
int mpdrv_swapmode(int a4);
int pdGetPeripheral(int a4);
int gdFsCreateDirhn(int a4, int a5);
int kdVbInHandler(void);
int syCblCheckCableType(void);
int mpdrv_timeout(int a4);
void ovInit(int a4, int a5);
int pdGetPeripheralError(int a4);
void pdSetThreshold(int a4, int a5);
int mpdrv_get_swapmode(void);
int mpdrv_get_nopcount(void);
int mpdrv_get_speed(void);
int mpdrv_debugmode(int a4);
int mpdrv_get_dreqcount(void);
int mpdrv_get_optimize(void);
int mpdrv_rootplay(int a4);
int mpdrv_get_rootplay(void);
int mpdrv_autoflash(int a4);
int mpdrv_get_autoflash(void);
int gdFsGetGlobalErrG(void);
int gdFsGetWorkHnG(void);
int gdFsGetSysHnG(void);
int kdDmaEndHandler1(void);
void kdSetGunTrigger(int a4);
int gdFsInit(void);
int pdGetMode(int a4, int a5, int a6, int a7);
int pdGunCheck(int a4, int a5, int a6, int a7);
int pdGunGetPosition(int a4, int a5);
void syRtcSetServerMode(int a4);
int syRtcGetStat(void);
int pdVibMxIsReady(int a4);
int kdGetStatus(int a4, int a5);
int kdGetVersion(int a4, int a5);
int kdIsChanged(int a4);
int kdGetSystemInfo(void);
int kdRecognizeChanged(int a4);
int kdGetGunLatchedPort(void);
int mpdrv_v2p(int a4);
void ovFinish(void);
int gdFsOpenFastG(int a4, int a5);
int gdFsLoadDirFastG(int a4, int a5);
int vmsfs_stat(void);
int check_isopen(void);
int mpdrv_set_hreset_ns(int a4);
int mpdrv_p2v(int a4);
void vmsio_exit(void);
int buFbrSleepVFiber(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);


int gdFsGetFileSize(int handleAddress, int fileByteCountAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((fileByteCountAddress + 0x0)) = (*(int *)((handleAddress + 0xC)));
        return 0x1;
    }
    return 0x0;
}


int gdFsGetFileSctSize(int handleAddress, int sectorCountAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((sectorCountAddress + 0x0)) = (*(int *)((handleAddress + 0x10)));
        return 0x1;
    }
    return 0x0;
}


int gdFsGetFileFad(int handleAddress, int startFadAddress)
{
    if (handleAddress != 0) {
        if ((*(short *)((handleAddress + 0x4C))) == 0) {
            return 0x0;
        }
        *(unsigned int *)((startFadAddress + 0x0)) = (*(int *)((handleAddress + 0x8)));
        return 0x1;
    }
    return 0x0;
}


int direntry_dirty(int a4, int a5)
{
    *(unsigned char *)(((((int)a5 >> 4) + (((a4 * 0x148) + 0x0C2EE990) + 0x48)) + 0x0)) = 0x1;
    return (((a4 * 0x148) + 0x0C2EE990) + 0x48);
}


int gdFsOpenFast(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x40));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsGetToc(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x50));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsReinit(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x10));
        return ((int (*)(void))(t1))();
    }
    return 0xFFFFFFFF;
}


int gdFsCreateHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x38));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsSetDir(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x28));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsGetWorkHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x30));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int gdFsGetSysHn(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x0C177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x34));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}


int mpdrv_set_end_ns(void)
{
    int t1;

    t1 = *(int *)(((*(int *)0x0C2FA538) + 0xFCC));
    *(unsigned int *)((t1 + 0x0)) = ((*(int *)((t1 + 0x0))) | 0x80000000);
    return 0x0;
}


int mpdrv_get_deviceinfo(int a4)
{
    return (((*(int *)0x0C2FA538) + 0x44C) + (a4 * 0x78));
}


int mpdrv_recognize(int a4)
{
    *(unsigned char *)(((mpdrv_get_device(a4)) + 0xD)) = 0x1;
    return 0x1;
}


int mpdrv_get_timeout(void)
{
    return (unsigned short)(short)((unsigned int)(*(int *)((0x10C0 + (*(int *)0x0C2FA538)))) >> 16);
}


int mpdrv_ischanged(int a4)
{
    return (unsigned char)(*(signed char *)(((mpdrv_get_device(a4)) + 0xC)));
}


int mpdrv_optimize(int a4)
{
    *(unsigned int *)(((*(int *)0x0C2FA538) + 0x10E0)) = a4;
    *(unsigned int *)(((*(int *)0x0C2FA538) + 0x10E4)) = a4;
    return 0x10E4;
}


int mpdrv_swapmode(int a4)
{
    *(unsigned int *)(((*(int *)0x0C2FA538) + 0x10C4)) = (a4 & 0x1);
    return 0x10C4;
}


int pdGetPeripheral(int a4)
{
    return ((a4 * 0x34) + 0x0C2B8DA8);
}


int mpdrv_timeout(int a4)
{
    *(unsigned int *)(((*(int *)0x0C2FA538) + 0x10C0)) = (a4 << 16);
    return 0x10C0;
}


int pdGetPeripheralError(int a4)
{
    return (*(int *)((0x0C2B9288 + (a4 << 2))));
}


int gdFsGetGlobalErrG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x30)));
}


int gdFsGetWorkHnG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x1C)));
}


int gdFsGetSysHnG(void)
{
    return (*(int *)(((*(int *)0x8C20C204) + 0x14)));
}


int mpdrv_v2p(int a4)
{
    return (0xFFFFFFF & a4);
}


int mpdrv_p2v(int a4)
{
    return a4;
}
