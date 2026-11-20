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


