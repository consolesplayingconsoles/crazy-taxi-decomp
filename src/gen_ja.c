/* Straight-line functions with calls and guards (batch gen_ja): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int FUN_0c077210(int, int);
int FUN_0c078a70(int, int, int);
int GetCollision2D(int, float);
int Sound_Request(int, int);
int nlAddVector(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSqrt(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int pedDodgeCheck(int a4, float f4, float f5);

int pedDodgeCheck(int a4, float f4, float f5)
{
    float u3;
    float u4;
    float u89;
    int t6;
    float u79;
    float u69;
    int t8;
    float u59;
    int t26;
    int t32;
    int t44;
    float u45;
    int t47;
    float u50;
    int t103;
    int t104;
    float u124;
    int t166;
    float u174;
    int t153;
    int t134;
    int t137;
    int t138;
    int t38;
    int t105;
    int t106;
    int t139;
    int t140;
    int t150;
    int t147;
    float u148;
    int stk[31] = {0};

    if ((*(int *)((a4 + 0x50))) == 2) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)((a4 + 0x40)); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)((a4 + 0xC)); }
    }
    u3 = *(float *)0xC179228;
    u4 = 50.0f;
    u4 = u4 + 15.0f * _builtin_fabsf(u3);
    u89 = _builtin_fabsf(u3);
    if (!(u4 > f4)) {
    } else {
        t6 = *(int *)((a4 + 0x50));
        u79 = _builtin_fabsf(u3);
        if (t6 == 2) {
        } else {
            u69 = _builtin_fabsf(f5);
            if (!(20.0f > _builtin_fabsf(f5))) {
            } else {
                t8 = *(int *)((a4 + 0x50));
                u59 = _builtin_fabsf(f5);
                if (t8 == 2) {
                } else {
                    nlSubVector3op((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x30), 0xC179144);
                    nlUnitVector((((int)stk + 4) + 0x48));
                    *(unsigned int *)((a4 + 0x20)) = 0x0;
                    *(unsigned int *)((a4 + 0x50)) = 0x2;
                    Sound_Request((*(int *)((((*(int *)((a4 + 0x24))) << 2) + 0xC12FF7C))), 0x1);
                    *(unsigned short *)((a4 + 0x1A)) = (*(short *)0xC1791C0);
                    if ((*(int *)((a4 + 0x4C))) == 0) {
                        nlPushUnitMatrix();
                        nlRotateAY((int)((float)(*(short *)0xC1791E0) / (*(float *)0xC179228)));
                        FUN_0c077210(0xC1791C8, ((int)stk + 4));
                        nlPopMatrix(0x1);
                        nlOuterProduct((((int)stk + 4) + 0x48), ((int)stk + 4), (((int)stk + 4) + 0x3C));
                        if (((*(float *)(((int)stk + 68))) * (*(float *)0xC179228)) > 0.0f) {
                            t26 = *(int *)0xC0D61BC;
                            *(unsigned int *)((a4 + 0x28)) = (((int)((int)(nlRand()) % (int)(((int)((unsigned int)((int)((unsigned int)t26 + (unsigned int)0x0)) + ((((int)0x0 > (int)t26)) ? 1u : 0u))) >> 1))) << 1);
                            t38 = 0xC000;
                        } else {
                            t32 = *(int *)0xC0D61BC;
                            *(unsigned int *)((a4 + 0x28)) = ((((int)((int)(nlRand()) % (int)(((int)((unsigned int)((int)((unsigned int)t32 + (unsigned int)0x0)) + ((((int)0x0 > (int)t32)) ? 1u : 0u))) >> 1))) << 1) + 0x1);
                            t38 = 0x4000;
                        }
                        *(unsigned short *)((a4 + 0x38)) = t38;
                    }
                    t44 = *(int *)((a4 + 0x28));
                    u45 = *(float *)(((t44 << 2) + 0xC12FF24));
                    t47 = *(int *)(((*(int *)(((t44 << 2) + 0xC0D61AC))) + 0x0));
                    u50 = (float)t47;
                    if ((int)t47 < 0) {
                        u50 = ((float)t47 + 4.2949673e+09f);
                    }
                    *(float *)(((0x3C + a4) + 0x0)) = (u45 / u50);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)((a4 + 0xC)); }
                    u59 = (u45 / u50);
                }
                u69 = u59;
            }
            u79 = u69;
        }
        u89 = u79;
    }
    if ((*(int *)((a4 + 0x50))) == 2) {
        nlPushUnitMatrix();
        nlRotateAY(((unsigned short)(*(short *)((a4 + 0x38))) + (unsigned short)(*(short *)0xC1791C0)));
        nlSqrt(0xC12FF0C, (a4 + 0x2C));
        nlPopMatrix(0x1);
        nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x2C), ((*(float *)((a4 + 0x3C))) * (1.0f + 1.0f)));
        nlAddVector((a4 + 0x40), (((int)stk + 4) + 0xC));
        t103 = GetCollision2D((a4 + 0x40), 16.5f);
        t104 = *(int *)((t103 + 0x1C));
        if ((t104 != -1) && ((t104 != 2) && (((t105 = *(short *)((a4 + 0x60)), t105 != 0) && (t104 != 21)) || (t106 = *(short *)((a4 + 0x60)), t106 == 0)))) {
            *(float *)((a4 + 0x44)) = (*(float *)((t103 + 0x18)));
            *(float *)((a4 + 0x10)) = (*(float *)((t103 + 0x18)));
            CalcShadow4Normal((a4 + 0x54), (t103 + 0xC));
        } else {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        }
    }
    u124 = 25.0f;
    t166 = 0xC0500A8;
    u174 = f5;
    if (u124 > f4) {
        t153 = 0xC0500AC;
        if ((35.0f) > _builtin_fabsf(f5)) {
            if ((*(int *)((a4 + 0x50))) == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)((a4 + 0x40)); }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x30)) = *(struct mv3 *)((a4 + 0xC)); }
            }
            nlSubVector3op((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x30), 0xC179144);
            nlUnitVector((((int)stk + 4) + 0x48));
            nlScaleVector((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x48), u124);
            t134 = (a4 + 0xC);
            if ((*(int *)((a4 + 0x50))) == 2) {
                t134 = (a4 + 0x40);
            }
            FUN_0c078a70(t134, 0xC179144, (((int)stk + 4) + 0x24));
            t137 = GetCollision2D((((int)stk + 4) + 0x30), 16.5f);
            t138 = *(int *)((t137 + 0x1C));
            if ((t138 != -1) && ((t138 != 2) && (((t139 = *(short *)((a4 + 0x60)), t139 != 0) && (t138 != 21)) || (t140 = *(short *)((a4 + 0x60)), t140 == 0)))) {
                if ((*(int *)((a4 + 0x50))) == 2) {
                    t147 = 0x44;
                    u148 = (*(float *)((t137 + 0x18)));
                } else {
                    t147 = 0x10;
                    u148 = (*(float *)((t137 + 0x18)));
                }
                *(float *)((a4 + t147)) = u148;
                t150 = t147;
            } else {
                *(unsigned int *)((a4 + 0x50)) = 0x0;
                t150 = 0x50;
            }
            t153 = t150;
        }
        t166 = t153;
        u174 = _builtin_fabsf(f5);
    }
    return t166;
}
