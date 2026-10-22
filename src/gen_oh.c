/* Straight-line functions with calls and guards (batch gen_oh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetSpark(int, int, int);
int Sound_Request(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlScaleVector(int, int, float);
void FUN_0c05ecae(int a4);

void FUN_0c05ecae(int a4)
{
    float u0;
    float u4;
    float u6;
    float u13;
    float u14;
    int t20;
    int t21;
    int t22;
    float u23;
    int t25;
    int t26;
    float t38;
    float u39;
    float u40;
    int stk[18] = {0};

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC0D2AF0); }
    u0 = *(float *)((a4 + 0x58));
    *(float *)((a4 + 0x58)) = (u0 - 0.166599989f);
    nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.994999945f);
    nlScaleVector((((int)stk + 8) + 0x24), (a4 + 0x54), 1.0f);
    nlAddVector((a4 + 0x48), (((int)stk + 8) + 0x24));
    u4 = *(float *)((a4 + 0x4C));
    if (11.999999f > u4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC0D2AFC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((a4 + 0x54)); }
        nlOuterProduct((((int)stk + 8) + 0x24), (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24));
        u6 = *(float *)((a4 + 0x58));
        if ((u6 * 0.899999976f) > -0.166599989f) {
            nlScaleVector((a4 + 0x30), (((int)stk + 8) + 0x24), 0.00694444589f);
        } else {
            nlScaleVector((((int)stk + 8) + 0x24), (((int)stk + 8) + 0x24), 0.000578703883f);
            nlAddVector((a4 + 0x30), (((int)stk + 8) + 0x24));
        }
        nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.979999959f);
        *(float *)((a4 + 0x4C)) = 11.999999f;
        u13 = *(float *)((a4 + 0x58));
        u14 = u13;
        u14 *= -0.899999976f;
        *(float *)((a4 + 0x58)) = u14;
    }
    t20 = *(int *)((a4 + 0x68));
    if ((t20 & 0x1) != 0) {
        t21 = *(int *)((a4 + 0x7C));
        if (t21 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC0D2B08); }
            *(unsigned int *)((a4 + 0x7C)) = 0x1;
            t22 = *(int *)0xC1319F8;
            if ((int)t22 > 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((a4 + 0x48)); }
                u23 = *(float *)(((int)stk + 12));
                *(float *)(((int)stk + 12)) = (u23 - 20.0f);
                SetSpark(((int)stk + 8), (((int)stk + 8) + 0xC), 0x32);
                t25 = *(int *)0xC2A991C;
                if (t25 == 0) {
                    t26 = *(int *)0xC1319F8;
                    *(unsigned int *)0xC1319F8 = (t26 - 1);
                }
                Sound_Request(0x20FA9, 0x0);
            }
            t38 = nlLength((a4 + 0x54), (a4 + 0x3C));
            u39 = *(float *)(((a4 + 0x58) + 0x0));
            u40 = u39;
            u40 = u40 + 0.399999976f * t38;
            *(float *)(((a4 + 0x58) + 0x0)) = u40;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x54)); }
}
