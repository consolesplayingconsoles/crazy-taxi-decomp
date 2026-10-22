/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int Act_Execute(void);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int exec_GameSystem(void);
int execPlayerADV(void);
int execPlayer(void);
int gdc_ExecStreamSongDisk(void);
int Pause_ExecRenderTexture1st(void);
int Pause_ExecRenderTexture2nd(void);
int Exec_Fog(void);
int Exec_SeaFog(void);
int RinAqua_Execute(void);
int GoiTool(int);
int LightEffect(int);
int PutCourse(void);
int ResetSpark(void);
int ShallWeHaveSomeRelaxation(float);
int IsSeaFog(void);
int adxf_ChkPrmPt(int);
int adxf_LoadData(int, int, int);
int camUpdate(int);
int crowdSpawn(void);
int entryCarPut(int);
int execDCmini(void);
int execMiniLight(void);
int exec_CarMain(void);
int exec_KyakuMain(void);
int hudDraw(void);
int nlExecuteEvent(void);
int rtcGetSeconds(void);
int strlen(int);
int trafficControl(int);
void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int table(int a4);
int CheckNameEntryPad(void);
int ADXF_AddPartition(int a4, int a5, int a6, int a7);
int gameStateDrive(void);
int Result_Insert_Rank(void);

void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int table(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = strlen(a4);
    t1 = 0xC2A66A0;
    t2 = 0x0;
    do {
        t2 = (t2 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = t0;
        t1 = (t1 + 0x4);
    } while ((int)t2 <= (int)0xFF);
    t7 = t0;
    if ((int)(t0 - 1) > 0) {
        t3 = (t0 - 1);
        t4 = a4;
        t5 = 0x0;
        do {
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned int *)((0xC2A66A0 + (t6 << 2))) = t3;
            t3 = (t3 - 1);
        } while ((int)t5 < (int)(t0 - 1));
        t7 = (t6 << 2);
    }
    return t7;
}

int CheckNameEntryPad(void)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t6;
    int t9;
    int t11;
    float u12;
    int t13;
    float u27;
    int t14;
    int t15;
    int t17;
    float u20;
    float u18;
    float u22;
    float u21;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
    int t52;
    int t48;
    int t44;
    int t40;
    int t37;

    t0 = *(int *)0xC1EE250;
    if ((t0 & 4) == 0) {
        u1 = *(float *)0xC1EE2F8;
        if (!(u1 > 0.699999988f)) {
            u2 = *(float *)0xC1EE2FC;
            if (u2 > 0.699999988f) {
                t3 = *(int *)0xC2864B8;
                if (t3 == 0) {
                    *(unsigned int *)0xC2864B0 = 0x1;
                }
                *(unsigned int *)0xC2864B8 = 0x1;
            } else {
                *(unsigned int *)0xC2864B8 = 0x0;
            }
        } else {
            t6 = *(int *)0xC2864B8;
            if (t6 == 0) {
                *(unsigned int *)0xC2864B0 = 0x1;
            }
            *(unsigned int *)0xC2864B8 = 0x1;
        }
    } else {
        t9 = *(int *)0xC2864B8;
        if (t9 == 0) {
            *(unsigned int *)0xC2864B0 = 0x1;
        }
        *(unsigned int *)0xC2864B8 = 0x1;
    }
    t11 = *(int *)0xC1EE250;
    u12 = *(float *)0xC1EE2F4;
    t13 = *(int *)0xC1EE24C;
    if (t11 != 0) {
        *(unsigned int *)0xC0EE9EC = 0x0;
    }
    u27 = u12;
    if ((0xC0 & (t13 | t11)) != 0) {
        t14 = *(int *)0xC0EE9EC;
        if ((int)t14 <= (int)0x64) {
            t15 = *(int *)0xC0EE9EC;
            *(unsigned int *)0xC0EE9EC = (t15 + 0x1);
        }
        t17 = *(int *)0xC0EE9EC;
        u20 = (u12 - ((float)t17 * 0.00999999978f));
        if ((0x40 & (t13 | t11)) == 0) {
            u18 = u12;
            if (((t13 | t11) & 0x80) != 0) {
                u18 = (u12 + ((float)t17 * 0.00999999978f));
            }
            u20 = u18;
        }
        u22 = (-1.0f);
        if (!((-1.0f) > u20)) {
            u21 = u20;
            if (u20 > 1.0f) {
                u21 = 1.0f;
            }
            u22 = u21;
        }
        u27 = u22;
    }
    u28 = *(float *)0xC2864C0;
    if ((u27 < 0.0f ? -u27 : u27) > u28) {
        *(float *)0xC2864C0 = (u27 < 0.0f ? -u27 : u27);
    }
    u29 = *(float *)0xC2864C0;
    if (u29 > ((u27 < 0.0f ? -u27 : u27) * 1.29999995f)) {
        *(float *)0xC2864C0 = ((u27 < 0.0f ? -u27 : u27) * 1.29999995f);
    }
    u30 = *(float *)0xC2864C0;
    if (0.099999994f > u30) {
        *(float *)0xC2864C0 = 0.099999994f;
    }
    u31 = *(float *)0xC2864C0;
    if ((u27 < 0.0f ? -u27 : u27) > (u31 * 0.899999976f)) {
        u32 = *(float *)0xC2864C0;
        *(float *)0xC2864C0 = (u32 * 0.979999959f);
        if (u27 > 0.899999976f) {
            *(unsigned int *)0xC2864B4 = 0x4;
            t48 = 0xC039E24;
        } else {
            if (u27 > 0.199999988f) {
                *(unsigned int *)0xC2864B4 = 0x2;
                t44 = 0xC039E28;
            } else {
                if (u27 > 0.0f) {
                    *(unsigned int *)0xC2864B4 = 0x1;
                    t40 = 0xC039E28;
                } else {
                    u33 = *(float *)0xC039F88;
                    if (u33 > u27) {
                        *(unsigned int *)0xC2864B4 = 0xFFFFFFFC;
                        t37 = 0xC039F88;
                    } else {
                        u34 = *(float *)0xC039F8C;
                        if (u34 > u27) {
                            *(unsigned int *)0xC2864B4 = 0xFFFFFFFE;
                        } else {
                            if (0.0f > u27) {
                                *(unsigned int *)0xC2864B4 = 0xFFFFFFFF;
                            }
                        }
                        t37 = 0xC039F8C;
                    }
                    t40 = t37;
                }
                t44 = t40;
            }
            t48 = t44;
        }
        t52 = t48;
    } else {
        *(unsigned int *)0xC2864B4 = 0x0;
        t52 = 0xC039E1C;
    }
    return t52;
}


int gameStateDrive(void)
{
    int t0;
    int t3;
    int t7;
    float u11;
    int t18;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t40;
    int t41;
    int t42;
    int t48;
    int t54;
    int t57;
    int t64;
    int t65;
    int t66;
    int t69;

    t0 = Pause_ExecRenderTexture1st();
    if (t0 == 1) {
        return t0;
    }
    camUpdate(0x0);
    Exec_Fog();
    t3 = *(int *)0xC1EE20C;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 == 2) {
                execMiniLight();
            }
        } else {
            Exec_SeaFog();
            t7 = IsSeaFog();
            if (t7 != 0) {
                ShallWeHaveSomeRelaxation(-30.0f);
            }
        }
    } else {
        u11 = *(float *)0xC179844;
        if (-1237.0f > u11) {
            LightEffect(0x1);
            ResetSpark();
            RinAqua_Execute();
        } else {
            LightEffect(0x0);
        }
    }
    t18 = *(int *)0xC1EE234;
    if (t18 == 0) {
        execPlayer();
    } else {
        execPlayerADV();
    }
    exec_GameSystem();
    gdc_ExecStreamSongDisk();
    exec_CarMain();
    t25 = *(int *)0xC1EE20C;
    if (t25 == 2) {
        t26 = *(int *)0xC1EE20C;
        if (t26 == 2) {
            t27 = *(int *)0xC1EE214;
            if (t27 != 1) {
                t28 = *(int *)0xC1EE214;
                if (t28 != 2) {
                    t29 = *(int *)0xC1EE214;
                    if (t29 != 3) {
                        t30 = *(int *)0xC1EE214;
                        if (t30 != 0) {
                            exec_KyakuMain();
                        }
                    }
                }
            }
        }
    } else {
        exec_KyakuMain();
    }
    ExecSetObject();
    t40 = *(int *)0xC1EE20C;
    if (t40 == 2) {
        t41 = *(int *)0xC1EE20C;
        if (t41 == 2) {
            t42 = *(int *)0xC1EE214;
            if (t42 != 0) {
                ExecKyakuArea();
            }
        }
    } else {
        ExecKyakuArea();
    }
    t48 = *(int *)0xC1EE20C;
    if (t48 == 0) {
        ExecHelicopter();
    }
    Act_Execute();
    entryCarPut(0x1);
    trafficControl(0x1);
    t54 = *(int *)0xC1EE20C;
    if (t54 != 2) {
        crowdSpawn();
    }
    t57 = *(int *)0xC1EE210;
    if (t57 == 2) {
        execDCmini();
    }
    nlExecuteEvent();
    ExecColliObj();
    PutCourse();
    GoiTool(0x1);
    t64 = *(int *)0xC1EE284;
    if ((t64 & 0x400) != 0) {
        t65 = *(int *)0xC0E5320;
        t66 = (int)((int)(t65 + 0x1) % (int)0x2);
        *(unsigned int *)0xC0E5320 = t66;
    }
    t69 = *(int *)0xC0E5320;
    if (t69 != 0) {
        hudDraw();
    }
    return Pause_ExecRenderTexture2nd();
}

