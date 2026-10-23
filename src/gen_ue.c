/* Straight-line functions with calls and guards (batch gen_ue): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Initialize_Replay(void);
int MotionBlurOn(void);
int gdc_PlayStreamSong(int);
int replayChangeControl(int, int, int, int, float);
int setReplayType(int);
void AdvStateReplayInit(int a4, int a5, int a6, int a7, float f4);

void AdvStateReplayInit(int a4, int a5, int a6, int a7, float f4)
{
    replayChangeControl(0xFFFFFFFF, a5, a6, a7, f4);
    Initialize_Replay();
    if ((*(int *)0xC1EE20C) == 0) {
        setReplayType(0x1);
        gdc_PlayStreamSong(0x7);
    } else {
        setReplayType(0x2);
        gdc_PlayStreamSong(0x4);
    }
    *(unsigned int *)0xC179860 = 0x7;
    MotionBlurOn();
    *(unsigned int *)0xC1EE774 = 0x0;
    *(unsigned int *)0xC1EE33C = 0x0;
    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    *(unsigned int *)0xC1EE334 = 0x11;
}
