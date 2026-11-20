/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BCDtoDEC(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int cmp_fname(int, int);
int direntry(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetSearchID(int);
int gdFsMemcpy(int, int, int);
int gdFsSetGlobalErrG(int);
int gdFsStrcmpi(int, int);
int get_fat(int, int, int, int);
int kdDevGetFD(int, int);
int kdExecGun(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kdRecvFrame(void);
int kdSetBlockWrite(int, ...);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int kmyRegisterBGPlane(int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_exit(void);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int nlLineSendVertex(int, int, int);
int pdVibMxIsReady(int);
int pdVibSetUnitInfo(int, int, int, int, int, int);
int search_fat_backward(int, int, int, int);
int set_fat(int, int, int);
int syChainDeleteHandler(int);
int syRtcAicaGetCount(int);
int thunk_stringEquals(void);
int vmsfs_c_getstate(int);
int vmsfs_c_setfunc(int, int);
int vmsfs_c_setparam(int, int, int, int, int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_write_retry(int, int, int);
int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5);
int write_fat_1(int a4);
int search_subst_fat_top(int a4);
int set_file_info(int a4, int a5);
int gdFsOpenG(int a4, int a5);
int kmiProcessVertex_00(int a4, int a5, int a6, int a7);
int nlLineSendQuadC(int a4, int a5, int a6, int a7, float f4, float f5);
int vmsfs_c_setfname(int a4, int a5, int a6);
int vmsfs_fread(int a4, int a5, int a6);
int gdFsSearchName(int a4, int a5, int a6);
int search_dir(int a4, int a5, int a6);
int check_fat_all(int a4, int a5, int a6, int a7);
int pdVibEnumUnitCallback(int a4, int a5, int a6, int a7);
int syRtcGetCountForce(void);
int kdDevGetLCDInfo(int a4, int a5);
int vmsfs_write_disk_image(int a4, int a5);
int vmsio_ismount(int a4);
int gdFsSetDirG(int a4);
void kdDmaEndHandler0(int a4, int a5);
int buDefragDisk(int a4, int a5);
void kdExitSystem(void);
int vmsfs_fseek(int a4, int a5, int a6, int a7);
int pdVibMxSetStopTime(int a4, int a5);
int kdDevGetStorageInfo(int a4, int a5);
int check_fat_xross(int a4, int a5);
int gdFsFinishG(void);
int get_vmstime(int a4, int a5);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);
int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9);
int pdTmrSetTimeCallback(int a4, int a5, int a6, int a7);
int pdVmsLcdIsReady(int a4);


int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[16];

    *(unsigned int *)(((int)stk + 4)) = a7;
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)((a5 + 0x0))) + f5);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)((a5 + 0x4))) - f4);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x0)) = ((*(float *)((a5 + 0x0))) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x4)) = ((*(float *)((a5 + 0x4))) + f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0xC) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x0)) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x4)) = (((*(float *)((a6 + 0x4))) - f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x18) + 0x8)) = (*(float *)((a6 + 0x8)));
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x0)) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x4)) = (((*(float *)((a6 + 0x4))) + f4) - f5);
    *(float *)((((((int)stk + 4) + 0x4) + 0x24) + 0x8)) = (*(float *)((a6 + 0x8)));
    return (nlLineSendVertex(a4, (((int)stk + 4) + 0x4), (*(int *)(((int)stk + 4)))));
}


