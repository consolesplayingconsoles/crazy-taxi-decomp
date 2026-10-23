/* Straight-line functions with calls and guards (batch gen_alx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_TimeUp(void);
int SetLandmark(int);
int GS_GameOver(int a4);

int GS_GameOver(int a4)
{
    int t2;
    int stk[2];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int T_;
    R4 = a4;
    L_C02D744:;
    *(unsigned int *)0xC179120 = 0x0;
    SetLandmark(0x3);
    *(unsigned int *)0xC2A11C8 = (*(int *)0xC1EE7A8);
    t2 = *(int *)0xC1EE7F0;
    *(unsigned int *)0xC1EE7F0 = (t2 - 1);
    R0 = ((t2 - 1));
    if (((int)(t2 - 1) >= 0)) goto L_C02D780;
    goto L_C02D76C;
    L_C02D76C:;
    if (((*(int *)0xC1EE210) == 2)) goto L_C02D77A;
    goto L_C02D774;
    L_C02D774:;
    *(unsigned int *)0xC1EE238 = 0x8;
    goto L_C02D77A;
    L_C02D77A:;
    return End_TimeUp();
    L_C02D780:;
    return R0;
}
