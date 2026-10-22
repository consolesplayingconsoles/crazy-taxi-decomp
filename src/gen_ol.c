/* Straight-line functions with calls and guards (batch gen_ol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int FUN_0c057130(int a4, int a5);

int FUN_0c057130(int a4, int a5)
{
    int t0;
    int t1;
    float u2;
    float u3;
    int t4;
    int t5;
    float u6;
    int t7;
    int t8;
    float u9;
    int t12;
    int t13;
    int stk[9] = {0};

    *(unsigned int *)((a4 + 0x14)) = a5;
    t0 = *(int *)0xC2A8DF4;
    *(float *)((a4 + 0x18)) = (float)t0;
    t1 = *(int *)0xC2A8DF8;
    *(float *)((a4 + 0x1C)) = (float)t1;
    u2 = *(float *)0xC057228;
    *(float *)((a4 + 0x20)) = u2;
    *(unsigned short *)((a4 + 0x30)) = 0x0;
    *(unsigned short *)((a4 + 0x32)) = 0x0;
    *(unsigned short *)((a4 + 0x34)) = 0x0;
    *(float *)((a4 + 0x38)) = 0.0f;
    u3 = *(float *)0xC05722C;
    t4 = nlRand();
    t5 = (int)((int)t4 % (int)0x14);
    u6 = *(float *)0xC057238;
    *(float *)((a4 + 0x3C)) = (((float)t5 / u3) + u6);
    t7 = nlRand();
    t8 = (int)((int)t7 % (int)0x80);
    *(float *)(((int)stk + 4)) = (float)(t8 + 0x1C2);
    u9 = *(float *)0xC05723C;
    *(float *)(((int)stk + 8)) = u9;
    *(float *)(((int)stk + 12)) = u2;
    nlSubVector(((int)stk + 4), (a4 + 0x18));
    nlScaleUnitVector((a4 + 0x24), ((int)stk + 4), u3);
    t12 = nlRand();
    t13 = (int)((int)t12 % (int)0x4);
    *(unsigned short *)(((0x36 + a4) + 0x0)) = ((t13 << 8) << 2);
    return ((t13 << 8) << 2);
}
