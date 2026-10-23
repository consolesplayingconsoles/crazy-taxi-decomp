/* Straight-line functions with calls and guards (batch gen_aof): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetSpark(int, int, int);
int Sound_Request(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
extern int nlScaleVector();
void Move_Balloon(int a4, float f4, float f5, float f6);

void Move_Balloon(int a4, float f4, float f5, float f6)
{
    int t1;
    int t2;
    int t7;
    int t8;
    int t12;
    float u14;
    float u40;
    int t21;
    int stk[18];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x18)) = *(struct mv3 *)(0xC0D2AF0); }
    *(float *)((a4 + 0x58)) = ((*(float *)((a4 + 0x58))) - 0.166599989f);
    t1 = ((int (*)(int, int, float, float, float))(nlScaleVector))((a4 + 0x54), (a4 + 0x54), 0.994999945f, f5, f6);
    t2 = ((int (*)(int, int, float))(nlScaleVector))((((int)stk + 8) + 0x24), (a4 + 0x54), 1.0f);
    nlAddVector((a4 + 0x48), (((int)stk + 8) + 0x24));
    if (11.999999f > (*(float *)((a4 + 0x4C)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC0D2AFC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x24)) = *(struct mv3 *)((a4 + 0x54)); }
        nlOuterProduct((((int)stk + 8) + 0x24), (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24));
        if (((*(float *)((a4 + 0x58))) * 0.899999976f) > -0.166599989f) {
            t7 = ((int (*)(int, int, float))(nlScaleVector))((a4 + 0x30), (((int)stk + 8) + 0x24), 0.00694444589f);
        } else {
            t8 = ((int (*)(int, int, float))(nlScaleVector))((((int)stk + 8) + 0x24), (((int)stk + 8) + 0x24), 0.000578703883f);
            nlAddVector((a4 + 0x30), (((int)stk + 8) + 0x24));
        }
        t12 = ((int (*)(int, int, float))(nlScaleVector))((a4 + 0x54), (a4 + 0x54), 0.979999959f);
        *(float *)((a4 + 0x4C)) = 11.999999f;
        u14 = (*(float *)((a4 + 0x58)));
        u14 *= -0.899999976f;
        *(float *)((a4 + 0x58)) = u14;
    }
    if ((((*(int *)((a4 + 0x68))) & 0x1) != 0) && (t21 = *(int *)((a4 + 0x7C)), t21 == 0)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0xC)) = *(struct mv3 *)(0xC0D2B08); }
        *(unsigned int *)((a4 + 0x7C)) = 0x1;
        if ((int)(*(int *)0xC1319F8) > 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((a4 + 0x48)); }
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - 20.0f);
            SetSpark(((int)stk + 8), (((int)stk + 8) + 0xC), 0x32);
            if ((*(int *)0xC2A991C) == 0) {
                *(unsigned int *)0xC1319F8 = ((*(int *)0xC1319F8) - 1);
            }
            Sound_Request(0x20FA9, 0x0);
        }
        u40 = (*(float *)(((a4 + 0x58) + 0x0)));
        u40 = u40 + 0.399999976f * (nlLength((a4 + 0x54), (a4 + 0x3C)));
        *(float *)(((a4 + 0x58) + 0x0)) = u40;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x54)); }
}
