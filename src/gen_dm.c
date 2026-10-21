/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWall(int, float);
int FUN_0c028fda(int, int);
int FUN_0c036256(int, int, int);
int FUN_0c04bb70(int);
int FUN_0c04c104(int, int, int);
int FUN_0c071d34(int, int, int);
int FUN_0c071db8(void);
int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c078310(void);
float FUN_0c078c00(int);
int GetCollision2D(int, float);
int GetRotVec(int);
int Initialize_Replay_Part(void);
int Put_Motion2D(int);
int SetCameraPosVelocity(int);
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
int FUN_0c033234(int a4, int a5, int a6, int a7, int a8, int a9);
float SetObjFly(int a4);
int Init_Result(int a4);

void InitColliWall(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t66;
    int t68;
    int t69;
    int t70;
    int t73;
    int t74;
    float u75;
    float u76;
    float u77;
    float u78;
    float u79;
    int stk[15] = {0};

    t0 = *(int *)0xC1EE20C;
    if (t0 != -1) {
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    *(unsigned int *)0xC270458 = 0xCDF6150;
                    t1 = *(int *)0xC08F704;
                    *(unsigned int *)0xC270478 = t1;
                    t2 = *(int *)0xC08F700;
                    *(unsigned int *)0xC270474 = t2;
                    t3 = *(int *)0xC08F6FC;
                    *(unsigned int *)0xC270470 = t3;
                    t4 = *(int *)0xC08F6F8;
                    *(unsigned int *)0xC27046C = t4;
                    t5 = *(int *)0xC08F6F4;
                    *(unsigned int *)0xC270468 = t5;
                    t6 = *(int *)0xC08F6F0;
                    *(unsigned int *)0xC270464 = t6;
                    t7 = *(int *)0xC08F6EC;
                    *(unsigned int *)0xC270460 = t7;
                    t8 = *(int *)0xC08F6E8;
                    *(unsigned int *)0xC27045C = t8;
                } else {
                    t9 = *(int *)(((a4 << 2) + 0xC0ED810));
                    *(unsigned int *)0xC270458 = t9;
                    t10 = *(int *)(((a4 << 2) + 0xC0ED84C));
                    t11 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x1C));
                    *(unsigned int *)0xC270478 = t11;
                    t12 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x18));
                    *(unsigned int *)0xC270474 = t12;
                    t13 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x14));
                    *(unsigned int *)0xC270470 = t13;
                    t14 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x10));
                    *(unsigned int *)0xC27046C = t14;
                    t15 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0xC));
                    *(unsigned int *)0xC270468 = t15;
                    t16 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x8));
                    *(unsigned int *)0xC270464 = t16;
                    t17 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x4));
                    *(unsigned int *)0xC270460 = t17;
                    t18 = *(int *)((((((t10 << 2) << 2) << 1) + 0xC08FC78) + 0x0));
                    *(unsigned int *)0xC27045C = t18;
                }
            } else {
                *(unsigned int *)0xC270458 = 0xCE36B90;
                t23 = *(int *)0xC08F9EC;
                *(unsigned int *)0xC270478 = t23;
                t24 = *(int *)0xC08F9E8;
                *(unsigned int *)0xC270474 = t24;
                t25 = *(int *)0xC08F9E4;
                *(unsigned int *)0xC270470 = t25;
                t26 = *(int *)0xC08F9E0;
                *(unsigned int *)0xC27046C = t26;
                t27 = *(int *)0xC08F9DC;
                *(unsigned int *)0xC270468 = t27;
                t28 = *(int *)0xC08F9D8;
                *(unsigned int *)0xC270464 = t28;
                t29 = *(int *)0xC08F9D4;
                *(unsigned int *)0xC270460 = t29;
                t30 = *(int *)0xC08F9D0;
                *(unsigned int *)0xC27045C = t30;
            }
        } else {
            *(unsigned int *)0xC270458 = 0xCDF6150;
            t35 = *(int *)0xC08F704;
            *(unsigned int *)0xC270478 = t35;
            t36 = *(int *)0xC08F700;
            *(unsigned int *)0xC270474 = t36;
            t37 = *(int *)0xC08F6FC;
            *(unsigned int *)0xC270470 = t37;
            t38 = *(int *)0xC08F6F8;
            *(unsigned int *)0xC27046C = t38;
            t39 = *(int *)0xC08F6F4;
            *(unsigned int *)0xC270468 = t39;
            t40 = *(int *)0xC08F6F0;
            *(unsigned int *)0xC270464 = t40;
            t41 = *(int *)0xC08F6EC;
            *(unsigned int *)0xC270460 = t41;
            t42 = *(int *)0xC08F6E8;
            *(unsigned int *)0xC27045C = t42;
        }
    } else {
        *(unsigned int *)0xC270458 = 0xCE4E9C4;
        t47 = *(int *)0xC08FA64;
        *(unsigned int *)0xC270478 = t47;
        t48 = *(int *)0xC08FA60;
        *(unsigned int *)0xC270474 = t48;
        t49 = *(int *)0xC08FA5C;
        *(unsigned int *)0xC270470 = t49;
        t50 = *(int *)0xC08FA58;
        *(unsigned int *)0xC27046C = t50;
        t51 = *(int *)0xC08FA54;
        *(unsigned int *)0xC270468 = t51;
        t52 = *(int *)0xC08FA50;
        *(unsigned int *)0xC270464 = t52;
        t53 = *(int *)0xC08FA4C;
        *(unsigned int *)0xC270460 = t53;
        t54 = *(int *)0xC08FA48;
        *(unsigned int *)0xC27045C = t54;
    }
    t59 = *(int *)0xC0ED898;
    if (t59 == 0) {
    } else {
        t60 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 12)) = (0xC27047C + (short)(((((t60 << 2) << 1) + t60) << 2) << 1));
            t61 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 16)) = (signed char)(((t61 << 1) + t61) << 2);
                t62 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = ((signed char)(((t61 << 1) + t61) << 2) + t62);
                t63 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 4)) = (t63 + ((t60 * 0x78) + 0xC26ED00));
                t64 = *(int *)(((int)stk + 4));
                nlGetAverageVector(t64, ((t63 + ((t60 * 0x78) + 0xC26ED00)) + 0x30), ((signed char)(((t61 << 1) + t61) << 2) + t62), 0.5f, 0.5f);
                t66 = *(int *)(((int)stk + 8));
                nlAddVector(t66, (((t60 * 0x78) + 0xC26ED00) + 0x60));
                t61 = (t61 + 0x1);
                if ((int)t61 >= (int)0x4) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 8)) = ((short)((short)t60 * (short)0x1C) + 0xC2708B4);
            *(unsigned int *)(((int)stk + 4)) = ((short)(((((t60 << 2) << 1) + t60) << 2) << 1) + 0xC27047C);
            t68 = 0x0;
            for (;;) {
                t69 = *(int *)(((int)stk + 8));
                t70 = *(int *)(((int)stk + 4));
                nlGetAverageVector(((signed char)((((t68 << 1) + t68) << 2) << 1) + t70), (((signed char)((((t68 << 1) + t68) << 2) << 1) + t70) + 0xC), (t69 + (signed char)(((t68 << 1) + t68) << 2)), 0.5f, 0.5f);
                t68 = (t68 + 0x1);
                if ((int)t68 >= (int)0x2) {
                    break;
                }
            }
            t73 = ((short)t60 * (short)0x1C);
            t74 = (t60 * 0x78);
            t60 = (t60 + 0x1);
            u75 = *(float *)(((t74 + 0xC26ED00) + 0x6C));
            *(float *)((((short)t73 + 0xC2708B4) + 0x18)) = u75;
            u76 = *(float *)((((short)t73 + 0xC2708B4) + 0x8));
            u77 = *(float *)(((0x18 + ((short)t73 + 0xC2708B4)) + 0x0));
            *(float *)((((short)t73 + 0xC2708B4) + 0x8)) = (u76 - u77);
            u78 = *(float *)((((short)t73 + 0xC2708B4) + 0x14));
            u79 = *(float *)(((0x18 + ((short)t73 + 0xC2708B4)) + 0x0));
            *(float *)((((short)t73 + 0xC2708B4) + 0x14)) = (u78 + u79);
            if ((int)t60 >= (int)0xF) {
                break;
            }
        }
        *(unsigned int *)0xC0ED898 = 0x0;
    }
}

int cableCarExec(int a4)
{
    int t0;
    int t1;
    int t104;
    int t96;
    int t2;
    int t3;
    int t4;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float t16;
    int t21;
    float u22;
    int t23;
    int t24;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    float u41;
    float u43;
    float u44;
    float u45;
    int t47;
    int t61;
    float u64;
    float u65;
    float u66;
    int t72;
    int t74;
    int t76;
    float u79;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    float u88;
    int t92;
    int t93;
    int t94;
    float u19;
    int stk[11] = {0};

    t0 = *(int *)0xC2A1B30;
    t1 = *(int *)((t0 + 0x64));
    t104 = 0x64;
    if ((int)t1 < 0) {
    } else {
        t96 = 0x64;
        if ((int)t1 > (int)0x5) {
        } else {
            t2 = *(int *)(((0x98 + a4) + 0x8));
            *(unsigned int *)((((int)stk + 4) + 0x8)) = t2;
            t3 = *(int *)(((0x98 + a4) + 0x4));
            *(unsigned int *)((((int)stk + 4) + 0x4)) = t3;
            t4 = *(int *)(((0x98 + a4) + 0x0));
            *(unsigned int *)((((int)stk + 4) + 0x0)) = t4;
            technicalCheck(a4);
            t6 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t6 | 0xD);
            cableCarDrive(a4);
            t8 = *(int *)((a4 + 0x84));
            if ((t8 & 8) != 0) {
                t9 = *(int *)(((a4 + 0x14) + 0x8));
                *(unsigned int *)(((0x8C + a4) + 0x8)) = t9;
                t10 = *(int *)(((a4 + 0x14) + 0x4));
                *(unsigned int *)(((0x8C + a4) + 0x4)) = t10;
                t11 = *(int *)(((a4 + 0x14) + 0x0));
                *(unsigned int *)(((0x8C + a4) + 0x0)) = t11;
                t12 = *(int *)(((a4 + 0x20) + 0x8));
                *(unsigned int *)(((0x98 + a4) + 0x8)) = t12;
                t13 = *(int *)(((a4 + 0x20) + 0x4));
                *(unsigned int *)(((0x98 + a4) + 0x4)) = t13;
                t14 = *(int *)(((a4 + 0x20) + 0x0));
                *(unsigned int *)(((0x98 + a4) + 0x0)) = t14;
                nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.199999988f);
                t16 = nlInnerProduct((a4 + 0x5C), (a4 + 0x44));
                *(float *)((a4 + 0x100)) = t16;
                u19 = t16;
            }
            t21 = *(int *)((a4 + 0x84));
            if ((t21 & 4) == 0) {
            } else {
                u22 = *(float *)((a4 + 0x9C));
                *(float *)((a4 + 0x9C)) = (u22 - 0.073499985f);
                t23 = *(int *)((a4 + 0x110));
                if ((int)t23 > 0) {
                    t24 = *(int *)((a4 + 0x110));
                    *(unsigned int *)((a4 + 0x110)) = (t24 - 1);
                    carSteering();
                    carResistance();
                }
                nlScaleVector((0x98 + a4), (0x98 + a4), 0.999799967f);
                nlAddVector((0x8C + a4), (0x98 + a4));
                t36 = GetCollision2D((0x8C + a4), 30.0f);
                t37 = *(int *)((t36 + 0x1C));
                if (t37 != -1) {
                    t38 = *(int *)(((t36 + 0xC) + 0x8));
                    *(unsigned int *)(((0xEC + a4) + 0x8)) = t38;
                    t39 = *(int *)(((t36 + 0xC) + 0x4));
                    *(unsigned int *)(((0xEC + a4) + 0x4)) = t39;
                    t40 = *(int *)(((t36 + 0xC) + 0x0));
                    *(unsigned int *)(((0xEC + a4) + 0x0)) = t40;
                    u41 = *(float *)((t36 + 0x18));
                    *(float *)((a4 + 0x104)) = u41;
                    carMultiCollision(a4);
                    u43 = *(float *)((a4 + 0x104));
                    u44 = *(float *)((a4 + 0x90));
                    if (u43 > u44) {
                        u45 = *(float *)((a4 + 0x104));
                        *(float *)((a4 + 0x90)) = u45;
                        carColliReflection();
                        t47 = *(int *)((a4 + 0x110));
                        *(unsigned int *)((a4 + 0x110)) = (int)((float)t47 + 5.0f);
                    }
                } else {
                    dropOutCheck(a4);
                }
                t61 = *(int *)((a4 + 0x110));
                if ((int)t61 > (int)0xA) {
                    *(unsigned int *)((a4 + 0x110)) = 0xA;
                }
                nlSubVector3op(((int)stk + 4), (0x98 + a4), ((int)stk + 4));
                u64 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
                u65 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u65 - (u64 * (1.0f + 1.0f)));
                u66 = *(float *)((a4 + 0xF8));
                *(float *)((a4 + 0xF8)) = (u66 * 0.849999964f);
                Put_Motion2D(a4);
            }
            nlPushUnitMatrix();
            t72 = *(short *)((a4 + 0xA8));
            nlRotateAZ((-(unsigned short)t72));
            t74 = *(short *)((a4 + 0xA4));
            nlRotateAX((-(unsigned short)t74));
            t76 = *(short *)((a4 + 0xA6));
            nlRotateAY((-(unsigned short)t76));
            FUN_0c077210((0x98 + a4), (((int)stk + 4) + 0xC));
            u79 = *(float *)(((int)stk + 24));
            *(float *)((a4 + 0xCC)) = u79;
            nlPopMatrix(0x1);
            carEntry(a4);
            t82 = *(int *)(((0x8C + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x14) + 0x8)) = t82;
            t83 = *(int *)(((0x8C + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x14) + 0x4)) = t83;
            t84 = *(int *)(((0x8C + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x14) + 0x0)) = t84;
            t85 = *(int *)(((0x98 + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x20) + 0x8)) = t85;
            t86 = *(int *)(((0x98 + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x20) + 0x4)) = t86;
            t87 = *(int *)(((0x98 + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x20) + 0x0)) = t87;
            u88 = *(float *)((a4 + 0x100));
            nlScaleVector((((int)stk + 4) + 0xC), (a4 + 0x44), (u88 - u19));
            nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0xC));
            nlScaleVector((a4 + 0x5C), (a4 + 0x5C), 0.899999976f);
            t92 = *(short *)((a4 + 0xA8));
            t93 = *(short *)((a4 + 0xA6));
            t94 = *(short *)((a4 + 0xA4));
            FUN_0c036256((a4 + 0x44), (unsigned short)t94, (unsigned short)t93);
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            t96 = 0x68;
        }
        t104 = t96;
    }
    return t104;
}

int FUN_0c033234(int a4, int a5, int a6, int a7, int a8, int a9)
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
        SetCameraPosVelocity(t7);
        nlTranslateV((a5 + 0x60));
        FUN_0c078310();
        t11 = *(int *)(((int)stk + 20));
        nlTranslateV(t11);
        t13 = *(int *)(((int)stk + 4));
        SetCameraPosVelocity(t13);
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
        FUN_0c0771b0(((signed char)(((t18 << 1) + t18) << 2) + a7), (((int)stk + 4) + 0x3C));
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
                                    FUN_0c0771b0(((signed char)(((t51 << 1) + t51) << 2) + a7), (((int)stk + 4) + 0x3C));
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
                                SetCameraPosVelocity(t160);
                                nlTranslateV((a5 + 0x60));
                                FUN_0c0771b0((((int)stk + 4) + 0x30), a8);
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

float SetObjFly(int a4)
{
    int t0;
    int t1;
    int t2;
    float u3;
    int t4;
    int t5;
    float t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t52;
    float u53;
    float u60;
    int t61;
    int t67;
    float u72;
    int t74;
    float u75;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    float u91;
    int t92;
    float u93;
    float u97;
    int t100;
    int t101;
    int t118;
    float u102;
    float u103;
    float u104;
    int t107;
    int t108;
    float u123;
    float u124;
    float u154;
    int t126;
    int t127;
    int t144;
    float u128;
    float u129;
    float u130;
    int t133;
    int t134;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    float u172;
    float t175;
    int t176;
    float t177;
    float t178;
    int t179;
    float u180;
    int t187;
    float u188;
    int t193;
    int t195;
    float u196;
    int t200;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    float u282;
    int t283;
    int t289;
    float u294;
    int t296;
    float u297;
    int t299;
    int t300;
    int t301;
    int t302;
    int t303;
    int t304;
    int t305;
    int t306;
    int t307;
    int t308;
    int t309;
    int t310;
    float u313;
    int t314;
    float u315;
    float u319;
    int t322;
    int t323;
    int t340;
    float u324;
    float u325;
    float u326;
    int t329;
    int t330;
    float u345;
    float u346;
    float u376;
    int t348;
    int t349;
    int t366;
    float u350;
    float u351;
    float u352;
    int t355;
    int t356;
    int t387;
    int t388;
    int t389;
    int t390;
    int t391;
    float u394;
    float t397;
    int t398;
    float t399;
    float t400;
    int t401;
    float u402;
    int t409;
    float u410;
    int t415;
    int t417;
    float u418;
    int t422;
    int t459;
    int t460;
    int t461;
    int t462;
    int t463;
    float u491;
    float u269;
    float u89;
    float u90;
    int t158;
    int t160;
    float u162;
    float u163;
    int t116;
    float u120;
    int t110;
    int t112;
    float u113;
    int t149;
    int t151;
    float u153;
    int t142;
    float u146;
    int t136;
    int t138;
    float u139;
    float u209;
    float u210;
    float u211;
    float u311;
    float u312;
    int t380;
    int t382;
    float u384;
    float u385;
    int t338;
    float u342;
    int t332;
    int t334;
    float u335;
    int t371;
    int t373;
    float u375;
    int t364;
    float u368;
    int t358;
    int t360;
    float u361;
    float u431;
    float u432;
    float u433;
    int stk[30] = {0};

    t0 = *(int *)((a4 + 0x20));
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x68)) = 0x1;
        t1 = *(int *)((a4 + 0x20));
        if ((t1 & 1) != 0) {
            t2 = *(int *)((a4 + 0x64));
            if (t2 != 0xC5E0600) {
                u3 = *(float *)((a4 + 0x1C));
                if (u3 > 0.00999999978f) {
                    t4 = *(int *)((a4 + 0x54));
                    t5 = *(int *)((t4 + 0x14));
                    Sound_Request(t5, 0x1);
                }
            }
        }
    }
    t31 = nlScalor((a4 + 0x48));
    if (!(t31 > 0.000999999931f)) {
        t32 = *(int *)((a4 + 0x68));
        if (t32 == 5) {
            t33 = *(int *)0xC0965F8;
            *(unsigned int *)(((a4 + 0x58) + 0x8)) = t33;
            t34 = *(int *)0xC0965F4;
            *(unsigned int *)(((a4 + 0x58) + 0x4)) = t34;
            t35 = *(int *)0xC0965F0;
            *(unsigned int *)(((a4 + 0x58) + 0x0)) = t35;
            t36 = *(int *)0xC0965F8;
            *(unsigned int *)(((a4 + 0xC) + 0x8)) = t36;
            t37 = *(int *)0xC0965F4;
            *(unsigned int *)(((a4 + 0xC) + 0x4)) = t37;
            t38 = *(int *)0xC0965F0;
            *(unsigned int *)(((a4 + 0xC) + 0x0)) = t38;
            t39 = *(int *)0xC0965F8;
            *(unsigned int *)(((a4 + 0x48) + 0x8)) = t39;
            t40 = *(int *)0xC0965F4;
            *(unsigned int *)(((a4 + 0x48) + 0x4)) = t40;
            t41 = *(int *)0xC0965F0;
            *(unsigned int *)(((a4 + 0x48) + 0x0)) = t41;
            *(unsigned int *)((a4 + 0x68)) = 0x0;
        }
    }
    t52 = *(int *)((a4 + 0x68));
    if (t52 == 0) {
        u53 = *(float *)((a4 + 0x18));
        if (!(1000.0f > u53)) {
            u269 = t31;
        } else {
            nlPushUnitMatrix();
            nlTranslateV(a4);
            if (t31 > 0.000999999931f) {
                nlRotate((a4 + 0x48), ((int)(((t31 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
            }
            SetCameraPosVelocity((a4 + 0x30));
            u60 = *(float *)((a4 + 0x18));
            if (1000.0f > u60) {
                t61 = *(int *)((a4 + 0x64));
                nlObjPutUseViewMatrix(t61);
            }
            t67 = *(int *)((a4 + 0x68));
            if (t67 == 0) {
                nlPopMatrix(0x1);
            } else {
                GetRotVec((a4 + 0x30));
                nlScaleVector((a4 + 0xC), (a4 + 0xC), 0.979999959f);
                nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.959999979f);
                u72 = *(float *)((a4 + 0x10));
                *(float *)((a4 + 0x10)) = (u72 - 0.166666657f);
                nlAddVector(a4, (a4 + 0xC));
                t74 = *(int *)((a4 + 0x54));
                u75 = *(float *)((t74 + 0x1C));
                CheckColliWall(a4, u75);
                t77 = *(int *)0xC0965F8;
                *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t77;
                t78 = *(int *)0xC0965F4;
                *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t78;
                t79 = *(int *)0xC0965F0;
                *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t79;
                t80 = *(int *)((a4 + 0x54));
                t81 = *(int *)((t80 + 0x8));
                t82 = *(int *)((t80 + 0x4));
                t83 = *(int *)((t80 + 0x0));
                *(unsigned int *)(((int)stk + 4)) = t81;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t84 = 0xC0965F0;
                t85 = t80;
                t86 = 0x0;
                t87 = t83;
                t88 = t82;
                u91 = 0.0f;
                for (;;) {
                    t92 = *(int *)(((int)stk + 4));
                    if (t92 != 0) {
                        u90 = 0.0f;
                        u93 = *(float *)((t88 + 0x4));
                        u89 = u93;
                        if (u90 > u89) {
                            t84 = 0xC0771B0;
                            t85 = t87;
                            t87 = (t87 + 0xC);
                            FUN_0c0771b0(t85, (((int)stk + 4) + 0x2C));
                            t85 = a4;
                            t85 = (t85 + 0x3C);
                            nlOuterProduct(t85, 0xC096644, (((int)stk + 4) + 0x20));
                            t85 = a4;
                            t85 = (t85 + 0x3C);
                            nlOuterProduct(t85, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            u97 = *(float *)((t88 + 0x4));
                            t85 = ((int)stk + 4);
                            t85 = (t85 + 0x20);
                            nlScaleUnitVector(t85, (((int)stk + 4) + 0x20), (-u97));
                            t85 = ((int)stk + 4);
                            t85 = (t85 + 0x2C);
                            nlAddVector(t85, (((int)stk + 4) + 0x20));
                            t85 = ((int)stk + 4);
                            t85 = (t85 + 0x2C);
                            t100 = GetCollision2D(t85, 10.0f);
                            t85 = t100;
                            t101 = *(int *)((t85 + 0x1C));
                            t118 = t85;
                            if (t101 != -1) {
                                u102 = *(float *)((t85 + 0x18));
                                u90 = u102;
                                u103 = *(float *)(((int)stk + 52));
                                u104 = (u103 - u90);
                                u90 = 0.0f;
                                if (u90 > u104) {
                                    t85 = ((int)stk + 4);
                                    t85 = (t85 + 0x38);
                                    nlAddVector(t85, (((int)stk + 4) + 0x2C));
                                    t86 = (t86 + 0x1);
                                    if (u91 > u104) {
                                        u91 = u104;
                                    }
                                    t107 = *(int *)(((int)stk + 8));
                                    t84 = t107;
                                    t108 = *(int *)((t88 + 0x0));
                                    t84 = (t84 + t108);
                                    *(unsigned int *)(((int)stk + 8)) = t84;
                                    t110 = t84;
                                } else {
                                    t112 = t85;
                                    u113 = u90;
                                }
                                t116 = t110;
                                t118 = t112;
                                u120 = u113;
                            }
                            t158 = t116;
                            t160 = t118;
                            u163 = u120;
                        } else {
                            t85 = t87;
                            t87 = (t87 + 0xC);
                            FUN_0c077210(t85, (((int)stk + 4) + 0x2C));
                            u123 = *(float *)((t88 + 0x4));
                            u90 = u123;
                            u124 = *(float *)(((int)stk + 52));
                            u89 = u124;
                            u89 = (u89 - u90);
                            u90 = 0.0f;
                            *(float *)(((int)stk + 52)) = u89;
                            u154 = u90;
                            if (!(u89 > u90)) {
                                t85 = ((int)stk + 4);
                                t85 = (t85 + 0x2C);
                                nlAddVector(t85, a4);
                                t85 = ((int)stk + 4);
                                t85 = (t85 + 0x2C);
                                t126 = GetCollision2D(t85, 10.0f);
                                t85 = t126;
                                t127 = *(int *)((t85 + 0x1C));
                                t144 = t85;
                                if (t127 != -1) {
                                    u128 = *(float *)((t85 + 0x18));
                                    u90 = u128;
                                    u129 = *(float *)(((int)stk + 52));
                                    u130 = (u129 - u90);
                                    u90 = 0.0f;
                                    if (u90 > u130) {
                                        t85 = ((int)stk + 4);
                                        t85 = (t85 + 0x38);
                                        nlAddVector(t85, (((int)stk + 4) + 0x2C));
                                        t86 = (t86 + 0x1);
                                        if (u91 > u130) {
                                            u91 = u130;
                                        }
                                        t133 = *(int *)(((int)stk + 8));
                                        t84 = t133;
                                        t134 = *(int *)((t88 + 0x0));
                                        t84 = (t84 + t134);
                                        *(unsigned int *)(((int)stk + 8)) = t84;
                                        t136 = t84;
                                    } else {
                                        t138 = t85;
                                        u139 = u90;
                                    }
                                    t142 = t136;
                                    t144 = t138;
                                    u146 = u139;
                                }
                                t149 = t142;
                                t151 = t144;
                                u154 = u146;
                            } else {
                                u153 = u89;
                            }
                            t158 = t149;
                            t160 = t151;
                            u162 = u153;
                            u163 = u154;
                        }
                        t165 = *(int *)(((int)stk + 4));
                        u89 = u162;
                        u90 = u163;
                        t84 = t158;
                        t85 = t160;
                        t88 = (t88 + 0x8);
                        *(unsigned int *)(((int)stk + 4)) = (t165 - 1);
                        continue;
                    }
                    break;
                }
                if (t86 == 0) {
                } else {
                    t166 = GetCollision2D((((int)stk + 4) + 0x2C), 10.0f);
                    t167 = *(int *)(((t166 + 0xC) + 0x8));
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t167;
                    t168 = *(int *)(((t166 + 0xC) + 0x4));
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t168;
                    t169 = *(int *)(((t166 + 0xC) + 0x0));
                    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t169;
                    nlScaleVector((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x38), (1.0f / (float)t86));
                    nlSubVector((((int)stk + 4) + 0x38), a4);
                    u172 = *(float *)((a4 + 0x4));
                    *(float *)((a4 + 0x4)) = (u172 - u91);
                    nlOuterProduct((a4 + 0x48), (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20));
                    nlAddVector((((int)stk + 4) + 0x20), (a4 + 0xC));
                    t175 = nlInnerProduct((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8));
                    if (!((-t175) > 0.0f)) {
                        *(unsigned int *)((a4 + 0x68)) = 0x1;
                    } else {
                        t176 = *(int *)((a4 + 0x68));
                        if ((int)t176 < (int)0x3) {
                            t177 = nlInnerProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x38));
                            t178 = FUN_0c078c00((((int)stk + 4) + 0x38));
                            t179 = *(int *)((a4 + 0x54));
                            u180 = *(float *)((t179 + 0x20));
                            nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), (-t175));
                            nlAddVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x20));
                            nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), 0.00999999978f);
                            nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), ((1.0f - (_builtin_sqrtf(((t177 * (-t177)) + t178)) * u180)) * ((-t175) * 1.5999999f)));
                            nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                            nlAddVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                            t187 = *(int *)((a4 + 0x54));
                            u188 = *(float *)((t187 + 0x18));
                            nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), ((((-t175) * 1.5999999f) * (_builtin_sqrtf(((t177 * (-t177)) + t178)) * u180)) / u188));
                            nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                            nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                            t193 = *(int *)((a4 + 0x68));
                            *(unsigned int *)((a4 + 0x68)) = (t193 + 0x1);
                            u209 = (1.0f - (_builtin_sqrtf(((t177 * (-t177)) + t178)) * u180));
                            u210 = (_builtin_sqrtf(((t177 * (-t177)) + t178)) * u180);
                            u211 = (((-t175) * 1.5999999f) * (_builtin_sqrtf(((t177 * (-t177)) + t178)) * u180));
                        } else {
                            nlSubVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                            t195 = *(int *)((a4 + 0x54));
                            u196 = *(float *)((t195 + 0x18));
                            nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), (-0.333333284f / u196));
                            nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                            nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                            t200 = *(int *)(((int)stk + 8));
                            if ((int)t200 > (int)0x2) {
                                nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.899999976f);
                                *(unsigned int *)((a4 + 0x68)) = 0x5;
                            }
                            u209 = 1.0f;
                            u210 = 10.0f;
                            u211 = (-t175);
                        }
                    }
                }
                nlPopMatrix(0x1);
                t237 = *(int *)((a4 + 0x54));
                t238 = *(int *)((t237 + 0x10));
                if (t238 != 0) {
                    t239 = *(int *)((a4 + 0x54));
                    t240 = *(int *)((t239 + 0x10));
                    t241 = ((int (*)(int))(t240))(a4);
                }
            }
        }
        u491 = u269;
    } else {
        nlPushUnitMatrix();
        nlTranslateV(a4);
        if (t31 > 0.000999999931f) {
            nlRotate((a4 + 0x48), ((int)(((t31 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
        }
        SetCameraPosVelocity((a4 + 0x30));
        u282 = *(float *)((a4 + 0x18));
        if (1000.0f > u282) {
            t283 = *(int *)((a4 + 0x64));
            nlObjPutUseViewMatrix(t283);
        }
        t289 = *(int *)((a4 + 0x68));
        if (t289 == 0) {
            nlPopMatrix(0x1);
        } else {
            GetRotVec((a4 + 0x30));
            nlScaleVector((a4 + 0xC), (a4 + 0xC), 0.979999959f);
            nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.959999979f);
            u294 = *(float *)((a4 + 0x10));
            *(float *)((a4 + 0x10)) = (u294 - 0.166666657f);
            nlAddVector(a4, (a4 + 0xC));
            t296 = *(int *)((a4 + 0x54));
            u297 = *(float *)((t296 + 0x1C));
            CheckColliWall(a4, u297);
            t299 = *(int *)0xC0965F8;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t299;
            t300 = *(int *)0xC0965F4;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t300;
            t301 = *(int *)0xC0965F0;
            *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t301;
            t302 = *(int *)((a4 + 0x54));
            t303 = *(int *)((t302 + 0x8));
            t304 = *(int *)((t302 + 0x4));
            t305 = *(int *)((t302 + 0x0));
            *(unsigned int *)(((int)stk + 4)) = t303;
            *(unsigned int *)(((int)stk + 8)) = 0x0;
            t306 = 0xC0965F0;
            t307 = t302;
            t308 = 0x0;
            t309 = t305;
            t310 = t304;
            u313 = 0.0f;
            for (;;) {
                t314 = *(int *)(((int)stk + 4));
                if (t314 != 0) {
                    u312 = 0.0f;
                    u315 = *(float *)((t310 + 0x4));
                    u311 = u315;
                    if (u312 > u311) {
                        t307 = t309;
                        t309 = (t309 + 0xC);
                        FUN_0c0771b0(t307, (((int)stk + 4) + 0x2C));
                        t307 = a4;
                        t307 = (t307 + 0x3C);
                        nlOuterProduct(t307, 0xC096644, (((int)stk + 4) + 0x20));
                        t307 = a4;
                        t307 = (t307 + 0x3C);
                        nlOuterProduct(t307, (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        u319 = *(float *)((t310 + 0x4));
                        t307 = ((int)stk + 4);
                        t307 = (t307 + 0x20);
                        nlScaleUnitVector(t307, (((int)stk + 4) + 0x20), (-u319));
                        t307 = ((int)stk + 4);
                        t307 = (t307 + 0x2C);
                        nlAddVector(t307, (((int)stk + 4) + 0x20));
                        t307 = ((int)stk + 4);
                        t307 = (t307 + 0x2C);
                        t322 = GetCollision2D(t307, 10.0f);
                        t307 = t322;
                        t323 = *(int *)((t307 + 0x1C));
                        t340 = t307;
                        if (t323 != -1) {
                            u324 = *(float *)((t307 + 0x18));
                            u312 = u324;
                            u325 = *(float *)(((int)stk + 52));
                            u326 = (u325 - u312);
                            u312 = 0.0f;
                            if (u312 > u326) {
                                t307 = ((int)stk + 4);
                                t307 = (t307 + 0x38);
                                nlAddVector(t307, (((int)stk + 4) + 0x2C));
                                t308 = (t308 + 0x1);
                                if (u313 > u326) {
                                    u313 = u326;
                                }
                                t329 = *(int *)(((int)stk + 8));
                                t306 = t329;
                                t330 = *(int *)((t310 + 0x0));
                                t306 = (t306 + t330);
                                *(unsigned int *)(((int)stk + 8)) = t306;
                                t332 = t306;
                            } else {
                                t334 = t307;
                                u335 = u312;
                            }
                            t338 = t332;
                            t340 = t334;
                            u342 = u335;
                        }
                        t380 = t338;
                        t382 = t340;
                        u385 = u342;
                    } else {
                        t307 = t309;
                        t309 = (t309 + 0xC);
                        FUN_0c077210(t307, (((int)stk + 4) + 0x2C));
                        u345 = *(float *)((t310 + 0x4));
                        u312 = u345;
                        u346 = *(float *)(((int)stk + 52));
                        u311 = u346;
                        u311 = (u311 - u312);
                        u312 = 0.0f;
                        *(float *)(((int)stk + 52)) = u311;
                        u376 = u312;
                        if (!(u311 > u312)) {
                            t307 = ((int)stk + 4);
                            t307 = (t307 + 0x2C);
                            nlAddVector(t307, a4);
                            t307 = ((int)stk + 4);
                            t307 = (t307 + 0x2C);
                            t348 = GetCollision2D(t307, 10.0f);
                            t307 = t348;
                            t349 = *(int *)((t307 + 0x1C));
                            t366 = t307;
                            if (t349 != -1) {
                                u350 = *(float *)((t307 + 0x18));
                                u312 = u350;
                                u351 = *(float *)(((int)stk + 52));
                                u352 = (u351 - u312);
                                u312 = 0.0f;
                                if (u312 > u352) {
                                    t307 = ((int)stk + 4);
                                    t307 = (t307 + 0x38);
                                    nlAddVector(t307, (((int)stk + 4) + 0x2C));
                                    t308 = (t308 + 0x1);
                                    if (u313 > u352) {
                                        u313 = u352;
                                    }
                                    t355 = *(int *)(((int)stk + 8));
                                    t306 = t355;
                                    t356 = *(int *)((t310 + 0x0));
                                    t306 = (t306 + t356);
                                    *(unsigned int *)(((int)stk + 8)) = t306;
                                    t358 = t306;
                                } else {
                                    t360 = t307;
                                    u361 = u312;
                                }
                                t364 = t358;
                                t366 = t360;
                                u368 = u361;
                            }
                            t371 = t364;
                            t373 = t366;
                            u376 = u368;
                        } else {
                            u375 = u311;
                        }
                        t380 = t371;
                        t382 = t373;
                        u384 = u375;
                        u385 = u376;
                    }
                    t387 = *(int *)(((int)stk + 4));
                    u311 = u384;
                    u312 = u385;
                    t306 = t380;
                    t307 = t382;
                    t310 = (t310 + 0x8);
                    *(unsigned int *)(((int)stk + 4)) = (t387 - 1);
                    continue;
                }
                break;
            }
            if (t308 == 0) {
            } else {
                t388 = GetCollision2D((((int)stk + 4) + 0x2C), 10.0f);
                t389 = *(int *)(((t388 + 0xC) + 0x8));
                *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = t389;
                t390 = *(int *)(((t388 + 0xC) + 0x4));
                *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t390;
                t391 = *(int *)(((t388 + 0xC) + 0x0));
                *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t391;
                nlScaleVector((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x38), (1.0f / (float)t308));
                nlSubVector((((int)stk + 4) + 0x38), a4);
                u394 = *(float *)((a4 + 0x4));
                *(float *)((a4 + 0x4)) = (u394 - u313);
                nlOuterProduct((a4 + 0x48), (((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20));
                nlAddVector((((int)stk + 4) + 0x20), (a4 + 0xC));
                t397 = nlInnerProduct((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8));
                if (!((-t397) > 0.0f)) {
                    *(unsigned int *)((a4 + 0x68)) = 0x1;
                } else {
                    t398 = *(int *)((a4 + 0x68));
                    if ((int)t398 < (int)0x3) {
                        t399 = nlInnerProduct((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x38));
                        t400 = FUN_0c078c00((((int)stk + 4) + 0x38));
                        t401 = *(int *)((a4 + 0x54));
                        u402 = *(float *)((t401 + 0x20));
                        nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8), (-t397));
                        nlAddVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x20));
                        nlScaleVector((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14), 0.00999999978f);
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), ((1.0f - (_builtin_sqrtf(((t399 * (-t399)) + t400)) * u402)) * ((-t397) * 1.5999999f)));
                        nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                        nlAddVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                        t409 = *(int *)((a4 + 0x54));
                        u410 = *(float *)((t409 + 0x18));
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8), ((((-t397) * 1.5999999f) * (_builtin_sqrtf(((t399 * (-t399)) + t400)) * u402)) / u410));
                        nlSubVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
                        nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                        t415 = *(int *)((a4 + 0x68));
                        *(unsigned int *)((a4 + 0x68)) = (t415 + 0x1);
                        u431 = (1.0f - (_builtin_sqrtf(((t399 * (-t399)) + t400)) * u402));
                        u432 = (_builtin_sqrtf(((t399 * (-t399)) + t400)) * u402);
                        u433 = (((-t397) * 1.5999999f) * (_builtin_sqrtf(((t399 * (-t399)) + t400)) * u402));
                    } else {
                        nlSubVector((a4 + 0xC), (((int)stk + 4) + 0x20));
                        t417 = *(int *)((a4 + 0x54));
                        u418 = *(float *)((t417 + 0x18));
                        nlScaleVector((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20), (-0.333333284f / u418));
                        nlOuterProduct((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
                        nlAddVector((a4 + 0x48), (((int)stk + 4) + 0x20));
                        t422 = *(int *)(((int)stk + 8));
                        if ((int)t422 > (int)0x2) {
                            nlScaleVector((a4 + 0x48), (a4 + 0x48), 0.899999976f);
                            *(unsigned int *)((a4 + 0x68)) = 0x5;
                        }
                        u431 = 1.0f;
                        u432 = 10.0f;
                        u433 = (-t397);
                    }
                }
            }
            nlPopMatrix(0x1);
            t459 = *(int *)((a4 + 0x54));
            t460 = *(int *)((t459 + 0x10));
            if (t460 != 0) {
                t461 = *(int *)((a4 + 0x54));
                t462 = *(int *)((t461 + 0x10));
                t463 = ((int (*)(int))(t462))(a4);
            }
        }
    }
    return u491;
}

int Init_Result(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t91;
    int t92;
    int t93;
    int t106;
    int t107;
    int t108;
    int t109;
    int t118;
    int t112;
    int t113;
    int t125;
    int t120;
    int t121;
    int t127;
    int t128;
    int t136;
    int t129;
    int t130;
    int t131;
    int t132;
    int t142;
    int t138;
    int t139;
    int t144;
    int t145;
    int t152;
    int t146;
    int t147;
    int t158;
    int t154;
    int t155;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t182;
    int t176;
    int t177;
    int t188;
    int t184;
    int t185;
    int t190;
    int t201;
    int t195;
    int t196;
    int t207;
    int t203;
    int t204;
    int t209;
    int t239;
    int t218;
    int t226;
    int t219;
    int t220;
    int t221;
    int t231;
    int t228;
    int t229;
    int t234;
    int t241;
    int t247;
    int t242;
    int t243;
    int t253;
    int t249;
    int t250;
    int t255;
    int t262;
    int t268;
    int t263;
    int t264;
    int t274;
    int t270;
    int t271;
    int t276;
    int t290;
    int t283;
    int t284;
    int t285;
    int t296;
    int t292;
    int t293;
    int t298;
    int t311;
    int t305;
    int t306;
    int t317;
    int t313;
    int t314;
    int t319;
    int t336;
    int t337;
    int t338;
    int t340;
    int t341;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t362;
    int t363;
    int t364;
    int t365;
    int t347;
    int t348;
    int t349;
    int t350;
    int t367;
    int t368;
    int t369;
    int t370;
    int t371;
    int t386;
    int t388;
    int t389;
    int t390;
    int t391;
    int t392;
    int t393;
    int t394;
    int t395;
    int t396;
    int t397;
    int t398;
    int t399;
    int t403;
    int t404;
    int t405;
    int t406;
    int t407;
    int t408;
    int t409;
    int t410;
    int t411;
    int t412;
    int t413;
    int t414;
    int t415;
    int t416;
    int t417;
    int t418;
    int t422;
    int t423;
    int t424;
    int t425;
    int t426;
    int t431;
    int t432;
    int t433;
    int t435;
    int t440;
    int t442;
    int t448;
    int t450;
    int t454;
    int t456;
    int t476;
    int t477;
    int t478;
    int t479;
    int t480;
    int t500;
    int t501;
    int t505;
    int t506;
    int t507;
    int t508;
    int t509;
    int t510;
    int t511;
    int t512;
    int t513;
    int t514;
    int t515;
    int t516;
    int t517;
    int t518;
    int t519;
    int t520;
    int t521;
    int t522;
    int t538;
    int t540;
    int t560;
    int t561;
    int t562;
    int t563;
    int t564;
    int t584;
    int t585;
    int t589;
    int t590;
    int t591;
    int t592;
    int t593;
    int t594;
    int t595;
    int t596;
    int t597;
    int t598;
    int t599;
    int t600;
    int t601;
    int t602;
    int t603;
    int t604;
    int t605;
    int t606;
    int t622;
    int t623;
    int t627;
    int t631;
    int t632;
    int t633;
    int t634;
    int t654;
    int t655;
    int t656;
    int t657;
    int t658;
    int t659;
    int t660;
    int t661;
    int t662;
    int t663;
    int t664;
    int t665;
    int t666;
    int t676;
    int t677;
    int t678;
    int t679;
    int t680;
    int t681;
    int t682;
    int t683;
    int t684;
    int t685;
    int t686;
    int t696;
    int t697;
    int t704;
    int t705;
    int t809;
    int t706;
    int t707;
    int t708;
    int t711;
    int t715;
    int t716;
    int t717;
    int t718;
    int t719;
    int t720;
    int t721;
    int t722;
    int t723;
    int t733;
    int t734;
    int t735;
    int t736;
    int t737;
    int t738;
    int t739;
    int t740;
    int t741;
    int t742;
    int t743;
    int t744;
    int t745;
    int t746;
    int t747;
    int t748;
    int t750;
    int t753;
    int t756;
    int t757;
    int t758;
    int t759;
    int t765;
    int t767;
    int t768;
    int t769;
    int t770;
    int t771;
    int t773;
    int t774;
    int t775;
    int t776;
    int t777;
    int t778;
    int t792;
    int t793;
    int t794;
    int t842;
    int t831;
    int t88;
    int t83;
    int t78;
    int t822;
    int t110;
    int t334;
    int t329;
    int t324;
    int t303;
    int t281;
    int t260;
    int t618;
    int t534;
    int t339;
    int t354;
    int t355;
    int t356;
    int t357;
    int t420;
    int t815;
    float u668;
    float u688;
    int t804;
    int t725;
    int t787;
    int t781;
    int stk[47] = {0};

    *(unsigned int *)(((int)stk + 32)) = a4;
    t0 = *(signed char *)0xC0C3364;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x0)) = t0;
    t1 = *(signed char *)0xC0C3365;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1)) = t1;
    t2 = *(signed char *)0xC0C3366;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2)) = t2;
    t3 = *(signed char *)0xC0C3367;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3)) = t3;
    t4 = *(signed char *)0xC0C3368;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x4)) = t4;
    t5 = *(signed char *)0xC0C3369;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x5)) = t5;
    t6 = *(signed char *)0xC0C336A;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x6)) = t6;
    t7 = *(signed char *)0xC0C336B;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x7)) = t7;
    t8 = *(signed char *)0xC0C336C;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x8)) = t8;
    t9 = *(signed char *)0xC0C336D;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x9)) = t9;
    t10 = *(signed char *)0xC0C336E;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xA)) = t10;
    t11 = *(signed char *)0xC0C336F;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xB)) = t11;
    t12 = *(signed char *)0xC0C3370;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xC)) = t12;
    t13 = *(signed char *)0xC0C3371;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xD)) = t13;
    t14 = *(signed char *)0xC0C3372;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xE)) = t14;
    t15 = *(signed char *)0xC0C3373;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0xF)) = t15;
    t16 = *(signed char *)0xC0C3374;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x10)) = t16;
    t17 = *(signed char *)0xC0C3375;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x11)) = t17;
    t18 = *(signed char *)0xC0C3376;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x12)) = t18;
    t19 = *(signed char *)0xC0C3377;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x13)) = t19;
    t20 = *(signed char *)0xC0C3378;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x14)) = t20;
    t21 = *(signed char *)0xC0C3379;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x15)) = t21;
    t22 = *(signed char *)0xC0C337A;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x16)) = t22;
    t23 = *(signed char *)0xC0C337B;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x17)) = t23;
    t24 = *(signed char *)0xC0C337C;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x18)) = t24;
    t25 = *(signed char *)0xC0C337D;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x19)) = t25;
    t26 = *(signed char *)0xC0C337E;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1A)) = t26;
    t27 = *(signed char *)0xC0C337F;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1B)) = t27;
    t28 = *(signed char *)0xC0C3380;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1C)) = t28;
    t29 = *(signed char *)0xC0C3381;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1D)) = t29;
    t30 = *(signed char *)0xC0C3382;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1E)) = t30;
    t31 = *(signed char *)0xC0C3383;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x1F)) = t31;
    t32 = *(signed char *)0xC0C3384;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x20)) = t32;
    t33 = *(signed char *)0xC0C3385;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x21)) = t33;
    t34 = *(signed char *)0xC0C3386;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x22)) = t34;
    t35 = *(signed char *)0xC0C3387;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x23)) = t35;
    t36 = *(signed char *)0xC0C3388;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x24)) = t36;
    t37 = *(signed char *)0xC0C3389;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x25)) = t37;
    t38 = *(signed char *)0xC0C338A;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x26)) = t38;
    t39 = *(signed char *)0xC0C338B;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x27)) = t39;
    t40 = *(signed char *)0xC0C338C;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x28)) = t40;
    t41 = *(signed char *)0xC0C338D;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x29)) = t41;
    t42 = *(signed char *)0xC0C338E;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2A)) = t42;
    t43 = *(signed char *)0xC0C338F;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2B)) = t43;
    t44 = *(signed char *)0xC0C3390;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2C)) = t44;
    t45 = *(signed char *)0xC0C3391;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2D)) = t45;
    t46 = *(signed char *)0xC0C3392;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2E)) = t46;
    t47 = *(signed char *)0xC0C3393;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x2F)) = t47;
    t48 = *(signed char *)0xC0C3394;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x30)) = t48;
    t49 = *(signed char *)0xC0C3395;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x31)) = t49;
    t50 = *(signed char *)0xC0C3396;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x32)) = t50;
    t51 = *(signed char *)0xC0C3397;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x33)) = t51;
    t52 = *(signed char *)0xC0C3398;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x34)) = t52;
    t53 = *(signed char *)0xC0C3399;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x35)) = t53;
    t54 = *(signed char *)0xC0C339A;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x36)) = t54;
    t55 = *(signed char *)0xC0C339B;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x37)) = t55;
    t56 = *(signed char *)0xC0C339C;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x38)) = t56;
    t57 = *(signed char *)0xC0C339D;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x39)) = t57;
    t58 = *(signed char *)0xC0C339E;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3A)) = t58;
    t59 = *(signed char *)0xC0C339F;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3B)) = t59;
    t60 = *(signed char *)0xC0C33A0;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3C)) = t60;
    t61 = *(signed char *)0xC0C33A1;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3D)) = t61;
    t62 = *(signed char *)0xC0C33A2;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3E)) = t62;
    t63 = *(signed char *)0xC0C33A3;
    *(unsigned char *)(((((int)stk + 32) + 0x38) + 0x3F)) = t63;
    t64 = *(int *)0xC0C33A8;
    *(unsigned int *)(((((int)stk + 32) + 0x30) + 0x4)) = t64;
    t65 = *(int *)0xC0C33A4;
    *(unsigned int *)(((((int)stk + 32) + 0x30) + 0x0)) = t65;
    t66 = *(int *)(((int)stk + 32));
    if (t66 == -2) {
        t67 = *(int *)0xC179488;
        *(unsigned int *)0xC0F4568 = t67;
        *(unsigned char *)0xC1EE35C = 0x1;
        *(unsigned int *)0xC0F456C = 0x1;
        t842 = 0xC1EE35C;
    } else {
        t68 = *(int *)(((int)stk + 32));
        if (t68 == -1) {
            t69 = *(int *)0xC0F4568;
            *(unsigned int *)0xC179488 = t69;
            t70 = *(int *)0xC0F456C;
            *(unsigned char *)0xC1EE35C = t70;
            *(unsigned int *)0xC1EE33C = 0x0;
            *(unsigned int *)0xC2A62A0 = 0x0;
            *(unsigned int *)0xC0F4570 = 0x0;
            t831 = 0xC1EE33C;
        } else {
            t71 = *(int *)(((int)stk + 32));
            if (t71 == 1) {
                *(unsigned int *)(((int)stk + 36)) = 0x28;
                t88 = 0xC0F2B40;
            } else {
                t72 = *(int *)(((int)stk + 32));
                if (t72 == 2) {
                    *(unsigned int *)(((int)stk + 36)) = 0x28;
                    t83 = 0xC0F3040;
                } else {
                    t73 = *(int *)(((int)stk + 32));
                    if (t73 == 3) {
                        t74 = *(int *)0xC1EE20C;
                        t75 = 0xC0F3A40;
                        if (t74 == 0) {
                            t75 = 0xC0F3540;
                        }
                        *(unsigned int *)(((int)stk + 36)) = 0x28;
                        t78 = t75;
                    }
                    t83 = t78;
                }
                t88 = t83;
            }
            t91 = *(int *)0xC2A4E50;
            if (t91 == 1) {
                t92 = *(int *)0xC0F4570;
                if ((int)t92 > 0) {
                    t93 = *(int *)0xC0F4570;
                    if ((int)t93 <= (int)0xB) {
                        *(unsigned int *)0xC0F2B3C = 0x1;
                    } else {
                        *(unsigned int *)0xC0F2B3C = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC0F2B3C = 0x0;
                }
            } else {
                *(unsigned int *)0xC0F2B3C = 0x0;
            }
            t106 = getGoiToolFlag(0x2000);
            if (t106 != 0) {
                t107 = *(int *)0xC2A4E58;
                if ((int)t107 < (int)0x1E) {
                    t108 = *(int *)0xC1EE284;
                    t110 = t108;
                } else {
                    t109 = *(int *)0xC1EE280;
                    t110 = t109;
                }
                t118 = 0x0;
                if ((0x80 & t110) != 0) {
                    t112 = *(int *)0xC0F4580;
                    t113 = 0x0;
                    if ((int)t112 < (int)0x1) {
                        t113 = 0x1;
                    }
                    t118 = t113;
                }
                t125 = 0x0;
                if ((0x40 & t110) != 0) {
                    t120 = *(int *)0xC0F4580;
                    t121 = 0x0;
                    if ((int)t120 > 0) {
                        t121 = 0x1;
                    }
                    t125 = t121;
                }
                t127 = *(int *)0xC0F4580;
                *(unsigned int *)0xC0F4580 = (t127 + (t118 - t125));
                t128 = *(int *)0xC0F457C;
                if ((t127 + (t118 - t125)) == 0) {
                    t136 = 0x0;
                    if ((0x20 & t110) != 0) {
                        t129 = *(int *)0xC0F4578;
                        t130 = *(int *)(((t129 << 2) + (((int)stk + 32) + 0x30)));
                        t131 = *(int *)0xC0F457C;
                        t132 = 0x0;
                        if ((int)t131 < (int)(t130 - 1)) {
                            t132 = 0x1;
                        }
                        t136 = t132;
                    }
                    t142 = 0x0;
                    if ((0x10 & t110) != 0) {
                        t138 = *(int *)0xC0F457C;
                        t139 = 0x0;
                        if ((int)t138 > 0) {
                            t139 = 0x1;
                        }
                        t142 = t139;
                    }
                    t144 = *(int *)0xC0F457C;
                    *(unsigned int *)0xC0F457C = (t144 + (t136 - t142));
                    t334 = t110;
                } else {
                    t145 = *(int *)0xC0F4578;
                    if (t145 != 0) {
                        if (t145 == 1) {
                            if (t128 != 0) {
                                if (t128 != 1) {
                                    if (t128 != 2) {
                                    } else {
                                        t152 = 0x0;
                                        if ((0x10 & t110) != 0) {
                                            t146 = *(int *)0xC0F4574;
                                            t147 = 0x0;
                                            if ((int)t146 < (int)0x3B) {
                                                t147 = 0x1;
                                            }
                                            t152 = t147;
                                        }
                                        t158 = 0x0;
                                        if ((0x20 & t110) != 0) {
                                            t154 = *(int *)0xC0F4574;
                                            t155 = 0x0;
                                            if ((int)t154 > 0) {
                                                t155 = 0x1;
                                            }
                                            t158 = t155;
                                        }
                                        t160 = *(int *)0xC0F4574;
                                        *(unsigned int *)0xC0F4574 = (t160 + (t152 - t158));
                                        t161 = *(int *)0xC1EE284;
                                        if ((t161 & 0x10000) != 0) {
                                            t162 = *(int *)0xC2A62A8;
                                            t163 = *(int *)0xC0F4574;
                                            t164 = *(int *)0xC179488;
                                            *(unsigned int *)((((t163 * 0x3C0) + t162) + 0x0)) = t164;
                                            t165 = *(int *)0xC0F4574;
                                            t166 = *(int *)0xC2A62A8;
                                            t167 = 0;
                                            for (; t167 < (int)0x3BC; t167++) *(unsigned char *)((((t165 * 0x3C0) + t166) + 0x4) + t167) = *(unsigned char *)(0xC1790CC + t167);
                                        }
                                    }
                                } else {
                                    t182 = 0x0;
                                    if ((0x10 & t110) != 0) {
                                        t176 = *(int *)0xC179488;
                                        t177 = 0x0;
                                        if ((int)t176 < (int)0x7) {
                                            t177 = 0x1;
                                        }
                                        t182 = t177;
                                    }
                                    t188 = 0x0;
                                    if ((0x20 & t110) != 0) {
                                        t184 = *(int *)0xC179488;
                                        t185 = 0x0;
                                        if ((int)t184 > 0) {
                                            t185 = 0x1;
                                        }
                                        t188 = t185;
                                    }
                                    t190 = *(int *)0xC179488;
                                    *(unsigned int *)0xC179488 = (t190 + (t182 - t188));
                                }
                            } else {
                                t201 = 0x0;
                                if ((0x10 & t110) != 0) {
                                    t195 = *(int *)0xC0F4578;
                                    t196 = 0x0;
                                    if ((int)t195 < (int)0x1) {
                                        t196 = 0x1;
                                    }
                                    t201 = t196;
                                }
                                t207 = 0x0;
                                if ((0x20 & t110) != 0) {
                                    t203 = *(int *)0xC0F4578;
                                    t204 = 0x0;
                                    if ((int)t203 > 0) {
                                        t204 = 0x1;
                                    }
                                    t207 = t204;
                                }
                                t209 = *(int *)0xC0F4578;
                                *(unsigned int *)0xC0F4578 = (t209 + (t201 - t207));
                            }
                        }
                        t329 = t110;
                    } else {
                        if (t128 != 0) {
                            if (t128 != 1) {
                                if (t128 != 2) {
                                    if (t128 != 3) {
                                        t239 = t110;
                                        if (t128 != 4) {
                                        } else {
                                            t218 = *(int *)0xC0F4570;
                                            t226 = 0x0;
                                            if ((0x10 & t110) != 0) {
                                                t219 = *(int *)((((((t218 << 2) << 2) << 1) + t88) + 0x0));
                                                t220 = *(int *)0xC0F2B2C;
                                                t221 = 0x0;
                                                if ((int)t219 < (int)(t220 - 1)) {
                                                    t221 = 0x1;
                                                }
                                                t226 = t221;
                                            }
                                            t231 = 0x0;
                                            if ((0x20 & t110) != 0) {
                                                t228 = *(int *)((((((t218 << 2) << 2) << 1) + t88) + 0x0));
                                                t229 = 0x0;
                                                if ((int)t228 > 0) {
                                                    t229 = 0x1;
                                                }
                                                t231 = t229;
                                            }
                                            t234 = *(int *)((((((t218 << 2) << 2) << 1) + t88) + 0x0));
                                            *(unsigned int *)((((((t218 << 2) << 2) << 1) + t88) + 0x0)) = (t234 + (t226 - t231));
                                            t239 = ((((t218 << 2) << 2) << 1) + t88);
                                        }
                                        t260 = t239;
                                    } else {
                                        t241 = *(int *)0xC0F4570;
                                        t247 = 0x0;
                                        if ((0x10 & t110) != 0) {
                                            t242 = *(int *)((((((t241 << 2) << 2) << 1) + t88) + 0x8));
                                            t243 = 0x0;
                                            if ((int)t242 < (int)0x3B) {
                                                t243 = 0x1;
                                            }
                                            t247 = t243;
                                        }
                                        t253 = 0x0;
                                        if ((0x20 & t110) != 0) {
                                            t249 = *(int *)((((((t241 << 2) << 2) << 1) + t88) + 0x8));
                                            t250 = 0x0;
                                            if ((int)t249 > 0) {
                                                t250 = 0x1;
                                            }
                                            t253 = t250;
                                        }
                                        t255 = *(int *)((((((t241 << 2) << 2) << 1) + t88) + 0x8));
                                        *(unsigned int *)((((((t241 << 2) << 2) << 1) + t88) + 0x8)) = (t255 + (t247 - t253));
                                        t260 = ((((t241 << 2) << 2) << 1) + t88);
                                    }
                                    t281 = t260;
                                } else {
                                    t262 = *(int *)0xC0F4570;
                                    t268 = 0x0;
                                    if ((0x10 & t110) != 0) {
                                        t263 = *(int *)((((((t262 << 2) << 2) << 1) + t88) + 0x4));
                                        t264 = 0x0;
                                        if ((int)t263 < (int)0x1) {
                                            t264 = 0x1;
                                        }
                                        t268 = t264;
                                    }
                                    t274 = 0x0;
                                    if ((0x20 & t110) != 0) {
                                        t270 = *(int *)((((((t262 << 2) << 2) << 1) + t88) + 0x4));
                                        t271 = 0x0;
                                        if ((int)t270 > 0) {
                                            t271 = 0x1;
                                        }
                                        t274 = t271;
                                    }
                                    t276 = *(int *)((((((t262 << 2) << 2) << 1) + t88) + 0x4));
                                    *(unsigned int *)((((((t262 << 2) << 2) << 1) + t88) + 0x4)) = (t276 + (t268 - t274));
                                    t281 = ((((t262 << 2) << 2) << 1) + t88);
                                }
                                t303 = t281;
                            } else {
                                t290 = 0x0;
                                if ((0x10 & t110) != 0) {
                                    t283 = *(int *)(((int)stk + 36));
                                    t284 = *(int *)0xC0F4570;
                                    t285 = 0x0;
                                    if ((int)t284 < (int)(t283 - 1)) {
                                        t285 = 0x1;
                                    }
                                    t290 = t285;
                                }
                                t296 = 0x0;
                                if ((0x20 & t110) != 0) {
                                    t292 = *(int *)0xC0F4570;
                                    t293 = 0x0;
                                    if ((int)t292 > 0) {
                                        t293 = 0x1;
                                    }
                                    t296 = t293;
                                }
                                t298 = *(int *)0xC0F4570;
                                *(unsigned int *)0xC0F4570 = (t298 + (t290 - t296));
                                t303 = t110;
                            }
                            t324 = t303;
                        } else {
                            t311 = 0x0;
                            if ((0x10 & t110) != 0) {
                                t305 = *(int *)0xC0F4578;
                                t306 = 0x0;
                                if ((int)t305 < (int)0x1) {
                                    t306 = 0x1;
                                }
                                t311 = t306;
                            }
                            t317 = 0x0;
                            if ((0x20 & t110) != 0) {
                                t313 = *(int *)0xC0F4578;
                                t314 = 0x0;
                                if ((int)t313 > 0) {
                                    t314 = 0x1;
                                }
                                t317 = t314;
                            }
                            t319 = *(int *)0xC0F4578;
                            *(unsigned int *)0xC0F4578 = (t319 + (t311 - t317));
                            t324 = t110;
                        }
                        t329 = t324;
                    }
                    t334 = t329;
                }
                t336 = *(int *)0xC0F4578;
                *(unsigned int *)(((int)stk + 56)) = 0xC1EE280;
                t337 = *(int *)0xC1EE284;
                if ((0x200 & t337) == 0) {
                    if ((0x20000 & t337) == 0) {
                        if (t336 == 0) {
                            *(unsigned int *)(((int)stk + 44)) = 0x0;
                            *(unsigned int *)(((int)stk + 40)) = (0x0 + t88);
                            *(unsigned int *)(((int)stk + 32)) = (0x0 + t88);
                            t338 = *(int *)(((int)stk + 36));
                            if ((int)t338 > 0) {
                                t340 = (0x0 + t88);
                                t341 = t337;
                                t342 = t334;
                                t343 = t128;
                                for (;;) {
                                    t344 = *(int *)(((int)stk + 32));
                                    t345 = *(int *)0xC2A62A0;
                                    t346 = *(int *)((t344 + 0x0));
                                    t362 = t340;
                                    t363 = t341;
                                    t364 = t342;
                                    t365 = t343;
                                    if (t345 == (t346 - 1)) {
                                        t347 = *(int *)(((int)stk + 40));
                                        t348 = *(int *)((t347 + 0x4));
                                        if (t348 == 0) {
                                            t340 = 0x4;
                                            t349 = replay(t340);
                                            t339 = t349;
                                            t340 = 0x7;
                                            t350 = camSetMode(t340);
                                            t339 = t350;
                                        } else {
                                            t354 = t340;
                                            t355 = t341;
                                            t356 = t342;
                                            t357 = t343;
                                        }
                                        t362 = t354;
                                        t363 = t355;
                                        t364 = t356;
                                        t365 = t357;
                                    }
                                    t367 = *(int *)(((int)stk + 44));
                                    t340 = t362;
                                    t341 = t363;
                                    t342 = t364;
                                    t343 = t365;
                                    *(unsigned int *)(((int)stk + 44)) = (t367 + 0x1);
                                    t368 = *(int *)(((int)stk + 40));
                                    *(unsigned int *)(((int)stk + 40)) = (t368 + 0x20);
                                    t369 = *(int *)(((int)stk + 32));
                                    *(unsigned int *)(((int)stk + 32)) = (t369 + 0x20);
                                    t370 = *(int *)(((int)stk + 44));
                                    t339 = t370;
                                    t371 = *(int *)(((int)stk + 36));
                                    if ((int)t339 >= (int)t371) {
                                        break;
                                    }
                                }
                            }
                        }
                        t386 = *(int *)0xC1EE240;
                        *(unsigned int *)0xC1EE240 = (t386 - 1);
                        nlLocate(0x1E, 0x37);
                        t388 = *(int *)0xC0F2B28;
                        t389 = *(int *)0xC0F4578;
                        t390 = ((int (*)(void))(nlPrintf))();
                        t391 = *(int *)0xC0F4578;
                        if (t391 != 0) {
                            if (t391 != 1) {
                            } else {
                                t392 = *(int *)0xC179488;
                                t393 = ((int (*)(void))(nlPrintf))();
                                t394 = *(int *)0xC2A62A8;
                                t395 = *(int *)0xC0F4574;
                                t396 = *(int *)((((t395 * 0x3C0) + t394) + 0x0));
                                t397 = *(int *)0xC0F4574;
                                t398 = ((int (*)(void))(nlPrintf))();
                                t399 = ((int (*)(int, ...))(nlPrintf))(0xC0C3454, 0x3BC, 0xC0C3434, t397, t396, 0xC0C3420, t392);
                            }
                        } else {
                            t403 = *(int *)0xC0F4570;
                            t404 = ((int (*)(void))(nlPrintf))();
                            t405 = *(int *)0xC0F4570;
                            t406 = *(int *)((((((t405 << 2) << 2) << 1) + t88) + 0x4));
                            t407 = ((int (*)(void))(nlPrintf))();
                            t408 = *(int *)0xC0F4570;
                            *(unsigned int *)(((int)stk + 52)) = ((((t408 << 2) << 2) << 1) + t88);
                            t409 = *(int *)((((((t408 << 2) << 2) << 1) + t88) + 0x8));
                            *(unsigned int *)(((int)stk + 32)) = t409;
                            t410 = *(int *)0xC2A62A8;
                            t411 = *(int *)((((t409 * 0x3C0) + t410) + 0x0));
                            t412 = *(int *)(((int)stk + 32));
                            t413 = ((int (*)(int, ...))(nlPrintf))(0xC0C33E0, t412, t411, 0xC0C33CC, t406, 0xC0C33B8, t403);
                            t414 = *(int *)0xC0F4570;
                            t415 = *(int *)0xC0F4570;
                            t416 = *(int *)(((int)stk + 36));
                            if ((int)(t415 + 0x1) < (int)t416) {
                                t417 = *(int *)((((((t414 << 2) << 2) << 1) + t88) + 0x20));
                                t420 = t417;
                            } else {
                                t418 = *(int *)0xC0F2B2C;
                                t420 = t418;
                            }
                            *(unsigned int *)(((int)stk + 48)) = ((((t414 << 2) << 2) << 1) + t88);
                            t422 = *(int *)((((((t414 << 2) << 2) << 1) + t88) + 0x0));
                            *(unsigned int *)(((int)stk + 32)) = t422;
                            t423 = *(int *)0xC2A62A0;
                            t424 = *(int *)(((int)stk + 32));
                            t425 = *(int *)0xC2A62A0;
                            t426 = ((int (*)(int, ...))(nlPrintf))(0xC0C3400, t425, (t423 - t424), t422, t420);
                        }
                        t431 = *(int *)0xC0F4580;
                        if (t431 != 0) {
                            t432 = *(int *)0xC1EE330;
                            if ((t432 & 8) != 0) {
                                t433 = *(int *)0xC0F457C;
                                nlLocate(0x1E, (t433 + 0x37));
                                t435 = ((int (*)(int, ...))(nlPrintf))(0xC0C3228);
                            }
                        } else {
                            t440 = *(int *)0xC0F457C;
                            nlLocate(0x1E, (t440 + 0x37));
                            t442 = ((int (*)(int, ...))(nlPrintf))(0xC0C3228);
                        }
                        nlPushUnitMatrix();
                        t448 = *(int *)0xC2A62AC;
                        nlSetTranslate((t448 + 0x84));
                        t450 = *(int *)0xC1EE330;
                        nlRotateAY((((t450 << 2) << 2) << 2));
                        nlObjPutUseViewMatrix(0xC5ACFB0);
                        nlPopMatrix(0x1);
                        t534 = 0x0;
                    } else {
                        if (t336 == 0) {
                            t454 = *(int *)(((int)stk + 32));
                            if (t454 == 1) {
                                FUN_0c04bb70(0x1);
                            } else {
                                t456 = *(int *)(((int)stk + 32));
                                if (t456 == 2) {
                                    FUN_0c04bb70(0x2);
                                }
                            }
                            t476 = *(int *)0xC0F4570;
                            t477 = *(int *)((((((t476 << 2) << 2) << 1) + t88) + 0x0));
                            *(unsigned int *)0xC2A62A0 = t477;
                            *(unsigned int *)0xC1EE33C = t477;
                            t478 = *(int *)((((((t476 << 2) << 2) << 1) + t88) + 0x8));
                            t479 = *(int *)0xC2A62A8;
                            t480 = *(int *)((((t478 * 0x3C0) + t479) + 0x0));
                            *(unsigned int *)0xC179488 = t480;
                        } else {
                            if (t336 == 1) {
                                FUN_0c04bb70(0x0);
                                *(unsigned int *)0xC1EE33C = 0x0;
                                *(unsigned int *)0xC2A62A0 = 0x0;
                            }
                        }
                        *(unsigned char *)0xC1EE35C = 0x1;
                        t500 = *(int *)0xC1EE284;
                        t501 = 0x2;
                        if ((t500 & 0x200) != 0) {
                            t501 = 0x3;
                        }
                        replay(t501);
                        *(unsigned int *)(((int)stk + 32)) = 0xC02D00C;
                        Initialize_Replay_Part();
                        t505 = *(int *)0xC0F4578;
                        if (t505 == 0) {
                            *(unsigned int *)(((int)stk + 40)) = (((int)stk + 32) + 0x1C);
                            t506 = *(int *)0xC1790F4;
                            *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = t506;
                            *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x4);
                            t507 = *(int *)0xC1790F8;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = t507;
                            *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
                            t508 = *(int *)0xC179138;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = t508;
                            t509 = *(int *)0xC17913C;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = t509;
                            t510 = *(int *)0xC179140;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = t510;
                            t511 = *(int *)0xC0F4570;
                            t512 = *(int *)((((((t511 << 2) << 2) << 1) + t88) + 0x8));
                            t513 = *(int *)0xC2A62A8;
                            t514 = 0;
                            for (; t514 < (int)0x3BC; t514++) *(unsigned char *)(0xC1790CC + t514) = *(unsigned char *)((((t512 * 0x3C0) + t513) + 0x4) + t514);
                            t515 = *(int *)(((int)stk + 40));
                            t516 = *(int *)((t515 + 0x0));
                            *(unsigned int *)0xC1790F4 = t516;
                            t517 = *(int *)(((int)stk + 36));
                            t518 = *(int *)((t517 + 0x0));
                            *(unsigned int *)0xC1790F8 = t518;
                            t519 = *(int *)(((int)stk + 32));
                            t520 = *(int *)((t519 + 0x0));
                            *(unsigned int *)0xC179138 = t520;
                            t521 = *(int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0));
                            *(unsigned int *)0xC17913C = t521;
                            t522 = *(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0));
                            *(unsigned int *)0xC179140 = t522;
                        }
                        FUN_0c028fda(0xC179840, 0x0);
                        camSetMode(0x0);
                        t534 = 0x1;
                    }
                    t618 = t534;
                } else {
                    if (t336 == 0) {
                        t538 = *(int *)(((int)stk + 32));
                        if (t538 == 1) {
                            FUN_0c04bb70(0x1);
                        } else {
                            t540 = *(int *)(((int)stk + 32));
                            if (t540 == 2) {
                                FUN_0c04bb70(0x2);
                            }
                        }
                        t560 = *(int *)0xC0F4570;
                        t561 = *(int *)((((((t560 << 2) << 2) << 1) + t88) + 0x0));
                        *(unsigned int *)0xC2A62A0 = t561;
                        *(unsigned int *)0xC1EE33C = t561;
                        t562 = *(int *)((((((t560 << 2) << 2) << 1) + t88) + 0x8));
                        t563 = *(int *)0xC2A62A8;
                        t564 = *(int *)((((t562 * 0x3C0) + t563) + 0x0));
                        *(unsigned int *)0xC179488 = t564;
                    } else {
                        if (t336 == 1) {
                            FUN_0c04bb70(0x0);
                            *(unsigned int *)0xC1EE33C = 0x0;
                            *(unsigned int *)0xC2A62A0 = 0x0;
                        }
                    }
                    *(unsigned char *)0xC1EE35C = 0x1;
                    t584 = *(int *)0xC1EE284;
                    t585 = 0x2;
                    if ((t584 & 0x200) != 0) {
                        t585 = 0x3;
                    }
                    replay(t585);
                    *(unsigned int *)(((int)stk + 32)) = 0xC02D00C;
                    Initialize_Replay_Part();
                    t589 = *(int *)0xC0F4578;
                    if (t589 == 0) {
                        *(unsigned int *)(((int)stk + 40)) = (((int)stk + 32) + 0x1C);
                        t590 = *(int *)0xC1790F4;
                        *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = t590;
                        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x4);
                        t591 = *(int *)0xC1790F8;
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = t591;
                        *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
                        t592 = *(int *)0xC179138;
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = t592;
                        t593 = *(int *)0xC17913C;
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = t593;
                        t594 = *(int *)0xC179140;
                        *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = t594;
                        t595 = *(int *)0xC0F4570;
                        t596 = *(int *)((((((t595 << 2) << 2) << 1) + t88) + 0x8));
                        t597 = *(int *)0xC2A62A8;
                        t598 = 0;
                        for (; t598 < (int)0x3BC; t598++) *(unsigned char *)(0xC1790CC + t598) = *(unsigned char *)((((t596 * 0x3C0) + t597) + 0x4) + t598);
                        t599 = *(int *)(((int)stk + 40));
                        t600 = *(int *)((t599 + 0x0));
                        *(unsigned int *)0xC1790F4 = t600;
                        t601 = *(int *)(((int)stk + 36));
                        t602 = *(int *)((t601 + 0x0));
                        *(unsigned int *)0xC1790F8 = t602;
                        t603 = *(int *)(((int)stk + 32));
                        t604 = *(int *)((t603 + 0x0));
                        *(unsigned int *)0xC179138 = t604;
                        t605 = *(int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0));
                        *(unsigned int *)0xC17913C = t605;
                        t606 = *(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0));
                        *(unsigned int *)0xC179140 = t606;
                    }
                    FUN_0c028fda(0xC179840, 0x0);
                    camSetMode(0x0);
                    t618 = 0x1;
                }
                t822 = t618;
            } else {
                t622 = *(int *)0xC0F2B20;
                if ((t622 & 1) != 0) {
                    t623 = *(int *)0xC2A62A0;
                    if (t623 != 0) {
                    } else {
                        *(unsigned int *)0xC0F2B24 = 0x1;
                    }
                    t815 = 0x0;
                } else {
                    t627 = *(int *)0xC2A62A0;
                    if (t627 == 0) {
                        *(unsigned int *)0xC1EE33C = 0x0;
                    }
                    t631 = *(int *)0xC0F4570;
                    if (t631 == 0) {
                        t632 = *(int *)0xC2A4E50;
                        if (t632 == 1) {
                            t633 = *(int *)0xC2AD010;
                            if (t633 != 0) {
                                t634 = *(int *)0xC2AD010;
                                if (t634 == 10) {
                                    *(unsigned int *)0xC179120 = 0x1;
                                }
                            } else {
                                *(unsigned int *)0xC179120 = 0x1;
                            }
                        }
                    }
                    t654 = *(int *)0xC0F4570;
                    t655 = *(int *)0xC2A4E50;
                    if (t655 == 1) {
                        *(unsigned int *)0xC1790C8 = 0x3;
                        t656 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x0));
                        t657 = *(int *)0xC1EE33C;
                        if ((int)t657 >= (int)(t656 - 200)) {
                            t658 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x14));
                            t659 = *(int *)0xC2A62AC;
                            *(unsigned int *)(((int)stk + 32)) = ((((t658 << 1) + t658) << 2) + t659);
                            t660 = *(int *)0xC0F4570;
                            if (t660 == 11) {
                                t661 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x8));
                                *(unsigned int *)((((int)stk + 20) + 0x8)) = t661;
                                t662 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x4));
                                *(unsigned int *)((((int)stk + 20) + 0x4)) = t662;
                                t663 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x0));
                                *(unsigned int *)((((int)stk + 20) + 0x0)) = t663;
                                u668 = 850.0f;
                            } else {
                                t664 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x8));
                                *(unsigned int *)((((int)stk + 20) + 0x8)) = t664;
                                t665 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x4));
                                *(unsigned int *)((((int)stk + 20) + 0x4)) = t665;
                                t666 = *(int *)((((((t658 << 1) + t658) << 2) + t659) + 0x0));
                                *(unsigned int *)((((int)stk + 20) + 0x0)) = t666;
                                u668 = 450.0f;
                            }
                            gdc_CoursePointLoadReq(u668);
                        }
                        t676 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x0));
                        t677 = *(int *)0xC1EE33C;
                        if ((int)t677 >= (int)(t676 - 150)) {
                            t678 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x14));
                            t679 = *(int *)0xC2A62AC;
                            *(unsigned int *)(((int)stk + 32)) = ((((t678 << 1) + t678) << 2) + t679);
                            t680 = *(int *)0xC0F4570;
                            if (t680 == 11) {
                                t681 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x8));
                                *(unsigned int *)((((int)stk + 20) + 0x8)) = t681;
                                t682 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x4));
                                *(unsigned int *)((((int)stk + 20) + 0x4)) = t682;
                                t683 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x0));
                                *(unsigned int *)((((int)stk + 20) + 0x0)) = t683;
                                u688 = 1700.0f;
                            } else {
                                t684 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x8));
                                *(unsigned int *)((((int)stk + 20) + 0x8)) = t684;
                                t685 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x4));
                                *(unsigned int *)((((int)stk + 20) + 0x4)) = t685;
                                t686 = *(int *)((((((t678 << 1) + t678) << 2) + t679) + 0x0));
                                *(unsigned int *)((((int)stk + 20) + 0x0)) = t686;
                                u688 = 900.0f;
                            }
                            gdc_CoursePointLoadReq(u688);
                        }
                    } else {
                        t696 = *(int *)0xC0F4570;
                        t697 = *(int *)0xC2A62A8;
                        FUN_0c04c104(t697, (t88 + (((t654 << 2) << 2) << 1)), t696);
                    }
                    t704 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x0));
                    t705 = *(int *)0xC1EE33C;
                    t809 = 0x0;
                    if ((int)t705 < (int)t704) {
                    } else {
                        t706 = *(int *)0xC0F4570;
                        *(unsigned int *)0xC0F4570 = (t706 + 0x1);
                        t707 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x4));
                        if (t707 == 1) {
                            t708 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0xC));
                            if (t708 == 0) {
                                FUN_0c028fda(0xC179840, 0x0);
                                camSetMode(0x0);
                            } else {
                                t711 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0xC));
                                FUN_0c028fda(0xC179840, t711);
                            }
                            t804 = 0x0;
                        } else {
                            t715 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x0));
                            *(unsigned int *)0xC2A62A0 = t715;
                            t716 = *(int *)0xC2A4E50;
                            if (t716 == 0) {
                                t717 = *(int *)0xC2A4E54;
                                if (t717 == 0) {
                                    t718 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x8));
                                    t719 = *(int *)0xC2A62A8;
                                    t720 = *(int *)((((t718 * 0x3C0) + t719) + 0x0));
                                    t725 = t720;
                                } else {
                                    t721 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x8));
                                    t722 = *(int *)0xC2A62A8;
                                    t723 = *(int *)((((t721 * 0x3C0) + t722) + 0x0));
                                    t725 = (t723 + 0x4);
                                }
                                *(unsigned int *)0xC179488 = t725;
                            }
                            *(unsigned char *)0xC1EE35C = 0x1;
                            *(unsigned int *)(((int)stk + 32)) = 0xC02D00C;
                            Initialize_Replay_Part();
                            *(unsigned int *)(((int)stk + 36)) = (((int)stk + 32) + 0x1C);
                            t733 = *(int *)0xC1790F4;
                            *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = t733;
                            t734 = *(int *)0xC1790F8;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = t734;
                            *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
                            t735 = *(int *)0xC179138;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = t735;
                            *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 32) + 0x1C) + 0xC);
                            t736 = *(int *)0xC17913C;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = t736;
                            t737 = *(int *)0xC179140;
                            *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = t737;
                            t738 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x8));
                            t739 = *(int *)0xC2A62A8;
                            t740 = 0;
                            for (; t740 < (int)0x3BC; t740++) *(unsigned char *)(0xC1790CC + t740) = *(unsigned char *)((((t738 * 0x3C0) + t739) + 0x4) + t740);
                            t741 = *(int *)(((int)stk + 36));
                            t742 = *(int *)((t741 + 0x0));
                            *(unsigned int *)0xC1790F4 = t742;
                            t743 = *(int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0));
                            *(unsigned int *)0xC1790F8 = t743;
                            t744 = *(int *)(((int)stk + 32));
                            t745 = *(int *)((t744 + 0x0));
                            *(unsigned int *)0xC179138 = t745;
                            t746 = *(int *)(((int)stk + 40));
                            t747 = *(int *)((t746 + 0x0));
                            *(unsigned int *)0xC17913C = t747;
                            t748 = *(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0));
                            *(unsigned int *)0xC179140 = t748;
                            camSnapToCar(0x0);
                            t750 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0xC));
                            if (t750 == 0) {
                                FUN_0c028fda(0xC179840, 0x0);
                                camSetMode(0x0);
                            } else {
                                t753 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0xC));
                                if (t753 == -1) {
                                    FUN_0c028fda(0xC179840, 0x0);
                                    camSetMode(0x7);
                                } else {
                                    t756 = *(int *)0xC2A62AC;
                                    *(unsigned int *)(((int)stk + 32)) = t756;
                                    t757 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x14));
                                    t758 = *(int *)(((int)stk + 32));
                                    t759 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0xC));
                                    FUN_0c028fda(((((t757 << 1) + t757) << 2) + t758), t759);
                                }
                            }
                            t765 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x10));
                            if ((int)t765 < (int)0x17) {
                            } else {
                                FUN_0c071db8();
                                t767 = *(int *)0xC1EE234;
                                if (t767 != 0) {
                                    t768 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x14));
                                    t769 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x1C));
                                    t770 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x18));
                                    t771 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x10));
                                    FUN_0c071d34(t771, t768, t770);
                                } else {
                                    t773 = *(int *)0xC0F4570;
                                    t774 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x10));
                                    if (t773 == 6) {
                                        t775 = *(signed char *)0xC1789D6;
                                        t787 = (t774 + (unsigned char)t775);
                                    } else {
                                        if (t773 == 22) {
                                            t776 = *(signed char *)0xC1789D5;
                                            t781 = (t774 + (unsigned char)t776);
                                        } else {
                                            t777 = nlRand();
                                            t778 = (int)((int)t777 % (int)0x1F);
                                            t781 = (t774 + t778);
                                        }
                                        t787 = t781;
                                    }
                                    t792 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x14));
                                    t793 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x1C));
                                    t794 = *(int *)(((t88 + (((t654 << 2) << 2) << 1)) + 0x18));
                                    FUN_0c071d34(t787, t792, t794);
                                }
                            }
                            t804 = 0x1;
                        }
                        t809 = t804;
                    }
                    t815 = t809;
                }
                t822 = t815;
            }
            t831 = t822;
        }
        t842 = t831;
    }
    return t842;
}
