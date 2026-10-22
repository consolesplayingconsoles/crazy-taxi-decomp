/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c028760(int);
int SetCameraAngleVelocity(int, int, int);
int SetCameraAngleRatio(float, float);
int FUN_0c03b544(int);
int FUN_0c03b698(int);
int FUN_0c03bf42(void);
int FUN_0c03bf76(void);
int nlSqrt(int, int);
int FUN_0c077210(int, int);
int FUN_0c081470(int, int);
int PutVM_Message(int, int, int, float, float);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int SetCameraPosVelocity(int);
int buCalcBackupFileSize(int, int);
int buGetLastError(void);
int buMakeBackupFileImage(int, int);
int buSaveFile(int, int, int, int);
int buStat(void);
int camSetAngles(int, int, int, int);
int camSetEye(int, int);
int camSetMode(int);
int camSetTarget(int, int);
int courseStatusEntry(int, int);
int memmove(int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlFree(int);
float nlLength(int, int);
int nlMalloc(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslateV(int);
int syRtcGetDate(int);
int FUN_0c03e8ac(void);
int FUN_0c0496fc(int a4);
int SaveBackupData(int a4);
int ExecStartCamera(void);

int FUN_0c03e8ac(void)
{
    int t2;
    int t3;
    int t5;
    int t8;
    int t7;

    FUN_0c03bf42();
    PutVM_Message(0x20, 0x27, 0x0, 209.0f, 240.0f);
    t2 = *(int *)0xC2A1208;
    if ((t2 & 4) != 0) {
        t3 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = (t3 | 0x9);
    }
    t5 = FUN_0c03bf76();
    t8 = t5;
    if (t5 == 1) {
        FUN_0c03b544(0x4);
        t7 = FUN_0c03b698(0x0);
        *(unsigned int *)0xC2A121C = 0x0;
        t8 = t7;
    }
    return t8;
}

int FUN_0c0496fc(int a4)
{
    int t0;
    int t1;
    float t2;
    float u3;
    float u4;
    int t5;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t14;
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
    int t16;

    t0 = *(int *)((a4 + 0x14));
    if ((t0 & 0x1000) != 0) {
        t1 = *(int *)0xC2A1B30;
        t2 = nlLength((t1 + 0x78), (a4 + 0x78));
        u3 = *(float *)0xC2A1B18;
        if (t2 > u3) {
            u4 = *(float *)0xC2A1B18;
            if ((u4 + 30.0f) > t2) {
                *(unsigned int *)((a4 + 0x14)) = 0x0;
                *(unsigned int *)((a4 + 0x88)) = 0x8;
                t5 = *(int *)((a4 + 0x14));
                *(unsigned int *)((a4 + 0x14)) = (t5 | 0x1010);
            }
        }
    }
    t9 = *(int *)((a4 + 0x88));
    if ((int)t9 < 0) {
        t10 = *(int *)((a4 + 0x14));
        t11 = (int)((int)((t10 & 0xF) + 0x1) % (int)0x2);
        *(unsigned int *)((a4 + 0x14)) = ((0x1000 & t10) + t11);
        t12 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x88)) = t12;
        t16 = 0x88;
    } else {
        t13 = *(int *)((a4 + 0x88));
        t15 = 0x88;
        if ((int)t13 < (int)0xB4) {
            t14 = *(int *)((a4 + 0x14));
            *(unsigned int *)((a4 + 0x14)) = (t14 | 0x10);
            t15 = (t14 | 0x10);
        }
        t16 = t15;
    }
    t18 = *(int *)((a4 + 0x14));
    t19 = t16;
    t20 = 0x0;
    do {
        if ((int)t20 >= (int)(((t18 & 0xF) << 1) + ((t18 & 0xF) << 2))) {
            if ((int)t20 < (int)((((t18 & 0xF) << 1) + ((t18 & 0xF) << 2)) + 0x6)) {
                t21 = *(int *)((a4 + 0x14));
                t19 = t21;
                if ((t19 & 16) != 0) {
                    t22 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                    if (t22 != 0) {
                        t23 = *(int *)((((a4 + 0x48) + (t20 << 2)) + 0x0));
                        t24 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                        t25 = courseStatusEntry(t24, t23);
                        t19 = t25;
                    }
                }
            } else {
                t26 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                if (t26 != 0) {
                    t27 = *(int *)((((a4 + 0x48) + (t20 << 2)) + 0x0));
                    t28 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                    t29 = courseStatusEntry(t28, t27);
                    t19 = t29;
                }
            }
        } else {
            t30 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
            if (t30 != 0) {
                t31 = *(int *)((((a4 + 0x48) + (t20 << 2)) + 0x0));
                t32 = *(int *)((((a4 + 0x18) + (t20 << 2)) + 0x0));
                t33 = courseStatusEntry(t32, t31);
                t19 = t33;
            }
        }
        t20 = (t20 + 0x1);
    } while ((int)t20 < (int)0xC);
    t34 = *(int *)((a4 + 0x88));
    *(unsigned int *)((a4 + 0x88)) = (t34 - 1);
    return 0x88;
}

int SaveBackupData(int a4)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t31;
    int t8;
    int t30;
    int t9;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t25;
    int t28;
    int t27;
    int stk[38] = {0};

    memset((((int)stk + 12) + 0x14), 0x0, 0x60);
    FUN_0c081470((((int)stk + 12) + 0x14), 0xC0EEC58);
    FUN_0c081470((((int)stk + 12) + 0x26), 0xC0EEC68);
    memmove((((int)stk + 12) + 0x48), 0xC0EEC73, 0x10);
    *(unsigned int *)(((int)stk + 100)) = 0xC0EEC83;
    *(unsigned int *)(((int)stk + 104)) = 0xC0EECA3;
    *(unsigned short *)(((int)stk + 108)) = 0x3;
    *(unsigned short *)(((int)stk + 110)) = 0x2;
    *(unsigned int *)(((int)stk + 112)) = 0x0;
    *(unsigned short *)(((int)stk + 116)) = 0x0;
    t4 = 0;
    for (; t4 < (int)0x25B0; t4++) *(unsigned char *)(0xC28F8A0 + t4) = *(unsigned char *)(0xC28A4E8 + t4);
    *(unsigned int *)(((int)stk + 120)) = 0xC28F8A0;
    *(unsigned int *)(((int)stk + 124)) = 0x25B0;
    t5 = *(short *)(((int)stk + 116));
    t6 = *(short *)(((int)stk + 108));
    t7 = buCalcBackupFileSize((unsigned short)t6, (unsigned short)t5);
    t31 = 0xFFFF0000;
    if (t7 == 23) {
        t8 = nlMalloc(((t7 << 8) << 1));
        t30 = 0xFFFF0000;
        if (t8 != 0) {
            t9 = buMakeBackupFileImage(t8, (((int)stk + 12) + 0x14));
            if ((int)t9 <= 0) {
                nlFree(t8);
                t28 = 0xFFFF0000;
            } else {
                syRtcGetDate(((int)stk + 12));
                t12 = *(signed char *)((((int)stk + 12) + 0x0));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x0)) = t12;
                t13 = *(signed char *)((((int)stk + 12) + 0x1));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x1)) = t13;
                t14 = *(signed char *)((((int)stk + 12) + 0x2));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x2)) = t14;
                t15 = *(signed char *)((((int)stk + 12) + 0x3));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x3)) = t15;
                t16 = *(signed char *)((((int)stk + 12) + 0x4));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x4)) = t16;
                t17 = *(signed char *)((((int)stk + 12) + 0x5));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x5)) = t17;
                t18 = *(signed char *)((((int)stk + 12) + 0x6));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x6)) = t18;
                t19 = *(signed char *)((((int)stk + 12) + 0x7));
                *(unsigned char *)(((((int)stk + 12) + 0xC) + 0x7)) = t19;
                t20 = buSaveFile(a4, 0xC09DB4C, t8, t9);
                if (t20 != 0) {
                    nlFree(t8);
                    t27 = t20;
                } else {
                    do {
                        t22 = buStat();
                    } while (t22 == -1);
                    memmove(0xC28CA98, (((int)stk + 12) + 0xC), 0x8);
                    nlFree(t8);
                    t25 = buGetLastError();
                    t27 = t25;
                }
                t28 = t27;
            }
            t30 = t28;
        }
        t31 = t30;
    }
    return t31;
}

int ExecStartCamera(void)
{
    int t0;
    int t65;
    int t4;
    int t10;
    int t13;
    int t14;
    int t22;
    int t23;
    int t24;
    int t25;
    int t29;
    int t30;
    int t32;
    int t44;
    int t53;
    int t62;
    int t64;
    int t63;
    int t54;
    int t45;
    int t31;
    int stk[14] = {0};

    t0 = *(int *)0xC17999C;
    t65 = t0;
    if (t0 != 4) {
        nlPushUnitMatrix();
        nlTranslateV(0xC179144);
        SetCameraPosVelocity(0xC1790FC);
        t4 = *(int *)0xC17999C;
        if (t4 == 0) {
            nlAddVector(0xC1799A4, 0xC1799BC);
            nlSqrt(0xC1799A4, (((int)stk + 4) + 0xC));
            camSetEye((((int)stk + 4) + 0xC), 0x0);
            camSetTarget(0xC1799B0, 0x0);
        }
        t10 = *(int *)0xC1799A0;
        *(unsigned int *)0xC1799A0 = (t10 - 1);
        if ((int)(t10 - 1) >= 0) {
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 20)) = 5.0f;
            *(float *)(((int)stk + 24)) = 0.0f;
            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
            camSetTarget((((int)stk + 4) + 0xC), 0x0);
            t13 = nlPopMatrix(0x1);
            t64 = t13;
        } else {
            t14 = *(int *)0xC17999C;
            *(unsigned int *)0xC17999C = (t14 + 0x1);
            if ((t14 + 0x1) != 0) {
                if ((t14 + 0x1) != 1) {
                    if ((t14 + 0x1) != 2) {
                        if ((t14 + 0x1) != 3) {
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                            camSetEye((((int)stk + 4) + 0xC), 0x0);
                            SetCameraPosRatio(0.0f, 1.0f);
                            FUN_0c028760(((int)stk + 4));
                            *(float *)(((int)stk + 16)) = 0.0f;
                            *(float *)(((int)stk + 20)) = 5.0f;
                            *(float *)(((int)stk + 24)) = 0.0f;
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            camSetTarget((((int)stk + 4) + 0xC), 0x0);
                            t22 = nlPopMatrix(0x1);
                            t31 = t22;
                        } else {
                            *(float *)(((int)stk + 16)) = 0.0f;
                            *(float *)(((int)stk + 20)) = (1.0f + 1.0f);
                            *(float *)(((int)stk + 24)) = -20.0f;
                            t23 = *(int *)0xC0965F8;
                            *(unsigned int *)((((int)stk + 4) + 0x8)) = t23;
                            t24 = *(int *)0xC0965F4;
                            *(unsigned int *)((((int)stk + 4) + 0x4)) = t24;
                            t25 = *(int *)0xC0965F0;
                            *(unsigned int *)((((int)stk + 4) + 0x0)) = t25;
                            camSetMode(0x0);
                            nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                            camSetEye((((int)stk + 4) + 0xC), 0x0);
                            *(unsigned int *)0xC1799A0 = 0x2710;
                            t29 = nlPopMatrix(0x1);
                            t30 = *(int *)0xC17999C;
                            *(unsigned int *)0xC17999C = (t30 + 0x1);
                            t31 = t29;
                        }
                        t45 = t31;
                    } else {
                        *(float *)(((int)stk + 16)) = -20.0f;
                        *(float *)(((int)stk + 20)) = 10.0f;
                        *(float *)(((int)stk + 24)) = 10.0f;
                        *(float *)(((int)stk + 4)) = 0.0f;
                        *(float *)(((int)stk + 8)) = 0.0f;
                        *(float *)(((int)stk + 12)) = -0.399999976f;
                        t32 = *(short *)0xC179152;
                        camSetAngles(0xF800, ((unsigned short)t32 + 0xC000), 0x0, 0x0);
                        SetCameraAngleVelocity(0x0, 0xFFFFFFEB, 0x0);
                        SetCameraAngleRatio(0.0f, 1.04999995f);
                        SetCameraMode(0x0);
                        *(float *)0xC1798A4 = 70.0f;
                        *(unsigned int *)0xC1799A0 = 0x46;
                        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                        FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                        camSetEye((((int)stk + 4) + 0xC), 0x0);
                        SetCameraPosRatio(0.0f, 1.0f);
                        FUN_0c028760(((int)stk + 4));
                        *(float *)(((int)stk + 16)) = 0.0f;
                        *(float *)(((int)stk + 20)) = 5.0f;
                        *(float *)(((int)stk + 24)) = 0.0f;
                        nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                        camSetTarget((((int)stk + 4) + 0xC), 0x0);
                        t44 = nlPopMatrix(0x1);
                        t45 = t44;
                    }
                    t54 = t45;
                } else {
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 15.0f;
                    *(float *)(((int)stk + 24)) = 10.0f;
                    *(float *)(((int)stk + 4)) = 0.5f;
                    *(float *)(((int)stk + 8)) = 0.299999982f;
                    *(float *)(((int)stk + 12)) = 0.299999982f;
                    *(unsigned int *)0xC1799A0 = 0x28;
                    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                    FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                    camSetEye((((int)stk + 4) + 0xC), 0x0);
                    SetCameraPosRatio(0.0f, 1.0f);
                    FUN_0c028760(((int)stk + 4));
                    *(float *)(((int)stk + 16)) = 0.0f;
                    *(float *)(((int)stk + 20)) = 5.0f;
                    *(float *)(((int)stk + 24)) = 0.0f;
                    nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                    camSetTarget((((int)stk + 4) + 0xC), 0x0);
                    t53 = nlPopMatrix(0x1);
                    t54 = t53;
                }
                t63 = t54;
            } else {
                *(unsigned int *)0xC1799A0 = 0x78;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                FUN_0c077210(((int)stk + 4), ((int)stk + 4));
                camSetEye((((int)stk + 4) + 0xC), 0x0);
                SetCameraPosRatio(0.0f, 1.0f);
                FUN_0c028760(((int)stk + 4));
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 20)) = 5.0f;
                *(float *)(((int)stk + 24)) = 0.0f;
                nlSqrt((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
                camSetTarget((((int)stk + 4) + 0xC), 0x0);
                t62 = nlPopMatrix(0x1);
                t63 = t62;
            }
            t64 = t63;
        }
        t65 = t64;
    }
    return t65;
}
