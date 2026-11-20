/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern void _builtin_st_ext(float (*)[4]);
int buIsFormat(int);
int direntry(int, int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int get_vmstime(int, int);
int kmiFLWCTRLRotateReadyQueue(int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyRequestCallback(int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDMAValue(int, int);
int kmySetTADMA(int, int, int, int, int, int);
int kmyZeroMemory(int, int);
int kmyiCheckNativeHandle(int);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int set_file_info(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int stageTexLoad(void);
int kmiFLWCTRLLaunchPacket(int a4, int a5, int a6, int a7);
int nlsndStreamGetParam(int a4, int a5, int a6, int a7);
int kmyGetDisplayParametersInfo(int a4, int a5, int a6);
int kmyGetDMAHANDLE(int a4);
int kmySetVirticalFilterMode(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int nlPushMatrix(int a4);
int nlSetIntrPriority(int a4, int a5);
void nlLoadMatrix33on44(int a4);
int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8);


int mwlRnaStartCopy(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;

    if ((int)a8 <= 0) {
        return 0x0;
    }
    t0 = *(int *)((a4 + 0x38));
    t3 = ((int (*)(int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x4C)))))(t0, a5, a6, a7, a8);
    *(unsigned int *)((a4 + 0x5C)) = 0x1;
    return a8;
}
