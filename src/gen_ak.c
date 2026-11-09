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






























void kmiProcessVertex_00(int a4)
{
    int t0;
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int stk[8];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    t0 = *(int *)((a4 + 0x0));
    R1008 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1012 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1016 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    R1004 = t4;
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    t6 = R1004;
    (((struct o4_uint *)0xC2EA724)->v) = t6;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t7 = R1008;
    t8 = *(int *)((t7 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t8;
    t9 = R1008;
    t10 = *(int *)((t9 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t10;
    t11 = R1008;
    t12 = *(int *)((t11 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t12;
    t13 = R1008;
    t14 = *(int *)((t13 + 0x18));
    (((struct o18_uint *)0xC2EA724)->v) = t14;
    t15 = R1012;
    t16 = *(int *)((t15 + 0x4));
    (((struct o1C_uint *)0xC2EA724)->v) = t16;
    t17 = R1012;
    t18 = *(int *)((t17 + 0x8));
    (((struct o20_uint *)0xC2EA724)->v) = t18;
    t19 = R1012;
    t20 = *(int *)((t19 + 0xC));
    (((struct o24_uint *)0xC2EA724)->v) = t20;
    t21 = R1012;
    t22 = *(int *)((t21 + 0x18));
    (((struct o28_uint *)0xC2EA724)->v) = t22;
    t23 = R1016;
    t24 = *(int *)((t23 + 0x4));
    (((struct o2C_uint *)0xC2EA724)->v) = t24;
    t25 = R1016;
    t26 = *(int *)((t25 + 0x8));
    (((struct o30_uint *)0xC2EA724)->v) = t26;
    t27 = R1016;
    t28 = *(int *)((t27 + 0xC));
    (((struct o34_uint *)0xC2EA724)->v) = t28;
    t29 = R1016;
    t30 = *(int *)((t29 + 0x18));
    (((struct o38_uint *)0xC2EA724)->v) = t30;
    (((struct o0_uint *)0xC2EA81C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    t33 = R1008;
    t34 = *(int *)((t33 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t34;
}

void kmiProcessVertex_01(int a4)
{
    int t0;
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
    int t12;
    int t13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    float u26;
    float u27;
    float u28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    float u36;
    float u37;
    float u38;
    float u39;
    int t40;
    int t42;
    int t43;
    int stk[8];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    t0 = *(int *)((a4 + 0x0));
    R1008 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1012 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1016 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    R1004 = t4;
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    t6 = R1004;
    (((struct o4_uint *)0xC2EA724)->v) = t6;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t7 = R1008;
    t8 = *(int *)((t7 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t8;
    t9 = R1008;
    t10 = *(int *)((t9 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t10;
    t11 = R1008;
    t12 = *(int *)((t11 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t12;
    t13 = R1008;
    u14 = *(float *)(((0x10 + t13) + 0x0));
    u15 = *(float *)(((0x14 + t13) + 0x0));
    u16 = *(float *)(((0x18 + t13) + 0x0));
    u17 = *(float *)(((0x1C + t13) + 0x0));
    (((struct o18_uint *)0xC2EA724)->v) = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u15 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u17 * 255.0f));
    t18 = R1012;
    t19 = *(int *)((t18 + 0x4));
    (((struct o1C_uint *)0xC2EA724)->v) = t19;
    t20 = R1012;
    t21 = *(int *)((t20 + 0x8));
    (((struct o20_uint *)0xC2EA724)->v) = t21;
    t22 = R1012;
    t23 = *(int *)((t22 + 0xC));
    (((struct o24_uint *)0xC2EA724)->v) = t23;
    t24 = R1012;
    u25 = *(float *)(((0x10 + t24) + 0x0));
    u26 = *(float *)(((0x14 + t24) + 0x0));
    u27 = *(float *)(((0x18 + t24) + 0x0));
    u28 = *(float *)(((0x1C + t24) + 0x0));
    (((struct o28_uint *)0xC2EA724)->v) = ((((((int)(u25 * 255.0f) << 16) << 8) | ((int)(u26 * 255.0f) << 16)) | ((int)(u27 * 255.0f) << 8)) | (int)(u28 * 255.0f));
    t29 = R1016;
    t30 = *(int *)((t29 + 0x4));
    (((struct o2C_uint *)0xC2EA724)->v) = t30;
    t31 = R1016;
    t32 = *(int *)((t31 + 0x8));
    (((struct o30_uint *)0xC2EA724)->v) = t32;
    t33 = R1016;
    t34 = *(int *)((t33 + 0xC));
    (((struct o34_uint *)0xC2EA724)->v) = t34;
    t35 = R1016;
    u36 = *(float *)(((0x10 + t35) + 0x0));
    u37 = *(float *)(((0x14 + t35) + 0x0));
    u38 = *(float *)(((0x18 + t35) + 0x0));
    u39 = *(float *)(((0x1C + t35) + 0x0));
    (((struct o38_uint *)0xC2EA724)->v) = ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u37 * 255.0f) << 16)) | ((int)(u38 * 255.0f) << 8)) | (int)(u39 * 255.0f));
    (((struct o0_uint *)0xC2EA81C)->v) = 0x3C;
    t40 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t40, 0x0, 0x0);
    t42 = R1008;
    t43 = *(int *)((t42 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t43;
}

void kmiProcessVertex_09(int a4)
{
    int t0;
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t34;
    int stk[8];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    t0 = *(int *)((a4 + 0x0));
    R1008 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1012 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1016 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    R1004 = t4;
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    t6 = R1004;
    (((struct o4_uint *)0xC2EA724)->v) = t6;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t7 = R1008;
    t8 = *(int *)((t7 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t8;
    t9 = R1008;
    t10 = *(int *)((t9 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t10;
    t11 = R1008;
    t12 = *(int *)((t11 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t12;
    t13 = R1008;
    t14 = *(int *)((t13 + 0x10));
    (((struct o18_uint *)0xC2EA724)->v) = t14;
    t15 = R1012;
    t16 = *(int *)((t15 + 0x4));
    (((struct o1C_uint *)0xC2EA724)->v) = t16;
    t17 = R1012;
    t18 = *(int *)((t17 + 0x8));
    (((struct o20_uint *)0xC2EA724)->v) = t18;
    t19 = R1012;
    t20 = *(int *)((t19 + 0xC));
    (((struct o24_uint *)0xC2EA724)->v) = t20;
    t21 = R1012;
    t22 = *(int *)((t21 + 0x10));
    (((struct o28_uint *)0xC2EA724)->v) = t22;
    t23 = R1016;
    t24 = *(int *)((t23 + 0x4));
    (((struct o2C_uint *)0xC2EA724)->v) = t24;
    t25 = R1016;
    t26 = *(int *)((t25 + 0x8));
    (((struct o30_uint *)0xC2EA724)->v) = t26;
    t27 = R1016;
    t28 = *(int *)((t27 + 0xC));
    (((struct o34_uint *)0xC2EA724)->v) = t28;
    t29 = R1016;
    t30 = *(int *)((t29 + 0x10));
    (((struct o38_uint *)0xC2EA724)->v) = t30;
    (((struct o0_uint *)0xC2EA81C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    t33 = R1008;
    t34 = *(int *)((t33 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t34;
}

void kmiProcessVertex_10(int a4)
{
    int t0;
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
    int t12;
    int t13;
    float u14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    int t31;
    int t33;
    int t34;
    int stk[8];
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    t0 = *(int *)((a4 + 0x0));
    R1008 = t0;
    t1 = *(int *)((a4 + 0x4));
    R1012 = t1;
    t2 = *(int *)((a4 + 0x8));
    R1016 = t2;
    t3 = (((struct o4_int *)0xC2EA81C)->v);
    t4 = (((struct o8_int *)0xC2EA81C)->v);
    R1004 = t4;
    t5 = (((struct oC_int *)0xC2EA81C)->v);
    (((struct o0_uint *)0xC2EA724)->v) = t3;
    t6 = R1004;
    (((struct o4_uint *)0xC2EA724)->v) = t6;
    (((struct o8_uint *)0xC2EA724)->v) = t5;
    t7 = R1008;
    t8 = *(int *)((t7 + 0x4));
    (((struct oC_uint *)0xC2EA724)->v) = t8;
    t9 = R1008;
    t10 = *(int *)((t9 + 0x8));
    (((struct o10_uint *)0xC2EA724)->v) = t10;
    t11 = R1008;
    t12 = *(int *)((t11 + 0xC));
    (((struct o14_uint *)0xC2EA724)->v) = t12;
    t13 = R1008;
    u14 = *(float *)(((0x10 + t13) + 0x0));
    (((struct o18_uint *)0xC2EA724)->v) = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    t15 = R1012;
    t16 = *(int *)((t15 + 0x4));
    (((struct o1C_uint *)0xC2EA724)->v) = t16;
    t17 = R1012;
    t18 = *(int *)((t17 + 0x8));
    (((struct o20_uint *)0xC2EA724)->v) = t18;
    t19 = R1012;
    t20 = *(int *)((t19 + 0xC));
    (((struct o24_uint *)0xC2EA724)->v) = t20;
    t21 = R1012;
    u22 = *(float *)(((0x10 + t21) + 0x0));
    (((struct o28_uint *)0xC2EA724)->v) = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    t23 = R1016;
    t24 = *(int *)((t23 + 0x4));
    (((struct o2C_uint *)0xC2EA724)->v) = t24;
    t25 = R1016;
    t26 = *(int *)((t25 + 0x8));
    (((struct o30_uint *)0xC2EA724)->v) = t26;
    t27 = R1016;
    t28 = *(int *)((t27 + 0xC));
    (((struct o34_uint *)0xC2EA724)->v) = t28;
    t29 = R1016;
    u30 = *(float *)(((0x10 + t29) + 0x0));
    (((struct o38_uint *)0xC2EA724)->v) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    (((struct o0_uint *)0xC2EA81C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    t33 = R1008;
    t34 = *(int *)((t33 + 0xC));
    (((struct o14_uint *)0xC2EA81C)->v) = t34;
}

int kmiFBinit(void)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t34;

    t0 = (((struct o0_int *)0xC177FA4)->v);
    if (t0 == 1) {
        t1 = kmiGetProfileInt(0xC175BD4, 0xC175BE0);
        if (t1 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x1000000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        t6 = (((struct oC_int *)0xC177FA4)->v);
        (((struct o28_uint *)0xC177FA4)->v) = t6;
        t7 = (((struct o14_int *)0xC177FA4)->v);
        (((struct o3C_uint *)0xC177FA4)->v) = t7;
        t8 = kmytex_FBAllocEntry();
        t34 = 0x3;
        if (t8 != 0) {
            t9 = (((struct o8_int *)0xC177FA4)->v);
            *(unsigned int *)((t8 + 0xC)) = t9;
            t10 = (((struct oC_int *)0xC177FA4)->v);
            *(unsigned int *)((t8 + 0x10)) = t10;
            t11 = (((struct o20_int *)0xC177FA4)->v);
            *(unsigned int *)((t8 + 0x8)) = t11;
            (((struct o20_uint *)0xC177FA4)->v) = t8;
            t12 = (((struct o24_int *)0xC177FA4)->v);
            *(unsigned int *)((t8 + 0x4)) = t12;
            (((struct o24_uint *)0xC177FA4)->v) = t8;
            t34 = 0x0;
        }
    } else {
        t14 = kmiGetProfileInt(0xC175BD4, 0xC175BE0);
        if (t14 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x800000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            (((struct o4_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o8_uint *)0xC177FA4)->v) = 0x0;
            (((struct oC_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o10_uint *)0xC177FA4)->v) = 0x400000;
            (((struct o14_uint *)0xC177FA4)->v) = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        t19 = (((struct oC_int *)0xC177FA4)->v);
        (((struct o28_uint *)0xC177FA4)->v) = t19;
        t20 = (((struct o14_int *)0xC177FA4)->v);
        (((struct o3C_uint *)0xC177FA4)->v) = t20;
        t21 = kmytex_FBAllocEntry();
        t34 = 0x3;
        if (t21 != 0) {
            t22 = (((struct o8_int *)0xC177FA4)->v);
            *(unsigned int *)((t21 + 0xC)) = t22;
            t23 = (((struct oC_int *)0xC177FA4)->v);
            *(unsigned int *)((t21 + 0x10)) = t23;
            t24 = (((struct o20_int *)0xC177FA4)->v);
            *(unsigned int *)((t21 + 0x8)) = t24;
            (((struct o20_uint *)0xC177FA4)->v) = t21;
            t25 = (((struct o24_int *)0xC177FA4)->v);
            *(unsigned int *)((t21 + 0x4)) = t25;
            (((struct o24_uint *)0xC177FA4)->v) = t21;
            t26 = kmytex_FBAllocEntry();
            t34 = 0x3;
            if (t26 != 0) {
                t27 = (((struct o10_int *)0xC177FA4)->v);
                *(unsigned int *)((t26 + 0xC)) = t27;
                t28 = (((struct o14_int *)0xC177FA4)->v);
                *(unsigned int *)((t26 + 0x10)) = t28;
                t29 = (((struct o34_int *)0xC177FA4)->v);
                *(unsigned int *)((t26 + 0x8)) = t29;
                (((struct o34_uint *)0xC177FA4)->v) = t26;
                t30 = (((struct o38_int *)0xC177FA4)->v);
                *(unsigned int *)((t26 + 0x4)) = t30;
                (((struct o38_uint *)0xC177FA4)->v) = t26;
                t34 = 0x0;
            }
        }
    }
    return t34;
}

int kmiFBalloc(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t10;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t2 = *(int *)0xC177FEC;
    if (t2 != t1) {
        t3 = *(int *)0xC2EA684;
        if ((t3 & 4) != 0) {
            t4 = *(int *)0xC177FCC;
            t5 = *(int *)0xC177FE0;
            t6 = 0x0;
            if ((unsigned int)t4 < (unsigned int)t5) {
                t6 = 0x1;
            }
            t7 = kmiFBallocQueue(t6, (t1 << 1), a5, 0x8);
            t10 = t7;
        } else {
            t8 = kmiFBallocQueue(0x0, (t1 << 1), a5, 0x8);
            t10 = t8;
        }
        if (t10 == 0) {
            *(unsigned int *)0xC177FEC = t1;
            t11 = *(int *)((a5 + 0x1C));
            *(unsigned int *)0xC177FE8 = t11;
            t12 = *(int *)((a5 + 0x1C));
            *(unsigned int *)((a5 + 0x14)) = t1;
            t13 = kmyConvertAddress64to32(t12);
            *(unsigned int *)((a5 + 0x1C)) = t13;
        }
        t17 = t10;
    } else {
        *(unsigned int *)((a5 + 0x14)) = t1;
        t15 = *(int *)0xC177FE8;
        t16 = kmyConvertAddress64to32((t15 + 0x4));
        *(unsigned int *)((a5 + 0x1C)) = t16;
        *(unsigned int *)0xC177FEC = 0x0;
        *(unsigned int *)0xC177FE8 = 0x0;
        t17 = 0x0;
    }
    return t17;
}

int kmiFBfreeEx(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t2;

    t0 = kmyConvertAddress32to64(a4);
    t1 = kmiFBfree(t0);
    t5 = t1;
    if (t1 != 0) {
        t2 = kmyConvertAddress32to64(a5);
        t5 = kmiFBfree(t2);
    }
    return t5;
}

void kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t1 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t1 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    kmiWriteRegister(0x14C, t1);
    t3 = *(int *)((a4 + 0x1C));
    kmiWriteRegister(0x148, t3);
}



int gdFsStrncmpi(int a4, int a5, int a6)
{
    int t10;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t10 = 0x1;
    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            if (t3 != 0) {
                t4 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = gdFsToUpper(t4);
                t6 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t7 = gdFsToUpper(t6);
                if ((signed char)t5 == (signed char)t7) {
                    t2 = (t2 - 1);
                    if ((int)t2 <= 0) {
                        return 0x1;
                    }
                    continue;
                }
                return 0x0;
            }
            break;
        }
        t8 = *(signed char *)((t0 + 0x0));
        t10 = 0x1;
        if (t8 != 0) {
            t10 = 0x0;
        }
    }
    return t10;
}

int gdFsStrcmpi(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = a5;
    t1 = a4;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 0) break;
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = gdFsToUpper(t3);
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t6 = gdFsToUpper(t5);
        if ((signed char)t4 == (signed char)t6) continue;
        return 0x0;
    }
    t7 = *(signed char *)((t0 + 0x0));
    t8 = 0x1;
    if (t7 != 0) {
        t8 = 0x0;
    }
    return t8;
}

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

void mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;

    make_header(a6, a7);
    get_data(a6);
    t2 = *(signed char *)((a6 + 0x1));
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = ((t2 ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    t5 = *(signed char *)((a6 + 0x1));
    *(unsigned char *)((a6 + 0x3)) = ((t5 ^ t4) & (~t4));
    t6 = *(int *)0xC2FA538;
    t7 = (((struct o10C4_int *)(t6))->v);
    if (t7 == 1) {
        t8 = *(signed char *)((a6 + 0x8));
        if ((unsigned char)t8 != 0xFF) {
            if ((unsigned char)t8 != 0) {
                t9 = *(int *)((a7 + 0x0));
                mpdrv_swaplong(a7, ((unsigned char)t9 + 0x1));
            }
        }
    }
    t14 = *(signed char *)((a6 + 0x0));
    t15 = 0x1;
    if (t14 != 0) {
        t15 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t15;
    t16 = *(signed char *)((a6 + 0x3));
    t17 = *(signed char *)((a6 + 0x2));
    if (t17 != 0) {
        (((struct o10_uchar *)(a5))->v) = 0x1;
        mpdrv_make_deviceinfo(a5, a6, a7);
    }
    t20 = *(signed char *)((a6 + 0x3));
    if (t20 != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
}

int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}




