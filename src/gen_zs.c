/* Straight-line functions with calls and guards (batch gen_zs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Bezier(int, int, float);
int CheckClipping(float);
float FUN_0c089de8(int);
int Sound_Request(int, int);
int nlAddVector(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
int nlSqrt(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlVoidUnitVector(int);
void ExecArrow(int a4, float f4);

void ExecArrow(int a4, float f4)
{
    float u0;
    float u1;
    int t140;
    float u240;
    float u242;
    int t249;
    int t250;
    float u308;
    int t135;
    int t136;
    int t137;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t190;
    int stk[32] = {0};

    u0 = 200.0f;
    u0 = u0 + 0.099999994f * f4;
    u1 = u0;
    if (100.0f > u0) {
        u1 = 100.0f;
    }
    if (a4 != 0) {
        if ((*(int *)0xC274240) != 0) {
        } else {
            *(unsigned int *)0xC274240 = ((*(int *)0xC274240) + 0x1);
            if ((*(int *)0xC1EE20C) != 2) {
                Sound_Request(0x805A9, 0x0);
            } else {
                if ((*(int *)0xC1EE20C) != 2) {
                } else {
                    if ((*(int *)0xC1EE214) == 8) {
                        Sound_Request(0x805A9, 0x0);
                    } else {
                        if ((*(int *)0xC1EE214) == 5) {
                            Sound_Request(0x805A9, 0x0);
                        } else {
                            if ((*(int *)0xC1EE214) == 9) {
                                Sound_Request(0x805A9, 0x0);
                            } else {
                                if ((*(int *)0xC1EE214) == 13) {
                                    Sound_Request(0x805A9, 0x0);
                                } else {
                                    if ((*(int *)0xC1EE214) == 6) {
                                        Sound_Request(0x805A9, 0x0);
                                    } else {
                                        if ((*(int *)0xC1EE214) != 7) {
                                        } else {
                                            Sound_Request(0x805A9, 0x0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        t140 = 0x1;
        if ((((int)(*(int *)0xC179130) <= (int)0x1) && (t135 = *(int *)0xC274244, (int)t135 > (int)0x1)) || ((t136 = *(int *)0xC179130, (int)t136 < (int)0xD) && (t137 = *(int *)0xC274244, t137 == 14))) {
            t140 = 0x0;
        }
        if ((((*(int *)0xC1EE20C) == 2) && ((((t144 = *(int *)0xC1EE214, t144 == 3) || ((t145 = *(int *)0xC1EE214, t145 == 11) || ((t146 = *(int *)0xC1EE214, t146 == 1) || ((t147 = *(int *)0xC1EE214, t147 == 13) || (t148 = *(int *)0xC1EE214, t148 == 10))))) && (t149 = *(int *)0xC274240, t149 == 0)) || ((t150 = *(int *)0xC1EE20C, t150 == 2) && ((t151 = *(int *)0xC1EE214, t151 != 3) && ((t152 = *(int *)0xC1EE214, t152 != 11) && ((t153 = *(int *)0xC1EE214, t153 != 1) && ((t154 = *(int *)0xC1EE214, t154 != 13) && ((t155 = *(int *)0xC1EE214, t155 != 10) && ((t156 = *(int *)0xC274240, t156 == 0) && (1000.0f > f4)))))))))) || ((t157 = *(int *)0xC1EE20C, t157 != 2) && ((t158 = *(int *)0xC274240, t158 == 0) && (1200.0f > f4)))) {
            if (t140 != 0) {
                if ((CheckClipping(-25.0f)) != 0) {
                    *(unsigned int *)0xC274240 = ((*(int *)0xC274240) + 0x1);
                    if (((*(int *)0xC1EE20C) == 2) && ((t168 = *(int *)0xC1EE20C, t168 != 2) || ((t169 = *(int *)0xC1EE214, t169 != 8) && ((t170 = *(int *)0xC1EE214, t170 != 5) && ((t171 = *(int *)0xC1EE214, t171 != 9) && ((t172 = *(int *)0xC1EE214, t172 != 13) && ((t173 = *(int *)0xC1EE214, t173 != 6) && (t174 = *(int *)0xC1EE214, t174 != 7)))))))) {
                    } else {
                        Sound_Request(0x805A9, 0x0);
                    }
                }
            }
        } else {
            if (((*(int *)0xC274240) != 1) && (t190 = *(int *)0xC274240, t190 != 2)) {
            } else {
                if (t140 != 0) {
                    if ((CheckClipping(0.0f)) == 0) {
                        *(unsigned int *)0xC274240 = 0x3;
                    }
                } else {
                    *(unsigned int *)0xC274240 = 0x3;
                }
            }
        }
    }
    *(float *)(((((int)stk + 4) + 0x1C) + 0x0)) = 0.0f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x4)) = 20.0f;
    *(float *)(((((int)stk + 4) + 0x1C) + 0x8)) = -70.0f;
    *(float *)((((((int)stk + 4) + 0x1C) + 0xC) + 0x0)) = 0.0f;
    *(float *)((((((int)stk + 4) + 0x1C) + 0xC) + 0x4)) = 99.9999924f;
    *(float *)((((((int)stk + 4) + 0x1C) + 0xC) + 0x8)) = -870.0f;
    nlPushMatrix(0xC179864);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC274234); }
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + 100.0f);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x1C) + 0x24);
    nlSqrt((((int)stk + 4) + 0x10), ((((int)stk + 4) + 0x1C) + 0x24));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((((int)stk + 4) + 0x1C) + 0x18)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
    nlSqrt(0xC274234, (((int)stk + 4) + 0x10));
    nlPopMatrix(0x1);
    if ((*(int *)0xC274240) == 3) {
        u240 = *(float *)0xC27424C;
        *(float *)0xC27424C = (u240 - 50.0f);
        if (100.0f > (u240 - 50.0f)) {
            *(float *)0xC27424C = 100.0f;
        }
    } else {
        u242 = *(float *)0xC27424C;
        *(float *)0xC27424C = (u242 + 25.0f);
        if ((u242 + 25.0f) > 600.0f) {
            *(float *)0xC27424C = 600.0f;
        }
    }
    t249 = *(int *)0xC274240;
    t250 = *(int *)0xC274250;
    if (t249 != 0) {
        if (t249 != 1) {
            if (t249 != 2) {
                if (t249 != 3) {
                } else {
                    if (t250 != 0) {
                        *(unsigned int *)0xC274250 = ((t250 + 0x1000) & 0xF000);
                    }
                    nlSubVector3op((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x1C), 0xC274228);
                    nlScaleVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4), 0.099999994f);
                    nlAddVector(0xC274228, (((int)stk + 4) + 0x4));
                    if (1.0f > (nlScalor((((int)stk + 4) + 0x4)))) {
                        *(unsigned int *)0xC274240 = 0x0;
                        *(float *)0xC274248 = 0.0f;
                    }
                }
            } else {
                *(unsigned int *)0xC274250 = ((*(int *)0xC274250) + 0x200);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC274228) = *(struct mv3 *)(((((int)stk + 4) + 0x1C) + 0x24)); }
            }
        } else {
            *(float *)0xC274248 = ((*(float *)0xC274248) + 0.0249999985f);
            *(unsigned int *)0xC274250 = 0x0;
            if (!(1.0f > (*(float *)0xC274248))) {
                *(float *)0xC274248 = 1.0f;
                *(unsigned int *)0xC274240 = ((*(int *)0xC274240) + 0x1);
            }
            Bezier((((int)stk + 4) + 0x1C), 0xC274228, (*(float *)0xC274248));
        }
        nlSubVector3op((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x10), 0xC274228);
        nlVoidUnitVector((((int)stk + 4) + 0x4));
        if ((*(int *)0xC274240) == 2) {
            nlScaleVector((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4), (((((FUN_0c089de8(((*(int *)0xC274250) << 2))) + (-1.0f)) * u1)) * 0.099999994f));
            nlAddVector(0xC274228, (((int)stk + 4) + 0x10));
        }
        nlPushUnitMatrix();
        nlTranslateV(0xC274228);
        nlRotateV(0xC096668, (((int)stk + 4) + 0x4));
        nlRotateAZ((*(int *)0xC274250));
        u308 = *(float *)0xC27424C;
        nlScale(u308, u308, u308);
        nlSetScaleFactor((*(float *)0xC27424C));
        nlObjPut(0xC46BAB8);
        nlPopMatrix(0x1);
    } else {
        *(float *)0xC274248 = 0.0f;
    }
}
