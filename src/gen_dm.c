/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
int SetAdvCamera(int, int);
int GetRotVec4Ang(int, int, int);
int setReplayType(int);
int gdc_CourseAdvLoadReq(int, int, int);
int EndPsg_Start(int, int, int);
int EndPsg_ClearIpBuff(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c078310(void);
float FUN_0c078c00(int);
int GetCollision2D(int, float);
int GetRotVec(int);
int Initialize_Replay_Part(void);
int carBalance(int);
int MultiRot4Vec(int);
int Sound_Request(int, int);
extern float _builtin_sqrtf(float);
int cableCarDrive(int);
int camSetMode(int);
int camSnapToCar(int);
int carColliReflection(void);
int carEntry(int);
int carMultiCollision(int);
int carResistance(void);
int carSteering(void);
int dropOutCheck(int);
int gdc_CoursePointLoadReq(float);
int getGoiToolFlag(int);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlLocate(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
extern int nlPrintf();
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetTranslate(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int replay(int);
int technicalCheck(int);
void InitColliWall(int a4);
int cableCarExec(int a4);
int colliObjPairHit(int a4, int a5, int a6, int a7, int a8, int a9);
float SetObjFly(int a4);
int replayChangeControl(int a4);



int colliObjPairHit(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t11;
    int t13;
    int t18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u24;
    float u25;
    float u28;
    float u29;
    float u30;
    float u31;
    float u35;
    float u36;
    float u41;
    int t238;
    float u42;
    int t226;
    float u43;
    int t214;
    float u44;
    int t202;
    float u45;
    float u46;
    int t190;
    float u47;
    int t178;
    int t48;
    int t49;
    int t50;
    int t51;
    float u53;
    float u54;
    float u55;
    float u56;
    float u57;
    float u58;
    float u59;
    float u66;
    float u60;
    float u62;
    float u61;
    int t69;
    int t106;
    int t167;
    int t107;
    float u111;
    float u112;
    float u113;
    float u114;
    int t115;
    int t121;
    float u117;
    float u118;
    int t119;
    float u132;
    float u133;
    float u134;
    float u135;
    int t136;
    int t143;
    float u138;
    float u139;
    int t140;
    float t155;
    float u156;
    int t158;
    int t160;
    int t126;
    int t149;
    int stk[31] = {0};

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a6;
    t0 = *(int *)(((int)stk + 8));
    t1 = *(int *)((t0 + 0x28));
    *(unsigned int *)(((int)stk + 24)) = t1;
    t2 = *(int *)(((int)stk + 20));
    t3 = *(int *)((t2 + 0x28));
    *(unsigned int *)(((int)stk + 4)) = t3;
    if (a9 != 0) {
        FUN_0c078310();
    } else {
        t5 = *(int *)(((int)stk + 8));
        nlTranslateV(t5);
        t7 = *(int *)(((int)stk + 24));
        MultiRot4Vec(t7);
        nlTranslateV((a5 + 0x60));
        FUN_0c078310();
        t11 = *(int *)(((int)stk + 20));
        nlTranslateV(t11);
        t13 = *(int *)(((int)stk + 4));
        MultiRot4Vec(t13);
        nlTranslateV((a7 + 0x60));
    }
    *(float *)(((int)stk + 12)) = -3.40282347e+38f;
    *(float *)(((int)stk + 16)) = 3.40282347e+38f;
    t18 = 0x0;
    u19 = 3.40282347e+38f;
    u20 = -3.40282347e+38f;
    u21 = 3.40282347e+38f;
    u22 = -3.40282347e+38f;
    for (;;) {
        nlSqrt(((signed char)(((t18 << 1) + t18) << 2) + a7), (((int)stk + 4) + 0x3C));
        u24 = *(float *)(((int)stk + 64));
        u25 = *(float *)(((int)stk + 12));
        if (u24 > u25) {
            *(float *)(((int)stk + 12)) = u24;
        } else {
            if (u19 > u24) {
                u19 = u24;
            }
        }
        u28 = *(float *)(((int)stk + 68));
        if (u28 > u22) {
            u29 = *(float *)(((int)stk + 68));
            u22 = u29;
        } else {
            u30 = *(float *)(((int)stk + 68));
            if (u21 > u30) {
                u31 = *(float *)(((int)stk + 68));
                u21 = u31;
            }
        }
        u35 = *(float *)(((int)stk + 72));
        if (u35 > u20) {
            u20 = u35;
        } else {
            u36 = *(float *)(((int)stk + 16));
            if (u36 > u35) {
                *(float *)(((int)stk + 16)) = u35;
            }
        }
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x8) {
            break;
        }
    }
    u41 = *(float *)((a5 + 0x6C));
    t238 = 0x0;
    if (!(u19 > u41)) {
        u42 = *(float *)(((int)stk + 12));
        t226 = 0x0;
        if (!((-u41) > u42)) {
            u43 = *(float *)((a5 + 0x70));
            t214 = 0x0;
            if (!(u21 > u43)) {
                u44 = *(float *)((a5 + 0x70));
                t202 = 0x0;
                if (!((-u44) > u22)) {
                    u45 = *(float *)((a5 + 0x74));
                    u46 = *(float *)(((int)stk + 16));
                    t190 = 0x0;
                    if (!(u46 > u45)) {
                        u47 = *(float *)((a5 + 0x74));
                        t178 = 0x0;
                        if ((-u47) > u20) {
                        } else {
                            t48 = *(int *)0xC0965F8;
                            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t48;
                            t49 = *(int *)0xC0965F4;
                            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t49;
                            t50 = *(int *)0xC0965F0;
                            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t50;
                            *(unsigned int *)(((int)stk + 4)) = 0x0;
                            if ((int)0x0 < (int)0x8) {
                                t51 = 0x0;
                                for (;;) {
                                    nlSqrt(((signed char)(((t51 << 1) + t51) << 2) + a7), (((int)stk + 4) + 0x3C));
                                    u53 = *(float *)(((int)stk + 64));
                                    u54 = *(float *)((a5 + 0x6C));
                                    if (!(u53 > u54)) {
                                        if (!((-u54) > u53)) {
                                            u55 = *(float *)((a5 + 0x74));
                                            u56 = *(float *)(((int)stk + 72));
                                            if (!(u56 > u55)) {
                                                u57 = *(float *)((a5 + 0x74));
                                                u58 = *(float *)(((int)stk + 72));
                                                if (!((-u57) > u58)) {
                                                    u59 = *(float *)(((int)stk + 68));
                                                    u66 = 0.0f;
                                                    if (!(0.0f > u59)) {
                                                        u60 = *(float *)((a5 + 0x70));
                                                        u62 = u59;
                                                        if (u59 > u60) {
                                                            u61 = *(float *)((a5 + 0x70));
                                                            u62 = u61;
                                                        }
                                                        u66 = u62;
                                                    }
                                                    *(float *)(((int)stk + 68)) = u66;
                                                    nlAddVector((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x3C));
                                                    t69 = *(int *)(((int)stk + 4));
                                                    *(unsigned int *)(((int)stk + 4)) = (t69 + 0x1);
                                                }
                                            }
                                        }
                                    }
                                    t51 = (t51 + 0x1);
                                    if ((int)t51 >= (int)0x8) {
                                        break;
                                    }
                                }
                            }
                            t106 = *(int *)(((int)stk + 4));
                            t167 = 0x1;
                            if (t106 == 0) {
                            } else {
                                t107 = *(int *)(((int)stk + 4));
                                nlScaleVector((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x30), (1.0f / (float)t107));
                                nlGetTranslate((((int)stk + 4) + 0x24));
                                nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), (((int)stk + 4) + 0x24));
                                *(float *)((a8 + 0x24)) = -3.40282347e+38f;
                                u111 = *(float *)(((int)stk + 28));
                                u112 = *(float *)(((int)stk + 40));
                                if (u111 > 0.0f) {
                                    u113 = *(float *)((a5 + 0x6C));
                                    u114 = *(float *)((a8 + 0x24));
                                    t115 = 0xC0965F0;
                                    if ((((-u113) - u112) / u111) > u114) {
                                        *(float *)((a8 + 0x24)) = (((-u113) - u112) / u111);
                                        t115 = 0xC096638;
                                    }
                                    t126 = t115;
                                } else {
                                    t121 = 0xC0965F0;
                                    if (0.0f > u111) {
                                        u117 = *(float *)((a5 + 0x6C));
                                        u118 = *(float *)((a8 + 0x24));
                                        t119 = 0xC0965F0;
                                        if (((u117 - u112) / u111) > u118) {
                                            *(float *)((a8 + 0x24)) = ((u117 - u112) / u111);
                                            t119 = 0xC09662C;
                                        }
                                        t121 = t119;
                                    }
                                    t126 = t121;
                                }
                                u132 = *(float *)(((int)stk + 36));
                                u133 = *(float *)(((int)stk + 48));
                                if (u132 > 0.0f) {
                                    u134 = *(float *)((a5 + 0x74));
                                    u135 = *(float *)((a8 + 0x24));
                                    t136 = t126;
                                    if ((((-u134) - u133) / u132) > u135) {
                                        *(float *)((a8 + 0x24)) = (((-u134) - u133) / u132);
                                        t136 = 0xC096668;
                                    }
                                    t149 = t136;
                                } else {
                                    t143 = t126;
                                    if (0.0f > u132) {
                                        u138 = *(float *)((a5 + 0x74));
                                        u139 = *(float *)((a8 + 0x24));
                                        t140 = t126;
                                        if (((u138 - u133) / u132) > u139) {
                                            *(float *)((a8 + 0x24)) = ((u138 - u133) / u132);
                                            t140 = 0xC09665C;
                                        }
                                        t143 = t140;
                                    }
                                    t149 = t143;
                                }
                                t155 = nlInnerProduct(t149, (((int)stk + 4) + 0x18));
                                u156 = *(float *)((a8 + 0x24));
                                *(float *)((a8 + 0x24)) = (t155 * ((-u156) + 1.0f));
                                nlPushUnitMatrix();
                                t158 = *(int *)(((int)stk + 8));
                                nlTranslateV(t158);
                                t160 = *(int *)(((int)stk + 24));
                                MultiRot4Vec(t160);
                                nlTranslateV((a5 + 0x60));
                                nlSqrt((((int)stk + 4) + 0x30), a8);
                                FUN_0c077210(t149, (a8 + 0x18));
                                FUN_0c077210((((int)stk + 4) + 0x18), (a8 + 0xC));
                                nlPopMatrix(0x1);
                                t167 = 0x2;
                            }
                            t178 = t167;
                        }
                        t190 = t178;
                    }
                    t202 = t190;
                }
                t214 = t202;
            }
            t226 = t214;
        }
        t238 = t226;
    }
    return t238;
}


