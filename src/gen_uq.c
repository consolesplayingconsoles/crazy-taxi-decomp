/* Straight-line functions with calls and guards (batch gen_uq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetSpark(int, int, int);
int Sound_Request(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlScaleVector(int, int, float);
void Move_Balloon(int a4);
struct o4C_float { char p[0x4C]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };


void Move_Balloon(int a4)
{
    float u14;
    float u40;
    int t21;
    int stk[16];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(0xC0D2AF0); }
    (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - 0.166599989f);
    nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.994999945f);
    nlScaleVector((((int)stk + 0) + 0x24), (a4 + 0x54), 1.0f);
    nlAddVector((a4 + 0x48), (((int)stk + 0) + 0x24));
    if (11.999999f > ((((struct o4C_float *)(a4))->v))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0D2AFC); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x24)) = *(struct mv3 *)((a4 + 0x54)); }
        nlOuterProduct((((int)stk + 0) + 0x24), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x24));
        if ((((((struct o58_float *)(a4))->v)) * 0.899999976f) > -0.166599989f) {
            nlScaleVector((a4 + 0x30), (((int)stk + 0) + 0x24), 0.00694444589f);
        } else {
            nlScaleVector((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24), 0.000578703883f);
            nlAddVector((a4 + 0x30), (((int)stk + 0) + 0x24));
        }
        nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.979999959f);
        (((struct o4C_float *)(a4))->v) = 11.999999f;
        u14 = ((((struct o58_float *)(a4))->v));
        u14 *= -0.899999976f;
        (((struct o58_float *)(a4))->v) = u14;
    }
    if (((((((struct o68_int *)(a4))->v)) & 0x1) != 0) && (t21 = (((struct o7C_int *)(a4))->v), t21 == 0)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC0D2B08); }
        (((struct o7C_uint *)(a4))->v) = 0x1;
        if ((int)(*(int *)0xC1319F8) > 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x48)); }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 20.0f);
            SetSpark(((int)stk + 0), (((int)stk + 0) + 0xC), 0x32);
            if ((*(int *)0xC2A991C) == 0) {
                *(unsigned int *)0xC1319F8 = ((*(int *)0xC1319F8) - 1);
            }
            Sound_Request(0x20FA9, 0x0);
        }
        u40 = ((((struct o58_float *)(a4))->v));
        u40 = u40 + 0.399999976f * (nlLength((a4 + 0x54), (a4 + 0x3C)));
        (((struct o58_float *)(a4))->v) = u40;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x3C)) = *(struct mv3 *)((a4 + 0x54)); }
}
