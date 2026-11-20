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
void nlSetBackColor(int, int, int);
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


