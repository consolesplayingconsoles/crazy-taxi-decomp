/* Library code: C that behaves like this game's own bytes. */
typedef struct { int w[4]; } Stk4;
typedef struct { int w[6]; } Stk6;
/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int ADXB_GetDecDtLen(int);
int ADXB_GetDecNumSmpl(int);
int ADXB_GetNumChan(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Reset(int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
int buCalcCRC(int, int);
int buIsFormat(int);
int check_isopen(void);
int clear_file(int, int);
int direntry(int, int);
int kmBlankScreen(int);
int kmyGetDMAHANDLE(int);
int kmyGetInterruptLevel(void);
int kmyIsEnabledASyncCopy(void);
int kmyMemCopy(int, int, int);
int kmyQueryFinishDMA(int);
int kmyRequestCallback(int, int, int, int);
int kmyRequestDMA(int);
int kmySetDMACallback(int, int);
int kmySetDisplayBpp(int);
int kmySetTextureDMA(int, int, int, int);
int kmyWaitVBlank(int);
int kmyiGetPALExtRatio(int, int, int, int);
int kmyiSetScreenSize(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int make_header(int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_swaplong(int, int);
int nlCalcPoint(int, int);
int nlCopyMatrix(int, int, float);
int nlGetMatrix(int);
float nlLUDecomp(int, int);
int nlLoadMatrix(int);
int nlLoadMatrix33on44(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int open_file_handle(void);
int search_dir(int, int, int);
int search_free_dir(int);
int set_vmstime(int, int);
extern int sprPutAtAlpha();
float valStepToward(int, int, Stk3, float, float);
int vecAnglesTo(int, int, Stk6);
int vecMake(int, int, int, int, int, float, float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
float nlInvertMatrix(int a4);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int kmyCopyToTexture(int a4, int a5, int a6, int a7);
int buAnalyzeBackupFileImage(int a4, int a5);
void vmsfs_fcreate(int a4, int a5, int a6, int a7);
int kmyGetDefaultFilterMode(int a4, int a5, int a6, int a7);
int mpdrv_make_deviceinfo(int a4, int a5, int a6);
int adxsjd_decexec_end(int a4);
int kmyInitializeJAMMA31KHz(int a4);
int kmSetDisplayMode(int a4, int a5, int a6, int a7);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int kmytex_TXalloc(int a4, int a5, int a6, int a7);
int nldispstripSub(int a4, int a5, int a6);
int modeMarkPut(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int panelTopPut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int hudFramePutWide(int a4, int a5, int a6, int a7, Stk4 p, float f4);
int lightUpdate(int a4, int a5);
int camGetAngles(int a4, int a5, int a6, int a7);





int adxsjd_decexec_end(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t12;
    int t15;
    int t17;
    int t19;
    int t27;
    int t34;
    int t39;
    int t51;
    int t16;
    int t46;
    int t47;
    int t48;
    int stk[15];

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((int)stk + 4)) = (ADXB_GetTotalNumSmpl(t1));
    t3 = ADXB_GetDecDtLen(t1);
    t4 = ADXB_GetDecNumSmpl(t1);
    t5 = *(int *)(((int)stk + 4));
    t6 = *(int *)((a4 + 0x34));
    t7 = (t5 - t6);
    if ((int)t4 < (int)(t5 - t6)) {
        t7 = t4;
    }
    SJ_SplitChunk((a4 + 0x14), t3, (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8));
    t12 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 4) + 0x10));
    t15 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 4) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (t7 << 1);
    t17 = 0x0;
    for (;;) {
        t19 = ADXB_GetNumChan((*(int *)((a4 + 0x4))));
        if ((int)t17 >= (int)t19) {
            break;
        }
        SJ_SplitChunk((((t17 << 2) << 1) + (a4 + 0x1C)), (*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x10), (((int)stk + 4) + 0x8));
        if ((*(int *)((a4 + 0x50))) != 0) {
            t27 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x50)))))((*(int *)((a4 + 0x54))), t17, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))));
        }
        t16 = t17;
        t16 = (t16 << 2);
        *(unsigned int *)(((int)stk + 4)) = t16;
        t16 = (t16 + (a4 + 0xC));
        t16 = (*(int *)((t16 + 0x0)));
        t34 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x20)))))(t16, 0x1, (((int)stk + 4) + 0x10));
        t16 = a4;
        t16 = (t16 + 0xC);
        t16 = (t16 + (*(int *)(((int)stk + 4))));
        t16 = (*(int *)((t16 + 0x0)));
        t39 = ((int (*)(int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x1C)))))(t16, 0x0, (((int)stk + 4) + 0x8));
        t17 = (t17 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t7);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + t7);
    *(unsigned int *)((a4 + 0x40)) = ((*(int *)((a4 + 0x40))) + t7);
    *(unsigned int *)((a4 + 0x44)) = ((*(int *)((a4 + 0x44))) + t3);
    if (((int)(*(int *)((a4 + 0x3C))) >= 0) && ((t46 = *(int *)((a4 + 0x3C)), t47 = *(int *)((a4 + 0x40)), (int)t47 >= (int)t46) && (t48 = *(int *)((a4 + 0x48)), t48 != 0))) {
        t51 = ((int (*)(int))((*(int *)((a4 + 0x48)))))((*(int *)((a4 + 0x4C))));
    }
    return (ADXB_Reset(t1));
}
