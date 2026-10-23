/* Straight-line functions with calls and guards (batch gen_kw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlSubVector3op(int, int, int, float, float, float);
int drvPredictPath(float f4, float f5, float f6);

int drvPredictPath(float f4, float f5, float f6)
{
    float u1;
    int t8;
    int t10;
    int stk[21];

    nlSubVector3op((((int)stk + 4) + 0xC), 0xC1791C8, 0xC1791D4, f4, f5, f6);
    u1 = *(float *)0xC064618;
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC13ED8C, (((int)stk + 4) + 0xC), u1, u1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED8C) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    nlGetAverageVector((((int)stk + 4) + 0xC), 0xC13ED80, (((int)stk + 4) + 0xC), u1, u1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED80) = *(struct mv3 *)((((int)stk + 4) + 0xC)); }
    nlGetAverageVector(0xC1791C8, 0xC1791D4, (((int)stk + 4) + 0x18), u1, u1);
    nlGetAverageVector((((int)stk + 4) + 0x18), 0xC13ED74, (((int)stk + 4) + 0x18), u1, u1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED74) = *(struct mv3 *)((((int)stk + 4) + 0x18)); }
    nlGetAverageVector(0xC179144, 0xC179158, (((int)stk + 4) + 0x24), u1, u1);
    nlGetAverageVector((((int)stk + 4) + 0x24), 0xC13ED68, (((int)stk + 4) + 0x24), u1, u1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED68) = *(struct mv3 *)((((int)stk + 4) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD2BC) = *(struct mv3 *)((((int)stk + 4) + 0x24)); }
    t8 = 0x1;
    for (;;) {
        nlAddVector3op(((short)(((t8 << 1) + t8) << 2) + 0xC2AD2BC), (((short)(((t8 << 1) + t8) << 2) + 0xC2AD2BC) - 12), (((int)stk + 4) + 0x18));
        t10 = nlAddVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
        t8 = (t8 + 0x1);
        if ((int)t8 >= (int)0x23) {
            break;
        }
    }
    return t10;
}
