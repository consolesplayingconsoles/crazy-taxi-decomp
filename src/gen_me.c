/* Straight-line functions with calls and guards (batch gen_me): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRoundOff(float);
int pfAddNumber(int, int);
int pfAddString(int);
int pfCleanString(void);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Adv_Credits(int a4, int a5, int a6);

int Put_Adv_Credits(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t4;

    t0 = a4;
    if ((int)a4 > (int)0x63) {
        t0 = 0x63;
    }
    t2 = a5;
    if ((int)a5 > (int)0x9) {
        t2 = 0x9;
    }
    t4 = a6;
    if ((int)a6 > (int)0x9) {
        t4 = 0x9;
    }
    pfCleanString();
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfAddString(0xC0D0AB4);
    if ((t0 != 0) || (t2 == 0)) {
        pfAddNumber(t0, 0x0);
    }
    if (t2 != 0) {
        pfAddString(0xC0D0AC0);
        pfAddNumber(t2, 0x0);
        pfAddString(0xC0D0AC4);
        pfAddNumber(t4, 0x0);
    }
    pfLocate((nlRoundOff(((*(float *)0xC0581E0) - ((pfLength((*(int *)0xC08D678))) * (*(float *)0xC0581DC))))), (*(float *)0xC0581E8));
    return pfPuts((*(int *)0xC08D678));
}
