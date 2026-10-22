/* Straight-line functions with calls and guards (batch gen_eh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetFilterMode(int);
int windowOpenStep(void);
int windowEnterStep(void);
int GetNowLanguage(int);
int nd_SprPut(int, int, float, float);
int FUN_0c074320(void);
int FUN_0c074510(int);
int FUN_0c0745e0(int);
int FUN_0c074ca0(int);
int FUN_0c075570(int);
int FUN_0c079a60(float, float, float, float);
int FUN_0c0813e0(int, int, int);
int PutVM_Message(int, int, int, float, float);
int ResetFadeColor(void);
extern void _builtin_set_imask(int);
int kmInitDevice(void);
int kmSetCullingRegister(float);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetWaitVsyncCount(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int putLevelCTFontAssist(int, int, int, int, int);
int putMenuValue(int a4, int a5, int a6, int a7);
void FUN_0c074740(int a4, int a5, int a6);
int Put_Remain_Icon(void);
int windowNameConfirm(void);

int putMenuValue(int a4, int a5, int a6, int a7)
{
    float u1;
    float u4;
    float u30;
    float u37;
    int t31;
    float u32;
    float t41;
    float u42;
    float u50;
    int t53;
    float u65;
    int t54;
    int t55;
    float u56;
    float t57;
    float u67;
    float t68;
    float u69;
    float t70;
    float u71;
    float t72;
    float u73;
    float u84;
    float u95;
    float u98;
    float u96;
    float u100;
    float u46;
    float u43;
    float u80;
    float u75;

    if (((a5 + (a7 * 0x2C)) + 0xC) == 0) {
        return 0;
    }
    pfSetFilterMode(0x1);
    u1 = *(float *)0xC2A1AD4;
    pfSetZ(u1);
    pfSetFont((0x3 & a4));
    u4 = *(float *)(((a5 + (a7 * 0x2C)) + 0x8));
    pfSize(u4, u4);
    if ((0x10 & a4) != 0) {
        pfColor(0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000);
    } else {
        if ((0x20 & a4) != 0) {
            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        } else {
            if ((0x40 & a4) != 0) {
                pfColor(0xFFFFC500, 0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
            } else {
                if ((0x80 & a4) != 0) {
                    pfColor(0xFF707070, 0xFF707070, 0xFF707070, 0xFF707070);
                }
            }
        }
    }
    u30 = *(float *)(((a5 + (a7 * 0x2C)) + 0x0));
    u37 = u30;
    if ((0x2000 & a4) == 0) {
        t31 = *(int *)0xC2A1ADC;
        u32 = (u30 - (float)t31);
        if ((0x4000 & a4) != 0) {
            u32 = (u30 + (float)t31);
        }
        u37 = u32;
    }
    t41 = pfLength(((a5 + (a7 * 0x2C)) + 0xC));
    if ((0x4 & a4) != 0) {
        u42 = *(float *)0xC03CAA0;
        u46 = (-(t41 * u42));
    } else {
        if ((0x8 & a4) != 0) {
            u43 = (-t41);
        }
        u46 = u43;
    }
    u50 = *(float *)(((a5 + (a7 * 0x2C)) + 0x4));
    pfLocate((u37 + u46), u50);
    pfPuts(((a5 + (a7 * 0x2C)) + 0xC));
    if ((a4 & 0x8000) != 0) {
        t53 = *(int *)0xC1EE330;
        if ((t53 & 16) != 0) {
            u65 = t41;
            if ((int)a6 > 0) {
                t54 = 0x0;
                t55 = (0x0 + ((a5 + (a7 * 0x2C)) - (a7 * 0x2C)));
                u56 = t41;
                for (;;) {
                    t57 = pfLength((t55 + 0xC));
                    t54 = (t54 + 0x1);
                    if (t57 > u56) {
                        u56 = t57;
                    }
                    t55 = (t55 + 0x2C);
                    if ((int)t54 >= (int)a6) {
                        break;
                    }
                }
                u65 = u56;
            }
            u67 = *(float *)0xC03CAA0;
            if ((int)a7 > 0) {
                if ((0x4 & a4) != 0) {
                    t68 = pfLength(0xC0A2024);
                    u69 = *(float *)0xC03CAB8;
                    u80 = (((-(u65 * u67)) - t68) + u69);
                } else {
                    if ((0x8 & a4) != 0) {
                        t70 = pfLength(0xC0A2024);
                        u71 = *(float *)0xC03CAB8;
                        u75 = (((-u65) - t70) + u71);
                    } else {
                        t72 = pfLength(0xC0A2024);
                        u73 = *(float *)0xC03CAB8;
                        u75 = ((-t72) + u73);
                    }
                    u80 = u75;
                }
                u84 = *(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4));
                pfLocate((u37 + u80), u84);
                pfPuts(0xC0A2028);
            }
            if ((int)a7 < (int)(a6 - 1)) {
                u95 = *(float *)0xC03CAC0;
                u98 = ((u65 * u67) + u95);
                if ((0x4 & a4) != 0) {
                } else {
                    u96 = (u65 + u95);
                    if ((0x8 & a4) != 0) {
                        u96 = u95;
                    }
                    u98 = u96;
                }
                u100 = *(float *)((((a5 + (a7 * 0x2C)) - (a7 * 0x2C)) + 0x4));
                pfLocate((u37 + u98), u100);
                pfPuts(0xC0A2024);
            }
        }
    }
    return pfSetFilterMode(0x0);
}

void FUN_0c074740(int a4, int a5, int a6)
{
    int t5;
    int t12;
    int t13;
    int t15;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t28;
    int t29;
    int t30;
    int t33;
    int t31;
    float u41;

    *(unsigned int *)0xC2AED98 = 0x0;
    if (a4 == 0) {
        *(unsigned int *)0xC2AED98 = 0x1;
    }
    *(unsigned int *)0xC2AED9C = 0x0;
    if (a4 != 25) {
        if (a4 != 24) {
            if (a4 != 26) {
                if (a4 == 27) {
                    *(unsigned int *)0xC2AED9C = 0x1;
                }
            } else {
                *(unsigned int *)0xC2AED9C = 0x1;
            }
        } else {
            *(unsigned int *)0xC2AED9C = 0x1;
        }
    } else {
        *(unsigned int *)0xC2AED9C = 0x1;
    }
    _builtin_set_imask(0xE);
    t5 = *(int *)0xA05F689C;
    if ((int)t5 >= (int)0x8) {
        *(unsigned int *)0xC2AED40 = 0x1;
    } else {
        *(unsigned int *)0xC2AED40 = 0x0;
    }
    _builtin_set_gbr((void *)(0xC2B7BC0));
    FUN_0c074320();
    *(unsigned short *)0xC2B3194 = 0x0;
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((0x80 & a5) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    t12 = *(int *)((((a5 & 0xF) << 2) + 0xC0D63D4));
    *(unsigned int *)0xC2AEDB8 = t12;
    t13 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC0D6284));
    kmInitDevice();
    t15 = *(int *)0xC2AED9C;
    if (t15 == 1) {
        kmSetPALEXTCallback(0xC074310);
    }
    t19 = *(short *)0xC2B3196;
    t20 = *(short *)0xC2B3194;
    t21 = *(int *)0xC2AEDB8;
    t22 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x4));
    kmSetDisplayMode(t22, t21, t20, t19);
    t24 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0x8));
    *(unsigned short *)0xC2B3190 = t24;
    t25 = *(short *)((((((a4 << 1) + a4) << 2) + 0xC0D6284) + 0xA));
    *(unsigned short *)0xC2B3192 = t25;
    FUN_0c0745e0(0xC2AF388);
    FUN_0c074510(0xC2B29C8);
    *(unsigned int *)0xC2B2FC8 = 0xC2B29C8;
    *(unsigned int *)0xC2B2FCC = 0x0;
    *(unsigned int *)0xC2B3180 = 0xFFFFFFFF;
    *(unsigned int *)0xC2B3188 = 0x0;
    *(unsigned int *)0xC2B3198 = 0x0;
    *(unsigned int *)0xC2B317C = 0x0;
    *(float *)0xC2B31AC = 0.0f;
    *(float *)0xC2B31B0 = 0.0f;
    *(float *)0xC2B31B4 = 0.0f;
    *(float *)0xC2B31B8 = 0.0f;
    *(unsigned int *)0xC2B319C = 0x0;
    *(unsigned int *)0xC2B31A0 = 0x0;
    *(unsigned int *)0xC2B31A4 = 0x0;
    *(unsigned int *)0xC2B31A8 = 0x0;
    *(float *)0xC2B7BE8 = 1.0f;
    *(unsigned int *)0xC2B7C04 = 0x0;
    t28 = *(short *)0xC2B3192;
    t29 = *(short *)0xC2B3190;
    if (0x0 != 0) {
        t30 = *(short *)0xC2B3196;
        t33 = (short)t28;
        if (t30 == 1) {
            t31 = ((short)t28 + (short)t28);
            if ((int)((short)t28 + (short)t28) > (int)0x1E0) {
                t31 = 0x1E0;
            }
            t33 = t31;
        }
        FUN_0c079a60(0.0f, 0.0f, (float)t29, (float)t33);
    } else {
        FUN_0c079a60(0.0f, 0.0f, (float)t29, (float)(short)t28);
    }
    u41 = *(float *)0xC074A34;
    kmSetCullingRegister(u41);
    *(unsigned int *)0xFF000038 = 0xC;
    *(unsigned int *)0xFF00003C = 0xC;
    *(unsigned int *)0xC2AEDA0 = a6;
    kmSetWaitVsyncCount(a6);
    FUN_0c074ca0(0x200000);
    FUN_0c075570(0x0);
    *(unsigned int *)0xC2AEDC0 = 0x0;
    _builtin_set_imask(0x0);
}


int windowNameConfirm(void)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;
    int t15;
    int t21;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
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
    float u44;
    int t65;
    int t52;
    int t53;
    float u55;
    int t30;
    int stk[22] = {0};

    t0 = windowOpenStep();
    if (t0 == 1) {
        t1 = *(short *)0xC2A11C4;
        memmove(0xC2A124C, ((short)((short)t1 * (short)0x788) + 0xC28A4F8), 0x4);
    }
    menuCursor(0x1, 0x2, 0x0);
    t6 = FUN_0c0813e0(0xC2A124C, 0xC0A2044, 0x4);
    if (t6 == 0) {
        t7 = *(int *)0xC2A11DC;
        if ((int)t7 > (int)0x1) {
            t8 = *(int *)0xC2A11F4;
            t9 = *(int *)((((t8 << 2) + 0xC2A11F8) + 0x0));
            t10 = GetNowLanguage(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t10 * (short)0x58)), 0x2, t9, 0x0);
            PutVM_Message(0x20, 0x15, 0xC2A1248, 197.0f, 208.0f);
        } else {
            t13 = *(int *)0xC2A11F4;
            t14 = *(int *)((((t13 << 2) + 0xC2A11F8) + 0x0));
            t15 = GetNowLanguage(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t15 * (short)0x58)), 0x2, t14, 0x0);
            PutVM_Message(0x20, 0x22, 0xC2A1248, 197.0f, 208.0f);
        }
    } else {
        t21 = *(int *)0xC2A11DC;
        if ((int)t21 <= (int)0x1) {
            t22 = *(int *)0xC2A11F4;
            t23 = *(int *)((((t22 << 2) + 0xC2A11F8) + 0x0));
            t24 = GetNowLanguage(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t24 * (short)0x58)), 0x2, t23, 0x0);
            t52 = 0x22;
            t53 = 0xC2A1248;
            u55 = 197.0f;
        } else {
            t26 = *(int *)0xC2A11F4;
            t27 = *(int *)((((t26 << 2) + 0xC2A11F8) + 0x0));
            t28 = GetNowLanguage(0x0);
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)t28 * (short)0x58)), 0x2, t27, 0x0);
            t31 = 0x0;
            t32 = 0xC2A124C;
            t33 = ((int)stk + 12);
            for (;;) {
                if ((int)t31 >= (int)0x3) {
                    break;
                }
                t34 = *(signed char *)((t32 + 0x0));
                t30 = t34;
                t32 = (t32 + 0x1);
                t31 = (t31 + 0x1);
                *(unsigned char *)((t33 + 0x0)) = t30;
                t33 = (t33 + 0x1);
            }
            t35 = 0x0;
            t36 = t33;
            for (;;) {
                t37 = GetNowLanguage(0x0);
                t38 = *(int *)((0xC0EF7A8 + (t37 << 2)));
                if ((int)t35 >= (int)t38) {
                    break;
                }
                *(unsigned char *)((t36 + 0x0)) = 0x20;
                t35 = (t35 + 0x1);
                t36 = (t36 + 0x1);
            }
            t39 = t38;
            t40 = 0x0;
            t41 = 0xC2A1248;
            t42 = t36;
            for (;;) {
                if ((int)t40 >= (int)0x3) {
                    break;
                }
                t43 = *(signed char *)((t41 + 0x0));
                t39 = t43;
                t41 = (t41 + 0x1);
                t40 = (t40 + 0x1);
                *(unsigned char *)((t42 + 0x0)) = t39;
                t42 = (t42 + 0x1);
            }
            *(unsigned char *)((t42 + 0x0)) = 0x0;
            u44 = *(float *)0xC03F2B4;
            t52 = 0x1C;
            t53 = ((int)stk + 12);
            u55 = u44;
        }
        PutVM_Message(0x20, t52, t53, u55, 208.0f);
    }
    t65 = windowEnterStep();
    return t65;
}
