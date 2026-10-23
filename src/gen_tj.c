/* Straight-line functions with calls and guards (batch gen_tj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int MultiRot4Vec(int);
int SetSpark(int, int, int);
extern float _builtin_sqrtf(float);
int colliBoxAhead(int, int, int);
int colliObjPairHit(int, int, int, int, int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
float nlInnerProduct(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlQuickInvertMatrix(void);
int nlScaleVector(int, int, float);
float nlScalor2(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitVector(int);
float nlUnitVectorsd(int, int);
int colliBoxBox(int a4, int a5);

int colliBoxBox(int a4, int a5)
{
    int t0;
    int t2;
    int t59;
    float t144;
    float t145;
    float u148;
    float u149;
    int t156;
    float t157;
    float u158;
    int t159;
    float u160;
    int t164;
    int t165;
    float u166;
    float u162;
    int t163;
    float t204;
    int t206;
    float u207;
    float u208;
    float u209;
    int t217;
    float t221;
    int t223;
    float u224;
    float u225;
    float u226;
    int t234;
    int t248;
    int t249;
    int t133;
    int t168;
    int stk[41];

    t0 = *(int *)0xC26ECD8;
    if (t0 == 0) {
        t2 = *(int *)((a5 + 0x28));
        if ((*(float *)((((short)((short)t0 * (short)0x1C) + 0xC0ED440) + 0x0))) > (*(float *)0xC26ECE0)) {
            *(unsigned int *)(((t2 + 0x24) + 0x0)) = 0x1;
            *(float *)(((t2 + 0x24) + 0x4)) = (nlUnitVectorsd((a4 + 0xC), (((int)stk + 12) + 0x5C)));
            *(float *)(((0x4 + (t2 + 0x24)) + 0x0)) = ((*(float *)(((0x4 + (t2 + 0x24)) + 0x0))) - (nlInnerProduct((((int)stk + 8) + 0x60), (a5 + 0xC))));
        } else {
            *(unsigned int *)(((t2 + 0x24) + 0x0)) = 0x0;
        }
    }
    if (!((*(float *)0xC26ECE8) > (*(float *)0xC26ECE0))) {
        if ((*(float *)0xC26ECEC) > (*(float *)0xC26ECE0)) {
            colliBoxAhead(a4, a5, (*(int *)0xC26ECDC));
        }
        if ((*(float *)0xC26ECF0) > (*(float *)0xC26ECE0)) {
            colliBoxAhead(a5, a4, (*(int *)0xC26ECD8));
        }
    } else {
        nlPushUnitMatrix();
        t59 = colliObjPairHit(a4, (*(int *)0xC26ECF8), a5, (*(int *)0xC26ECFC), 0xC270408, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t59;
        if (t59 != 0) {
            *(unsigned int *)(((int)stk + 12)) = (colliObjPairHit(a5, (*(int *)0xC26ECFC), a4, (*(int *)0xC26ECF8), 0xC270430, 0x1));
        } else {
            *(unsigned int *)(((int)stk + 12)) = 0x0;
        }
        nlPopMatrix(0x1);
        if ((*(int *)(((int)stk + 16))) == 0) {
            if ((*(float *)0xC26ECEC) > (*(float *)0xC26ECE0)) {
                colliBoxAhead(a4, a5, (*(int *)0xC26ECDC));
            }
            if ((*(float *)0xC26ECF0) > (*(float *)0xC26ECE0)) {
                colliBoxAhead(a5, a4, (*(int *)0xC26ECD8));
            }
        } else {
            if ((*(int *)(((int)stk + 12))) == 0) {
                if ((*(float *)0xC26ECEC) > (*(float *)0xC26ECE0)) {
                    colliBoxAhead(a4, a5, (*(int *)0xC26ECDC));
                }
                if ((*(float *)0xC26ECF0) > (*(float *)0xC26ECE0)) {
                    colliBoxAhead(a5, a4, (*(int *)0xC26ECD8));
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x14)) = *(struct mv3 *)(0xC0965F0); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x20)) = *(struct mv3 *)(0xC0965F0); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x5C)) = *(struct mv3 *)(0xC0965F0); }
                if ((*(int *)(((int)stk + 16))) == 2) {
                    nlAddVector((((int)stk + 12) + 0x20), 0xC270420);
                    nlScaleVector((((int)stk + 12) + 0x8), 0xC270420, (*(float *)0xC27042C));
                    nlAddVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                    nlAddVector((((int)stk + 12) + 0x5C), 0xC270408);
                }
                if ((*(int *)(((int)stk + 12))) == 2) {
                    nlSubVector((((int)stk + 12) + 0x20), 0xC270448);
                    nlScaleVector((((int)stk + 12) + 0x8), 0xC270448, (*(float *)0xC270454));
                    nlSubVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x8));
                    nlAddVector((((int)stk + 12) + 0x5C), 0xC270430);
                }
                if (((*(int *)(((int)stk + 16))) == 2) && (t133 = *(int *)(((int)stk + 12)), t133 == 2)) {
                    nlScaleVector((((int)stk + 12) + 0x14), (((int)stk + 12) + 0x14), 0.5f);
                    nlScaleVector((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C), 0.5f);
                    nlUnitVector((((int)stk + 12) + 0x20));
                }
                nlSubVector3op((((int)stk + 12) + 0x50), (((int)stk + 12) + 0x5C), a4);
                nlSubVector3op((((int)stk + 12) + 0x44), (((int)stk + 12) + 0x5C), a5);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x38)) = *(struct mv3 *)((a4 + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x2C)) = *(struct mv3 *)((a5 + 0xC)); }
                t144 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x38));
                t145 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x2C));
                if (!((t144 - t145) > 0.0f)) {
                } else {
                    u148 = *(float *)((((short)((short)(*(int *)0xC26ECD8) * (short)0x1C) + 0xC0ED440) + 0xC));
                    u149 = *(float *)((((short)((short)(*(short *)0xC26ECDC) * (short)0x1C) + 0xC0ED440) + 0xC));
                    nlScaleVector((((int)stk + 12) + 0x38), (((int)stk + 12) + 0x20), ((t144 - t145) * (u148 + u149)));
                    if ((*(int *)0xC26ECD8) == 0) {
                        *(float *)((a5 + 0x1C)) = ((*(float *)0xC26ECF4) * (((t144 - t145) * (u148 + u149))));
                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)((a5 + 0x28))) + 0x24);
                        nlUnitVectorsd((a4 + 0xC), (((int)stk + 12) + 0x8));
                        t156 = *(int *)(((int)stk + 16));
                        t157 = nlInnerProduct((((int)stk + 8) + 0xC), (((int)stk + 8) + 0x24));
                        *(float *)(((0x8 + t156) + 0x0)) = t157;
                        u158 = *(float *)((a5 + 0x1C));
                        *(unsigned int *)(((int)stk + 12)) = (int)_builtin_fabsf((u158 * (1.0f + 1.0f)));
                        t159 = *(int *)(((int)stk + 16));
                        u160 = *(float *)((t159 + 0x8));
                        t164 = t159;
                        t165 = (int)_builtin_fabsf((u158 * (1.0f + 1.0f)));
                        u166 = t157;
                        if (0.099999994f > u160) {
                            u162 = *(float *)(((*(int *)(((int)stk + 16))) + 0x8));
                            t163 = *(int *)(((int)stk + 12));
                            *(unsigned int *)(((int)stk + 12)) = (t163 + ((int)_builtin_fabsf((u162 * 20.0f)) + 0x2));
                            t164 = (t163 + ((int)_builtin_fabsf((u162 * 20.0f)) + 0x2));
                            t165 = ((int)_builtin_fabsf((u162 * 20.0f)) + 0x2);
                            u166 = _builtin_fabsf((u162 * 20.0f));
                            t168 = (int)_builtin_fabsf((u162 * 20.0f));
                        } else {
                            t168 = (int)_builtin_fabsf((u158 * (1.0f + 1.0f)));
                        }
                        if ((int)(*(int *)(((int)stk + 12))) > 0) {
                            *(unsigned int *)(((int)stk + 16)) = (*(int *)((a4 + 0x28)));
                            nlPushUnitMatrix();
                            nlTranslateV(a4);
                            MultiRot4Vec((*(int *)(((int)stk + 16))));
                            nlPushMatrix(0x0);
                            nlQuickInvertMatrix();
                            nlCalcPoint((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 108)) = 5.0f;
                            nlCalcPoint((((int)stk + 12) + 0x5C), (((int)stk + 12) + 0x5C));
                            nlPopMatrix(0x1);
                            SetSpark((((int)stk + 12) + 0x5C), (a4 + 0xC), (*(int *)(((int)stk + 12))));
                        }
                    }
                    nlScaleVector((((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x38), (*(float *)0xC26ECF4));
                    t204 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x50));
                    t206 = *(int *)0xC26ECD8;
                    u207 = *(float *)((((short)((short)t206 * (short)0x1C) + 0xC0ED440) + 0x4));
                    u208 = *(float *)((((short)((short)t206 * (short)0x1C) + 0xC0ED440) + 0x14));
                    u209 = _builtin_sqrtf(((t204 * (-t204)) + (nlScalor2((((int)stk + 12) + 0x50)))));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x2C), (1.0f - (u209 * (u208 / u207))));
                    nlSubVector((a4 + 0xC), (((int)stk + 12) + 0x8));
                    nlOuterProduct((((int)stk + 12) + 0x50), (((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x8));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x8), (((u209 * (u208 / u207))) * (*(float *)((((short)((short)(*(int *)0xC26ECD8) * (short)0x1C) + 0xC0ED440) + 0x10)))));
                    t217 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((int)stk + 12)) = t217;
                    nlSubVector((t217 + 0x18), (((int)stk + 12) + 0x8));
                    nlScaleVector((((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x38), (1.0f - (*(float *)0xC26ECF4)));
                    t221 = nlInnerProduct((((int)stk + 12) + 0x20), (((int)stk + 12) + 0x44));
                    t223 = *(short *)0xC26ECDC;
                    u224 = *(float *)((((short)((short)t223 * (short)0x1C) + 0xC0ED440) + 0x4));
                    u225 = *(float *)((((short)((short)t223 * (short)0x1C) + 0xC0ED440) + 0x14));
                    u226 = _builtin_sqrtf(((t221 * (-t221)) + (nlScalor2((((int)stk + 12) + 0x44)))));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x2C), (1.0f - (u226 * (u225 / u224))));
                    nlAddVector((a5 + 0xC), (((int)stk + 12) + 0x8));
                    nlOuterProduct((((int)stk + 12) + 0x44), (((int)stk + 12) + 0x2C), (((int)stk + 12) + 0x8));
                    nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x8), (((u226 * (u225 / u224))) * (*(float *)((((short)((short)(*(short *)0xC26ECDC) * (short)0x1C) + 0xC0ED440) + 0x10)))));
                    t234 = *(int *)((a5 + 0x28));
                    *(unsigned int *)(((int)stk + 12)) = t234;
                    nlAddVector((t234 + 0x18), (((int)stk + 12) + 0x8));
                }
                nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x14), (*(float *)0xC26ECF4));
                nlAddVector(a4, (((int)stk + 12) + 0x8));
                nlScaleVector((((int)stk + 12) + 0x8), (((int)stk + 12) + 0x14), (1.0f - (*(float *)0xC26ECF4)));
                nlSubVector(a5, (((int)stk + 12) + 0x8));
                t248 = *(int *)0xC26ECDC;
                *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) | (((int)t248 >= 0) ? (0x1 << (t248 & 31)) : ((-(int)t248 & 31) ? ((int)0x1 >> (-(int)t248 & 31)) : ((int)0x1 >> 31))));
                t249 = *(int *)0xC26ECD8;
                *(unsigned int *)((a5 + 0x20)) = ((*(int *)((a5 + 0x20))) | (((int)t249 >= 0) ? (0x1 << (t249 & 31)) : ((-(int)t249 & 31) ? ((int)0x1 >> (-(int)t249 & 31)) : ((int)0x1 >> 31))));
            }
        }
    }
    return 0x1;
}
