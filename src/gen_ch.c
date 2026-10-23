/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetCameraPosVelocity(int);
int SetCameraAngleVelocity(int, int, int);
int SetCameraAngleRatio(float, float);
int SetScreen(int);
int SetWindow(int);
int windowOpenStep(void);
int windowEnterStep(void);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int strcpy(int, int);
int PutVM_Message(int, int, int, float, float);
int SetCameraMode(int);
int SetCameraPosRatio(float, float);
int MultiRot4Vec(int);
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
int windowSaveOff(void);
int signalExec(int a4);
int SaveBackupData(int a4);
int ExecStartCamera(void);

int windowSaveOff(void)
{
    int t2;
    int t3;
    int t5;
    int t8;
    int t7;

    windowOpenStep();
    PutVM_Message(0x20, 0x27, 0x0, 209.0f, 240.0f);
    t2 = *(int *)0xC2A1208;
    if ((t2 & 4) != 0) {
        t3 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = (t3 | 0x9);
    }
    t5 = windowEnterStep();
    t8 = t5;
    if (t5 == 1) {
        SetScreen(0x4);
        t7 = SetWindow(0x0);
        *(unsigned int *)0xC2A121C = 0x0;
        t8 = t7;
    }
    return t8;
}

int signalExec(int a4)
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


