/* Straight-line functions with calls and guards (batch gen_v): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckAreaGrid(int, int, float, float);
int nlSingleLine(int, int, int);
void PutGrid(int a4, float f4, float f5);

void PutGrid(int a4, float f4, float f5)
{
    int t5;
    int t8;
    float u9;
    float u10;
    int t14;
    int t15;
    int stk[19];

    *(unsigned int *)0xC0ED43C = (CheckAreaGrid(a4, (*(int *)0xC0ED43C), f4, f5));
    *(float *)(((int)stk + 4)) = ((*(float *)((a4 + 0x0))) * 9.99999975e-06f);
    *(float *)(((int)stk + 8)) = (-((*(float *)((a4 + 0x8))) * 9.99999975e-06f));
    *(float *)(((int)stk + 12)) = -0.5f;
    nlSingleLine(((int)stk + 4), ((int)stk + 4), 0xFF00FF00);
    t5 = 0x0;
    for (;;) {
        t8 = 0xFF00FF00;
        u9 = (-1.0f);
        u10 = 1.99999995e-05f;
        if (t5 == (*(int *)0xC0ED43C)) {
            t8 = 0xFFFF0000;
            u9 = -0.5f;
            u10 = 9.99999975e-06f;
        }
        *(float *)(((int)stk + 16)) = ((*(float *)(((((((t5 << 2) << 2) << 1) + 0xC08DBA8) + 0x18) + 0x0))) * u10);
        *(float *)(((int)stk + 20)) = (-((*(float *)(((((((t5 << 2) << 2) << 1) + 0xC08DBA8) + 0x18) + 0x4))) * u10));
        *(float *)(((int)stk + 24)) = u9;
        t14 = 0x0;
        t15 = ((((t5 << 2) << 2) << 1) + 0xC08DBA8);
        for (;;) {
            *(float *)(((int)stk + 4)) = ((*(float *)((t15 + 0x0))) * u10);
            *(float *)(((int)stk + 8)) = (-((*(float *)((t15 + 0x4))) * u10));
            *(float *)(((int)stk + 12)) = u9;
            nlSingleLine((((int)stk + 4) + 0xC), ((int)stk + 4), t8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(((int)stk + 4)); }
            t14 = (t14 + 0x1);
            t15 = (t15 + 0x8);
            if ((int)t14 >= (int)0x4) {
                break;
            }
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x19) {
            break;
        }
    }
}
