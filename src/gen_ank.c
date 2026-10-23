/* Straight-line functions with calls and guards (batch gen_ank): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitEndRoll(void);
int Initialize_Replay(void);
int MotionBlurOn(void);
int SetAdvCamera(int, int);
int SetMotionBlurColor(float, float, float);
int SetMotionBlurStrength(float);
int Sound_Init(void);
int gdc_StopStreamSongAll(void);
int nlSetBackColor(int, int, int);
int replayChangeControl(int);
int setReplayType(int);
int gameState12(void);

int gameState12(void)
{
    float u9;
    int t14;

    Sound_Init();
    gdc_StopStreamSongAll();
    nlSetBackColor(0x0, 0x0, 0x0);
    *(unsigned int *)0xC2A4E50 = 0x1;
    replayChangeControl(0xFFFFFFFF);
    Initialize_Replay();
    setReplayType(0x3);
    SetAdvCamera(0xC179840, 0x1);
    MotionBlurOn();
    MotionBlurOn();
    u9 = *(float *)0xC02D520;
    SetMotionBlurStrength(u9);
    SetMotionBlurColor((*(float *)0xC02D52C), (*(float *)0xC02D528), u9);
    t14 = InitEndRoll();
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    return t14;
}
