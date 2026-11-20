/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_SetPlaySw(void);
int ADXRNA_SetTransSw(void);
int ADXSJD_Stop(int);
int ADXSTM_Close(int);
int ADXSTM_Seek(int, int);
int ADXSTM_Stop(int);
int CheckColliWall(int, float);
int HomingAngle1(int, int, float);
int colliObjPairHit(int, int, int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiViewMatrix(void);
int nlQuickInvertMatrix(void);
int nlAddVector3op(int, int, int);
float nlScalor2(int);
float nlUnitVectorsd(int, int);
int nlsndG2DmaRequest(int);
int crcchk(int, int);
int bcd2bin(int);
int bcdtime2fad(int);
int ADXSTMF_Create(int, int, int, int);
int IsBoyFriend(int, int);
int ResetFadeColor(void);
int MultiRot4Vec(int);
int SetSpark(int, int, int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
int colliBoxAhead(int, int, int);
int gdFsOpen(void);
int gdFsOpenRange(void);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmCreateTextureSurface(void);
int kmSetBorderColor(int, int, int, int, int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_insertnop(int);
int mpdrv_set_arctrl_ns(int);
int mpdrv_set_bwrite_ns(int);
int mpdrv_set_getcond_ns(int);
int mpdrv_set_setcond_ns(int);
int mpdrv_v2p(int);
int mwRnaErrCallFunc(int, ...);
int nlAddVector(int, int);
int nlArcTan2(float, float);
float nlCeil(float);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
float nlFloor(float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
int nlSetScaleFactor(float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nlUnitVector(int);
int strlen(int);
int strncpy(int, int, int);
int syChainAddHandler(int, int, int, int);
int syG2DmaReset(int);
int syG2DmaSetProtect(int, int);
int syMmuAddEntry(int, int, int);
int mwRnaGetOutPan(int a4, int a5);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);
int ADXT_Stop(int a4);
int kdSetSetConditionEx(int a4, int a5, int a6, int a7, int a8);
int kdSetGetConditionEx(int a4, int a5, int a6);
int kdSetARControlEx(int a4, int a5, int a6);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int sySqInit(void);
int setBorderColor(int a4);
int syG2SysInit(void);
int BigOneFollowTaxi(float f4);
int nlRenderTextureSet_Sub(int a4, int a5, int a6, int a7);
int psgPutMarker(int a4, int a5);
int mpdrv_setcmd_force(int a4, int a5, int a6, int a7, int a8, int a9);
int mpdrv_setcmd(int a4, int a5, int a6, int a7, int a8, int a9);
int gdDecSubcode(int a4, int a5);
int colliBoxBox(int a4, int a5);
int ConvertSwitch(int a4);
struct o10C_uint { char p[0x10C]; unsigned int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };


int mwRnaGetOutPan(int a4, int a5)
{
    int t1;

    if (a4 == 0) {
        mwRnaErrCallFunc(0xC176680);
        return 0xFFFFFFFF;
    }
    t1 = *(int *)(((a4 + 0x64) + (a5 << 2)));
    return t1;
}


/* manual: kmSetBorderColor reads its colour from the stack (its fifth argument), and the caller also leaves it in r4; the generated form passed
   it only in r4, so the border register took a stack leftover. */


