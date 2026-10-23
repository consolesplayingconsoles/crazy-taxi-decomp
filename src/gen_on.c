/* Straight-line functions with calls and guards (batch gen_on): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint(int, int);
int nlCalcVector(int, int);
float nlInnerProduct(int, int);
int nlObjPutMvClosedVolumeUseViewMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetScaleFactor(float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
void putTrainModel(int a4, int a5);

void putTrainModel(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t23;
    float t57;
    float u58;
    float u74;
    float u75;
    float t69;
    float u70;
    float u71;
    float u83;
    int t163;
    float t197;
    float u198;
    float u214;
    float u215;
    float t209;
    float u210;
    float u211;
    float u223;
    int t1;
    float u65;
    int t151;
    int t152;
    int t160;
    int t161;
    float u205;
    int stk[23];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)((a4 + 0x78));
    if ((t0 == 19) && (t1 = *(int *)0xC2A9D60, t1 == 0)) {
    } else {
        t2 = *(int *)0xC2A1B30;
        *(unsigned int *)(((int)stk + 8)) = t2;
        t3 = *(int *)((t2 + 0x64));
        if ((t3 != 56) && (t3 != 65)) {
            nlPushMatrix(0x0);
            t23 = *(int *)(((int)stk + 4));
            if ((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t23 << 2)) + 0x0))) != 0) {
                nlPushUnitMatrix();
                nlTranslate((*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x104))), (*(float *)((a4 + 0x94))));
                nlRotateAY((unsigned short)(*(short *)((a4 + 0x10A))));
                nlRotateAX((unsigned short)(*(short *)((a4 + 0x108))));
                nlRotateAZ((unsigned short)(*(short *)((a4 + 0x10C))));
                nlObjPutMvClosedVolumeUseViewMatrix((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t23 << 2)) + 0x0))));
                nlPopMatrix(0x1);
            }
            nlTranslate(0.0f, ((*(float *)((a4 + 0xF8))) + (*(float *)((a4 + 0xFC)))), 0.0f);
            nlRotateAX((unsigned short)(*(short *)((a4 + 0xAA))));
            nlRotateAZ((unsigned short)(*(short *)((a4 + 0xAE))));
            nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + (t23 << 2)) + 0x0))));
            if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C))) == 0) {
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18)); }
                *(float *)(((int)stk + 32)) = 0.0f;
                nlCalcPoint((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
                nlSubVector3op((((int)stk + 4) + 0x10), 0xC179840, (((int)stk + 4) + 0x1C));
                nlUnitVector((((int)stk + 4) + 0x10));
                *(float *)(((int)stk + 36)) = 0.0f;
                *(float *)(((int)stk + 32)) = 0.0f;
                *(float *)(((int)stk + 40)) = 1.0f;
                nlCalcVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
                t57 = nlInnerProduct((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                if (t57 > 0.0f) {
                    u58 = (t57 * t57);
                    *(unsigned int *)(((int)stk + 4)) = (int)(((u58 * (1.0f + 1.0f))) * 32768.0f);
                    u65 = (u58 * (1.0f + 1.0f));
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0x0;
                    u65 = 0.0f;
                }
                u74 = 1.0f;
                u75 = u65;
                if (((nlRand()) & 7) == 0) {
                    t69 = nlRandom();
                    u70 = 0.799999952f;
                    u70 = u70 + t69 * 0.199999988f;
                    u71 = 0.5f;
                    u71 = u71 + t69 * 0.5f;
                    u74 = u71;
                    u75 = (u65 * u70);
                }
                u83 = u75;
                if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))) == 0) {
                    u83 = (u75 * 1.5f);
                }
                nlPushMatrix(0x0);
                nlTranslateV(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18));
                nlRotateAZ((*(int *)(((int)stk + 4))));
                nlScale(u83, u83, u83);
                if (u83 > 1.0f) {
                    nlSetScaleFactor(u83);
                }
                nlObjPutUseViewMatrixTrnsl((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C))), u74);
                nlPopMatrix(0x1);
                if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))) != 0) {
                    nlPushMatrix(0x0);
                    nlTranslate((-(*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x0)))), (*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x4))), (*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x8))));
                    nlRotateAZ((*(int *)(((int)stk + 4))));
                    nlScale(u83, u83, u83);
                    if (u83 > 1.0f) {
                        nlSetScaleFactor(u83);
                    }
                    nlObjPutUseViewMatrixTrnsl((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))), u74);
                    nlPopMatrix(0x1);
                }
            }
            if ((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70);
                nlPushMatrix(0x0);
                nlTranslateV((*(int *)(((int)stk + 4))));
                nlRotateAY((*(int *)((a4 + 0xC0))));
                nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))));
                nlPopMatrix(0x1);
            }
            if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x7C);
                nlPushMatrix(0x0);
                nlTranslateV((*(int *)(((int)stk + 4))));
                nlRotateAY((unsigned short)(*(short *)((a4 + 0xAC))));
                nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))));
                nlPopMatrix(0x1);
            }
            nlPopMatrix(0x1);
        } else {
            if (((*(int *)((a4 + 0x80))) == 0x13B) && ((t151 = *(int *)((a4 + 0xD4)), (int)t151 > (int)0xFA) && (t152 = *(int *)((a4 + 0xD4)), (int)t152 < (int)0x190))) {
            } else {
                if (((*(int *)((a4 + 0x80))) == 0x13C) && ((t160 = *(int *)((a4 + 0xD4)), (int)t160 > (int)0x1C2) && (t161 = *(int *)((a4 + 0xD4)), (int)t161 < (int)0x258))) {
                } else {
                    nlPushMatrix(0x0);
                    t163 = *(int *)(((int)stk + 4));
                    if ((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t163 << 2)) + 0x0))) != 0) {
                        nlPushUnitMatrix();
                        nlTranslate((*(float *)((a4 + 0x8C))), (*(float *)((a4 + 0x104))), (*(float *)((a4 + 0x94))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x10A))));
                        nlRotateAX((unsigned short)(*(short *)((a4 + 0x108))));
                        nlRotateAZ((unsigned short)(*(short *)((a4 + 0x10C))));
                        nlObjPutMvClosedVolumeUseViewMatrix((*(int *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x8) + (t163 << 2)) + 0x0))));
                        nlPopMatrix(0x1);
                    }
                    nlTranslate(0.0f, ((*(float *)((a4 + 0xF8))) + (*(float *)((a4 + 0xFC)))), 0.0f);
                    nlRotateAX((unsigned short)(*(short *)((a4 + 0xAA))));
                    nlRotateAZ((unsigned short)(*(short *)((a4 + 0xAE))));
                    nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + (t163 << 2)) + 0x0))));
                    if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C))) == 0) {
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x1C)) = *(struct mv3 *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18)); }
                        *(float *)(((int)stk + 32)) = 0.0f;
                        nlCalcPoint((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
                        nlSubVector3op((((int)stk + 4) + 0x10), 0xC179840, (((int)stk + 4) + 0x1C));
                        nlUnitVector((((int)stk + 4) + 0x10));
                        *(float *)(((int)stk + 36)) = 0.0f;
                        *(float *)(((int)stk + 32)) = 0.0f;
                        *(float *)(((int)stk + 40)) = 1.0f;
                        nlCalcVector((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x1C));
                        t197 = nlInnerProduct((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10));
                        if (t197 > 0.0f) {
                            u198 = (t197 * t197);
                            *(unsigned int *)(((int)stk + 4)) = (int)(((u198 * (1.0f + 1.0f))) * 32768.0f);
                            u205 = (u198 * (1.0f + 1.0f));
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            u205 = 0.0f;
                        }
                        u214 = 1.0f;
                        u215 = u205;
                        if (((nlRand()) & 7) == 0) {
                            t209 = nlRandom();
                            u210 = 0.799999952f;
                            u210 = u210 + t209 * 0.199999988f;
                            u211 = 0.5f;
                            u211 = u211 + t209 * 0.5f;
                            u214 = u211;
                            u215 = (u205 * u210);
                        }
                        u223 = u215;
                        if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))) == 0) {
                            u223 = (u215 * 1.5f);
                        }
                        nlPushMatrix(0x0);
                        nlTranslateV(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18));
                        nlRotateAZ((*(int *)(((int)stk + 4))));
                        nlScale(u223, u223, u223);
                        if (u223 > 1.0f) {
                            nlSetScaleFactor(u223);
                        }
                        nlObjPutUseViewMatrixTrnsl((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x1C))), u214);
                        nlPopMatrix(0x1);
                        if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))) != 0) {
                            nlPushMatrix(0x0);
                            nlTranslate((-(*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x0)))), (*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x4))), (*(float *)((((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70) + 0x18) + 0x8))));
                            nlRotateAZ((*(int *)(((int)stk + 4))));
                            nlScale(u223, u223, u223);
                            if (u223 > 1.0f) {
                                nlSetScaleFactor(u223);
                            }
                            nlObjPutUseViewMatrixTrnsl((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x3C))), u214);
                            nlPopMatrix(0x1);
                        }
                    }
                    if ((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))) != 0) {
                        *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x70);
                        nlPushMatrix(0x0);
                        nlTranslateV((*(int *)(((int)stk + 4))));
                        nlRotateAY((*(int *)((a4 + 0xC0))));
                        nlObjPutUseViewMatrix((*(int *)(((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x58) + 0x0))));
                        nlPopMatrix(0x1);
                    }
                    if ((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))) != 0) {
                        *(unsigned int *)(((int)stk + 4)) = (((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x7C);
                        nlPushMatrix(0x0);
                        nlTranslateV((*(int *)(((int)stk + 4))));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0xAC))));
                        nlObjPutUseViewMatrix((*(int *)((((short)((short)t0 * (short)0xA8) + 0xC0A2628) + 0x60))));
                        nlPopMatrix(0x1);
                    }
                    nlPopMatrix(0x1);
                }
            }
        }
    }
}
