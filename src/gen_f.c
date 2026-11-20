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


