/* Straight-line functions with calls and guards (batch gen_mn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
int GetCollision2D(int, float);
int GetRotVec(int);
int MultiRot4Vec(int);
int Sound_Request(int, int);
extern float _builtin_sqrtf(float);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
float nlInnerProduct(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotate(int, int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
float nlScalor2(int);
int nlSubVector(int, int);
int nlTranslateV(int);
float SetObjFly(int a4);

float SetObjFly(int a4)
{
    float t13;
    int t44;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    float u55;
    int t82;
    float u68;
    float u118;
    int t108;
    float u94;
    float t136;
    float t139;
    float u142;
    float u143;
    int t208;
    int t2;
    float u3;
    int t14;
    float u20;
    float u236;
    float u53;
    float u54;
    int t122;
    int t124;
    float u126;
    float u127;
    int t80;
    float u84;
    int t74;
    int t76;
    float u77;
    int t113;
    int t115;
    float u117;
    int t106;
    float u110;
    int t100;
    int t102;
    float u103;
    int stk[30];

    if ((*(int *)((a4 + 0x20))) != 0) {
        *(unsigned int *)((a4 + 0x68)) = 0x1;
        if ((((*(int *)((a4 + 0x20))) & 1) != 0) && ((t2 = *(int *)((a4 + 0x64)), t2 != 0xC5E0600) && (u3 = *(float *)((a4 + 0x1C)), u3 > 0.00999999978f))) {
            Sound_Request((*(int *)(((*(int *)((a4 + 0x54))) + 0x14))), 0x1);
        }
    }
    t13 = nlScalor((a4 + 0x48));
    if (!(t13 > 0.000999999931f) && (t14 = *(int *)((a4 + 0x68)), t14 == 5)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)(0xC0965F0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0xC)) = *(struct mv3 *)(0xC0965F0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x48)) = *(struct mv3 *)(0xC0965F0); }
        *(unsigned int *)((a4 + 0x68)) = 0x0;
    }
    if (((*(int *)((a4 + 0x68))) == 0) && (u20 = *(float *)((a4 + 0x18)), !(1000.0f > u20))) {
        u236 = t13;
    } else {
        nlPushUnitMatrix();
        nlTranslateV(a4);
        if (t13 > 0.000999999931f) {
            nlRotate((a4 + 0x48), ((int)(((t13 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
        }
        MultiRot4Vec((a4 + 0x30));
        if (1000.0f > (*(float *)((a4 + 0x18)))) {
            nlObjPutUseViewMatrix((*(int *)((a4 + 0x64))));
        }
        if ((*(int *)((a4 + 0x68))) == 0) {
            nlPopMatrix(0x1);
        } else {
            GetRotVec((a4 + 0x30));
            nlScaleVector((a4 + 0xC), (a4 + 0xC), 0.979999959f);
            nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.959999979f);
            *(float *)((a4 + 0x10)) = ((*(float *)((a4 + 0x10))) - 0.166666657f);
            nlAddVector(a4, (a4 + 0xC));
            CheckColliWall(a4, (*(float *)(((*(int *)((a4 + 0x54))) + 0x1C))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x38)) = *(struct mv3 *)(0xC0965F0); }
            t44 = *(int *)((a4 + 0x54));
            t46 = *(int *)((t44 + 0x4));
            t47 = *(int *)((t44 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (*(int *)((t44 + 0x8)));
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t48 = 0xC0965F0;
            t49 = t44;
            t50 = 0x0;
            t51 = t47;
            t52 = t46;
            u55 = 0.0f;
            for (;;) {
                if ((*(int *)(((int)stk + 4))) != 0) {
                    u54 = 0.0f;
                    u53 = (*(float *)((t52 + 0x4)));
                    if (u54 > u53) {
                        t48 = 0xC0771B0;
                        t49 = t51;
                        t51 = (t51 + 0xC);
                        nlCalcPoint(t49, (((int)stk + 4) + 0x2C));
                        t49 = a4;
                        t49 = (t49 + 0x3C);
                        nlOuterProduct(t49, 0xC096644, (((int)stk + 4) + 0x20));
                        t49 = a4;
                        t49 = (t49 + 0x3C);
                        nlOuterProduct(t49, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        t49 = ((int)stk + 4);
                        t49 = (t49 + 0x20);
                        nlScaleUnitVector(t49, (((int)stk + 4) + 0x20), (-(*(float *)((t52 + 0x4)))));
                        t49 = ((int)stk + 4);
                        t49 = (t49 + 0x2C);
                        nlAddVector(t49, (((int)stk + 4) + 0x20));
                        t49 = ((int)stk + 4);
                        t49 = (t49 + 0x2C);
                        t49 = (GetCollision2D(t49, 10.0f));
                        t82 = t49;
                        if ((*(int *)((t49 + 0x1C))) != -1) {
                            u54 = (*(float *)((t49 + 0x18)));
                            u68 = ((*(float *)(((int)stk + 52))) - u54);
                            u54 = 0.0f;
                            if (u54 > u68) {
                                t49 = ((int)stk + 4);
                                t49 = (t49 + 0x38);
                                nlAddVector(t49, (((int)stk + 4) + 0x2C));
                                t50 = (t50 + 0x1);
                                if (u55 > u68) {
                                    u55 = u68;
                                }
                                t48 = (*(int *)(((int)stk + 8)));
                                t48 = (t48 + (*(int *)((t52 + 0x0))));
                                *(unsigned int *)(((int)stk + 8)) = t48;
                                t74 = t48;
                            } else {
                                t76 = t49;
                                u77 = u54;
                            }
                            t80 = t74;
                            t82 = t76;
                            u84 = u77;
                        }
                        t122 = t80;
                        t124 = t82;
                        u127 = u84;
                    } else {
                        t49 = t51;
                        t51 = (t51 + 0xC);
                        nlCalcVector(t49, (((int)stk + 4) + 0x2C));
                        u54 = (*(float *)((t52 + 0x4)));
                        u53 = (*(float *)(((int)stk + 52)));
                        u53 = (u53 - u54);
                        u54 = 0.0f;
                        *(float *)(((int)stk + 52)) = u53;
                        u118 = u54;
                        if (!(u53 > u54)) {
                            t49 = ((int)stk + 4);
                            t49 = (t49 + 0x2C);
                            nlAddVector(t49, a4);
                            t49 = ((int)stk + 4);
                            t49 = (t49 + 0x2C);
                            t49 = (GetCollision2D(t49, 10.0f));
                            t108 = t49;
                            if ((*(int *)((t49 + 0x1C))) != -1) {
                                u54 = (*(float *)((t49 + 0x18)));
                                u94 = ((*(float *)(((int)stk + 52))) - u54);
                                u54 = 0.0f;
                                if (u54 > u94) {
                                    t49 = ((int)stk + 4);
                                    t49 = (t49 + 0x38);
                                    nlAddVector(t49, (((int)stk + 4) + 0x2C));
                                    t50 = (t50 + 0x1);
                                    if (u55 > u94) {
                                        u55 = u94;
                                    }
                                    t48 = (*(int *)(((int)stk + 8)));
                                    t48 = (t48 + (*(int *)((t52 + 0x0))));
                                    *(unsigned int *)(((int)stk + 8)) = t48;
                                    t100 = t48;
                                } else {
                                    t102 = t49;
                                    u103 = u54;
                                }
                                t106 = t100;
                                t108 = t102;
                                u110 = u103;
                            }
                            t113 = t106;
                            t115 = t108;
                            u118 = u110;
                        } else {
                            u117 = u53;
                        }
                        t122 = t113;
                        t124 = t115;
                        u126 = u117;
                        u127 = u118;
                    }
                    u53 = u126;
                    u54 = u127;
                    t48 = t122;
                    t49 = t124;
                    t52 = (t52 + 0x8);
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
                    continue;
                }
                break;
            }
            if (t50 == 0) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(((GetCollision2D((((int)stk + 4) + 0x2C), 10.0f)) + 0xC)); }
                nlScaleVector((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x38), (1.0f / (float)t50));
                nlSubVector((((int)stk + 4) + 0x38), a4);
                *(float *)((a4 + 0x4)) = ((*(float *)((a4 + 0x4))) - u55);
                nlOuterProduct((a4 + 0x48), (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20));
                nlAddVector((((int)stk + 4) + 0x20), (a4 + 0xC));
                t136 = nlInnerProduct((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8));
                if (!((-t136) > 0.0f)) {
                    *(unsigned int *)((a4 + 0x68)) = 0x1;
                } else {
                    if ((int)(*(int *)((a4 + 0x68))) < (int)0x3) {
                        t139 = nlInnerProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x38));
                        u142 = *(float *)(((*(int *)((a4 + 0x54))) + 0x20));
                        u143 = _builtin_sqrtf(((t139 * (-t139)) + (nlScalor2((((int)stk + 4) + 0x38)))));
                        nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), (-t136));
                        nlAddVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x20));
                        nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), 0.00999999978f);
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), (((1.0f - (u143 * u142))) * (((-t136) * 1.5999999f))));
                        nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                        nlAddVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), (((((-t136) * 1.5999999f)) * ((u143 * u142))) / (*(float *)(((*(int *)((a4 + 0x54))) + 0x18)))));
                        nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                        nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                        *(unsigned int *)((a4 + 0x68)) = ((*(int *)((a4 + 0x68))) + 0x1);
                    } else {
                        nlSubVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), (-0.333333284f / (*(float *)(((*(int *)((a4 + 0x54))) + 0x18)))));
                        nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                        if ((int)(*(int *)(((int)stk + 8))) > (int)0x2) {
                            nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.899999976f);
                            *(unsigned int *)((a4 + 0x68)) = 0x5;
                        }
                    }
                }
            }
            nlPopMatrix(0x1);
            if ((*(int *)(((*(int *)((a4 + 0x54))) + 0x10))) != 0) {
                t208 = ((int (*)(int))((*(int *)(((*(int *)((a4 + 0x54))) + 0x10)))))(a4);
            }
        }
    }
    return u236;
}
