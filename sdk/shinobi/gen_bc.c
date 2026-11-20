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


int sySqInit(void)
{
    int t0;
    int t12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    t0 = *(int *)0xFF000010;
    t12 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t1 = (t0 & 0x1);
        t2 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        while ((unsigned int)(0xC000000 + t4) < (unsigned int)0xD000000) {
            t5 = syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4);
            t1 = t5;
            t2 = (0xC2EBF10 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t1;
        }
        t6 = t1;
        t7 = t2;
        t8 = 0x0;
        t9 = 0x0;
        while ((unsigned int)(0x10000000 + t9) < (unsigned int)0x10800000) {
            t10 = syMmuAddEntry((0x10000000 + t9), (0xE1000000 + t9), 0x4);
            t6 = t10;
            t7 = (0xC2EBF50 + (t8 << 2));
            t8 = (t8 + 0x1);
            t9 = (t9 + 0x100000);
            *(unsigned int *)((t7 + 0x0)) = t6;
        }
        t11 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0xC2EBF70 = t11;
        t12 = t11;
    }
    return t12;
}

/* manual: kmSetBorderColor reads its colour from the stack (its fifth argument), and the caller also leaves it in r4; the generated form passed
   it only in r4, so the border register took a stack leftover. */


