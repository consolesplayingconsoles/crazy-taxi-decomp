/* Straight-line functions with calls and guards (batch gen_alx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_TimeUp(void);
int SetLandmark(int);
int GS_GameOver(int a4);
struct o0_int { int v; };
struct o28_uint { char p[0x28]; unsigned int v; };


int GS_GameOver(int a4)
{
    int t2;

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
    if ((((((struct o0_int *)0xC1EE210)->v)) == 2)) goto L_C02D77A;
    goto L_C02D774;
    L_C02D774:;
    (((struct o28_uint *)0xC1EE210)->v) = 0x8;
    goto L_C02D77A;
    L_C02D77A:;
    return End_TimeUp();
    L_C02D780:;
    return R0;
}
