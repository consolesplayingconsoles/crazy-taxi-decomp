/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int Drv_Init(void);
int Drv_StartAction(int, int, int);
int ExecArrow(int, float);
float FUN_0c0217b4(int, float, float);
float FUN_0c02187a(float);
int FUN_0c03006a(int, int);
int gdc_SpriteSetMBox(void);
int FUN_0c03b674(int);
int FUN_0c03bf42(int);
int FUN_0c03bf76(int);
int FUN_0c040b98(int);
int FUN_0c041016(int, int);
int FUN_0c0418b8(int);
int FUN_0c04d1ac(int);
int FUN_0c0577dc(void);
int FUN_0c05ecae(int);
int FUN_0c060dfc(void);
int FUN_0c071104(int);
int FUN_0c0713d8(int);
int FUN_0c071a7c(int, int);
int FUN_0c072e36(void);
int FUN_0c077210(int, int);
int FUN_0c0813e0(int, int, int);
int FcvStoreBuffer(int, int, float);
int GetRotVec(int);
int InitArrow(int, int, int);
int IsBoyFriend(int, int);
int KillColliObj(int);
int PcarInit(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int SetCameraPosVelocity(int);
int SetObjFly(int);
int Sound_Init(int);
int Sound_Request(int, int);
int Start_Fog(int);
int courseCarType(int, int, int, int);
int courseStatusGet(int, int, int, int);
int frameFlip(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteSetGame(void);
int gdc_StopStreamSongAll(void);
float getNearLineIndex(int, int, int, int, int);
int humanDraw(int, int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int, int, int, int);
int kmSetVertexRenderState(int);
int kmUnloadDevice(void);
int loadCity(int, int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int nlCloseEvent(int);
int nlCommonTextureClearTextureIndex(int, int, int);
float nlCos(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlLineBlendFunc(int, int, int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlMalloc(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlPopMatrix(int);
float nlPow(float, float);
int nlPushMatrix(int);
int nlRand(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundUp(float);
int nlScale(float, float, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetScaleFactor(float);
float nlTan(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int, int);
int pfSize(float, float);
int psgFaceTaxi(int);
int psgPutShadow(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int rinRandomSeed(int);
int setObjGroupOpen(int);
int setObjPlace(int, int);
int set_event(int, int);
int stopingCarSpawn(int, int);

float FUN_0c022250(int a4)
{
    int t1;
    int t2;
    int t4;
    int t6;
    float u8;
    int t11;
    int t12;
    float u13;
    float u14;
    float t15;
    float u16;
    float u17;
    float t18;
    int t19;
    int t20;
    float u21;
    float u22;
    float t23;
    float u24;
    float u25;
    float t26;
    float u27;
    float t28;
    float u29;
    float t30;

    nlPushMatrix(0x0);
    t1 = *(short *)((a4 + 0x86));
    t2 = *(short *)((a4 + 0xF4));
    nlRotateAY(((unsigned short)t1 - (unsigned short)t2));
    t4 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t4);
    t6 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t6);
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = 0.0f;
    u8 = *(float *)((a4 + 0x160));
    *(float *)0xC1EE150 = u8;
    FUN_0c077210(0xC1EE148, 0xC1EE154);
    nlPopMatrix(0x1);
    t11 = *(int *)(((0x1A0 + a4) + 0x84));
    if (t11 == -1) {
        t12 = *(int *)(((0x1A0 + a4) + 0x0));
        if (t12 != -1) {
            u13 = *(float *)0xC1EE15C;
            u14 = *(float *)((a4 + 0x168));
            t15 = FUN_0c0217b4((0x1A0 + a4), u14, u13);
            *(float *)((a4 + 0x180)) = t15;
        } else {
            *(float *)((a4 + 0x180)) = 0.0f;
        }
    } else {
        u16 = *(float *)0xC1EE15C;
        u17 = *(float *)((a4 + 0x168));
        t18 = FUN_0c0217b4((0x1A0 + a4), u17, u16);
        *(float *)((a4 + 0x180)) = t18;
    }
    t19 = *(int *)(((0x1A0 + a4) + 0x18C));
    if (t19 == -1) {
        t20 = *(int *)(((0x1A0 + a4) + 0x108));
        if (t20 != -1) {
            u21 = *(float *)0xC1EE15C;
            u22 = *(float *)((a4 + 0x16C));
            t23 = FUN_0c0217b4((0x1A0 + a4), u22, u21);
            *(float *)((a4 + 0x18C)) = t23;
        } else {
            *(float *)((a4 + 0x18C)) = 0.0f;
        }
    } else {
        u24 = *(float *)0xC1EE15C;
        u25 = *(float *)((a4 + 0x16C));
        t26 = FUN_0c0217b4((0x1A0 + a4), u25, u24);
        *(float *)((a4 + 0x18C)) = t26;
    }
    u27 = *(float *)((a4 + 0x180));
    t28 = FUN_0c02187a(u27);
    *(float *)((a4 + 0x184)) = t28;
    u29 = *(float *)((a4 + 0x18C));
    t30 = FUN_0c02187a(u29);
    *(float *)((a4 + 0x190)) = t30;
    return t30;
}

int req_load(void)
{
    int t4;
    int t5;
    int t11;
    int t12;
    int t13;
    float t17;
    int t23;
    int t25;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;

    *(unsigned int *)0xC1799E4 = 0xC1799E8;
    nlInitHeapMemory(0xC1799E8, 0x30000);
    nlInitEvent();
    gdc_StopStreamSongAll();
    FUN_0c072e36();
    t4 = *(int *)0xC1EE234;
    if (t4 != 0) {
        t5 = *(int *)0xC1EE20C;
        if (t5 == 2) {
            gdc_SpriteSetMBox();
        } else {
            gdc_SpriteSetGame();
        }
    }
    FUN_0c0577dc();
    t11 = *(int *)0xC1EE20C;
    t12 = *(int *)0xC0E5318;
    if (t12 != t11) {
        *(unsigned int *)0xC0E5318 = t11;
        t13 = *(int *)0xC1EE234;
        if (t13 != 0) {
            pfSetFont(0x0, 0xC0E5318);
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            t17 = pfLength(0xC08AE08);
            pfLocate(((-(t17 * 0.5f)) + 320.0f), 240.0f);
            pfPuts(0xC08AE08);
            frameFlip();
            frameFlip();
        }
        t23 = *(int *)0xC1EE20C;
        loadCity(t23, 0x0);
        t25 = *(int *)0xC1EE20C;
        FUN_0c04d1ac(t25);
    } else {
        if (t11 == 2) {
            FUN_0c03006a(t11, 0xC0E5318);
        }
    }
    t30 = *(int *)0xC1EE234;
    if (t30 == 0) {
        t31 = *(int *)0xC1EE20C;
        t32 = 0xC08AE24;
        if (t31 == 0) {
            t32 = 0xC08AE14;
        }
        t33 = gdc_FileLoad(0xC30C000, t32, 0x1C000);
        t37 = t33;
    } else {
        t34 = *(int *)0xC1EE20C;
        t35 = 0xC08AE44;
        if (t34 == 0) {
            t35 = 0xC08AE34;
        }
        t36 = gdc_FileLoad(0xC30C000, t35, 0x1C000);
        t37 = t36;
    }
    return t37;
}

int FUN_0c0376b0(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        t1 = ((short)t0 * (short)0x1C);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((short)t1 + 0xC274DF8) + 0x18)) = 0xFFFFFFFF;
    } while ((int)t0 < (int)0x5A);
    *(unsigned int *)0xC2757E0 = 0x0;
    *(unsigned int *)0xC2757DC = 0x0;
    *(unsigned int *)0xC2757D8 = 0x0;
    *(unsigned int *)0xC2757D4 = 0x0;
    *(unsigned int *)0xC2757D0 = 0x0;
    nlLineBlendFunc(0x1, 0x4, 0x5A, 0xC274DF8);
    nlLineSetThickness((1.0f + 1.0f));
    return nlLineSetDiv(128.0f);
}


int setObjGroupOpen(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = set_event(0x1C, 0xC038148);
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0x10));
        t2 = nlMalloc((((short)t1 * (short)0x70) + 0x4));
        if (t2 != 0) {
            *(unsigned int *)((t0 + 0x0)) = t2;
            *(unsigned int *)((t2 + 0x0)) = 0x0;
            *(unsigned int *)((t0 + 0x14)) = a4;
            *(unsigned int *)((a4 + 0x1C)) = (t2 + 0x4);
            *(unsigned int *)((t0 + 0x18)) = (t2 + 0x4);
            t3 = 0x0;
            for (;;) {
                t4 = *(short *)((a4 + 0x10));
                if ((int)t3 >= (int)t4) break;
                t5 = *(int *)((t0 + 0x18));
                t6 = (t3 * 0x70);
                t3 = (t3 + 0x1);
                *(unsigned int *)(((t6 + t5) + 0x68)) = 0xFFFFFFFF;
            }
            return t4;
        }
        return nlCloseEvent(t0);
    }
    return t0;
}

void ExecSetObject(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    float t12;
    float u13;
    int t14;
    float u2;

    t0 = *(int *)0xC1EE20C;
    if (t0 == 1) {
        t1 = *(int *)0xC179494;
        if (t1 != 0) {
            *(float *)0xC2757E8 = 1000.0f;
            u2 = 1200.0f;
        } else {
            *(float *)0xC2757E8 = 1800.0f;
            u2 = 2000.0f;
        }
        *(float *)0xC2757EC = u2;
    }
    t3 = *(int *)0xC2757F0;
    t4 = t3;
    t5 = (((t3 << 2) << 2) << 1);
    t6 = (((t3 << 2) << 2) << 1);
    t7 = (((t3 << 2) << 2) << 1);
    for (;;) {
        t8 = *(int *)0xC2757F4;
        if ((int)t4 >= (int)t8) break;
        t9 = *(int *)0xC0EDBB8;
        t10 = *(short *)(((t5 + t9) + 0x10));
        if ((int)t10 > 0) {
            t11 = *(int *)(((t5 + t9) + 0x1C));
            if (t11 == 0) {
                t12 = nlLength((t7 + t9), 0xC179144);
                u13 = *(float *)0xC2757E8;
                if (u13 > t12) {
                    t14 = *(int *)0xC0EDBB8;
                    setObjGroupOpen((t14 + t6));
                }
            }
        }
        t7 = (t7 + 0x20);
        t5 = (t5 + 0x20);
        t4 = (t4 + 0x1);
        t6 = (t6 + 0x20);
    }
}

int FUN_0c03f216(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t9;
    int t10;
    int t14;
    int t33;
    int t34;
    float u35;
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
    int t39;
    int t46;
    int t40;
    int t45;
    int t41;
    int t44;
    int t43;
    int stk[20];

    FUN_0c03bf42(0x3C);
    t1 = *(int *)0xC2A1208;
    if ((t1 & 4) != 0) {
        t2 = FUN_0c0813e0(0xC2A124C, 0xC0A2044, 0x4);
        if (t2 == 0) {
            t3 = *(signed char *)0xC28A4F6;
            *(unsigned char *)0xC28A4F6 = (t3 + 0x1);
        }
        t4 = *(short *)0xC2A11C4;
        memmove(((short)((short)t4 * (short)0x788) + 0xC28A4F8), 0xC2A1248, 0x4);
        t6 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = (t6 | 0x8);
    }
    FUN_0c03b674(0x0);
    t9 = FUN_0c0813e0(0xC2A124C, 0xC0A2044, 0x4);
    if (t9 == 0) {
        t10 = *(int *)0xC2A11DC;
        if ((int)t10 > (int)0x1) {
            PutVM_Message(0x20, 0x17, 0xC2A1248, 237.0f, 240.0f);
        } else {
            PutVM_Message(0x20, 0x23, 0xC2A1248, 238.0f, 240.0f);
        }
    } else {
        t14 = *(int *)0xC2A11DC;
        t33 = 0x23;
        t34 = 0xC2A1248;
        u35 = 238.0f;
        if ((int)t14 > (int)0x1) {
            t15 = t14;
            t16 = 0x0;
            t17 = 0xC2A124C;
            t18 = (((int)stk + 4) + 0x4);
            while ((int)t16 < (int)0x3) {
                t19 = *(signed char *)((t17 + 0x0));
                t15 = t19;
                t17 = (t17 + 0x1);
                t16 = (t16 + 0x1);
                *(unsigned char *)((t18 + 0x0)) = t15;
                t18 = (t18 + 0x1);
            }
            *(unsigned int *)(((int)stk + 4)) = 0xC0EF7A8;
            t20 = 0x0;
            t21 = t18;
            for (;;) {
                t22 = FUN_0c041016(0x0, t17);
                t23 = *(int *)(((int)stk + 4));
                t24 = *(int *)((((t22 << 2) + t23) + 0x14));
                if ((int)t20 >= (int)t24) break;
                *(unsigned char *)((t21 + 0x0)) = 0x20;
                t20 = (t20 + 0x1);
                t21 = (t21 + 0x1);
            }
            t25 = t24;
            t26 = 0x0;
            t27 = 0xC2A1248;
            t28 = t21;
            while ((int)t26 < (int)0x3) {
                t29 = *(signed char *)((t27 + 0x0));
                t25 = t29;
                t27 = (t27 + 0x1);
                t26 = (t26 + 0x1);
                *(unsigned char *)((t28 + 0x0)) = t25;
                t28 = (t28 + 0x1);
            }
            *(unsigned char *)((t28 + 0x0)) = 0x0;
            t33 = 0x1D;
            t34 = (((int)stk + 4) + 0x4);
            u35 = 191.0f;
        }
        PutVM_Message(0x20, t33, t34, u35, 240.0f);
    }
    t39 = FUN_0c03bf76(0x0);
    t46 = t39;
    if (t39 == 1) {
        t40 = *(int *)0xC2A11DC;
        t45 = t39;
        if ((int)t40 <= (int)0x1) {
            t41 = *(int *)0xC2A1208;
            t44 = t41;
            if ((t41 & 2) != 0) {
                FUN_0c0418b8(0xC2A11C8);
                t43 = FUN_0c040b98(0x1);
                t44 = t43;
            }
            t45 = t44;
        }
        t46 = t45;
    }
    return t46;
}

int FUN_0c03f96e(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;
    int t8;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;

    t0 = menuOpenStep();
    if (t0 == 1) {
        *(unsigned int *)0xC2A1244 = 0x0;
    }
    t1 = menuCursor(0x0, 0x4, 0x0);
    if (t1 == 1) {
        *(unsigned int *)0xC2A1244 = 0x0;
    }
    menuPutFrame();
    t3 = *(int *)0xC2A1AD8;
    t4 = *(int *)0xC2A11E0;
    if (t4 == 0) {
        putString(0x20013, 0xC0A210C, (float)(t3 + 0x20), 36.0f, 1.51999998f);
    } else {
        t6 = *(int *)0xC2A11E0;
        PutStringFixPfont(0x20013, ((short)((short)(t6 - 1) * (short)0x788) + 0xC28A4F8), (float)(t3 + 0x20), 36.0f, 30.0f, 1.51999998f);
        t8 = *(int *)0xC2A1AD8;
        putString(0x20013, 0xC0A2060, (float)(t8 + 0x84), 36.0f, 1.51999998f);
    }
    t11 = *(int *)0xC2A1AD8;
    t12 = *(int *)0xC2A11D8;
    t13 = *(int *)((0xC2A11DC + (t12 << 2)));
    t14 = 0x4;
    if (t13 == 3) {
        t14 = 0x0;
    }
    menuPutHelpBar(t14, (float)(-t11), 416.0f);
    t16 = *(int *)0xC2A11D8;
    t17 = *(int *)((((t16 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x417, 0xC09F394, 0x4, t17, 0x0);
    return menuEnterStep();
}

int pcarSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t0;
    int t40;
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
    int t17;
    int t38;
    int t18;
    int t19;
    int t20;
    float t21;
    float u22;
    int t37;
    int t23;
    int t24;
    int t26;
    int t29;
    int t15;
    int t16;

    t0 = *(int *)0xC2A44A8;
    t40 = 0x0;
    if ((unsigned int)t0 < (unsigned int)0x64) {
        t1 = *(int *)0xC2A6690;
        t2 = *(int *)((((((a5 << 1) + a5) << 2) + t1) + 0x8));
        t3 = *(int *)((t2 + 0x0));
        t4 = courseCarType((0xF & ((int)t3 >> 4)), a5, a6, a7);
        if ((int)t4 >= (int)0xA) {
            t5 = *(int *)((a8 + 0x0));
            *(unsigned int *)((a8 + 0x0)) = (int)((float)t5 + 6.39999962f);
        }
        if (a4 != 0) {
            t6 = *(int *)((a8 + 0x0));
            t7 = 0x0;
            if ((int)(a6 - 10) > 0) {
                t7 = (a6 - 10);
            }
            t15 = t7;
            t16 = (t6 + 0xA);
        } else {
            t8 = *(int *)0xC2A6690;
            t9 = *(int *)((((((a5 << 1) + a5) << 2) + t8) + 0x4));
            t10 = *(int *)((t9 + 0x0));
            t11 = (t10 - 1);
            if ((int)(a6 + 0xA) < (int)(t10 - 1)) {
                t11 = (a6 + 0xA);
            }
            t12 = *(int *)((a8 + 0x0));
            t15 = t11;
            t16 = (0xFFFFFFF6 - t12);
        }
        t17 = courseStatusGet(a5, t15, 0x0, t16);
        t38 = 0x0;
        if (t17 == 0) {
            t18 = *(int *)0xC2A6690;
            t19 = *(int *)((((((a5 << 1) + a5) << 2) + t18) + 0x0));
            t20 = *(int *)0xC2A1B30;
            t21 = nlLength((t20 + 0x78), ((((a6 << 1) + a6) << 2) + t19));
            u22 = *(float *)0xC2A1B18;
            t37 = 0x0;
            if (!((u22 * 0.5f) > t21)) {
                t23 = *(int *)((a10 + 0x0));
                if (t23 == 0) {
                    *(unsigned int *)((a8 + 0x0)) = a7;
                } else {
                    t24 = *(int *)((a10 + 0x0));
                    *(unsigned int *)((a10 + 0x0)) = (t24 - 1);
                }
                t26 = *(int *)((a10 + 0x0));
                if (t26 != 0) {
                    if (a9 == 0) {
                        PcarInit(t4, a5, ((((a6 << 1) + a6) << 2) + t19));
                    }
                } else {
                    PcarInit(t4, a5, ((((a6 << 1) + a6) << 2) + t19));
                }
                if (a4 != 2) {
                    t29 = *(int *)((a10 + 0x0));
                    if (t29 != 0) {
                        if (a9 == 1) {
                            if ((int)a6 > (int)0x4) {
                                stopingCarSpawn(a5, ((((a6 << 1) + a6) << 2) + t19));
                            }
                        }
                    } else {
                        if ((int)a6 > (int)0x4) {
                            stopingCarSpawn(a5, ((((a6 << 1) + a6) << 2) + t19));
                        }
                    }
                }
                t37 = 0x1;
            }
            t38 = t37;
        }
        t40 = t38;
    }
    return t40;
}

void RailroadAreaCheck(int a4, int a5)
{
    int t0;
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
    float t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t35;
    int t36;
    int t37;
    float u38;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    if (a4 == 0) {
        *(unsigned int *)0xC2A4E40 = 0x0;
        *(unsigned int *)0xC2A4E4C = 0x0;
        t0 = 0x0;
        do {
            t2 = (signed char)(((t0 << 1) + t0) << 2);
            t0 = (t0 + 0x1);
            *(unsigned int *)(((t2 + 0xC0F2AE8) + 0x0)) = 0x0;
        } while ((int)t0 < (int)0x4);
    } else {
        t3 = *(int *)0xC1EE20C;
        if (t3 == 1) {
            t4 = *(int *)0xC2A4E40;
            if (t4 == 1) {
                *(unsigned int *)0xC2A4E40 = 0x0;
            } else if (t4 == 2) {
                *(unsigned int *)0xC2A4E40 = 0x3;
            }
            t5 = 0x0;
            t6 = 0xFFFFFFFF;
            t7 = 0x0;
            do {
                t8 = *(int *)((((signed char)(((t7 << 1) + t7) << 2) + 0xC0A380C) + 0x0));
                *(unsigned int *)(((int)stk + 20)) = t8;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t9 = *(int *)(((int)stk + 12));
                t10 = *(int *)(((int)stk + 20));
                t11 = *(int *)0xC2A6690;
                *(unsigned int *)(((int)stk + 16)) = ((((t10 << 1) + t10) << 2) + t11);
                t12 = *(int *)(((int)stk + 16));
                t13 = *(int *)((((((t10 << 1) + t10) << 2) + t11) + 0x4));
                t14 = *(int *)((t12 + 0x0));
                t15 = *(int *)((t13 + 0x0));
                t16 = getNearLineIndex(0x0, t14, t15, (((int)stk + 4) + 0x4), t9);
                if (100.0f > t16) {
                    t17 = *(int *)((((signed char)(((t7 << 1) + t7) << 2) + 0xC0A380C) + 0x4));
                    t18 = t17;
                    t19 = 0x0;
                    for (;;) {
                        t20 = *(int *)(((((signed char)(((t7 << 1) + t7) << 2) + 0xC0A380C) + 0x8) + 0x0));
                        if ((int)t19 >= (int)t20) break;
                        t21 = *(int *)(((int)stk + 8));
                        t22 = *(int *)((t18 + 0x0));
                        if ((int)t21 >= (int)t22) {
                            t23 = *(int *)(((int)stk + 8));
                            t24 = *(int *)((t18 + 0x4));
                            if ((int)t23 <= (int)t24) {
                                t6 = t7;
                                t5 = 0x3;
                            }
                        }
                        t19 = (t19 + 0x1);
                        t18 = (t18 + 0x8);
                    }
                }
                t7 = (t7 + 0x1);
            } while ((unsigned int)t7 < (unsigned int)0x2);
            t26 = *(int *)0xC2A4E40;
            if (t5 != t26) {
                if (t5 == 3) {
                    *(unsigned int *)0xC2A4E40 = 0x2;
                } else {
                    *(unsigned int *)0xC2A4E40 = 0x1;
                }
            }
            t27 = *(int *)0xC2A4E40;
            if (t27 == 2) {
                if (t6 == 0) {
                    Start_Fog(0x2);
                } else {
                    if (t6 == 1) {
                        Start_Fog(0x1);
                    }
                }
            } else {
                if (t27 == 1) {
                    Start_Fog(0x0);
                }
            }
            t35 = *(int *)0xC2A1B30;
            t36 = *(int *)((t35 + 0x64));
            t37 = *(int *)(((((int)t36 >> 5) << 2) + 0xC0A37B8));
            if ((t37 & (((int)(t36 & 0x1F) >= 0) ? (0x1 << ((t36 & 0x1F) & 31)) : ((-(int)(t36 & 0x1F) & 31) ? ((int)0x1 >> (-(int)(t36 & 0x1F) & 31)) : ((int)0x1 >> 31)))) != 0) {
                u38 = *(float *)((t35 + 0x7C));
                if (2000.0f > u38) {
                    *(unsigned int *)0xC2A4E4C = 0x1;
                } else {
                    *(unsigned int *)0xC2A4E4C = 0x0;
                }
            } else {
                *(unsigned int *)0xC2A4E4C = 0x0;
            }
        }
    }
}

int PC_RenderSimpleTaxiShadow(void)
{
    int t0;
    float t1;
    int t2;
    int t3;
    int t5;
    int t8;
    int t12;
    int t13;
    int t17;
    int t14;
    int t15;
    int t16;
    int t61;
    float t18;
    int t19;
    int t20;
    int t24;
    int t25;
    int t28;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    float t40;
    int t41;
    int t42;
    int t45;
    int t46;
    int t49;
    int t55;
    int t56;
    int t60;
    int t57;
    int t58;
    int t59;
    int t65;

    t0 = *(int *)0xC1EE20C;
    if (t0 == 0) {
        t1 = nlLength(0xC5E0008, 0xC179840);
        if (3000.0f > t1) {
            t2 = *(int *)0xC2A6ED0;
            t3 = *(int *)(((t2 << 2) + 0xC118678));
            nlObjPutUseViewMatrix(t3);
            if (400.0f > t1) {
                t5 = *(int *)0xC2A6ED8;
                if (t5 == 0) {
                    *(unsigned int *)0xC2A6ED8 = 0x1;
                    Sound_Request(0x211A9, 0x0);
                }
            } else {
                t8 = *(int *)0xC2A6ED8;
                if (t8 == 1) {
                    *(unsigned int *)0xC2A6ED8 = 0x0;
                    Sound_Request(0x311A9, 0x0);
                }
            }
        }
        t12 = *(int *)0xC2A6EC8;
        t13 = (int)((int)(t12 + 0x1) % (int)0x2);
        *(unsigned int *)0xC2A6EC8 = t13;
        t17 = t13;
        if (t13 == 1) {
            t14 = *(int *)0xC2A6ED0;
            t15 = *(int *)0xC0C83E0;
            t16 = (int)((int)(t14 + 0x1) % (int)t15);
            *(unsigned int *)0xC2A6ED0 = t16;
            t17 = t16;
        }
        t65 = t17;
    } else {
        t61 = t0;
        if (t0 == 1) {
            t18 = nlLength(0xC5E9FA8, 0xC179840);
            if (3000.0f > t18) {
                t19 = *(int *)0xC2A6ED0;
                t20 = *(int *)(((t19 << 2) + 0xC1186F0));
                nlObjPutUseViewMatrix(t20);
                nlPushMatrix(0x0);
                nlTranslate(300.0f, 0.0f, 0.0f);
                t24 = *(int *)0xC2A6ED0;
                t25 = *(int *)(((t24 << 2) + 0xC1186F0));
                nlObjPutUseViewMatrix(t25);
                nlPopMatrix(0x1);
                t28 = *(int *)0xC2A6ED8;
                if (400.0f > t18) {
                    if (t28 == 0) {
                        *(unsigned int *)0xC2A6ED8 = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t28 == 1) {
                        *(unsigned int *)0xC2A6ED8 = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t34 = *(int *)0xC2A6EC8;
            t35 = (int)((int)(t34 + 0x1) % (int)0x2);
            *(unsigned int *)0xC2A6EC8 = t35;
            if (t35 == 1) {
                t36 = *(int *)0xC2A6ED0;
                t37 = *(int *)0xC0C83E4;
                t38 = (int)((int)(t36 + 0x1) % (int)t37);
                *(unsigned int *)0xC2A6ED0 = t38;
            }
            t40 = nlLength(0xC5ECBB8, 0xC179840);
            if (3000.0f > t40) {
                t41 = *(int *)0xC2A6ED4;
                t42 = *(int *)(((t41 << 2) + 0xC118768));
                nlObjPutUseViewMatrix(t42);
                nlPushMatrix(0x0);
                t45 = *(int *)0xC2A6ED4;
                t46 = *(int *)(((t45 << 2) + 0xC118768));
                nlObjPutUseViewMatrix(t46);
                nlPopMatrix(0x1);
                t49 = *(int *)0xC2A6EDC;
                if (400.0f > t40) {
                    if (t49 == 0) {
                        *(unsigned int *)0xC2A6EDC = 0x1;
                        Sound_Request(0x211A9, 0x0);
                    }
                } else {
                    if (t49 == 1) {
                        *(unsigned int *)0xC2A6EDC = 0x0;
                        Sound_Request(0x311A9, 0x0);
                    }
                }
            }
            t55 = *(int *)0xC2A6ECC;
            t56 = (int)((int)(t55 + 0x1) % (int)0x2);
            *(unsigned int *)0xC2A6ECC = t56;
            t60 = t56;
            if (t56 == 1) {
                t57 = *(int *)0xC2A6ED4;
                t58 = *(int *)0xC0C83E8;
                t59 = (int)((int)(t57 + 0x1) % (int)t58);
                *(unsigned int *)0xC2A6ED4 = t59;
                t60 = t59;
            }
            t61 = t60;
        }
        t65 = t61;
    }
    return t65;
}

float FUN_0c052a1c(void)
{
    float t0;
    int t1;
    int t2;
    int t3;
    int t19;

    *(unsigned int *)0xC2A8E9C = 0x0;
    *(float *)0xC2A8EA0 = -2.0f;
    *(unsigned int *)0xC2A8EA4 = 0x0;
    *(unsigned int *)0xC2A8EA8 = 0x0;
    *(unsigned int *)0xC2A8EAC = 0x0;
    *(unsigned int *)0xC2A8EB4 = 0xFFFFFFFB;
    t0 = nlPow(-5.0f, (1.0f + 1.0f));
    *(float *)0xC2A8EB8 = t0;
    *(unsigned int *)0xC2A8F6C = 0x0;
    *(unsigned int *)0xC2A8F70 = 0x0;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EA8 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(float *)0xC2A7E90 = 0.0f;
    *(float *)0xC2A7E94 = 0.0f;
    *(float *)0xC2A7E98 = 0.25f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    t1 = 0x0;
    for (;;) {
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x18)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x1C)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x20)) = 1.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x24)) = 0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x24)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x24)) = 0.0f;
        *(unsigned int *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x34)) = 0xE;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x34)) = 0x6;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x34)) = 0x6;
        t2 = 0x0;
        do {
            *(unsigned int *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x28)) = 0x0;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x4)) = 0.0f;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x8)) = 240.0f;
            if (t2 == 1) {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.25f;
            } else {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.279999971f;
            }
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x10)) = 1.0f;
            t3 = (((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2));
            t2 = (t2 + 0x1);
            *(float *)((t3 + 0x14)) = 0.5f;
            *(unsigned int *)((t3 + 0x28)) = 0x0;
            *(float *)((t3 + 0x2C)) = 1.0f;
        } while ((int)t2 < (int)0x3);
        *(unsigned int *)(((t1 << 2) + 0xC2A8EDC)) = 0x0;
        if (t1 != 7) {
            if (t1 != 6) {
                if (t1 != 5) {
                    if (t1 == 4) {
                        *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
                    } else {
                        if (t1 == 3) {
                            *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xB;
                        } else {
                            *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0x9;
                        }
                    }
                } else {
                    *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
                }
            } else {
                *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
            }
        } else {
            *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
        }
        if (t1 != 7) {
            if (t1 != 6) {
                if (t1 != 5) {
                    if (t1 == 4) {
                        *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
                    } else {
                        if (t1 == 3) {
                            *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xB;
                        } else {
                            *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0x9;
                        }
                    }
                } else {
                    *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
                }
            } else {
                *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
            }
        } else {
            *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
        }
        *(unsigned int *)((((0xC2A8EFC + (t1 << 2)) + 0x40) + 0x0)) = 0x8;
        t19 = (t1 << 2);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t19 + 0xC2A8EBC)) = 0xA;
        if ((int)t1 < (int)0x8) continue;
        break;
    }
    *(unsigned int *)0xC2A8EB0 = 0x0;
    *(unsigned int *)0xC2A8F5C = 0x0;
    *(unsigned int *)0xC2A8F60 = 0x0;
    *(unsigned int *)0xC2A8F64 = 0x0;
    return t0;
}

float FUN_0c05c3fe(void)
{
    int t0;
    float t1;
    int t2;

    t0 = *(int *)0xC2A98F8;
    t1 = nlRoundUp((((float)t0 / 60.0f) * 100.0f));
    t2 = (int)((int)(int)t1 / (int)0x1770);
    *(unsigned int *)0xC2A98F4 = ((t2 * 0x2710) + ((int)t1 - (t2 * 0x1770)));
    return t1;
}


int Exec_Balloon(int a4)
{
    float t2;
    int t6;
    int t7;
    float u8;
    float u9;
    float u10;
    int t12;
    int t21;
    int t18;

    nlPushMatrix(0x0);
    nlTranslateV((a4 + 0x48));
    t2 = nlScalor((a4 + 0x30));
    if (t2 > 0.000999999931f) {
        nlRotate((a4 + 0x30), ((int)(((t2 * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    SetCameraPosVelocity((a4 + 0x18));
    GetRotVec((a4 + 0x18));
    t6 = *(int *)((a4 + 0x14));
    t7 = (int)((int)t6 % (int)0xA);
    u8 = *(float *)((((signed char)(((t7 << 1) + t7) << 2) + 0xC0D2A78) + 0x8));
    u9 = *(float *)((((signed char)(((t7 << 1) + t7) << 2) + 0xC0D2A78) + 0x4));
    u10 = *(float *)((((signed char)(((t7 << 1) + t7) << 2) + 0xC0D2A78) + 0x0));
    nlObjPutSetFadeColorBase(u10, u9, u8);
    t12 = *(int *)((a4 + 0x7C));
    if (t12 == 1) {
        nlScale(4.79999971f, 4.79999971f, 4.79999971f);
        nlSetScaleFactor(4.79999971f);
        t18 = 0xC5E1998;
    } else {
        nlScale(2.39999986f, 2.39999986f, 2.39999986f);
        nlSetScaleFactor(2.39999986f);
        t18 = 0xC46F828;
    }
    nlObjPutUseViewMatrixTrnsl(t18, 0.799999952f);
    t21 = *(int *)((a4 + 0x68));
    FUN_0c05ecae(a4);
    nlScaleVector((a4 + 0x30), (a4 + 0x30), 0.994999945f);
    nlPopMatrix(0x1);
    return ResetFadeColor();
}



int psgFrameState0(int a4)
{
    int t0;
    float t1;
    float u2;
    int t4;
    int t6;
    int t8;
    int t9;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    float u27;
    int t28;
    int t29;
    float u33;
    int t35;

    t0 = *(signed char *)(((0x149 + a4) + 0x0));
    *(unsigned char *)(((0x149 + a4) + 0x0)) = (t0 | 0x40);
    t1 = nlLength(0xC179840, (a4 + 0x4));
    u2 = *(float *)0xC13EED0;
    if (t1 > u2) {
        nlPushMatrix(0x0);
        t4 = *(short *)0xC17985A;
        *(unsigned int *)((a4 + 0x10)) = (unsigned short)t4;
        nlTranslateV((a4 + 0x4));
        t6 = *(int *)((a4 + 0x10));
        nlRotateAY((t6 + 0x8000));
        t8 = *(int *)((a4 + 0x0));
        t9 = *(int *)((((t8 - 23) << 2) + 0xC13F410));
        nlObjPutUseViewMatrix(t9);
        nlPopMatrix(0x1);
    } else {
        t12 = CheckClipping((a4 + 0x4), 5.0f);
        if (t12 != 0) {
            nlPushMatrix(0x0);
            t14 = *(int *)0xC1EE20C;
            if (t14 == 2) {
                t15 = *(int *)0xC1EE214;
                if (t15 == 8) {
                    t16 = *(int *)((a4 + 0x0));
                    t17 = IsBoyFriend(t16, 0x0);
                    if (t17 == 0) {
                        FUN_0c071104(a4);
                    } else {
                        psgFaceTaxi(a4);
                    }
                } else {
                    psgFaceTaxi(a4);
                }
            } else {
                psgFaceTaxi(a4);
            }
            psgPutShadow(a4);
            FUN_0c0713d8(a4);
            u27 = *(float *)((a4 + 0x38));
            t28 = *(int *)((a4 + 0x0));
            t29 = *(int *)((a4 + 0x34));
            humanDraw(t29, t28, (int)u27, 0x0);
            nlPopMatrix(0x1);
        }
        u33 = *(float *)((a4 + 0x38));
        *(float *)((a4 + 0x38)) = (u33 + 1.0f);
    }
    t35 = 0x1;
    if (t1 > 1000.0f) {
        t35 = 0x0;
    }
    return FUN_0c071a7c(a4, t35);
}

int FUN_0c070e8a(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;

    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((0xC2AD594 + (t0 << 2)));
        if (t1 != a4) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x9) break;
            continue;
        }
        *(unsigned int *)((0xC2AD594 + (t0 << 2))) = a4;
        *(unsigned int *)((a4 + 0x118)) = ((short)((short)t0 * (short)0xCC) + 0xC2AD5B8);
        return t0;
    }
    t3 = 0x0;
    for (;;) {
        t4 = *(int *)((0xC2AD594 + (t3 << 2)));
        if (t4 == 0) break;
        t3 = (t3 + 0x1);
        if ((int)t3 >= (int)0x9) {
            return 0xFFFFFFFF;
        }
    }
    *(unsigned int *)((0xC2AD594 + (t3 << 2))) = a4;
    *(unsigned int *)((a4 + 0x118)) = ((short)((short)t3 * (short)0xCC) + 0xC2AD5B8);
    return t3;
}

int FUN_0c071db8(void)
{
    int t0;
    int t1;

    t0 = 0x0;
    do {
        *(unsigned int *)((0xC2AD594 + (t0 << 2))) = 0x0;
        t1 = FcvStoreBuffer(0xC9726F4, ((short)((short)t0 * (short)0xCC) + 0xC2AD5B8), 0.0f);
        t0 = (t0 + 0x1);
    } while ((int)t0 < (int)0x9);
    return t1;
}

void HesLate(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t17;
    int t18;
    int t19;
    int t20;
    float t23;
    int t24;
    int stk[8];

    t0 = *(int *)0xC0D6130;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t0;
    t1 = *(int *)0xC0D612C;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t1;
    t2 = *(int *)0xC0D6128;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t2;
    t3 = *(int *)0xC13F4B8;
    if ((t3 & 1) == 0) {
        t4 = *(signed char *)0xC2AD1DF;
        if ((t4 & 2) != 0) {
            t5 = nlLength(((int)stk + 4), 0xC179840);
            if (350.0f > t5) {
                t6 = *(int *)0xC2AD1D8;
                *(unsigned int *)0xC13F4F4 = t6;
                t7 = *(int *)((0x140 + t6));
                if (t7 == 15) {
                    t8 = *(int *)0xC13F4B8;
                    *(unsigned int *)0xC13F4B8 = (t8 | 0x1);
                }
            }
        }
    } else {
        t10 = CheckClipping(((int)stk + 4), 10.0f);
        if (t10 != 0) {
            nlPushMatrix(0x0);
            nlTranslateV(((int)stk + 4));
            nlRotateAY(0xD680);
            humanDraw(0xCADBCA8, 0x16, 0x0, 0x0);
            nlPopMatrix(0x1);
        }
        t17 = *(int *)0xC13F4F4;
        if (t17 != 0) {
            t18 = *(int *)((t17 + 0x20));
            if (t18 == 4) {
                t19 = *(int *)((t17 + 0x24));
                if (t19 == 3) {
                    t20 = *(int *)0xC13F4B8;
                    *(unsigned int *)0xC13F4B8 = (t20 & 0xFFFFFFFE);
                    *(unsigned int *)0xC13F4F4 = 0x0;
                }
            }
        }
        t23 = nlLength(((int)stk + 4), 0xC179840);
        if (t23 > 350.0f) {
            t24 = *(int *)0xC13F4B8;
            *(unsigned int *)0xC13F4B8 = (t24 & 0xFFFFFFFE);
            *(unsigned int *)0xC13F4F4 = 0x0;
        }
    }
}

float nlCot(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0) {
        if ((unsigned short)a4 != 0x4000) {
            if ((unsigned short)a4 == 0x8000) {
                return 3.40282347e+38f;
            }
            if ((unsigned short)a4 == 0xC000) {
                return 0.0f;
            }
            t0 = nlTan((unsigned short)a4);
            return (1.0f / t0);
        }
        return 0.0f;
    }
    return 3.40282347e+38f;
}

float nlSec(int a4)
{
    float t0;

    if ((unsigned short)a4 != 0x4000) {
        if ((unsigned short)a4 == 0xC000) {
            return 3.40282347e+38f;
        }
        t0 = nlCos((unsigned short)a4);
        return (1.0f / t0);
    }
    return 3.40282347e+38f;
}

void nlLocate(int a4, int a5)
{
    int t0;
    int t1;
    float u2;
    int t3;
    float u4;
    float u5;
    int t6;
    int t7;
    float u8;
    float u9;

    t0 = *(int *)0xC2AF0C8;
    t1 = *(int *)0xC14A7B8;
    if (t1 == 0) {
        u2 = *(float *)0xC14A82C;
        *(unsigned int *)0xC2AF0C0 = (int)((float)(t0 * a4) + u2);
        *(unsigned int *)0xC2AF0D0 = (int)((float)(t0 * a4) + u2);
        t3 = *(int *)0xC2AF0CC;
        u4 = *(float *)0xC14A830;
        *(unsigned int *)0xC2AF0C4 = (int)((float)(t3 * a5) + u4);
    } else {
        u5 = *(float *)0xC14A830;
        *(unsigned int *)0xC2AF0C0 = (int)((float)(t0 * a4) + u5);
        *(unsigned int *)0xC2AF0D0 = (int)((float)(t0 * a4) + u5);
        t6 = *(int *)0xC2AF0CC;
        t7 = *(short *)0xC2B3190;
        u8 = *(float *)0xC14A824;
        u9 = *(float *)0xC14A82C;
        *(unsigned int *)0xC2AF0C4 = (int)(((float)((t6 * a5) + t7) - u9) - u8);
    }
}

void nlRenderTextureFree(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;

    t0 = *(int *)0xC2B31C0;
    t1 = *(int *)0xC2B31BC;
    if ((unsigned int)a4 <= (unsigned int)t0) {
        t2 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0));
        if ((int)t2 >= 0) {
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x0)) = 0xFFFFFFFF;
            *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x4)) = 0xFFFFFFFF;
            t3 = *(int *)0xC2B3184;
            t4 = *(int *)0xC2AEC84;
            t5 = *(int *)((((((t2 + t3) << 2) << 1) + t4) + 0x0));
            if (t5 != 0) {
                *(unsigned int *)(((t4 + (((t2 + t3) << 2) << 1)) + 0x0)) = 0x0;
                t6 = *(int *)0xC2AEC84;
                t7 = *(int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4));
                *(unsigned int *)(((t6 + (((t2 + t3) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
                nlCommonTextureClearTextureIndex(t7, (t4 + (((t2 + t3) << 2) << 1)), 0xC2AEC84);
                t9 = *(int *)0xC2B29C0;
                t10 = *(int *)(((t9 + (t7 * 0x3C)) + 0x2C));
                if (t10 != 0) {
                    t11 = *(int *)0xC2B29C0;
                    t12 = *(int *)(((t11 + (t7 * 0x3C)) + 0x28));
                    if (t12 == 0) {
                        t13 = *(int *)0xC2B29C0;
                        kmFreeTexture((t13 + (t7 * 0x3C)));
                    }
                    t16 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t16 + (t7 * 0x3C)) + 0x28)) = 0xFFFFFFFF;
                    t17 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t17 + (t7 * 0x3C)) + 0x2C)) = 0x0;
                    t18 = *(int *)0xC2B29C0;
                    *(unsigned int *)(((t18 + (t7 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                }
            }
        }
    }
}

int FUN_0c080990(int a4, int a5)
{
    int t0;
    int t1;
    int t88;
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
    int t45;
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
    int t74;
    int t76;
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
    int t73;
    int t39;
    int t67;

    t0 = *(int *)0xC2AEC84;
    t1 = *(int *)(((((a5 << 2) << 1) + t0) + 0x0));
    t88 = 0x1;
    if (t1 != 0) {
        t2 = *(int *)(((((a5 << 2) << 1) + t0) + 0x4));
        t3 = *(int *)0xC2B29C0;
        t4 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t4 + 0x6C)) = (t3 + (t2 * 0x3C));
        t5 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t5 + 0x0)) = 0x600608;
        t6 = *(int *)((a4 + 0x0));
        t7 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t7 + 0x8)) = t6;
        t8 = *(int *)(((a4 + 0x4) + 0x0));
        t9 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t9 + 0xC)) = t8;
        t10 = *(int *)((((a4 + 0x4) + 0x4) + 0x0));
        t11 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t11 + 0x20)) = t10;
        t12 = *(int *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
        t13 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t13 + 0x44)) = t12;
        t14 = *(int *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
        t15 = *(int *)0xC2B2FC8;
        *(unsigned int *)((t15 + 0x40)) = t14;
        t16 = *(int *)0xC2B29C0;
        t17 = *(int *)(((t16 + (t2 * 0x3C)) + 0x34));
        if ((((int)t17 >> 27) & 0x7) != 5) {
            t45 = t2;
            if ((((int)t17 >> 27) & 0x7) == 6) {
                t18 = *(int *)0xC2B2FC8;
                t19 = *(int *)((t18 + 0x0));
                *(unsigned int *)((t18 + 0x0)) = (t19 | 0x80000);
                t20 = *(int *)0xC14A644;
                t21 = *(int *)0xC2B7940;
                if (t20 != 0) {
                    t22 = *(int *)0xC2B2FC8;
                    *(unsigned int *)((t22 + 0x68)) = t21;
                    t39 = t2;
                } else {
                    t23 = *(short *)0xC2B7BC4;
                    if ((int)t21 < (int)t23) {
                        t24 = *(int *)0xC2B7BD8;
                        t25 = *(short *)(((((t21 << 2) << 1) + t24) + 0x4));
                        if (t25 != 0) {
                            t26 = *(short *)(((((t21 << 2) << 1) + t24) + 0x0));
                            t27 = *(int *)0xC2B2FC8;
                            *(unsigned int *)((t27 + 0x68)) = t26;
                        }
                    }
                    t39 = 0xC2B7BC0;
                }
                t45 = t39;
            }
            t73 = t45;
        } else {
            t46 = *(int *)0xC2B2FC8;
            t47 = *(int *)((t46 + 0x0));
            *(unsigned int *)((t46 + 0x0)) = (t47 | 0x80000);
            t48 = *(int *)0xC14A644;
            t49 = *(int *)0xC2B7940;
            if (t48 != 0) {
                t50 = *(int *)0xC2B2FC8;
                *(unsigned int *)((t50 + 0x68)) = t49;
                t67 = t2;
            } else {
                t51 = *(short *)0xC2B7BC4;
                if ((int)t49 < (int)t51) {
                    t52 = *(int *)0xC2B7BD8;
                    t53 = *(short *)(((((t49 << 2) << 1) + t52) + 0x4));
                    if (t53 != 0) {
                        t54 = *(short *)(((((t49 << 2) << 1) + t52) + 0x0));
                        t55 = *(int *)0xC2B2FC8;
                        *(unsigned int *)((t55 + 0x68)) = t54;
                    }
                }
                t67 = 0xC2B7BC0;
            }
            t73 = t67;
        }
        t74 = *(int *)0xC2B2FC8;
        kmProcessVertexRenderState(t74, t73, (t2 * 0x3C), 0xC2B29C0);
        t76 = *(int *)0xC2B2FC8;
        t77 = *(int *)((t76 + 0x90));
        *(unsigned int *)((t76 + 0x90)) = (t77 & 0xFFFCFF3F);
        t78 = *(int *)0xC2B2FC8;
        t79 = *(int *)0xC2B7948;
        t80 = *(int *)((t78 + 0x90));
        *(unsigned int *)((t78 + 0x90)) = (t80 | t79);
        t81 = *(int *)0xC2B2FC8;
        t82 = *(int *)((t81 + 0x98));
        *(unsigned int *)((t81 + 0x98)) = (t82 & 0x31FF0FF);
        t83 = *(int *)0xC2B2FC8;
        t84 = *(int *)0xC2B794C;
        t85 = *(int *)(((t83 + 0x98) + 0x0));
        *(unsigned int *)(((t83 + 0x98) + 0x0)) = (t85 | (0x98000000 | t84));
        t86 = *(int *)0xC2B2FC8;
        kmSetVertexRenderState(t86);
        t88 = 0x0;
    }
    return t88;
}
