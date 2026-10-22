/* Straight-line functions with calls and guards (batch gen_gu): generated from the code and checked by tests. Calls are
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
    int t0;
    int t1;
    int t2;
    float u3;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u15;
    float u22;
    float u23;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    float u38;
    int t40;
    int t41;
    float t53;
    float u54;
    float u55;
    int t76;
    int t77;
    int t78;
    int stk[18] = {0};

    t0 = *(int *)0xC0D2AF8;
    t1 = *(int *)0xC0D2AF4;
    *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x8)) = t0;
    t2 = *(int *)0xC0D2AF0;
    *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x4)) = t1;
    *(unsigned int *)(((((int)stk + 8) + 0x18) + 0x0)) = t2;
    u3 = *(float *)((a4 + 0x58));
    *(float *)((a4 + 0x58)) = (u3 - 0.166599989f);
    nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.994999945f);
    nlScaleVector((((int)stk + 8) + 0x24), (a4 + 0x54), 1.0f);
    nlAddVector((a4 + 0x48), (((int)stk + 8) + 0x24));
    u7 = *(float *)((a4 + 0x4C));
    if (11.999999f > u7) {
        t8 = *(int *)0xC0D2B04;
        t9 = *(int *)0xC0D2B00;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t8;
        t10 = *(int *)0xC0D2AFC;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t9;
        *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t10;
        t11 = *(int *)(((a4 + 0x54) + 0x8));
        t12 = *(int *)(((a4 + 0x54) + 0x4));
        *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x8)) = t11;
        t13 = *(int *)(((a4 + 0x54) + 0x0));
        *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x4)) = t12;
        *(unsigned int *)(((((int)stk + 8) + 0x24) + 0x0)) = t13;
        nlOuterProduct((((int)stk + 8) + 0x24), (((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24));
        u15 = *(float *)((a4 + 0x58));
        if ((u15 * 0.899999976f) > -0.166599989f) {
            nlScaleVector((a4 + 0x30), (((int)stk + 8) + 0x24), 0.00694444589f);
        } else {
            nlScaleVector((((int)stk + 8) + 0x24), (((int)stk + 8) + 0x24), 0.000578703883f);
            nlAddVector((a4 + 0x30), (((int)stk + 8) + 0x24));
        }
        nlScaleVector((a4 + 0x54), (a4 + 0x54), 0.979999959f);
        *(float *)((a4 + 0x4C)) = 11.999999f;
        u22 = *(float *)((a4 + 0x58));
        u23 = u22;
        u23 *= -0.899999976f;
        *(float *)((a4 + 0x58)) = u23;
    }
    t29 = *(int *)((a4 + 0x68));
    if ((t29 & 0x1) != 0) {
        t30 = *(int *)((a4 + 0x7C));
        if (t30 == 0) {
            t31 = *(int *)0xC0D2B10;
            t32 = *(int *)0xC0D2B0C;
            *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x8)) = t31;
            t33 = *(int *)0xC0D2B08;
            *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x4)) = t32;
            *(unsigned int *)(((((int)stk + 8) + 0xC) + 0x0)) = t33;
            *(unsigned int *)((a4 + 0x7C)) = 0x1;
            t34 = *(int *)0xC1319F8;
            if ((int)t34 > 0) {
                t35 = *(int *)(((a4 + 0x48) + 0x8));
                t36 = *(int *)(((a4 + 0x48) + 0x4));
                *(unsigned int *)((((int)stk + 8) + 0x8)) = t35;
                t37 = *(int *)(((a4 + 0x48) + 0x0));
                *(unsigned int *)((((int)stk + 8) + 0x4)) = t36;
                *(unsigned int *)((((int)stk + 8) + 0x0)) = t37;
                u38 = *(float *)(((int)stk + 12));
                *(float *)(((int)stk + 12)) = (u38 - 20.0f);
                SetSpark(((int)stk + 8), (((int)stk + 8) + 0xC), 0x32);
                t40 = *(int *)0xC2A991C;
                if (t40 == 0) {
                    t41 = *(int *)0xC1319F8;
                    *(unsigned int *)0xC1319F8 = (t41 - 1);
                }
                Sound_Request(0x20FA9, 0x0);
            }
            t53 = nlLength((a4 + 0x54), (a4 + 0x3C));
            u54 = *(float *)(((a4 + 0x58) + 0x0));
            u55 = u54;
            u55 = u55 + 0.399999976f * t53;
            *(float *)(((a4 + 0x58) + 0x0)) = u55;
        }
    }
    t76 = *(int *)(((a4 + 0x54) + 0x8));
    t77 = *(int *)(((a4 + 0x54) + 0x4));
    *(unsigned int *)(((a4 + 0x3C) + 0x8)) = t76;
    t78 = *(int *)(((a4 + 0x54) + 0x0));
    *(unsigned int *)(((a4 + 0x3C) + 0x4)) = t77;
    *(unsigned int *)(((a4 + 0x3C) + 0x0)) = t78;
}
