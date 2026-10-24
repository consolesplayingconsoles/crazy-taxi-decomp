/* Straight-line functions with calls and guards (batch gen_anv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int Init_Time_Spark(int a4, int a5);

int Init_Time_Spark(int a4, int a5)
{
    float u2;
    float u3;
    int t13;
    int stk[9];

    *(unsigned int *)((a4 + 0x14)) = a5;
    *(float *)((a4 + 0x18)) = (float)(*(int *)0xC2A8DF4);
    *(float *)((a4 + 0x1C)) = (float)(*(int *)0xC2A8DF8);
    u2 = 0.19999999f;
    *(float *)((a4 + 0x20)) = u2;
    *(unsigned short *)((a4 + 0x30)) = 0x0;
    *(unsigned short *)((a4 + 0x32)) = 0x0;
    *(unsigned short *)((a4 + 0x34)) = 0x0;
    *(float *)((a4 + 0x38)) = 0.0f;
    u3 = 2e+01f;
    *(float *)((a4 + 0x3C)) = (((float)((int)((int)(nlRand()) % (int)0x14)) / u3) + 1.5f);
    *(float *)(((int)stk + 4)) = (float)(((int)((int)(nlRand()) % (int)0x80)) + 0x1C2);
    *(float *)(((int)stk + 8)) = 1.2e+02f;
    *(float *)(((int)stk + 12)) = u2;
    nlSubVector(((int)stk + 4), (a4 + 0x18));
    nlScaleUnitVector((a4 + 0x24), ((int)stk + 4), u3);
    t13 = (int)((int)(nlRand()) % (int)0x4);
    *(unsigned short *)(((0x36 + a4) + 0x0)) = ((t13 << 8) << 2);
    return ((t13 << 8) << 2);
}
