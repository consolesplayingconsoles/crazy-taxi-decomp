/* Straight-line functions with calls and guards (batch gen_si): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Money_Array(int, int, int);
int nlSprPut(int, int, int);
int pfAddNumber(int);
int pfCleanString(void);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Time_Count(int a4);

int Put_Time_Count(int a4)
{
    int t6;
    int t14;
    int t9;
    int t65;
    int t47;
    float u49;
    int stk[10] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 4) + 0x4)) = *(struct mv2 *)(0xC0D08AC); }
    Money_Array((((int)stk + 4) + 0x4), ((int)((int)(*(int *)(((*(int *)0xC2A8C4C) + 0x0))) / (int)0x3C)), 0x2);
    t6 = (int)((int)(*(int *)(((*(int *)0xC2A8C4C) + 0x0))) % (int)0x3C);
    *(float *)0xC2A7F30 = 590.0f;
    *(float *)0xC2A7F34 = 430.0f;
    if (((int)(*(int *)(((*(int *)0xC2A8C4C) + 0x0))) >= (int)0x3C) && (t9 = *(int *)(((int)stk + 4)), t9 != 0)) {
        if ((int)t6 >= (int)0x1E) {
            *(float *)0xC2A7F3C = 1.0f;
            *(unsigned int *)0xC2A7F2C = (*(int *)((0xC0D0BE0 + ((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) << 2))));
            t47 = 0x1E;
            u49 = 430.0f;
        } else {
            t14 = (int)((int)(*(int *)(((*(int *)0xC2A8C4C) + 0x0))) % (int)0x1E);
            *(float *)0xC2A7F3C = (_builtin_fabsf((float)((int)(float)t14 - 15)) / 15.0f);
            if (15.0f > (float)t14) {
                if ((int)(*(int *)(((((int)stk + 4) + 0x4) + 0x0))) > 0) {
                    *(unsigned int *)0xC2A7F2C = (*(int *)((0xC0D0BE0 + (((int)((int)((*(int *)(((((int)stk + 4) + 0x4) + 0x0))) - 1) % (int)0xA)) << 2))));
                } else {
                    *(unsigned int *)0xC2A7F2C = (*(int *)0xC0D0BE0);
                }
            } else {
                if ((int)(*(int *)(((((int)stk + 4) + 0x4) + 0x0))) > 0) {
                    *(unsigned int *)0xC2A7F2C = (*(int *)((0xC0D0BE0 + (((int)((int)(*(int *)(((((int)stk + 4) + 0x4) + 0x0))) % (int)0xA)) << 2))));
                } else {
                    *(unsigned int *)0xC2A7F2C = (*(int *)0xC0D0BE0);
                }
            }
            t47 = 0xC0D0BE0;
            u49 = (_builtin_fabsf((float)((int)(float)t14 - 15)) / 15.0f);
        }
        *(unsigned int *)0xC2A7F54 = 0x0;
        t65 = (nlSprPut(0xC2A7F2C, t47, 0xC0D0BE0));
    } else {
        pfCleanString();
        pfSetFont(0x1);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        pfAddNumber(((int)((int)(*(int *)(((*(int *)0xC2A8C4C) + 0x0))) / (int)0x3C)));
        pfLocate(574.0f, 414.0f);
        t65 = (pfPuts((*(int *)0xC08D678)));
    }
    return t65;
}
