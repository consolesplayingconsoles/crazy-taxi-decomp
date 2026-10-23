/* Straight-line functions with calls and guards (batch gen_aon): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckAreaGrid(int, int);
int ExecEffect(int, int);
int ExecSpark(void);
int GS_TripMetor(float);
int SetEffect(int, int, int);
int TOANG2(int, float, float);
extern float _builtin_sqrtf(float);
int carAngularMotion(int);
int carBodyTilt(int);
int carFlipTravelDir(int);
int carGearbox(int);
int carGroundCheck(int);
int carRumble(int);
int carWheelCollision(int);
int carWheelForces(int);
int carWheelSlip(int);
int exec_CarSound(int);
int gdc_CoursePointLoadReq(float);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int, int);
int navi_GetRouteDataC(int, int);
float nlFastCos(int);
float nlFastSin(int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pfAddNumber(int, int);
int pfAddString(int);
int pfCleanString(void);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int putPlayerCar(int);
int putPlayerCarByView(int);
int replay(int);
int exec_CarMain(void);

int exec_CarMain(void)
{
    float u8;
    float u9;
    float u12;
    float u14;
    float u17;
    int t46;
    int t69;
    float u93;
    float u94;
    float u95;
    float u96;
    float u99;
    float u97;
    float u106;
    float u107;
    float u108;
    float u109;
    int t115;
    float u126;
    float u127;
    float u121;
    int t133;
    int t134;
    float u136;
    int t137;
    int t138;
    float u140;
    float u194;
    int t199;
    float u205;
    int t215;
    int t257;
    int t258;
    int t259;
    int t261;
    int t262;
    float u263;
    int t288;
    int t298;
    float u292;
    float u296;
    int t303;
    float u307;
    float u311;
    float u316;
    float u320;
    int t331;
    float u325;
    float u329;
    float u70;
    int t83;
    float u102;
    float u152;
    float u153;
    int t117;
    float u144;
    float u211;
    int t216;
    int t217;
    int t254;
    float u255;
    float u256;
    int t278;
    int t285;
    int t349;
    int t343;
    int t337;
    int stk[24];

    nlUnitMatrix();
    carGroundCheck(0xC1790CC);
    if ((int)(*(int *)0xC179488) < (int)0x4) {
        putPlayerCarByView(0x0);
    } else {
        putPlayerCar(0x0);
    }
    replay(0x5);
    u8 = *(float *)0xC1EE2F4;
    if (u8 > 0.0f) {
        u9 = (0.0399999991f - u8);
        if ((0.0399999991f - u8) > 0.0f) {
            u9 = 0.0f;
        }
        u12 = u9;
        if (u9 > -0.0599999987f) {
            u12 = ((-(u9 * u9)) / 0.0599999987f);
        }
        *(unsigned short *)0xC1791E0 = (int)(u12 * 4500.0f);
    } else {
        if (0.0f > u8) {
            u14 = (-0.0399999991f - u8);
            if (0.0f > (-0.0399999991f - u8)) {
                u14 = 0.0f;
            }
            u17 = u14;
            if (0.0599999987f > u14) {
                u17 = ((u14 * u14) / 0.0599999987f);
            }
            *(unsigned short *)0xC1791E0 = (int)(u17 * 4500.0f);
        } else {
            *(unsigned short *)0xC1791E0 = 0x0;
        }
    }
    if ((int)(*(short *)0xC1791E0) > (int)0x1100) {
        *(unsigned short *)0xC1791E0 = 0x1100;
    }
    if ((int)(*(short *)0xC1791E0) < (int)0xFFFFEF00) {
        *(unsigned short *)0xC1791E0 = 0xFFFFEF00;
    }
    *(float *)0xC1791E4 = (*(float *)0xC1EE2F8);
    *(float *)0xC1791E4 = ((*(float *)0xC1791E4) * 1.19999993f);
    *(float *)0xC1791E4 = ((*(float *)0xC1791E4) - 0.199999988f);
    if (0.0f > (*(float *)0xC1791E4)) {
        *(float *)0xC1791E4 = 0.0f;
    }
    if ((*(float *)0xC1791E4) > 1.0f) {
        *(float *)0xC1791E4 = 1.0f;
    }
    *(float *)0xC1791E8 = (*(float *)0xC1EE2FC);
    *(float *)0xC1791E8 = ((*(float *)0xC1791E8) * 1.29999995f);
    *(float *)0xC1791E8 = ((*(float *)0xC1791E8) - 0.299999982f);
    if (0.0f > (*(float *)0xC1791E8)) {
        *(float *)0xC1791E8 = 0.0f;
    }
    if ((*(float *)0xC1791E8) > 1.0f) {
        *(float *)0xC1791E8 = 1.0f;
    }
    t46 = *(int *)0xC179120;
    if ((t46 == 0) || (t46 == 3)) {
        *(unsigned int *)0xC1791F0 = 0x0;
    }
    if ((*(int *)0xC179120) == 1) {
        *(unsigned int *)0xC1791F0 = 0x1;
        *(unsigned int *)0xC179120 = 0x2;
    }
    carRumble(0xC1790CC);
    if ((*(int *)0xC179120) == 0) {
        *(float *)0xC1791E4 = ((*(float *)0xC1791E4) * 0.00999999978f);
    }
    getNearLineIndex(0x0, (*(int *)0xC2A1B28), (*(int *)0xC2A1B2C), 0xC17912C, 0xC179144);
    if ((*(int *)0xC1EE20C) == 1) {
        *(unsigned int *)0xC179130 = (getAreaFromPos(0xC179144, (*(int *)0xC179130)));
        if ((int)(*(int *)0xC179130) < 0) {
            *(unsigned int *)0xC179130 = 0x0;
        }
        t69 = *(int *)0xC179130;
        if (((t69 != 73) && ((t69 != 74) && ((t69 != 81) && (t69 != 82)))) || (u70 = *(float *)0xC179148, !(280.0f > u70))) {
            *(unsigned int *)0xC179494 = 0x0;
        } else {
            *(unsigned int *)0xC179494 = 0x1;
        }
        navi_GetRouteDataC(0xC179144, (*(int *)0xC179130));
    } else {
        *(unsigned int *)0xC179130 = (CheckAreaGrid(0xC179144, (*(int *)0xC179130)));
    }
    if (((*(int *)0xC1790EC) & 0x80067FFE) == 0) {
        *(unsigned int *)0xC0DAEC0 = 0x0;
    } else {
        if (((nlLength(0xC179144, 0xC1790CC)) > 17.5f) && (t83 = *(int *)0xC0DAEC0, (int)t83 < (int)0x5)) {
            *(float *)0xC179228 = ((*(float *)0xC179228) * 0.849999964f);
            *(float *)0xC1791CC = ((*(float *)0xC1791CC) * 0.849999964f);
            nlFastSinCos((unsigned short)(*(short *)0xC1791C0), 0xC1791C8, 0xC1791D0);
            *(float *)0xC1791C8 = ((*(float *)0xC1791C8) * (*(float *)0xC179228));
            *(float *)0xC1791D0 = ((*(float *)0xC1791D0) * (*(float *)0xC179228));
            *(unsigned int *)0xC0DAEC0 = ((*(int *)0xC0DAEC0) + 0x1);
        } else {
            u93 = *(float *)0xC1790CC;
            *(float *)0xC179144 = u93;
            *(float *)0xC179158 = u93;
            u94 = *(float *)0xC1790D4;
            *(float *)0xC17914C = u94;
            *(float *)0xC179160 = u94;
            u95 = *(float *)0xC1790D0;
            u96 = *(float *)0xC179148;
            u99 = _builtin_fabsf((u96 - u95));
            if (18.0f > _builtin_fabsf((u96 - u95))) {
                u97 = *(float *)0xC1790D0;
                *(float *)0xC179148 = u97;
                *(float *)0xC17915C = u97;
                u99 = u97;
            }
            if (((*(float *)0xC1790D8) == 0.0f) && (u102 = *(float *)0xC1790E0, u102 == 0.0f)) {
                *(float *)0xC179228 = 0.0f;
            } else {
                TOANG2(((int)stk + 16), (-(*(float *)0xC1790D8)), (*(float *)0xC1790E0));
                u106 = *(float *)0xC1790D8;
                u107 = *(float *)0xC1790E0;
                u108 = (u107 * u107);
                u108 = u108 + u106 * u106;
                u109 = (_builtin_sqrtf(u108) * 0.974999964f);
                if ((_builtin_sqrtf(u108) * 0.974999964f) > 14.0f) {
                    u109 = 14.0f;
                }
                if (((*(int *)0xC1790EC) & 0x7FFE) != 0) {
                    *(unsigned short *)0xC1791C0 = (*(short *)(((int)stk + 16)));
                    u152 = _builtin_sqrtf(u108);
                    u153 = u109;
                } else {
                    t115 = *(int *)0xC1790EC;
                    u126 = _builtin_sqrtf(u108);
                    u127 = u109;
                    if ((t115 & 0x80000000) != 0) {
                        u121 = (u109 * 0.849999964f);
                        if ((u109 > 6.0f) && (t117 = *(int *)0xC1EE234, t117 != 0)) {
                            u121 = (u109 * 0.699999988f);
                        }
                        *(float *)0xC1791CC = ((*(float *)0xC1791CC) * 0.949999988f);
                        u126 = 0.949999988f;
                        u127 = u121;
                    }
                    if (0.0f > (*(float *)0xC179228)) {
                        t133 = *(short *)(((int)stk + 16));
                        t134 = *(short *)0xC1791C0;
                        u136 = (-u127);
                        if (((int)(unsigned short)(t134 - t133) > (int)0x4000) && ((int)(unsigned short)(t134 - t133) < (int)0xC000)) {
                            u136 = u127;
                        }
                        u144 = u136;
                    } else {
                        t137 = *(short *)(((int)stk + 16));
                        t138 = *(short *)0xC1791C0;
                        u140 = u127;
                        if (((int)(unsigned short)(t138 - t137) > (int)0x4000) && ((int)(unsigned short)(t138 - t137) < (int)0xC000)) {
                            u140 = (-u127);
                        }
                        u144 = u140;
                    }
                    u152 = 0.0f;
                    u153 = u144;
                }
                *(float *)0xC179228 = u153;
                *(unsigned short *)0xC179264 = (int)((*(float *)0xC179118) * 7822.67041f);
            }
            *(float *)0xC17922C = (((*(float *)0xC179228) * 3600.0f) / ((*(float *)0xC1791F8) * 6.28299999f));
            if (((*(int *)0xC1790EC) & 0x80047FFE) != 0) {
                *(unsigned int *)0xC17947C = 0x0;
            }
            nlFastSinCos((unsigned short)(*(short *)0xC1791C0), 0xC1791C8, 0xC1791D0);
            *(float *)0xC1791C8 = ((*(float *)0xC1791C8) * (*(float *)0xC179228));
            *(float *)0xC1791D0 = ((*(float *)0xC1791D0) * (*(float *)0xC179228));
        }
    }
    carFlipTravelDir(0xC1790CC);
    carWheelSlip(0xC1790CC);
    carFlipTravelDir(0xC1790CC);
    carGearbox(0xC1790CC);
    carWheelForces(0xC1790CC);
    carAngularMotion(0xC1790CC);
    u194 = *(float *)0xC179228;
    if (!(_builtin_fabsf(u194) > 0.049999997f)) {
        *(unsigned short *)0xC1791C0 = (*(short *)0xC179152);
    }
    t199 = *(int *)0xC179120;
    if ((t199 != 0) && (t199 != 3)) {
        nlFastSinCos((unsigned short)(*(short *)0xC1791C0), 0xC1791C8, 0xC1791D0);
        *(float *)0xC1791C8 = ((*(float *)0xC1791C8) * (*(float *)0xC179228));
        u205 = *(float *)0xC179228;
        *(float *)0xC1791D0 = ((*(float *)0xC1791D0) * u205);
        u211 = u205;
    } else {
        *(float *)0xC179228 = 0.0f;
        *(float *)0xC1791D0 = 0.0f;
        *(float *)0xC1791C8 = 0.0f;
        *(float *)0xC17922C = 0.0f;
        *(float *)0xC179238 = 0.0f;
        *(float *)0xC179234 = 0.0f;
        u211 = _builtin_fabsf(u194);
    }
    carWheelCollision(0xC1790CC);
    carBodyTilt(0xC1790CC);
    t215 = *(int *)0xC0DB000;
    if (((*(int *)0xC1EE234) == 1) && ((t216 = *(int *)0xC0E49F0, t216 != 0) && (t217 = *(int *)0xC1EE2B8, (t217 & 0x400) != 0))) {
        if ((int)t215 < (int)0x5) {
            *(unsigned int *)0xC0DB000 = ((*(int *)0xC0DB000) + 0x1);
        } else {
            if (1) {
                *(unsigned int *)0xC0DB000 = ((*(int *)0xC0DB000) - 1);
            }
        }
    }
    if ((int)(*(int *)0xC0DB000) >= (int)0x5) {
        pfSetFont(0x0);
        pfSize(1.19999993f, 1.19999993f);
        pfCleanString();
        pfAddNumber((int)((_builtin_fabsf(((((*(float *)0xC17922C) * (*(float *)0xC1791F8))) * 0.0376979932f))) * 0.799999952f), 0x0);
        pfAddString(0xC08A9AC);
        pfLocate(((-(pfLength((*(int *)0xC08D678)))) + 540.0f), 425.0f);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfPuts((*(int *)0xC08D678));
    }
    if (((*(int *)0xC1EE20C) == 1) && ((t254 = *(int *)0xC179130, (int)t254 < (int)0x34) && ((u255 = *(float *)0xC179148, !(u255 > -35.0f)) && (u256 = *(float *)0xC17915C, u256 > -35.0f)))) {
        *(unsigned int *)(((int)stk + 20)) = 0x4;
        t257 = 0x90;
        t258 = 0x4;
        t259 = 0xC17926C;
        for (;;) {
            if ((*(int *)(((int)stk + 20))) == 0) {
                break;
            }
            t258 = t259;
            t258 = (t258 + 0x5C);
            t257 = 0xC;
            t261 = 0;
            for (; t261 < (int)t257; t261++) *(unsigned char *)((((int)stk + 16) + 0x8) + t261) = *(unsigned char *)(t258 + t261);
            t258 = 0xFC;
            t258 = (t258 + 0xC1790CC);
            t257 = 0xC;
            t262 = 0;
            for (; t262 < (int)t257; t262++) *(unsigned char *)((((int)stk + 16) + 0x14) + t262) = *(unsigned char *)(t258 + t262);
            t257 = 0xC024540;
            u263 = *(float *)((t257 + 0x0));
            t257 = 0x18;
            *(float *)((((int)stk + 16) + t257)) = u263;
            t257 = 0xC;
            *(float *)((((int)stk + 16) + t257)) = -35.0f;
            t257 = (SetEffect((((int)stk + 16) + 0x8), (((int)stk + 16) + 0x14), 0x3));
            t257 = 0x18;
            *(float *)((((int)stk + 16) + t257)) = 1.0f;
            t257 = (SetEffect((((int)stk + 16) + 0x8), (((int)stk + 16) + 0x14), 0x3));
            t258 = (*(int *)(((int)stk + 20)));
            t258 = (t258 - 1);
            *(unsigned int *)(((int)stk + 20)) = t258;
            t259 = (t259 + 0x84);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1790CC) = *(struct mv3 *)(0xC179144); }
    nlSubVector3op(0xC1790D8, 0xC179144, 0xC179158);
    *(float *)0xC17911C = 0.0f;
    *(float *)0xC179114 = 0.0f;
    { struct mv5 { int w[5]; }; *(struct mv5 *)(0xC179158) = *(struct mv5 *)(0xC179144); }
    GS_TripMetor((nlScalor(0xC1790D8)));
    if (((*(int *)0xC1EE234) == 1) && (t278 = *(int *)0xC2A4E50, t278 == 0)) {
        exec_CarSound(0xC1790CC);
    }
    ExecEffect(0xC17926C, 0xC1791C8);
    ExecSpark();
    if (((*(int *)0xC1EE234) != 0) && (t285 = *(int *)0xC2A4E50, t285 != 1)) {
        t288 = *(int *)0xC1EE20C;
        t298 = t288;
        if (t288 != 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)(0xC179144); }
            u292 = (*(float *)(((int)stk + 36)));
            u292 = u292 + 600.0f * (nlFastSin((unsigned short)(*(short *)0xC1791C0)));
            *(float *)(((int)stk + 36)) = u292;
            u296 = (*(float *)(((int)stk + 44)));
            u296 = u296 + 600.0f * (nlFastCos((unsigned short)(*(short *)0xC1791C0)));
            *(float *)(((int)stk + 44)) = u296;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            t298 = (gdc_CoursePointLoadReq(1800.0f));
        }
        t349 = t298;
    } else {
        t303 = *(int *)0xC1790C8;
        if (t303 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)(0xC179144); }
            u307 = (*(float *)(((int)stk + 36)));
            u307 = u307 + 200.0f * (nlFastSin((unsigned short)(*(short *)0xC1791C0)));
            *(float *)(((int)stk + 36)) = u307;
            u311 = (*(float *)(((int)stk + 44)));
            u311 = u311 + 200.0f * (nlFastCos((unsigned short)(*(short *)0xC1791C0)));
            *(float *)(((int)stk + 44)) = u311;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
            t343 = (gdc_CoursePointLoadReq(520.0f));
        } else {
            if (t303 == 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)(0xC179144); }
                u316 = (*(float *)(((int)stk + 36)));
                u316 = u316 + 220.0f * (nlFastSin(((unsigned short)(*(short *)0xC1791C0) - 3072)));
                *(float *)(((int)stk + 36)) = u316;
                u320 = (*(float *)(((int)stk + 44)));
                u320 = u320 + 220.0f * (nlFastCos(((unsigned short)(*(short *)0xC1791C0) - 3072)));
                *(float *)(((int)stk + 44)) = u320;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                t337 = (gdc_CoursePointLoadReq(560.0f));
            } else {
                t331 = t303;
                if (t303 == 3) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x14)) = *(struct mv3 *)(0xC179144); }
                    u325 = (*(float *)(((int)stk + 36)));
                    u325 = u325 + 30.0f * (nlFastSin((unsigned short)(*(short *)0xC1791C0)));
                    *(float *)(((int)stk + 36)) = u325;
                    u329 = (*(float *)(((int)stk + 44)));
                    u329 = u329 + 30.0f * (nlFastCos((unsigned short)(*(short *)0xC1791C0)));
                    *(float *)(((int)stk + 44)) = u329;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x14)); }
                    t331 = (gdc_CoursePointLoadReq(50.0f));
                }
                t337 = t331;
            }
            t343 = t337;
        }
        t349 = t343;
    }
    return t349;
}
