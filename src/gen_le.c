/* Straight-line functions with calls and guards (batch gen_le): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Initialize_Replay(void);
int MotionBlurOn(void);
int gdc_PlayStreamSong(int);
int replayChangeControl(int);
int setReplayType(int);
void AdvStateReplayInit(void);

void AdvStateReplayInit(void)
{
    replayChangeControl(0xFFFFFFFF);
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
