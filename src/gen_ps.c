/* Straight-line functions with calls and guards (batch gen_ps): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int FUN_0c050716(void);

int FUN_0c050716(void)
{
    int t1;
    int t4;
    int t5;

    nlPushMatrix(0x0);
    t1 = *(signed char *)0xC2A72D8;
    nlTranslateV(((signed char)(((t1 << 1) + t1) << 2) + 0xC0CF5F0));
    nlRotateAY(0x8000);
    t4 = *(int *)0xC2A72BC;
    t5 = *(int *)0xC12FFE8;
    FcvPlay(t5, t4, 0.0f);
    return nlPopMatrix(0x1);
}
