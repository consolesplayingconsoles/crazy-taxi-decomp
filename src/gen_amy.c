/* Straight-line functions with calls and guards (batch gen_amy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nd_StartWait_PutDriver(void);

int nd_StartWait_PutDriver(void)
{
    int t1;

    nlPushMatrix(0x0);
    t1 = *(signed char *)0xC2A72D8;
    nlTranslateV(((signed char)(((t1 << 1) + t1) << 2) + 0xC0CF5F0));
    nlRotateAY(0x8000);
    FcvPlay((*(int *)0xC12FFE8), (*(int *)0xC2A72BC), 0.0f);
    return nlPopMatrix(0x1);
}
