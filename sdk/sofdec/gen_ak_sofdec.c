/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int Act_Execute(void);
int CheckKyakuArea(int, int);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int ExecAdvCamera(void);
int execPlayerADV(void);
int execPlayer(void);
int gdc_CourseBlockReadNext(void);
int gdc_CourseTexFree(void);
int pfSetFilterMode(int);
int ReturnBreakPinNum(void);
int SetWindow(int, int);
int GetNowLanguage(int);
int convergeRot(void);
int getKyakuOffFlag(void);
int gdc_CourseAdvLoadSub(int, int);
int pedIsSpecialModel(int);
int End_Time_Bonus(void);
int Put_Time_Bonus_Sprite(int, float);
int nd_SprPut(int, int, float, float);
int Result_Face_Put(void);
int Result_Name_Put(void);
int Result_Customer_Count_Put(void);
int Start_Excellent(void);
int Start_Fault(int);
int Exec_Fog(void);
int Chat_Geton(void);
int psgAllocIpBuff(int);
int nlCalcVector(int, int);
int nlObjPutFreeTextureOnce(void);
int nlsndSeqRequest(void);
typedef struct {
    int w[36];
} Block144;

typedef struct {
    int w[239];
} Block956;
int memcmp(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiFBallocQueue(int, int, int, int);
int kmytex_FBAllocEntry(void);
int kmyConvertAddress32to64(int);
int kmtex_ReloadPalettized4MM(int);
int kmtex_ReloadPalettized8MM(int);
int kmtex_ReloadTwiddledMM(int);
int kmtex_ReloadVQMM(int);
int gdFsToUpper(int);
int syTmrGetCount(void);
int syTmrDiffCount(int, int);
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
int GetMenuMode(int);
int GoiTool(int);
int KillColliObj(int);
int PutCourse(void);
int PutStringFixPfont(int, int, float, float, float, float);
int ResetFadeColor(void);
int SetAudio(void);
int SetColliObj(int, int);
int SetSEvolume(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int camUpdate(int);
int crowdSpawn(void);
int drvJolt(void);
int entryCarPut(int);
int exec_CarMain(void);
int exec_KyakuMain(void);
int extRand(void);
int gdFsStopRd(int);
int gdc_FileLoad(int, int, int);
int gdc_SpriteFreeMenu(void);
float getNearLineIndex(int, int, int, int, int);
int get_data(int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFBfree(int);
int kmiFBreset(void);
int kmiGetProfileInt(int, int);
int kmiWaitForFinishDMA(int);
int kmiWriteRegister(int, int);
int kmyConvertAddress64to32(int);
int make_header(int, int);
int memcpy2(int, int, int);
int menuPutSprites(int, int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlExecuteEvent(void);
float nlFloor(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSpriteFreeTexture(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int nlsndIcsControl(int, int, int);
int nlsndSystemControl(int, int, int);
int pedPickIdle(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int replay(int);
int trafficControl(int);
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


void ADXSTM_Stop(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        if (t1 != 0) {
            t2 = syTmrGetCount();
            t3 = *(int *)((a4 + 0x8));
            gdFsStopRd(t3);
            t5 = syTmrGetCount();
            t6 = syTmrDiffCount(t2, t5);
            *(unsigned int *)0xC178638 = t6;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
        }
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
}


int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}


