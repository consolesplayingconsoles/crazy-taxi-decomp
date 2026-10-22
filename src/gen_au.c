/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int InitRenderTexture1st(void);
int FUN_0c0742c0(int);
int FUN_0c074d10(int);
int FUN_0c074d20(void);
int FUN_0c074de0(int);
int FUN_0c074eb0(int);
int FUN_0c075090(void);
int FUN_0c075120(void);
int FUN_0c0775d0(int, int);
int FUN_0c077df0(int);
int FUN_0c16893a(int, int, int, int);
int frameFlip(void);
int gdFsClose(int);
int gdFsGetFileSize(int);
int gdFsOpen(void);
int nlInitCommonTexture(int, int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLocate(int, int);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetFontSize(int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int paletteSetMode(int);
int setBorderColor(int);
int strncpy(int, int, int);

int ADXSTM_OpenFname(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;
    int t12;
    int t10;
    int stk[8];

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = gdFsOpen();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC176454, a4);
        t12 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0);
        if (t2 == 0) {
            ADXERR_CallErrFunc(0xC176484);
            gdFsClose(t0);
            t10 = 0x0;
        } else {
            t5 = *(int *)(((int)stk + 12));
            t6 = *(int *)(((int)stk + 16));
            t7 = FUN_0c16893a(t0, 0x0, t5, t6);
            if (t7 != 0) {
                strncpy((t7 + 0x40), a4, 0x20);
            }
            t10 = t7;
        }
        t12 = t10;
    }
    return t12;
}

int InitNaolib(void)
{
    int t12;

    FUN_0c075120();
    FUN_0c0775d0(0xC1C1A38, 0x10);
    FUN_0c074d20();
    FUN_0c074de0(0x0);
    FUN_0c074d10(0x14A800);
    FUN_0c074eb0(0xCEA0000);
    FUN_0c075090();
    nlInitPrint();
    nlPrnIndentOn();
    setBorderColor(0x0);
    *(unsigned int *)0xC1EE220 = 0x1;
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    t12 = *(int *)0xC1EE228;
    if (t12 == 1) {
        nlPrintf(0xC08AAB8);
    } else {
        nlPrintf(0xC08AAD4);
    }
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    FUN_0c077df0(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    FUN_0c077df0(0x1);
    nlInitCommonTexture(0xC1C1E78, 0x7D0, 0xBB8);
    nlInitSprite(0xC1E53AC, 0x3E8, 0x5DC);
    nlInitPalette(0xC1EDCE4, 0x40);
    paletteSetMode(0x2);
    FUN_0c0742c0(0x1);
    nlObjPutInit();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return InitRenderTexture1st();
}

void FUN_0c04a8b6(int a4)
{
    int t0;
    int t1;
    int t5;
    int t2;
    int t3;
    int t4;
    int t11;
    int t8;
    int t9;
    int t12;
    int t16;
    int t13;
    int t14;
    int t15;
    int t22;
    int t19;
    int t20;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t38;
    int t34;
    int t35;
    int t42;
    int t39;
    int t40;
    int t43;
    int t44;
    int t49;
    int t45;
    int t46;
    int t53;
    int t50;
    int t51;
    int t54;
    int t59;
    int t61;
    int t63;
    int t71;
    int t72;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t23;
    int t25;
    int t56;

    if (a4 == 0) {
        *(unsigned int *)0xC2A62BC = 0x0;
        *(unsigned int *)0xC2A62B8 = 0x0;
    } else {
        t0 = *(int *)0xC2A4E58;
        if ((int)t0 < (int)0x1E) {
            t1 = *(int *)0xC1EE284;
            t5 = 0x0;
            if ((0x10 & t1) != 0) {
                t2 = *(int *)0xC2A6694;
                t3 = *(int *)0xC2A62B8;
                t4 = 0x0;
                if ((int)t3 < (int)(t2 - 1)) {
                    t4 = 0x1;
                }
                t5 = t4;
            }
            t11 = 0x0;
            if ((0x20 & t1) != 0) {
                t8 = *(int *)0xC2A62B8;
                t9 = 0x0;
                if ((int)t8 > 0) {
                    t9 = 0x1;
                }
                t11 = t9;
            }
            t23 = t5;
            t25 = t11;
        } else {
            t12 = *(int *)0xC1EE280;
            t16 = 0x0;
            if ((0x10 & t12) != 0) {
                t13 = *(int *)0xC2A6694;
                t14 = *(int *)0xC2A62B8;
                t15 = 0x0;
                if ((int)t14 < (int)(t13 - 1)) {
                    t15 = 0x1;
                }
                t16 = t15;
            }
            t22 = 0x0;
            if ((0x20 & t12) != 0) {
                t19 = *(int *)0xC2A62B8;
                t20 = 0x0;
                if ((int)t19 > 0) {
                    t20 = 0x1;
                }
                t22 = t20;
            }
            t23 = t16;
            t25 = t22;
        }
        t27 = *(int *)0xC2A62B8;
        *(unsigned int *)0xC2A62B8 = (t27 + (t23 - t25));
        t28 = *(int *)0xC2A6690;
        t29 = *(int *)(((((((t27 + (t23 - t25)) << 1) + (t27 + (t23 - t25))) << 2) + t28) + 0x0));
        t30 = *(int *)(((((((t27 + (t23 - t25)) << 1) + (t27 + (t23 - t25))) << 2) + t28) + 0x4));
        t31 = *(int *)0xC2A4E58;
        t32 = *(int *)((t30 + 0x0));
        if ((int)t31 < (int)0x1E) {
            t33 = *(int *)0xC1EE284;
            t38 = 0x0;
            if ((0x80 & t33) != 0) {
                t34 = *(int *)0xC2A62BC;
                t35 = 0x0;
                if ((int)t34 < (int)(t32 - 1)) {
                    t35 = 0x1;
                }
                t38 = t35;
            }
            t42 = 0x0;
            if ((0x40 & t33) != 0) {
                t39 = *(int *)0xC2A62BC;
                t40 = 0x0;
                if ((int)t39 > 0) {
                    t40 = 0x1;
                }
                t42 = t40;
            }
            t43 = *(int *)0xC2A62BC;
            t56 = (t43 + (t38 - t42));
        } else {
            t44 = *(int *)0xC1EE280;
            t49 = 0x0;
            if ((0x80 & t44) != 0) {
                t45 = *(int *)0xC2A62BC;
                t46 = 0x0;
                if ((int)t45 < (int)(t32 - 1)) {
                    t46 = 0x1;
                }
                t49 = t46;
            }
            t53 = 0x0;
            if ((0x40 & t44) != 0) {
                t50 = *(int *)0xC2A62BC;
                t51 = 0x0;
                if ((int)t50 > 0) {
                    t51 = 0x1;
                }
                t53 = t51;
            }
            t54 = *(int *)0xC2A62BC;
            t56 = (t54 + (t49 - t53));
        }
        *(unsigned int *)0xC2A62BC = t56;
        t59 = (int)((int)t56 % (int)t32);
        *(unsigned int *)0xC2A62BC = t59;
        nlPushMatrix(0x0);
        t61 = *(int *)0xC2A62BC;
        nlTranslateV(((((t61 << 1) + t61) << 2) + t29));
        t63 = *(int *)0xC1EE330;
        nlRotateAY(((t63 << 8) << 2));
        nlScale(40.0f, 40.0f, 40.0f);
        nlRotateAX(0xC000);
        nlTranslate(0.0f, 0.0f, 0.099999994f);
        nlObjPutUseViewMatrix(0xC46BAB8);
        nlPopMatrix(0x1);
        nlLocate(0x1E, 0x28);
        t71 = *(int *)0xC2A62B8;
        t72 = *(int *)0xC2A62B8;
        nlPrintf(0xC0C322C, t72, ((((t71 << 2) << 2) << 1) + 0xC0C0DA0));
        t74 = *(int *)0xC2A62B8;
        t75 = *(int *)0xC2A6690;
        t76 = *(int *)((((((t74 << 1) + t74) << 2) + t75) + 0x4));
        t77 = *(int *)((t76 + 0x0));
        t78 = *(int *)0xC2A62BC;
        nlPrintf(0xC0C323C, t78, t77);
    }
}
