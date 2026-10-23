extern int setObjGroupExec();
/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int Drv_Init(void);
int Drv_StartAction(int, int, int);
int ExecArrow(int, float);
float carSlipRatio(int, float, float);
float carGripCurve(float);
int gdc_CarSoundLoad(int, int);
int gdc_SpriteSetMBox(void);
int NextWindow(int);
int windowOpenStep(int);
int windowEnterStep(int);
int callSaveData(int);
int GetNowLanguage(int, int);
int CheckRanking(int);
int CourseTableSet(int);
int Init_Adv_Sprite(void);
int Move_Balloon(int);
int Chat_Init(void);
int psgFaceBoyFriend(int);
int psgUpdatePartTracks(int);
int psgPutMarker(int, int);
int Voice_Clear(void);
int nlCalcVector(int, int);
int memcmp(int, int, int);
int FcvStoreBuffer(int, int, float);
int GetRotVec(int);
int InitArrow(int, int, int);
int IsBoyFriend(int, int);
int KillColliObj(int);
int PcarInit(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
int MultiRot4Vec(int);
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
int RinAqua_Init(void);
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
    Voice_Clear();
    t4 = *(int *)0xC1EE234;
    if (t4 != 0) {
        t5 = *(int *)0xC1EE20C;
        if (t5 == 2) {
            gdc_SpriteSetMBox();
        } else {
            gdc_SpriteSetGame();
        }
    }
    Init_Adv_Sprite();
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
        CourseTableSet(t25);
    } else {
        if (t11 == 2) {
            gdc_CarSoundLoad(t11, 0xC0E5318);
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

int InitSpark(void)
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

    t0 = set_event(0x1C, ((int)setObjGroupExec));
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


int windowNameSet(void)
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

    windowOpenStep(0x3C);
    t1 = *(int *)0xC2A1208;
    if ((t1 & 4) != 0) {
        t2 = memcmp(0xC2A124C, 0xC0A2044, 0x4);
        if (t2 == 0) {
            t3 = *(signed char *)0xC28A4F6;
            *(unsigned char *)0xC28A4F6 = (t3 + 0x1);
        }
        t4 = *(short *)0xC2A11C4;
        memmove(((short)((short)t4 * (short)0x788) + 0xC28A4F8), 0xC2A1248, 0x4);
        t6 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = (t6 | 0x8);
    }
    NextWindow(0x0);
    t9 = memcmp(0xC2A124C, 0xC0A2044, 0x4);
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
                t22 = GetNowLanguage(0x0, t17);
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
    t39 = windowEnterStep(0x0);
    t46 = t39;
    if (t39 == 1) {
        t40 = *(int *)0xC2A11DC;
        t45 = t39;
        if ((int)t40 <= (int)0x1) {
            t41 = *(int *)0xC2A1208;
            t44 = t41;
            if ((t41 & 2) != 0) {
                CheckRanking(0xC2A11C8);
                t43 = callSaveData(0x1);
                t44 = t43;
            }
            t45 = t44;
        }
        t46 = t45;
    }
    return t46;
}

int menuRecordViewHandler(void)
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











int psgAllocIpBuff(int a4)
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

int EndPsg_ClearIpBuff(void)
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

int nlstripSetVertexContextTex(int a4, int a5)
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
