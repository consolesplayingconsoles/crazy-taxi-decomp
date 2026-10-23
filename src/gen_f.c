/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetAdvCamera(int, int);
int MotionBlurOn(void);
int SetMotionBlurStrength(float);
int SetMotionBlurColor(float, float, float);
int InitEndRoll(void);
int setReplayType(int);
int Result_Skip(void);
int Result_Next_State(void);
int Result_Voice(void);
int Result_Sprite_Put(void);
int Result_Wobble(void);
int Result_Light(void);
int Result_SetFog(void);
int Result_SetBackColor(void);
int nlSetBackColor(void);
int nlCalcVector(int, int);
int nlMatrixMode(int);
int nlTransposeMatrix(void);
int replayChangeControl(int);
int Initialize_Replay(void);
int Sound_Init(void);
int gdc_StopStreamSongAll(void);
int kmiWriteRegister(int, int);
int mwRnaErrEntryFunc(void);
int mwRnaGetNumData(void);
int mwRnaSetPlaySw(void);
int nlObjPutLoadTexture(int, int);
int nlScaleUnitVector(int, int, float);
int nlSprPut(int, int);
void InitBookkeep(void);
int gameState12(void);
int PatchPolygon(void);
void CopyBackupBuffer(void);
int nd_SprPut(int a4, int a5, float f4, float f5);
int Exec_Result(void);
int nlInvLightVectorUseViewMatrix(void);
int kmiWriteDispModeRegisters(void);
int ADXRNA_SetPlaySw(void);
int ADXRNA_GetNumData(void);
int thunk_mwRnaErrEntryFunc(void);

void InitBookkeep(void)
{
    int t0;

    t0 = 0;
    for (; t0 < (int)0x6E8; t0++) *(unsigned char *)(0xC1789E0 + t0) = *(unsigned char *)(0xC089F80 + t0);
}


int PatchPolygon(void)
{
    int t3;

    nlObjPutLoadTexture(0xC0EA5D8, 0xC141868);
    nlObjPutLoadTexture(0xC0EAC20, 0xC141868);
    nlObjPutLoadTexture(0xC0EB340, 0xC141868);
    t3 = nlObjPutLoadTexture(0xC0EB720, 0xC141868);
    return t3;
}

void CopyBackupBuffer(void)
{
    int t0;

    t0 = 0;
    for (; t0 < (int)0x25B0; t0++) *(unsigned char *)(0xC28F8A0 + t0) = *(unsigned char *)(0xC28A4E8 + t0);
}



int nlInvLightVectorUseViewMatrix(void)
{
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u14;
    int t16;

    nlMatrixMode(0x2);
    nlTransposeMatrix();
    nlCalcVector(0xC14A938, 0xC2B3150);
    nlTransposeMatrix();
    nlMatrixMode(0x1);
    nlTransposeMatrix();
    nlCalcVector(0xC14A918, 0xC2B3160);
    u7 = *(float *)0xC2B3150;
    u8 = *(float *)0xC14A918;
    *(float *)0xC2B3150 = (u7 + u8);
    u9 = *(float *)0xC2B3154;
    u10 = *(float *)0xC14A91C;
    *(float *)0xC2B3154 = (u9 + u10);
    u11 = *(float *)0xC2B3158;
    u12 = *(float *)0xC14A920;
    *(float *)0xC2B3158 = (u11 + u12);
    nlCalcVector(0xC2B3150, 0xC2B3150);
    u14 = 436.5f;
    nlScaleUnitVector(0xC2B3150, 0xC2B3150, u14);
    t16 = nlTransposeMatrix();
    return t16;
}

int kmiWriteDispModeRegisters(void)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t17;

    t0 = *(int *)0xC2EA934;
    kmiWriteRegister(0x68, t0);
    t2 = *(int *)0xC2EA938;
    kmiWriteRegister(0x6C, t2);
    t4 = *(int *)0xC2EA940;
    kmiWriteRegister(0x5C, t4);
    t6 = *(int *)0xC2EA944;
    kmiWriteRegister(0x4C, t6);
    t8 = *(int *)0xC2EA97C;
    kmiWriteRegister(0x118, t8);
    t10 = *(int *)0xC2EA980;
    kmiWriteRegister(0xF4, t10);
    t12 = *(int *)0xC2EA94C;
    kmiWriteRegister(0x48, t12);
    t14 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t14 & 0xFFFFFFFE));
    t16 = *(int *)0xC2EA984;
    t17 = kmiWriteRegister(0xE8, (t16 | 0x8));
    return t17;
}

int ADXRNA_SetPlaySw(void)
{
    return mwRnaSetPlaySw();
}

int ADXRNA_GetNumData(void)
{
    return mwRnaGetNumData();
}

int thunk_mwRnaErrEntryFunc(void)
{
    return mwRnaErrEntryFunc();
}

