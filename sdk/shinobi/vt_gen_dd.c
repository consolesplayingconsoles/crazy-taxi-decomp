/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_dd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
float cos(float);
int gdFsLoadDir(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmSetCullingRegister(float);
int kmtex_CheckTextureFormat(int, int, int, int);
int kmtex_ConfirmSmallVQ(int);
int kmyAllocateArea(int, int, int);
int kmyAllocateSmallVQArea(int, int, int);
int kmyCopyToFrameBuffer(int, int, int);
int kmyGetBGPlaneBase(int, int);
int kmyRequestCallback(int);
int kmySetBGPlane(int);
int kmySetBackGroundDepth(int, float);
int kmySetCheapShadowMode(int, int);
int kmySetColorClampMAX(int);
int kmySetColorClampMIN(int);
int kmySetPunchThroughThreshold(int);
int kmySetSkipCount(int, int);
int kmySetStrideWidth(int);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getlerr(int, int, int, int, int);
int mpdrv_set_getminfo_ns(int, int, int);
int nlCalcVector(int, int);
int nlMakeProjConvMat(int);
int nlScaleUnitVector(int, int, float);
int nlSetPixelClipping(float, float, float, float);
int nlTransposeMatrix(void);
int nlSetWindowSize(float f4, float f5, float f6, float f7);
int kmiSetupRender(int a4, int a5);
int kmCreateTextureSurface(int a4, int a5, int a6, int a7);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);
int kmyInitializeBGPlane(int a4);
int kdSetDeviceRequestEx(int a4, int a5);
int kdSetDeviceKillEx(int a4, int a5);
int kdSetAllStatusRequestEx(int a4, int a5);
int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7);
int kdSetFT4ControlEx(int a4, int a5, int a6);
int mpdrv_frame_recv_pre(void);
int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int nlInvLightVector(void);
int kdSetGetLastError(int a4, int a5, int a6, int a7, int a8);
int gdFsChangeDir(void);


int kdSetGetMediaInfoEx(int a4, int a5, int a6, int a7)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x0C1701BC)) == 0) {
        mpdrv_dpf(0x0C176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getminfo_ns(a4, a5, a6);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a7, t2);
    }
    *(unsigned char *)(((*(int *)0x0C1701BC) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x0C2FA538) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}


int kdSetFT4ControlEx(int a4, int a5, int a6)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x0C1701BC)) == 0) {
        mpdrv_dpf(0x0C176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_ft4ctrl_ns(a4, a5);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a6, t2);
    }
    *(unsigned char *)(((*(int *)0x0C1701BC) + 0x0)) = 0x0;
    if ((*(int *)(((*(int *)0x0C2FA538) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t2;
}


int mpdrv_frame_recv_pre(void)
{
    int t0;

    t0 = *(int *)0x0C2FA538;
    if ((*(int *)((t0 + 0xFC0))) != 0) {
        return 0xFFFFFFFD;
    }
    if (((*(int *)(((*(int *)((t0 + 0x10F4))) + 0x18))) & 1) != 0) {
        return 0xFFFFFFFF;
    }
    if (_builtin_tas((char *)(*(int *)0x0C1701BC)) == 0) {
        mpdrv_dpf(0x8C20AFC4);
        return 0xFFFFFFFE;
    }
    return 0x0;
}


int mpdrv_set_bwrite(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x0C1701BC)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    *(unsigned char *)(((*(int *)0x0C1701BC) + 0x0)) = 0x0;
    return t2;
}
