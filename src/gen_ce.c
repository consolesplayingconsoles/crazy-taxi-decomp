/* Straight-line functions with calls and guards (batch gen_ce): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BigOneSwims(void);
int FUN_0c02f870(void);
int FUN_0c054a38(void);
int FUN_0c05bb24(void);
int FUN_0c05bb76(int);
int FUN_0c05d662(void);
int FUN_0c05d862(void);
int FUN_0c05fa0c(void);
int FUN_0c0730b4(float);
int FUN_0c079980(int);
int ResetFadeColor(void);
int Sound_Request(int, int);
extern void _builtin_ftrv(float *, float *);
int gdc_FileLoad(int, int, int);
static float iaFscaC(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return c;
}
static float iaFscaS(int a)
{
    float s;
    float c;

    _builtin_fsca(a, &s, &c);
    return s;
}
int kmChangeLatencyModel(int, int);
int kmSetPixelClipping(int, int, int, int);
int kmiAllocSysConfig(int);
extern int kmiChkActiveListType();
int kmiCopyDummyGlobalData(int);
int kmiDiscardRenderPipeline(void);
int kmiFBinit(void);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
extern int kmiGetPackOBPParam();
int kmiGetProfileInt(int, int);
int kmiGetVertexBasePointer(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(void);
int kmiTAallocEx(int, int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSpriteFreeTexture(int, int);
int nlTranslateV(int);
int p2_cache_set(void);
int kmiFatalErrorEntry(int a4);
int syHwCacheFinish(void);
float nlRotateAZ(int a4);
int FUN_0c05d21c(void);
int GetRotVec4Ang(float f4);
int FUN_0c0545ac(int a4, int a5);
int gdc_SpriteSetMenu(void);
int FUN_0c079a60(float f4, float f5, float f6, float f7);
int FUN_0c054786(void);
int FUN_0c03b81e(int a4);
int kmSetSystemConfiguration(int a4);

int kmiFatalErrorEntry(int a4)
{
    int t0;

    t0 = *(int *)0xC2EA8F0;
    return ((int (*)(int))(t0))(a4);
}

int syHwCacheFinish(void)
{
    return p2_cache_set();
}


int FUN_0c05d21c(void)
{
    int t0;
    int t1;
    int t5;

    t0 = *(int *)0xC2A991C;
    if (t0 == 0) {
        t1 = *(int *)0xC1794D0;
        if ((int)t1 >= (int)0x5) {
            FUN_0c05bb24();
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        }
        t5 = *(int *)0xC1EE794;
        if (t5 == 0) {
            FUN_0c05bb76(0x1);
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        }
    }
    FUN_0c05d662();
    FUN_0c05d862();
    return FUN_0c05fa0c();
}

int GetRotVec4Ang(float f4)
{
    int t4;
    int t7;
    int t9;
    int t11;

    nlPushUnitMatrix();
    FUN_0c0730b4(f4);
    BigOneSwims();
    nlTranslateV(0xC2AEC20);
    t4 = *(int *)0xC2AEC30;
    nlRotateAY(t4);
    nlTranslateV(0xC2AEC40);
    t7 = *(int *)0xC2AEC54;
    nlRotateAZ(t7);
    t9 = *(int *)0xC2AEC50;
    nlRotateAY(t9);
    t11 = *(int *)0xC2AEC4C;
    nlRotateAX(t11);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlObjPutUseViewMatrix(0xC13F898);
    ResetFadeColor();
    return nlPopMatrix(0x1);
}


int gdc_SpriteSetMenu(void)
{
    int t0;
    int t59;
    int t58;
    int t2;
    int t5;
    int t12;
    int t19;
    int t23;
    int t57;
    int t9;
    int t53;
    int t54;
    int t48;
    int t49;
    int t40;
    int t41;
    int t32;
    int t33;

    t0 = *(int *)0xC26E184;
    t59 = t0;
    if (t0 != 2) {
        t58 = t0;
        if (t0 != 5) {
            FUN_0c02f870();
            t2 = *(int *)0xC26E184;
            if (t2 == 3) {
                nlSetCommonTextureOffset(0xF0);
                nlSpriteFreeTexture(0xC143EE8, 0xC08BFC0);
                t5 = *(int *)0xC2A11C0;
                if (t5 == 0) {
                    nlSetCommonTextureOffset(0x1CC);
                    t9 = 0xC144C88;
                } else {
                    nlSetCommonTextureOffset(0x1D6);
                    t9 = 0xC144D08;
                }
                nlSpriteFreeTexture(t9, 0xC08BB88);
            }
            t12 = *(int *)0xC26E184;
            if (t12 == 1) {
                nlSetCommonTextureOffset(0xE1);
                nlSpriteFreeTexture(0xC146B68, 0x0);
            }
            nlSetCommonTextureOffset(0x208);
            gdc_FileLoad(0xCB40000, 0xC08D5F4, 0x0);
            nlObjPutSetReplaceTextureDirName(0xC144D58, 0xC08B700);
            t19 = *(int *)0xC2A11C0;
            if (t19 == 0) {
                nlSetCommonTextureOffset(0x244);
                gdc_FileLoad(0xCB40000, 0xC08D600, 0x0);
                nlObjPutSetReplaceTextureDirName(0xC1450C8, 0xC08B700);
            } else {
                t23 = *(int *)0xC2A11C0;
                if (t23 != 1) {
                    if (t23 != 2) {
                        if (t23 != 3) {
                            if (t23 != 4) {
                                nlSetCommonTextureOffset(0x2A8);
                                gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                                t32 = 0xC1456D8;
                                t33 = 0xC08B890;
                            } else {
                                nlSetCommonTextureOffset(0x2A8);
                                gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                                nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                                nlSetCommonTextureOffset(0x384);
                                gdc_FileLoad(0xCB40000, 0xC08D630, 0x0);
                                t32 = 0xC146778;
                                t33 = 0xC08BA70;
                            }
                            t40 = t32;
                            t41 = t33;
                        } else {
                            nlSetCommonTextureOffset(0x2A8);
                            gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                            nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                            nlSetCommonTextureOffset(0x320);
                            gdc_FileLoad(0xCB40000, 0xC08D624, 0x0);
                            t40 = 0xC1462B8;
                            t41 = 0xC08BA70;
                        }
                        t48 = t40;
                        t49 = t41;
                    } else {
                        nlSetCommonTextureOffset(0x2A8);
                        gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                        nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                        nlSetCommonTextureOffset(0x352);
                        gdc_FileLoad(0xCB40000, 0xC08D618, 0x0);
                        t48 = 0xC146518;
                        t49 = 0xC08BA70;
                    }
                    t53 = t48;
                    t54 = t49;
                } else {
                    nlSetCommonTextureOffset(0x2A8);
                    gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                    t53 = 0xC1456D8;
                    t54 = 0xC08B890;
                }
                nlObjPutSetReplaceTextureDirName(t53, t54);
            }
            t57 = nlSetCommonTextureOffset(0x0);
            *(unsigned int *)0xC26E184 = 0x2;
            *(unsigned int *)0xC0E5318 = 0x3;
            t58 = t57;
        }
        t59 = t58;
    }
    return t59;
}

int FUN_0c079a60(float f4, float f5, float f6, float f7)
{
    int t0;
    float u5;
    float u6;
    int t1;
    float u2;
    float u3;
    int t7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    int t14;
    int t16;
    int t15;
    int t18;
    int t17;
    int t19;
    int t21;
    int t20;
    int t23;
    int t22;
    int t24;
    int t25;
    int t26;
    float u29;
    float u27;
    float u30;
    float u33;
    float u36;
    float u39;
    int t42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    float u41;
    float u38;
    float u35;
    float u32;

    t0 = *(short *)0xC2B3196;
    u5 = f7;
    u6 = f5;
    if (t0 != 0) {
        t1 = *(short *)0xC2B3192;
        u2 = f7;
        u3 = f5;
        if ((int)(t1 << 1) <= (int)0x1E0) {
            u2 = (f7 * (1.0f + 1.0f));
            u3 = (f5 * (1.0f + 1.0f));
        }
        u5 = u2;
        u6 = u3;
    }
    *(float *)0xC2B34A0 = f4;
    *(float *)0xC2B34A4 = f5;
    *(float *)0xC2B3498 = f6;
    *(float *)0xC2B349C = f7;
    *(float *)0xC14A830 = u6;
    *(float *)0xC14A828 = u5;
    t7 = *(short *)0xC2B3196;
    if (t7 != 0) {
        *(float *)0xC14A82C = (f4 * (1.0f + 1.0f));
        *(float *)0xC14A824 = (f6 * (1.0f + 1.0f));
    } else {
        *(float *)0xC14A82C = f4;
        *(float *)0xC14A824 = f6;
    }
    u8 = *(float *)0xC14A824;
    u9 = *(float *)0xC14A810;
    *(float *)0xC2B3490 = (u8 * u9);
    u10 = *(float *)0xC14A828;
    u11 = *(float *)0xC14A814;
    *(float *)0xC2B3494 = (u10 * u11);
    u12 = *(float *)0xC2B3490;
    if (u12 > (u10 * u11)) {
        *(float *)0xC14A818 = u12;
    } else {
        *(float *)0xC14A818 = (u10 * u11);
    }
    FUN_0c079980(0xC2B3410);
    t14 = *(short *)0xC2B3190;
    t16 = 0x0;
    if ((int)(int)f4 >= 0) {
        t15 = (int)f4;
        if ((int)(int)f4 >= (int)t14) {
            t15 = t14;
        }
        t16 = t15;
    }
    t18 = 0x0;
    if ((int)(int)(f4 + f6) >= 0) {
        t17 = (int)(f4 + f6);
        if ((int)(int)(f4 + f6) >= (int)t14) {
            t17 = t14;
        }
        t18 = t17;
    }
    t19 = *(short *)0xC2B3192;
    t21 = 0x0;
    if ((int)(int)f5 >= 0) {
        t20 = (int)f5;
        if ((int)(int)f5 >= (int)t19) {
            t20 = t19;
        }
        t21 = t20;
    }
    t23 = 0x0;
    if ((int)(int)(f5 + f7) >= 0) {
        t22 = (int)(f5 + f7);
        if ((int)(int)(f5 + f7) >= (int)t19) {
            t22 = t19;
        }
        t23 = t22;
    }
    t24 = *(int *)0xC2AED9C;
    t25 = *(int *)0xC2AEDB8;
    if (t24 == 1) {
        t26 = *(int *)0xC14A64C;
        if (t26 != 0) {
            if (t26 != 1) {
                if (t26 != 2) {
                    if (t26 != 3) {
                        u29 = 1.0f;
                        if (t26 == 4) {
                            u27 = *(float *)0xC079DD0;
                            u29 = u27;
                        }
                        u32 = u29;
                    } else {
                        u30 = *(float *)0xC079DCC;
                        u32 = u30;
                    }
                    u35 = u32;
                } else {
                    u33 = *(float *)0xC079DC8;
                    u35 = u33;
                }
                u38 = u35;
            } else {
                u36 = *(float *)0xC079DC4;
                u38 = u36;
            }
            u41 = u38;
        } else {
            u39 = *(float *)0xC079DC0;
            u41 = u39;
        }
        t42 = (t18 - 1);
        t43 = (int)((float)(t23 - 1) * u41);
        if (t25 == 4) {
            t42 = t18;
            t43 = (int)((float)t23 * u41);
        }
        t46 = kmSetPixelClipping(t16, (int)((float)t21 * u41), t42, t43);
        t50 = t46;
    } else {
        t47 = (t18 - 1);
        t48 = (t23 - 1);
        if (t25 == 4) {
            t47 = t18;
            t48 = t23;
        }
        t49 = kmSetPixelClipping(t16, t21, t47, t48);
        t50 = t49;
    }
    return t50;
}

int FUN_0c054786(void)
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
    int t18;
    int t17;
    int t16;
    int t15;
    int t14;
    int t13;
    int t12;
    int t19;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    float u35;
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
    int t48;
    int t49;
    int t50;
    int t52;
    int t53;
    int t54;
    int t8;

    t0 = 0xC054884;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)0xC2A8DE0;
        if (t2 == 0) {
            t0 = 0xC2A8D7C;
            t3 = *(int *)(((t1 << 2) + t0));
            if ((int)t3 > 0) {
                t4 = *(int *)(((t1 << 2) + t0));
                *(unsigned int *)(((t1 << 2) + t0)) = (t4 - 1);
                t5 = *(int *)0xC2A8DE4;
                if ((int)t1 > (int)t5) {
                    t6 = *(int *)(((0xC2A8D9C + (t1 << 2)) + 0x0));
                    t0 = 0xB;
                    t8 = (t6 + 0x1);
                } else {
                    t7 = *(int *)(((0xC2A8D9C + (t1 << 2)) + 0x0));
                    t0 = 0xA;
                    t8 = (t7 + 0x1);
                }
                t9 = (int)((int)t8 % (int)t0);
                t0 = t9;
                *(unsigned int *)(((0xC2A8D9C + (t1 << 2)) + 0x0)) = t0;
            } else {
                t0 = (t1 << 2);
                t10 = *(int *)((0xC2A8DBC + t0));
                if (t10 == 0) {
                    t0 = (t1 << 2);
                    *(unsigned int *)((0xC2A8DBC + t0)) = 0x1;
                    t11 = Sound_Request(0x205A9, 0x0);
                    t0 = t11;
                }
            }
        }
        t0 = t1;
        t18 = 0xFFFFFFFA;
        if (t0 != 1) {
            t0 = t1;
            t17 = 0xFFFFFFFA;
            if (t0 != 2) {
                t16 = 0x2;
                if (t0 != 3) {
                    t0 = t1;
                    t15 = 0xA;
                    if (t0 != 4) {
                        t0 = t1;
                        t14 = 0xA;
                        if (t0 != 5) {
                            t13 = 0x12;
                            if (t0 != 6) {
                                t0 = t1;
                                t12 = 0xFFFFFFF2;
                                if (t0 == 7) {
                                    t12 = 0x1A;
                                }
                                t13 = t12;
                            }
                            t14 = t13;
                        }
                        t15 = t14;
                    }
                    t16 = t15;
                }
                t17 = t16;
            }
            t18 = t17;
        }
        if ((int)t1 <= (int)0x1) {
            t0 = (t1 << 2);
            t19 = *(int *)((0xC2A8D9C + t0));
            t0 = 0xC130C28;
            t20 = *(int *)(((t19 << 2) + t0));
            *(unsigned int *)0xC2A801C = t20;
        } else {
            t0 = (t1 << 2);
            t21 = *(int *)((0xC2A8D9C + t0));
            t0 = 0xC130BFC;
            t22 = *(int *)(((t21 << 2) + t0));
            *(unsigned int *)0xC2A801C = t22;
        }
        t0 = 0x1C;
        *(unsigned int *)0xC2A8050 = 0x200E;
        *(float *)((0xC2A801C + t0)) = 0.0f;
        t0 = (t1 << 2);
        t24 = *(int *)((0xC2A8DBC + t0));
        if (t24 == 0) {
            t25 = *(int *)0xC2A8DE0;
            t0 = 0x24;
            *(float *)((0xC2A801C + t0)) = (1.0f - ((float)t25 * 0.25f));
            t0 = 0x14;
            t26 = *(int *)0xC2A8DE0;
            *(float *)((0xC2A801C + t0)) = (1.0f - ((float)t26 * 0.25f));
        } else {
            t0 = 0x24;
            *(float *)((0xC2A801C + t0)) = 1.0f;
            t0 = 0x14;
            *(float *)((0xC2A801C + t0)) = 1.0f;
        }
        t0 = 0x4;
        *(float *)((0xC2A801C + t0)) = (float)(((((((0x8 - t1) << 1) + (0x8 - t1)) << 2) << 1) + t18) + 0x1AA);
        t28 = *(int *)0xC2A8D74;
        t0 = 0xC2A8D74;
        t29 = *(int *)((t0 + 0x0));
        t0 = 0x8;
        *(unsigned int *)0xC2A8D78 = (t29 * t28);
        t30 = *(int *)0xC2A8D78;
        *(float *)((0xC2A801C + t0)) = (float)(t30 + 0x1B);
        t31 = FUN_0c054a38();
        t0 = t31;
        *(unsigned int *)0xC2A8044 = 0x0;
        t32 = nlSprPut(0xC2A801C);
        t0 = t32;
        t0 = (t1 << 2);
        t33 = *(int *)((0xC2A8DBC + t0));
        if (t33 == 0) {
            t34 = *(int *)0xC2A8CBC;
            t0 = t34;
            if (t0 == 2) {
                t0 = 0x8;
                u35 = *(float *)((0xC2A801C + t0));
                *(float *)((0xC2A801C + t0)) = (u35 - 16.0f);
                if ((int)t1 <= (int)0x1) {
                    t0 = (t1 << 2);
                    t36 = *(int *)((0xC2A8D9C + t0));
                    t0 = 0xA;
                    t37 = (int)((int)(t36 + 0x1) % (int)t0);
                    t0 = t37;
                    t0 = (t0 << 2);
                    t38 = *(int *)((0xC130C28 + t0));
                    *(unsigned int *)0xC2A801C = t38;
                } else {
                    t39 = *(int *)0xC2A8DE4;
                    if ((int)t1 > (int)t39) {
                        t0 = (t1 << 2);
                        t40 = *(int *)((0xC2A8D9C + t0));
                        t0 = 0xB;
                        t41 = (int)((int)(t40 + 0x1) % (int)t0);
                        t0 = t41;
                        t0 = (t0 << 2);
                        t42 = *(int *)((0xC130BFC + t0));
                        *(unsigned int *)0xC2A801C = t42;
                    } else {
                        t0 = (t1 << 2);
                        t43 = *(int *)((0xC2A8D9C + t0));
                        t0 = 0xA;
                        t44 = (int)((int)(t43 + 0x1) % (int)t0);
                        t0 = t44;
                        t0 = (t0 << 2);
                        t45 = *(int *)((0xC130BFC + t0));
                        *(unsigned int *)0xC2A801C = t45;
                    }
                }
                t0 = 0x14;
                *(unsigned int *)0xC2A8050 = 0x2006;
                t48 = *(int *)0xC2A8DE0;
                *(float *)((0xC2A801C + t0)) = ((float)t48 * 0.25f);
                t0 = 0x1C;
                t49 = *(int *)0xC2A8DE0;
                *(float *)((0xC2A801C + t0)) = (1.0f - ((float)t49 * 0.25f));
                t0 = 0x24;
                *(float *)((0xC2A801C + t0)) = 1.0f;
                t50 = nlSprPut(0xC2A801C);
                t0 = t50;
            }
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x8) continue;
        break;
    }
    t52 = *(int *)0xC2A8DDC;
    t53 = *(int *)((0xC2A8DBC + (t52 << 2)));
    if (t53 == 1) {
        t54 = *(int *)0xC2A8DDC;
        *(unsigned int *)0xC2A8DDC = (t54 + 0x1);
    }
    return t53;
}

int FUN_0c03b81e(int a4)
{
    int t49;
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
    int t21;
    int t22;
    int t23;
    int t24;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t41;
    int t42;
    int t43;
    int t44;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t64;
    int stk[10] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A11CC = 0x0;
        *(unsigned int *)0xC2A11D0 = 0x0;
        *(unsigned int *)0xC2A11D4 = 0x0;
        *(unsigned short *)0xC2A1AEA = 0x0;
        *(unsigned short *)0xC2A1AE8 = 0x0;
        t64 = 0x0;
    } else {
        t49 = 0x0;
        if (0x0 == 0) {
            t0 = *(int *)0xC1EE250;
            *(unsigned int *)0xC2A11CC = (((((((((((((((t0 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t0 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t0 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t0 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t0) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t0) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t0) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t0) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t0) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t0) == 0)) ? 1 : 0) - 1)) << 1));
            t1 = *(int *)0xC2A11D0;
            *(unsigned int *)(((int)stk + 8)) = t1;
            t2 = *(int *)0xC1EE24C;
            *(unsigned int *)0xC2A11D0 = (((((((((((((((t2 & 0x8) == 0)) ? 1 : 0) ^ 0x1) | (((-(((((t2 & 0x10) == 0)) ? 1 : 0) - 1)) << 2) << 1)) | (((-(((((t2 & 0x20) == 0)) ? 1 : 0) - 1)) << 2) << 2)) | ((((-(((((t2 & 0x40) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 1)) | ((((-(((((0x80 & t2) == 0)) ? 1 : 0) - 1)) << 2) << 2) << 2)) | ((-(((((0x400 & t2) == 0)) ? 1 : 0) - 1)) << 7)) | ((-(((((0x200 & t2) == 0)) ? 1 : 0) - 1)) << 8)) | (((-(((((0x20000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 1)) | (((-(((((0x10000 & t2) == 0)) ? 1 : 0) - 1)) << 8) << 2)) | ((-(((((0x2 & t2) == 0)) ? 1 : 0) - 1)) << 2)) | ((-(((((0x4 & t2) == 0)) ? 1 : 0) - 1)) << 1));
            t3 = *(short *)0xC1EE25C;
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x0)) = (((unsigned int)(unsigned short)t3 >> 8) - 128);
            t4 = *(short *)0xC1EE262;
            *(unsigned short *)(((((int)stk + 4) + 0x8) + 0x2)) = (((unsigned int)(unsigned short)t4 >> 8) - 128);
            t5 = *(short *)0xC2A1AE8;
            *(unsigned int *)(((int)stk + 4)) = t5;
            if ((int)t5 > (int)0xFFFFFF9C) {
                if ((int)t5 < (int)0x64) {
                    t6 = *(short *)(((((int)stk + 4) + 0x8) + 0x0));
                    if ((int)t6 < (int)0xFFFFFF9C) {
                        t7 = *(int *)0xC2A11CC;
                        *(unsigned int *)0xC2A11CC = (t7 | 0x20);
                    } else {
                        t8 = *(short *)(((((int)stk + 4) + 0x8) + 0x0));
                        if ((int)t8 > (int)0x64) {
                            t9 = *(int *)0xC2A11CC;
                            *(unsigned int *)0xC2A11CC = (t9 | 0x40);
                        }
                    }
                }
            }
            t21 = *(short *)0xC2A1AEA;
            *(unsigned int *)(((int)stk + 4)) = t21;
            if ((int)t21 > (int)0xFFFFFF9C) {
                if ((int)t21 < (int)0x64) {
                    t22 = *(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0));
                    if ((int)t22 < (int)0xFFFFFF9C) {
                        t23 = *(int *)0xC2A11CC;
                        *(unsigned int *)0xC2A11CC = (t23 | 0x8);
                    } else {
                        if ((int)t22 > (int)0x64) {
                            t24 = *(int *)0xC2A11CC;
                            *(unsigned int *)0xC2A11CC = (t24 | 0x10);
                        }
                    }
                }
            }
            *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x8);
            t31 = *(short *)(((((int)stk + 4) + 0x8) + 0x0));
            *(unsigned short *)0xC2A1AE8 = t31;
            t32 = *(short *)(((((int)stk + 4) + 0x8) + 0x2));
            *(unsigned short *)0xC2A1AEA = t32;
            t33 = *(int *)(((int)stk + 4));
            t34 = *(short *)((t33 + 0x0));
            if ((int)t34 < (int)0xFFFFFF9C) {
                t35 = *(int *)0xC2A11D0;
                *(unsigned int *)0xC2A11D0 = (t35 | 0x20);
            } else {
                t36 = *(short *)(((((int)stk + 4) + 0x8) + 0x0));
                if ((int)t36 > (int)0x64) {
                    t37 = *(int *)0xC2A11D0;
                    *(unsigned int *)0xC2A11D0 = (t37 | 0x40);
                }
            }
            t41 = *(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0));
            if ((int)t41 < (int)0xFFFFFF9C) {
                t42 = *(int *)0xC2A11D0;
                *(unsigned int *)0xC2A11D0 = (t42 | 0x8);
            } else {
                t43 = *(short *)((((((int)stk + 4) + 0x8) + 0x2) + 0x0));
                if ((int)t43 > (int)0x64) {
                    t44 = *(int *)0xC2A11D0;
                    *(unsigned int *)0xC2A11D0 = (t44 | 0x10);
                }
            }
            t49 = t32;
        }
        t53 = *(int *)0xC2A11CC;
        if (t53 == 0) {
            t54 = *(int *)0xC2A11D0;
            if (t54 != 0) {
                t55 = *(int *)0xC2A11D0;
                t56 = *(int *)(((int)stk + 8));
                if (t55 == t56) {
                    t57 = *(int *)0xC2A11D4;
                    if (t57 == 0) {
                        *(unsigned int *)0xC2A11D4 = 0x6;
                    } else {
                        t58 = *(int *)0xC2A11D4;
                        *(unsigned int *)0xC2A11D4 = (t58 - 1);
                    }
                } else {
                    *(unsigned int *)0xC2A11D4 = 0x14;
                }
            } else {
                *(unsigned int *)0xC2A11D4 = 0x14;
            }
        } else {
            *(unsigned int *)0xC2A11D4 = 0x14;
        }
        t64 = t49;
    }
    return t64;
}

int kmSetSystemConfiguration(int a4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
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
    int t42;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t55;
    int t50;
    int t51;
    int t56;
    int t57;
    int t58;
    int t59;
    float u60;
    float u61;
    int t62;
    int t63;
    int t64;
    float u65;
    int t66;
    int t67;
    int t68;
    float u69;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    float u78;
    float u80;
    int t79;
    int t81;
    float u82;
    float u83;
    int t84;
    int t88;
    int t85;
    int t86;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t99;
    int t100;
    int t101;
    int t106;
    int t108;
    int t107;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t153;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t179;
    int t180;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t190;
    int t191;
    int t228;
    int t192;
    int t227;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t201;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t225;
    int t70;
    int t71;
    int stk[39] = {0};

    *(unsigned int *)(((int)stk + 20)) = 0x2;
    kmiFBinit();
    kmiDiscardRenderPipeline();
    *(unsigned int *)0xC2B8C94 = 0x0;
    t2 = *(int *)((a4 + 0x4));
    if ((t2 & 0x1) != 0) {
        *(unsigned int *)(((int)stk + 32)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
    }
    t3 = *(int *)((a4 + 0x4));
    if ((t3 & 32) != 0) {
        *(unsigned int *)(((int)stk + 48)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 48)) = 0x1;
    }
    t4 = *(int *)((a4 + 0x4));
    if ((t4 & 0x2) != 0) {
        *(unsigned int *)(((int)stk + 28)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 28)) = 0x0;
    }
    t5 = *(int *)((a4 + 0x4));
    if ((t5 & 0x100000) != 0) {
        *(unsigned int *)0xC2EAAB0 = 0x0;
    } else {
        *(unsigned int *)0xC2EAAB0 = 0x1;
    }
    t7 = *(int *)((a4 + 0x14));
    t8 = *(int *)(((int)stk + 28));
    kmiGetDisplayData(0xFF, t8, t7);
    t10 = *(int *)((a4 + 0x4));
    if ((t10 & 0x10000) != 0) {
        *(unsigned int *)0xC2EAAB0 = 0x1;
        *(unsigned int *)0xC177A88 = 0x1;
        t11 = *(int *)0xC2EA9DC;
        *(unsigned int *)0xC2EA9E4 = t11;
        t12 = *(int *)0xC2EA9DC;
        *(unsigned int *)(((t12 << 2) + 0xC2EA9CC)) = 0x2;
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F4 = 0x1;
        *(unsigned int *)(((int)stk + 20)) = (((int)stk + 16) + 0x24);
        t13 = *(int *)((a4 + 0x20));
        t14 = *(int *)((t13 + 0x10));
        *(unsigned int *)(((((int)stk + 16) + 0x24) + 0x0)) = (t14 & 0x1);
        t15 = *(int *)((a4 + 0x20));
        t16 = *(int *)((t15 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0)) = (0x2 & t16);
        t17 = *(int *)((a4 + 0x20));
        t18 = *(int *)((t17 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0)) = (t18 & 0x4);
        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 16) + 0x24) + 0xC);
        t19 = *(int *)((a4 + 0x20));
        t20 = *(int *)((t19 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0xC) + 0x0)) = (t20 & 0x8);
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x24) + 0x10);
        t21 = *(int *)((a4 + 0x20));
        t22 = *(int *)((t21 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x24) + 0x10) + 0x0)) = (t22 & 0x10);
        t23 = *(int *)(((int)stk + 24));
        t24 = *(int *)((t23 + 0x0));
        t25 = *(int *)(((int)stk + 16));
        t26 = *(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0));
        t27 = *(int *)(((int)stk + 20));
        t28 = *(int *)((t25 + 0x0));
        t29 = *(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0));
        t30 = *(int *)((t27 + 0x0));
        t31 = ((int (*)(int, int, int, int))(kmiChkActiveListType))(t30, t26, t29, t28);
        t32 = *(int *)(((int)stk + 24));
        t33 = *(int *)((t32 + 0x0));
        t34 = *(int *)(((int)stk + 16));
        t35 = *(int *)((((((int)stk + 16) + 0x24) + 0x4) + 0x0));
        t36 = *(int *)(((int)stk + 20));
        t37 = *(int *)((t34 + 0x0));
        t38 = *(int *)((((((int)stk + 16) + 0x24) + 0x8) + 0x0));
        t39 = *(int *)((t36 + 0x0));
        t40 = ((int (*)(int, int, int, int, int, int, int))(kmiGetPackOBPParam))(t39, t35, t38, t37, t33, 0x1, t24);
        *(unsigned int *)(((int)stk + 16)) = t40;
        kmiGetNativeRegOBPSize(t40);
    } else {
        *(unsigned int *)0xC177A88 = 0x0;
        t42 = *(int *)((a4 + 0x4));
        if ((t42 & 16) != 0) {
            *(unsigned int *)0xC2EA9C4 = 0x1;
            *(unsigned int *)0xC2EAAB0 = 0x1;
        } else {
            *(unsigned int *)0xC2EA9C4 = 0x0;
        }
        t44 = *(int *)((a4 + 0x5C));
        t45 = *(int *)0xC2EA9C4;
        kmChangeLatencyModel(t45, t44);
        t47 = *(int *)((a4 + 0x24));
        t48 = *(int *)((a4 + 0x28));
        *(unsigned int *)0xC2EAAC0 = t47;
        t49 = *(int *)0xC2EAAC0;
        t55 = t48;
        if ((t49 & 0x1F) != 0) {
            t50 = *(int *)0xC2EAAC0;
            t51 = *(int *)0xC2EAAC0;
            *(unsigned int *)0xC2EAAC0 = ((t51 + 0x1F) & 0xFFFFFFE0);
            t55 = (t48 - ((-(t50 & 0x1F)) + 0x20));
        }
        t56 = *(int *)0xC2EA9C4;
        t57 = t55;
        if (t56 == 0) {
            t57 = ((unsigned int)t55 >> 1);
        }
        t58 = (((int)stk + 16) + 0x40);
        while ((unsigned int)t58 < (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
            *(unsigned int *)((t58 + 0x0)) = 0x0;
            t58 = (t58 + 0x4);
        }
        t59 = (a4 + 0x2C);
        u60 = 0.0f;
        while ((unsigned int)t59 < (unsigned int)(a4 + 0x40)) {
            u61 = *(float *)((t59 + 0x0));
            t59 = (t59 + 0x4);
            u60 = (u60 + u61);
        }
        if (u60 > 100.0f) {
            t62 = 0xC14BE20;
            t63 = (a4 + 0x40);
            t64 = 0x0;
            while ((unsigned int)t64 < (unsigned int)0x14) {
                t63 = a4;
                t63 = (t63 + 0x2C);
                t63 = (t63 + t64);
                t62 = t64;
                u65 = *(float *)((t63 + 0x0));
                t64 = (t64 + 0x4);
                *(float *)(((((int)stk + 16) + 0x54) + t62)) = ((u65 * 100.0f) / u60);
            }
            t70 = t62;
            t71 = t63;
        } else {
            t66 = 0xC14BE20;
            t67 = (a4 + 0x40);
            t68 = 0x0;
            while ((unsigned int)t68 < (unsigned int)0x14) {
                t67 = a4;
                t67 = (t67 + 0x2C);
                t67 = (t67 + t68);
                t66 = t68;
                u69 = *(float *)((t67 + 0x0));
                t68 = (t68 + 0x4);
                *(float *)(((((int)stk + 16) + 0x54) + t66)) = u69;
            }
            t70 = t66;
            t71 = t67;
        }
        t73 = t70;
        t74 = 0xC2EA9C4;
        t75 = t56;
        t76 = t71;
        t77 = 0x0;
        while ((unsigned int)t77 < (unsigned int)0x14) {
            t73 = t77;
            t76 = t77;
            u78 = *(float *)(((((int)stk + 16) + 0x54) + t73));
            t76 = (t76 + (((int)stk + 16) + 0x40));
            u80 = (float)t57;
            if ((int)t57 < 0) {
                t75 = 0x4F800000;
                t79 = t75;
                u80 = ((float)t57 + (*(float *)&t79));
            }
            t74 = 0x4F000000;
            t81 = t74;
            u82 = (*(float *)&t81);
            u83 = ((u78 * u80) / 100.0f);
            if (!((*(float *)&t81) > ((u78 * u80) / 100.0f))) {
                u82 = ((*(float *)&t81) + (*(float *)&t81));
                u83 = (((u78 * u80) / 100.0f) - ((*(float *)&t81) + (*(float *)&t81)));
            }
            t74 = 0xFFFFFFF8;
            t77 = (t77 + 0x4);
            t75 = (int)u83;
            t75 = (t75 & t74);
            *(unsigned int *)((t76 + 0x0)) = t75;
        }
        t84 = *(int *)0xC2EA684;
        t88 = t74;
        if ((t84 & 64) != 0) {
            t85 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
            if ((unsigned int)t85 < (unsigned int)0x38) {
                t86 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
                *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = (t86 + 0x38);
            }
            t88 = 0x38;
        }
        t90 = t88;
        t91 = 0xC2EA684;
        t92 = 0x0;
        t93 = 0x0;
        t94 = 0xFFFFFFFF;
        while ((unsigned int)t92 < (unsigned int)0x5) {
            *(unsigned int *)(((int)stk + 16)) = ((t92 << 2) + (((int)stk + 16) + 0x40));
            t95 = *(int *)((((t92 << 2) + (((int)stk + 16) + 0x40)) + 0x0));
            t91 = t95;
            t90 = t91;
            t93 = (t93 + t91);
            if ((int)t90 > (int)t94) {
                *(unsigned int *)(((int)stk + 24)) = t92;
                t96 = *(int *)(((int)stk + 16));
                t94 = t96;
                t97 = *(int *)((t94 + 0x0));
                t94 = t97;
            }
            t92 = (t92 + 0x1);
        }
        if ((unsigned int)t93 > (unsigned int)t57) {
            t99 = *(int *)(((int)stk + 24));
            t100 = *(int *)((((t99 << 2) + (((int)stk + 16) + 0x40)) + 0x0));
            *(unsigned int *)((((t99 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = (t100 - (t93 - t57));
            t101 = *(int *)((((t99 << 2) + (((int)stk + 16) + 0x40)) + 0x0));
            *(unsigned int *)((((t99 << 2) + (((int)stk + 16) + 0x40)) + 0x0)) = (t101 & 0xFFFFFFE0);
        }
        t106 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        t108 = t106;
        if (t106 != 0) {
            t107 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
            *(unsigned int *)(((((int)stk + 16) + 0x40) + 0x0)) = (t107 - 16);
            t108 = (t107 - 16);
        }
        t109 = t108;
        t110 = ((((int)stk + 16) + 0x40) + 0x4);
        t111 = ((((int)stk + 16) + 0x40) + 0x4);
        while ((unsigned int)t110 < (unsigned int)((((int)stk + 16) + 0x40) + 0x14)) {
            t112 = *(int *)((t110 + 0x0));
            t109 = t112;
            if (t109 != 0) {
                t113 = *(int *)((t111 + 0x0));
                t109 = t113;
                t109 = (t109 - 16);
                *(unsigned int *)((t111 + 0x0)) = t109;
            }
            t110 = (t110 + 0x4);
            t111 = (t111 + 0x4);
        }
        t114 = *(int *)((a4 + 0x20));
        *(unsigned int *)0xC2B8C40 = t114;
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 16) + 0x40);
        t115 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        *(unsigned int *)0xC2B8C44 = t115;
        *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 16) + 0x40) + 0x4);
        t116 = *(int *)((((((int)stk + 16) + 0x40) + 0x4) + 0x0));
        *(unsigned int *)0xC2B8C48 = t116;
        *(unsigned int *)(((int)stk + 44)) = ((((int)stk + 16) + 0x40) + 0x8);
        t117 = *(int *)((((((int)stk + 16) + 0x40) + 0x8) + 0x0));
        *(unsigned int *)0xC2B8C4C = t117;
        *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 16) + 0x40) + 0xC);
        t118 = *(int *)((((((int)stk + 16) + 0x40) + 0xC) + 0x0));
        *(unsigned int *)0xC2B8C50 = t118;
        *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 16) + 0x40) + 0x10);
        t119 = *(int *)((((((int)stk + 16) + 0x40) + 0x10) + 0x0));
        *(unsigned int *)0xC2B8C54 = t119;
        t120 = *(int *)(((int)stk + 36));
        t121 = *(int *)((t120 + 0x0));
        t122 = *(int *)(((int)stk + 44));
        t123 = *(int *)(((int)stk + 40));
        t124 = *(int *)(((int)stk + 24));
        t125 = *(int *)((t122 + 0x0));
        t126 = *(int *)((t123 + 0x0));
        t127 = *(int *)(((int)stk + 16));
        t128 = *(int *)((t124 + 0x0));
        t129 = *(int *)((t127 + 0x0));
        t130 = ((int (*)(int, int, int, int, int, float))(kmiChkActiveListType))(t129, t128, t125, t126, t121, 100.0f);
        t131 = *(int *)((a4 + 0x20));
        t132 = *(int *)0xC2EAAE8;
        *(unsigned int *)((t131 + 0x10)) = t132;
        t133 = 0xC2B8D28;
        while ((unsigned int)t133 < (unsigned int)0xC2B8D3C) {
            *(unsigned int *)((t133 + 0x0)) = 0x0;
            t133 = (t133 + 0x4);
        }
        t134 = *(int *)(((((int)stk + 16) + 0x40) + 0x10));
        t135 = *(int *)(((((int)stk + 16) + 0x40) + 0xC));
        t136 = *(int *)(((((int)stk + 16) + 0x40) + 0x8));
        t137 = *(int *)(((((int)stk + 16) + 0x40) + 0x4));
        t138 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        t139 = ((int (*)(int, int, int, int, int, int))(kmiGetPackOBPParam))(t138, t137, t136, t135, t134, 0x0);
        *(unsigned int *)(((int)stk + 16)) = t139;
        kmiGetNativeRegOBPSize(t139);
        t141 = *(int *)0xC2EA9C4;
        if (t141 == 1) {
            *(unsigned int *)(((int)stk + 20)) = 0x1;
        }
        t142 = *(int *)(((int)stk + 20));
        t143 = *(int *)(((((int)stk + 16) + 0x40) + 0x10));
        t144 = *(int *)(((((int)stk + 16) + 0x40) + 0x8));
        t145 = *(int *)(((((int)stk + 16) + 0x40) + 0x4));
        t146 = *(int *)(((((int)stk + 16) + 0x40) + 0xC));
        t147 = *(int *)(((((int)stk + 16) + 0x40) + 0x0));
        t148 = kmiGetVertexBasePointer(t147, t145, t144, t146, t143, 0x0, t142);
        t149 = *(int *)0xC2B8CCC;
        *(unsigned int *)0xC2B8CF4 = t149;
        t150 = *(int *)0xC2B8CD0;
        *(unsigned int *)0xC2B8CF8 = t150;
        t151 = *(int *)0xC2B8CD4;
        *(unsigned int *)0xC2B8CFC = t151;
        t152 = *(int *)0xC2B8CD8;
        *(unsigned int *)0xC2B8D00 = t152;
        t153 = *(int *)0xC2B8CDC;
        *(unsigned int *)0xC2B8D04 = t153;
        t154 = t148;
        t155 = t153;
        t156 = 0x0;
        while ((unsigned int)t156 < (unsigned int)0x14) {
            t154 = t156;
            t157 = *(int *)((0xC2B8CF4 + t154));
            t155 = t157;
            t156 = (t156 + 0x4);
            *(unsigned int *)((0xC2B8D08 + t154)) = t155;
        }
        *(unsigned int *)0xC2B8CA8 = 0x0;
        *(unsigned int *)0xC2B8CAC = 0x0;
        *(unsigned int *)0xC2B8CB0 = 0x0;
        *(unsigned int *)0xC2B8CB4 = 0x0;
        *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
        *(unsigned int *)0xC2B8CBC = 0xC2B8CF4;
        t158 = *(int *)(((int)stk + 20));
        if ((unsigned int)0x0 < (unsigned int)t158) {
            t159 = 0xC2B8CCC;
            t160 = 0xC2B8CC4;
            t161 = 0x0;
            do {
                t161 = (t161 + 0x1);
                *(unsigned int *)((t160 + 0x0)) = t159;
                t162 = *(int *)(((int)stk + 20));
                t159 = (t159 + 0x14);
                t160 = (t160 + 0x4);
            } while ((unsigned int)t161 < (unsigned int)t162);
        }
        t167 = *(int *)(((int)stk + 20));
        t168 = kmiCopyDummyGlobalData(t167);
        t169 = t168;
        t170 = 0x0;
        while ((unsigned int)t170 < (unsigned int)0x14) {
            t169 = 0xC2B8D28;
            t171 = *(int *)0xC2B8CBC;
            t172 = *(int *)((t170 + t169));
            t173 = *(int *)(((t171 + t170) + 0x0));
            t174 = (t171 + t170);
            t170 = (t170 + 0x4);
            *(unsigned int *)((t174 + 0x0)) = (t173 + (t172 << 2));
        }
    }
    t179 = *(int *)((a4 + 0x1C));
    *(unsigned int *)0xC2B8C9C = t179;
    if ((t179 & 7) != 0) {
        t180 = *(int *)0xC2B8C9C;
        *(unsigned int *)0xC2B8C9C = ((t180 + 0x7) & 0xFFFFFFF8);
    }
    t183 = *(int *)0xC2B8C9C;
    t184 = *(int *)0xC2EA694;
    t185 = *(int *)0xC2B8CA0;
    *(unsigned int *)0xC2B8C98 = ((unsigned int)((t184 - (t183 << 2)) - (t185 << 1)) >> 1);
    t186 = kmiGetProfileInt(0xC174C80, 0xC174C8C);
    if (t186 == 1) {
        t187 = *(int *)0xC2B8C98;
        if ((unsigned int)t187 > (unsigned int)0x400000) {
            *(unsigned int *)0xC2B8C98 = 0x400000;
        }
    } else {
        t188 = *(int *)0xC2B8C98;
        if ((unsigned int)t188 > (unsigned int)0x200000) {
            *(unsigned int *)0xC2B8C98 = 0x200000;
        }
    }
    t190 = *(int *)0xC2B8C98;
    t191 = *(int *)0xC2B8CA4;
    t228 = 0x3;
    if ((unsigned int)t190 >= (unsigned int)t191) {
        t192 = kmiTAallocEx(t190, (((int)stk + 16) + 0x38), (((int)stk + 16) + 0x3C));
        t227 = t192;
        if (t192 == 0) {
            t193 = *(int *)0xC2B8C98;
            *(unsigned int *)0xC2EAAD8 = t193;
            t194 = *(int *)(((int)stk + 28));
            t195 = *(int *)(((int)stk + 16));
            t196 = *(int *)0xC2EA6F8;
            t197 = *(int *)0xC2EA6F4;
            t198 = *(int *)0xC2EA6F0;
            t199 = *(int *)0xC2EA6EC;
            kmiSetTAEnvironment();
            t201 = *(int *)((a4 + 0x4));
            if ((t201 & 0x10000) != 0) {
                *(unsigned int *)0xC2EA88C = 0x1;
            }
            t203 = *(int *)((a4 + 0x20));
            *(unsigned int *)((t203 + 0x0)) = 0xC2B8CF4;
            t204 = *(int *)((a4 + 0x20));
            *(unsigned int *)((t204 + 0x4)) = 0xC178304;
            t205 = *(int *)((a4 + 0x20));
            *(unsigned int *)((t205 + 0x8)) = 0xC2B8CA8;
            t206 = *(int *)((a4 + 0x20));
            *(unsigned int *)((t206 + 0xC)) = 0xC2B8CC4;
            t207 = *(int *)(((int)stk + 28));
            *(unsigned int *)0xC2B8C58 = t207;
            t208 = *(int *)(((int)stk + 28));
            *(unsigned int *)0xC2EA6B4 = t208;
            t209 = *(int *)((a4 + 0x8));
            t210 = *(int *)((t209 + 0x0));
            *(unsigned int *)0xC2B8C5C = t210;
            t211 = *(int *)((a4 + 0x10));
            *(unsigned int *)0xC2B8C60 = t211;
            t212 = *(int *)((a4 + 0x14));
            *(unsigned int *)0xC2B8C64 = t212;
            t213 = *(int *)(((int)stk + 32));
            *(unsigned int *)0xC2B8C68 = t213;
            t214 = *(int *)((a4 + 0x8));
            t215 = *(int *)((t214 + 0x4));
            *(unsigned int *)0xC2B8C6C = t215;
            t216 = *(int *)((a4 + 0x10));
            *(unsigned int *)0xC2B8C70 = t216;
            t217 = *(int *)((a4 + 0x14));
            *(unsigned int *)0xC2B8C74 = t217;
            t218 = *(int *)(((int)stk + 32));
            *(unsigned int *)0xC2B8C78 = t218;
            t219 = *(int *)((a4 + 0x8));
            t220 = *(int *)((t219 + 0x0));
            *(unsigned int *)0xC2B8C7C = t220;
            t221 = *(int *)((a4 + 0x8));
            t222 = *(int *)((t221 + 0x4));
            *(unsigned int *)0xC2B8C80 = t222;
            t223 = *(int *)(((int)stk + 48));
            *(unsigned int *)0xC2B8C84 = t223;
            *(unsigned int *)0xC177A84 = 0x80000000;
            t224 = *(int *)0xC2B8C94;
            t225 = kmiAllocSysConfig(t224);
            t227 = t225;
        }
        t228 = t227;
    }
    return t228;
}
