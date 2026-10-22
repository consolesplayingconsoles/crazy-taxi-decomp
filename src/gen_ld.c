/* Straight-line functions with calls and guards (batch gen_ld): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Initialize_Replay(void);
int MotionBlurOn(void);
int replayChangeControl(int);
int setReplayType(int);
void AdvStateReplay2Init(void);

void AdvStateReplay2Init(void)
{
    replayChangeControl(0xFFFFFFFF);
    Initialize_Replay();
    setReplayType(0x2);
    *(unsigned int *)0xC179860 = 0x7;
    MotionBlurOn();
    *(unsigned int *)0xC1EE774 = 0x0;
    *(unsigned int *)0xC1EE33C = 0x0;
    *(unsigned int *)0xC1EE240 = 0x0;
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    *(unsigned int *)0xC1EE334 = 0x11;
}
