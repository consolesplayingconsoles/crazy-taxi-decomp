/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_SetCoef(int, int, int);
int ADX_DecodeInfo(int, int);
int ADX_DecodeInfoExADPCM2(int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int CheckKyakuArea(int, int);
int FUN_0c039680(int);
int FUN_0c0396dc(int);
int FUN_0c03ce68(int, int, int, int, int, int, float, float);
int FUN_0c0414b8(void);
int FUN_0c0417c0(int, int, int);
int FUN_0c0418b8(int);
int FUN_0c05bb24(void);
int FUN_0c05bb76(int);
int FUN_0c05e2fa(void);
int FUN_0c05e5cc(int, int, int, int, float, float, float, float);
int FUN_0c05fd70(int);
int FUN_0c0608ac(int, int);
int FUN_0c0608de(int, int);
int pfCrazyBoxRecordTimePut(int, int, int);
int pfCrazyBoxRecordDistPut(int, int, int, float);
int pfCrazyBoxRecordComboPut(int, int, int);
int FUN_0c07f5c0(void);
int FUN_0c158894(int);
int FUN_0c16c1c0(void);
int FUN_0c16c796(void);
int FUN_0c16c7ca(void);
int FUN_0c16c7f2(void);
int FUN_0c1717d4(void);
int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
extern void _builtin_ftrv(float *, float *);
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int kmiExecuteDMAChain(void);
int kmiFatalErrorEntry(int);
int kmiFinalizeRender(void);
int memset(int, int, int);
int mwRnaDestroy(int);
int mwRnaStop(int);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int putString(int, int, float, float, float);
int thunk_FUN_0c0409d2(void);
void FUN_0c15888e(int a4);
void FUN_0c077210(int a4, int a5);
int mwRnaFinish(void);
int FUN_0c05c304(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
int FUN_0c0411a8(int a4);
int kmiInterruptHandlerSH(void);
int FUN_0c05dbdc(void);
int FUN_0c05df6a(void);

void FUN_0c15888e(int a4)
{
    iaOcbwb((void *)a4);
}

void FUN_0c077210(int a4, int a5)
{
    float u0;
    float u1;
    float u2;
    float u3[4];

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)(((a4 + 0x4) + 0x0));
    u2 = *(float *)((((a4 + 0x4) + 0x4) + 0x0));
    u3[0] = u0;
    u3[1] = u1;
    u3[2] = u2;
    u3[3] = 0.0f;
    _builtin_ftrv(u3, u3);
    *(float *)((((a5 + 0xC) - 0x4) + 0x0)) = u3[2];
    *(float *)(((((a5 + 0xC) - 0x4) - 0x4) + 0x0)) = u3[1];
    *(float *)((((((a5 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u3[0];
}

int mwRnaFinish(void)
{
    int t0;
    int t1;
    int t2;
    int t5;
    int t6;
    int t7;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;

    t0 = 0xC2F605C;
    t1 = 0xC2F605C;
    do {
        t2 = *(signed char *)((t1 + 0x0));
        if ((unsigned char)t2 == 1) {
            mwRnaStop(t0);
        }
        t1 = (t1 + 0x90);
        t0 = (t0 + 0x90);
    } while ((unsigned int)t1 < (unsigned int)0xC2F64DC);
    t5 = 0xC2F605C;
    t6 = 0xC2F605C;
    do {
        t7 = *(signed char *)((t6 + 0x0));
        if ((unsigned char)t7 == 1) {
            mwRnaDestroy(t5);
        }
        t6 = (t6 + 0x90);
        t5 = (t5 + 0x90);
    } while ((unsigned int)t6 < (unsigned int)0xC2F64DC);
    memset(0xC2F605C, 0x0, 0x480);
    memset(0xC2F64DC, 0x0, 0x820);
    t12 = 0x0;
    t13 = 0xC2F6CFC;
    do {
        t12 = (t12 + 0x1);
        *(unsigned int *)((t13 + 0x0)) = 0x80808080;
        t13 = (t13 + 0x4);
    } while ((int)t12 < (int)0x200);
    t14 = *(int *)0xC178644;
    t15 = *(int *)((t14 + 0x10));
    t16 = ((int (*)(int, int, int, int))(t15))(t12, 0x80808080, 0x200, t13);
    return FUN_0c1717d4();
}

int FUN_0c05c304(void)
{
    int t0;
    float u3;
    int t5;
    int t6;
    int t17;
    int t19;
    int t18;
    int t21;
    int t24;
    int t27;
    int t30;
    int t31;
    int t28;
    int t25;
    int t22;

    t0 = *(int *)0xC2A993C;
    *(unsigned int *)0xC2A993C = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0xB4) {
        thunk_FUN_0c0409d2();
    }
    FUN_0c05e2fa();
    *(unsigned int *)0xC2A9898 = 0x73;
    *(unsigned int *)0xC2A98CC = 0xA;
    *(float *)0xC2A989C = 320.0f;
    *(float *)0xC2A98A0 = 88.0f;
    u3 = *(float *)0xC2A994C;
    *(float *)0xC2A98A8 = (u3 + 1.0f);
    *(float *)0xC2A98AC = (u3 + 1.0f);
    nlSprPut(0xC2A9898);
    *(unsigned int *)0xC2A98CC = 0x200A;
    t5 = *(int *)0xC2A993C;
    if (t5 == 20) {
        t6 = *(int *)0xC2A9B8C;
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    if (t6 == 3) {
                        FUN_0c05fd70(0xC);
                    }
                } else {
                    FUN_0c05fd70(0xB);
                }
            } else {
                FUN_0c05fd70(0xA);
            }
        } else {
            FUN_0c05fd70(0x9);
        }
    }
    t17 = *(int *)0xC1EE214;
    if (t17 != 7) {
        if (t17 != 11) {
            if (t17 != 5) {
                if (t17 != 6) {
                    t19 = t17;
                    if (t17 == 14) {
                        t18 = *(int *)0xC2A993C;
                        if (t18 == 30) {
                            *(unsigned int *)0xC179860 = 0x8;
                        }
                        t19 = t18;
                    }
                    t22 = t19;
                } else {
                    t21 = *(int *)0xC2A993C;
                    if (t21 == 30) {
                        *(unsigned int *)0xC179860 = 0x8;
                    }
                    t22 = t21;
                }
                t25 = t22;
            } else {
                t24 = *(int *)0xC2A993C;
                if (t24 == 30) {
                    *(unsigned int *)0xC179860 = 0x8;
                }
                t25 = t24;
            }
            t28 = t25;
        } else {
            t27 = *(int *)0xC2A993C;
            if (t27 == 30) {
                *(unsigned int *)0xC179860 = 0x8;
            }
            t28 = t27;
        }
        t31 = t28;
    } else {
        t30 = *(int *)0xC2A993C;
        if (t30 == 30) {
            *(unsigned int *)0xC179860 = 0x8;
        }
        t31 = t30;
    }
    return t31;
}

int ADXB_DecodeHeaderAdx(int a4, int a5, int a6)
{
    int t0;
    int t18;
    int t1;
    int t17;
    int t2;
    int t3;
    int t4;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int stk[12] = {0};

    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = ADX_DecodeInfo(a5, a6);
    t18 = 0x0;
    if ((int)t0 >= 0) {
        t1 = ADX_DecodeInfoExADPCM2(a5, a6);
        t17 = 0x0;
        if ((int)t1 >= 0) {
            t2 = *(short *)((a4 + 0x1C));
            t3 = *(int *)((a4 + 0x14));
            t4 = *(int *)((a4 + 0x8));
            ADXPD_SetCoef(t4, t3, t2);
            ADX_DecodeInfoExLoop(a5, a6, (a4 + 0x20), (a4 + 0x24), (a4 + 0x26), (a4 + 0x28), (a4 + 0x2C), (a4 + 0x30), (a4 + 0x34));
            t7 = *(signed char *)((a4 + 0xE));
            *(unsigned int *)(((0x58 + a4) + 0x0)) = t7;
            t8 = *(signed char *)((a4 + 0xF));
            *(unsigned int *)(((0x5C + a4) + 0x0)) = t8;
            t9 = *(int *)((a4 + 0x10));
            *(unsigned int *)((a4 + 0x60)) = t9;
            t10 = *(int *)((a4 + 0x3C));
            *(unsigned int *)((a4 + 0x64)) = t10;
            t11 = *(int *)((a4 + 0x40));
            *(unsigned int *)((a4 + 0x68)) = t11;
            t12 = *(int *)((a4 + 0x44));
            *(unsigned int *)((a4 + 0x6C)) = t12;
            t13 = *(short *)((a4 + 0x48));
            *(unsigned short *)(((a4 + 0x7C) + 0x0)) = t13;
            t14 = *(short *)((a4 + 0x4A));
            *(unsigned short *)((a4 + 0x7E)) = t14;
            *(unsigned int *)((a4 + 0x80)) = (a4 + 0x4C);
            *(unsigned int *)((a4 + 0x9C)) = 0x0;
            *(unsigned short *)((a4 + 0xA8)) = 0x0;
            memset((a4 + 0x4C), 0x0, 0x4);
            t16 = *(short *)(((int)stk + 28));
            t17 = t16;
        }
        t18 = t17;
    }
    return t18;
}

int FUN_0c0411a8(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t39;
    int t40;
    int t42;
    int t44;
    int t46;
    int t47;
    int t48;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;

    if (a4 == 0) {
        *(unsigned int *)0xC2A1250 = 0x0;
        *(unsigned int *)0xC2A1254 = 0x0;
        *(unsigned char *)0xC2A1248 = 0x41;
        *(unsigned char *)0xC2A1249 = 0x41;
        *(unsigned char *)0xC2A124A = 0x41;
        *(unsigned char *)0xC2A124B = 0x0;
        t57 = 0x0;
    } else {
        t0 = *(int *)0xC2A11CC;
        if ((t0 & 0x20) == 0) {
            t1 = *(int *)0xC2A11D4;
            if (t1 == 0) {
                t2 = *(int *)0xC2A11D0;
                if ((t2 & 0x20) != 0) {
                    t3 = *(int *)0xC2A1250;
                    *(unsigned int *)0xC2A1250 = (t3 - 1);
                    if ((int)(t3 - 1) < 0) {
                        *(unsigned int *)0xC2A1250 = 0x2;
                    }
                    t5 = *(int *)0xC2A1250;
                    t6 = *(signed char *)((0xC2A1248 + t5));
                    t7 = FUN_0c0396dc(t6);
                    *(unsigned int *)0xC2A1254 = t7;
                    FUN_0c07f5c0();
                }
            }
        } else {
            t9 = *(int *)0xC2A1250;
            *(unsigned int *)0xC2A1250 = (t9 - 1);
            if ((int)(t9 - 1) < 0) {
                *(unsigned int *)0xC2A1250 = 0x2;
            }
            t10 = *(int *)0xC2A1250;
            t11 = *(signed char *)((0xC2A1248 + t10));
            t12 = FUN_0c0396dc(t11);
            *(unsigned int *)0xC2A1254 = t12;
            FUN_0c07f5c0();
        }
        t14 = *(int *)0xC2A11CC;
        if ((t14 & 0x40) == 0) {
            t15 = *(int *)0xC2A11D4;
            if (t15 == 0) {
                t16 = *(int *)0xC2A11D0;
                if ((t16 & 0x40) != 0) {
                    t17 = *(int *)0xC2A1250;
                    *(unsigned int *)0xC2A1250 = (t17 + 0x1);
                    if ((int)(t17 + 0x1) >= (int)0x3) {
                        *(unsigned int *)0xC2A1250 = 0x0;
                    }
                    t18 = *(int *)0xC2A1250;
                    t19 = *(signed char *)((0xC2A1248 + t18));
                    t20 = FUN_0c0396dc(t19);
                    *(unsigned int *)0xC2A1254 = t20;
                    FUN_0c07f5c0();
                }
            }
        } else {
            t22 = *(int *)0xC2A1250;
            *(unsigned int *)0xC2A1250 = (t22 + 0x1);
            if ((int)(t22 + 0x1) >= (int)0x3) {
                *(unsigned int *)0xC2A1250 = 0x0;
            }
            t23 = *(int *)0xC2A1250;
            t24 = *(signed char *)((0xC2A1248 + t23));
            t25 = FUN_0c0396dc(t24);
            *(unsigned int *)0xC2A1254 = t25;
            FUN_0c07f5c0();
        }
        t27 = *(int *)0xC2A11CC;
        if ((t27 & 0x8) == 0) {
            t28 = *(int *)0xC2A11D4;
            if (t28 == 0) {
                t29 = *(int *)0xC2A11D0;
                if ((t29 & 0x8) != 0) {
                    t30 = *(int *)0xC2A1254;
                    *(unsigned int *)0xC2A1254 = (t30 + 0x1);
                    if ((int)(t30 + 0x1) > (int)0x2A) {
                        *(unsigned int *)0xC2A1254 = 0x0;
                    }
                    FUN_0c07f5c0();
                } else if ((t27 & 0x10) == 0) {
                    t32 = *(int *)0xC2A11D4;
                    if (t32 == 0) {
                        t33 = *(int *)0xC2A11D0;
                        if ((t33 & 0x10) != 0) {
                            t34 = *(int *)0xC2A1254;
                            *(unsigned int *)0xC2A1254 = (t34 - 1);
                            if ((int)(t34 - 1) < 0) {
                                *(unsigned int *)0xC2A1254 = 0x2A;
                            }
                            FUN_0c07f5c0();
                        }
                    }
                } else {
                    t36 = *(int *)0xC2A1254;
                    *(unsigned int *)0xC2A1254 = (t36 - 1);
                    if ((int)(t36 - 1) < 0) {
                        *(unsigned int *)0xC2A1254 = 0x2A;
                    }
                    FUN_0c07f5c0();
                }
            } else if ((t27 & 0x10) == 0) {
                t38 = *(int *)0xC2A11D4;
                if (t38 == 0) {
                    t39 = *(int *)0xC2A11D0;
                    if ((t39 & 0x10) != 0) {
                        t40 = *(int *)0xC2A1254;
                        *(unsigned int *)0xC2A1254 = (t40 - 1);
                        if ((int)(t40 - 1) < 0) {
                            *(unsigned int *)0xC2A1254 = 0x2A;
                        }
                        FUN_0c07f5c0();
                    }
                }
            } else {
                t42 = *(int *)0xC2A1254;
                *(unsigned int *)0xC2A1254 = (t42 - 1);
                if ((int)(t42 - 1) < 0) {
                    *(unsigned int *)0xC2A1254 = 0x2A;
                }
                FUN_0c07f5c0();
            }
        } else {
            t44 = *(int *)0xC2A1254;
            *(unsigned int *)0xC2A1254 = (t44 + 0x1);
            if ((int)(t44 + 0x1) > (int)0x2A) {
                *(unsigned int *)0xC2A1254 = 0x0;
            }
            FUN_0c07f5c0();
        }
        t46 = *(int *)0xC2A1250;
        t47 = *(int *)0xC2A1254;
        t48 = FUN_0c039680(t47);
        *(unsigned char *)(((t46 + 0xC2A1248) + 0x0)) = t48;
        PutVM_Message(0x20, 0x14, 0x0, 235.0f, 208.0f);
        PutStringFixPfont(0x26, 0xC2A1248, 320.0f, 260.0f, 32.0f, 1.0f);
        t51 = 0xC041364;
        t52 = 0x0;
        while ((int)t52 < (int)0x3) {
            t53 = *(int *)0xC2A1250;
            if (t52 == t53) {
                t54 = *(int *)0xC1EE330;
                t51 = t54;
                if ((t51 & 0x10) != 0) {
                    t55 = putString(0x46, 0xC0A2150, (float)(((((t52 - 1) << 2) << 2) << 1) + 0x140), 276.0f, 1.0f);
                    t51 = t55;
                }
            } else {
                t56 = putString(0x26, 0xC0A2150, (float)(((((t52 - 1) << 2) << 2) << 1) + 0x140), 276.0f, 1.0f);
                t51 = t56;
            }
            t52 = (t52 + 0x1);
        }
        t57 = t51;
    }
    return t57;
}

int kmiInterruptHandlerSH(void)
{
    int t0;
    int t1;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t18;
    int t22;
    int t24;
    int t26;
    int t27;
    int t28;
    int t31;
    int t32;
    int t33;
    int t36;
    int t37;
    int t38;
    int t41;
    int t42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t51;
    int t52;
    int t55;
    int t58;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;

    t0 = *(int *)0xA05F6900;
    if ((t0 & 0x8) != 0) {
        t1 = FUN_0c16c1c0();
        if (t1 != 0) {
            kmiFatalErrorEntry(t1);
        }
    }
    if ((t0 & 0x20) != 0) {
        *(unsigned int *)0xA05F6900 = 0x20;
        t4 = *(int *)0xC2EA930;
        *(unsigned int *)0xC2EA930 = (t4 | 0x4);
    }
    if ((t0 & 0x4) != 0) {
        *(unsigned int *)0xA05F6900 = 0x7;
        *(unsigned int *)0xC2EA888 = 0x0;
        *(unsigned int *)0xC2F91A8 = 0x0;
        t6 = *(int *)0xFFD8000C;
        t7 = *(int *)0xC2F91E8;
        *(unsigned int *)0xC2F91EC = (t7 - t6);
        t8 = *(int *)0xC2EA9F8;
        if (t8 != 0) {
            *(unsigned int *)0xC2EA9F8 = 0x0;
            *(unsigned int *)0xC2F91C0 = 0x0;
            t9 = *(int *)0xC2EA94C;
            *(unsigned int *)0xA05F8048 = t9;
            t10 = *(int *)0xC2EA944;
            *(unsigned int *)0xA05F804C = t10;
            t11 = *(int *)0xC2EA934;
            *(unsigned int *)0xA05F8068 = t11;
            t12 = *(int *)0xC2EA938;
            *(unsigned int *)0xA05F806C = t12;
        } else {
            t13 = *(int *)0xC2EA9E0;
            *(unsigned int *)(((t13 << 2) + 0xC2EA9CC)) = 0x5;
        }
        t18 = *(int *)0xC2EA930;
        *(unsigned int *)0xC2EA930 = (t18 | 0x1);
        *(unsigned int *)0xC2F91F8 = 0x0;
    }
    if ((t0 & 0x80000) != 0) {
        t22 = *(int *)0xFFA0002C;
        *(unsigned int *)0xFFA0002C = (t22 & 0xFFFFFFFC);
        *(unsigned int *)0xA05F6900 = 0x80000;
        kmiExecuteDMAChain();
    }
    if ((t0 & 0x40) != 0) {
        *(unsigned int *)0xA05F6900 = 0x40;
        t24 = *(int *)0xC2EA930;
        *(unsigned int *)0xC2EA930 = (t24 | 0x40);
    }
    if ((t0 & 0x80) != 0) {
        *(unsigned int *)0xA05F6900 = 0x80;
        t26 = *(int *)0xC2EA9EC;
        *(unsigned int *)0xC2EA9EC = (t26 | 0x1);
        t27 = *(int *)0xC2EA9EC;
        t28 = *(int *)0xC2EA9E8;
        if (t28 == t27) {
            kmiFinalizeRender();
        }
    }
    if ((t0 & 0x100) != 0) {
        *(unsigned int *)0xA05F6900 = 0x100;
        t31 = *(int *)0xC2EA9EC;
        *(unsigned int *)0xC2EA9EC = (t31 | 0x2);
        t32 = *(int *)0xC2EA9EC;
        t33 = *(int *)0xC2EA9E8;
        if (t33 == t32) {
            kmiFinalizeRender();
        }
    }
    if ((t0 & 0x200) != 0) {
        *(unsigned int *)0xA05F6900 = 0x200;
        t36 = *(int *)0xC2EA9EC;
        *(unsigned int *)0xC2EA9EC = (t36 | 0x4);
        t37 = *(int *)0xC2EA9EC;
        t38 = *(int *)0xC2EA9E8;
        if (t38 == t37) {
            kmiFinalizeRender();
        }
    }
    if ((t0 & 0x400) != 0) {
        *(unsigned int *)0xA05F6900 = 0x400;
        t41 = *(int *)0xC2EA9EC;
        *(unsigned int *)0xC2EA9EC = (t41 | 0x8);
        t42 = *(int *)0xC2EA9EC;
        t43 = *(int *)0xC2EA9E8;
        if (t43 == t42) {
            kmiFinalizeRender();
        }
    }
    if ((t0 & 0x200000) != 0) {
        *(unsigned int *)0xA05F6900 = 0x200000;
        t46 = *(int *)0xC2EA9EC;
        *(unsigned int *)0xC2EA9EC = (t46 | 0x10);
        t47 = *(int *)0xC2EA9EC;
        t48 = *(int *)0xC2EA9E8;
        if (t48 == t47) {
            kmiFinalizeRender();
        }
    }
    t51 = *(int *)0xA05F6908;
    if ((0x4 & t51) != 0) {
        t52 = FUN_0c16c796();
        if (t52 != 0) {
            kmiFatalErrorEntry(t52);
        }
    }
    if ((0x8 & t51) != 0) {
        t55 = FUN_0c16c7ca();
        if (t55 != 0) {
            kmiFatalErrorEntry(t55);
        }
    }
    if ((t51 & 0x2) != 0) {
        t58 = FUN_0c16c7f2();
        if (t58 != 0) {
            kmiFatalErrorEntry(t58);
        }
    }
    t61 = t51;
    t62 = 0x0;
    while ((int)t62 < (int)0xA) {
        t63 = *(int *)0xC2EA930;
        if ((t63 & (((int)t62 >= 0) ? (0x1 << (t62 & 31)) : ((-(int)t62 & 31) ? ((int)0x1 >> (-(int)t62 & 31)) : ((int)0x1 >> 31)))) != 0) {
            t64 = *(int *)0xC2EA930;
            *(unsigned int *)0xC2EA930 = (t64 & (~(((int)t62 >= 0) ? (0x1 << (t62 & 31)) : ((-(int)t62 & 31) ? ((int)0x1 >> (-(int)t62 & 31)) : ((int)0x1 >> 31)))));
            t61 = t62;
            t61 = (t61 << 2);
            t61 = (t61 << 1);
            t65 = *(int *)((t61 + 0xC2EA8B4));
            t66 = *(int *)((t61 + 0xC2EA8B0));
            FUN_0c158894(t66);
        }
        t62 = (t62 + 0x1);
    }
    return 0x0;
}

int FUN_0c05dbdc(void)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float u8;
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
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t44;
    int t45;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    float u54;
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
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t90;
    int t91;
    int t95;
    int t96;
    int t99;
    int t100;
    int t119;
    int t101;
    int t103;
    int t104;
    int t105;
    int t107;
    int t108;
    int t109;
    int t111;
    int t112;
    int t123;
    int t132;
    int t124;
    int t125;
    int t126;
    int t127;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t145;
    int t147;
    int t148;
    int t149;
    int t153;
    int t23;
    int t41;
    int t69;
    int t87;
    int t116;
    int t113;
    int t114;
    int t129;

    t0 = *(int *)0xC1EE794;
    if (t0 == 0) {
        t1 = *(int *)0xC2A991C;
        if (t1 == 0) {
            FUN_0c05bb76(0x0);
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        } else {
            t3 = *(int *)0xC2A98FC;
            t4 = CheckKyakuArea(0xC179144, t3);
            if (t4 != 0) {
                t5 = *(int *)0xC2A98FC;
                if (t5 == 7) {
                    *(unsigned int *)0xC2A9A60 = 0x1;
                } else {
                    *(unsigned int *)0xC2A9A60 = 0x0;
                }
                t6 = *(int *)0xC2A98FC;
                if ((int)t6 >= (int)0x7) {
                    t7 = *(int *)0xC2A98FC;
                    if (t7 == 7) {
                        u8 = *(float *)0xC179228;
                        if (0.149999991f > (u8 < 0.0f ? -u8 : u8)) {
                            t9 = *(short *)0xC179264;
                            if (16.0f > ((float)t9 < 0.0f ? -(float)t9 : (float)t9)) {
                                t10 = *(int *)0xC2A9A5C;
                                if (t10 == 0) {
                                    t11 = *(int *)0xC2A98F8;
                                    *(unsigned int *)0xC2A9BA4 = t11;
                                    t12 = *(int *)0xC2A98F8;
                                    t13 = (int)((int)t12 / (int)0xE10);
                                    *(unsigned int *)0xC2A9B98 = t13;
                                    t14 = *(int *)0xC2A98F8;
                                    t15 = (int)((int)t14 % (int)0xE10);
                                    t16 = (int)((int)t15 / (int)0x3C);
                                    *(unsigned int *)0xC2A9B9C = t16;
                                    t17 = *(int *)0xC2A98F8;
                                    t18 = (int)((int)t17 % (int)0x3C);
                                    *(unsigned int *)0xC2A9BA0 = t18;
                                    t19 = *(int *)0xC2A98FC;
                                    if (t19 == 7) {
                                        FUN_0c05bb24();
                                        *(unsigned int *)0xC2A9A5C = 0x1;
                                        t23 = 0x3D;
                                    } else {
                                        *(unsigned int *)0xC1319E0 = 0x0;
                                        t23 = 0x35;
                                    }
                                    FUN_0c05fd70(t23);
                                }
                            }
                        }
                    }
                } else {
                    t29 = *(int *)0xC2A98F8;
                    *(unsigned int *)0xC2A9BA4 = t29;
                    t30 = *(int *)0xC2A98F8;
                    t31 = (int)((int)t30 / (int)0xE10);
                    *(unsigned int *)0xC2A9B98 = t31;
                    t32 = *(int *)0xC2A98F8;
                    t33 = (int)((int)t32 % (int)0xE10);
                    t34 = (int)((int)t33 / (int)0x3C);
                    *(unsigned int *)0xC2A9B9C = t34;
                    t35 = *(int *)0xC2A98F8;
                    t36 = (int)((int)t35 % (int)0x3C);
                    *(unsigned int *)0xC2A9BA0 = t36;
                    t37 = *(int *)0xC2A98FC;
                    if (t37 == 7) {
                        FUN_0c05bb24();
                        *(unsigned int *)0xC2A9A5C = 0x1;
                        t41 = 0x3D;
                    } else {
                        *(unsigned int *)0xC1319E0 = 0x0;
                        t41 = 0x35;
                    }
                    FUN_0c05fd70(t41);
                }
                t44 = *(int *)0xC2A98FC;
                if ((int)t44 < (int)0x7) {
                    t45 = *(int *)0xC2A98FC;
                    *(unsigned int *)0xC2A98FC = (t45 + 0x1);
                }
                *(unsigned int *)0xC1319DC = 0x0;
            }
        }
    } else {
        t49 = *(int *)0xC2A98FC;
        t50 = CheckKyakuArea(0xC179144, t49);
        if (t50 != 0) {
            t51 = *(int *)0xC2A98FC;
            if (t51 == 7) {
                *(unsigned int *)0xC2A9A60 = 0x1;
            } else {
                *(unsigned int *)0xC2A9A60 = 0x0;
            }
            t52 = *(int *)0xC2A98FC;
            if ((int)t52 >= (int)0x7) {
                t53 = *(int *)0xC2A98FC;
                if (t53 == 7) {
                    u54 = *(float *)0xC179228;
                    if (0.149999991f > (u54 < 0.0f ? -u54 : u54)) {
                        t55 = *(short *)0xC179264;
                        if (16.0f > ((float)t55 < 0.0f ? -(float)t55 : (float)t55)) {
                            t56 = *(int *)0xC2A9A5C;
                            if (t56 == 0) {
                                t57 = *(int *)0xC2A98F8;
                                *(unsigned int *)0xC2A9BA4 = t57;
                                t58 = *(int *)0xC2A98F8;
                                t59 = (int)((int)t58 / (int)0xE10);
                                *(unsigned int *)0xC2A9B98 = t59;
                                t60 = *(int *)0xC2A98F8;
                                t61 = (int)((int)t60 % (int)0xE10);
                                t62 = (int)((int)t61 / (int)0x3C);
                                *(unsigned int *)0xC2A9B9C = t62;
                                t63 = *(int *)0xC2A98F8;
                                t64 = (int)((int)t63 % (int)0x3C);
                                *(unsigned int *)0xC2A9BA0 = t64;
                                t65 = *(int *)0xC2A98FC;
                                if (t65 == 7) {
                                    FUN_0c05bb24();
                                    *(unsigned int *)0xC2A9A5C = 0x1;
                                    t69 = 0x3D;
                                } else {
                                    *(unsigned int *)0xC1319E0 = 0x0;
                                    t69 = 0x35;
                                }
                                FUN_0c05fd70(t69);
                            }
                        }
                    }
                }
            } else {
                t75 = *(int *)0xC2A98F8;
                *(unsigned int *)0xC2A9BA4 = t75;
                t76 = *(int *)0xC2A98F8;
                t77 = (int)((int)t76 / (int)0xE10);
                *(unsigned int *)0xC2A9B98 = t77;
                t78 = *(int *)0xC2A98F8;
                t79 = (int)((int)t78 % (int)0xE10);
                t80 = (int)((int)t79 / (int)0x3C);
                *(unsigned int *)0xC2A9B9C = t80;
                t81 = *(int *)0xC2A98F8;
                t82 = (int)((int)t81 % (int)0x3C);
                *(unsigned int *)0xC2A9BA0 = t82;
                t83 = *(int *)0xC2A98FC;
                if (t83 == 7) {
                    FUN_0c05bb24();
                    *(unsigned int *)0xC2A9A5C = 0x1;
                    t87 = 0x3D;
                } else {
                    *(unsigned int *)0xC1319E0 = 0x0;
                    t87 = 0x35;
                }
                FUN_0c05fd70(t87);
            }
            t90 = *(int *)0xC2A98FC;
            if ((int)t90 < (int)0x7) {
                t91 = *(int *)0xC2A98FC;
                *(unsigned int *)0xC2A98FC = (t91 + 0x1);
            }
            *(unsigned int *)0xC1319DC = 0x0;
        }
    }
    t95 = *(int *)0xC1319E0;
    if ((int)t95 <= (int)0x3B) {
        t96 = *(int *)0xC1319E0;
        *(unsigned int *)0xC1319E0 = (t96 + 0x1);
    }
    t99 = *(int *)0xC1319E0;
    t100 = *(int *)0xC2A9BA8;
    t119 = t99;
    if (t99 == 59) {
        if (t100 == 0) {
            t101 = *(int *)0xC1319E4;
            FUN_0c05fd70((t101 + 0x36));
            t103 = *(int *)0xC1319E4;
            t104 = (int)((int)(t103 + 0x1) % (int)0x2);
            *(unsigned int *)0xC1319E4 = t104;
            t116 = t104;
        } else {
            if (t100 == 1) {
                t105 = *(int *)0xC1319E8;
                FUN_0c05fd70((t105 + 0x3A));
                t107 = *(int *)0xC1319E8;
                t108 = (int)((int)(t107 + 0x1) % (int)0x2);
                t113 = t108;
                t114 = 0xC1319E8;
            } else {
                t109 = *(int *)0xC1319EC;
                FUN_0c05fd70((t109 + 0x38));
                t111 = *(int *)0xC1319EC;
                t112 = (int)((int)(t111 + 0x1) % (int)0x2);
                t113 = t112;
                t114 = 0xC1319EC;
            }
            *(unsigned int *)((t114 + 0x0)) = t113;
            t116 = t113;
        }
        t119 = t116;
    }
    t123 = *(int *)0xC1319DC;
    if ((int)t123 < (int)0xF0) {
        t132 = t119;
        if (t123 == 0) {
            t124 = *(int *)0xC2A98FC;
            t125 = *(int *)0xC2A98F8;
            t126 = *(int *)((((t124 << 2) + 0xC1319B0) + 0x0));
            if ((int)t126 > (int)t125) {
                *(unsigned int *)0xC2A9BA8 = 0x0;
                t129 = t119;
            } else {
                t127 = *(int *)((((t124 << 2) + 0xC1319B0) + 0x0));
                if ((int)(t127 + 0x12C) < (int)t125) {
                    *(unsigned int *)0xC2A9BA8 = 0x1;
                } else {
                    *(unsigned int *)0xC2A9BA8 = 0x2;
                }
                t129 = (t127 + 0x12C);
            }
            t132 = t129;
        }
        t137 = *(int *)0xC1319DC;
        *(unsigned int *)0xC1319DC = (t137 + 0x1);
        t138 = *(int *)0xC2A98FC;
        if ((int)t138 >= (int)0x1) {
            t139 = *(int *)0xC2A98FC;
            if ((int)t139 <= (int)0x7) {
                t140 = *(int *)0xC2A9A60;
                if (t140 == 0) {
                    t141 = *(int *)0xC1319DC;
                    t142 = (int)((int)t141 % (int)0x3C);
                    if ((int)t142 < (int)0x32) {
                        pfSetFont(0x2);
                        pfSize(1.0f, 1.0f);
                        t145 = *(int *)0xC2A9BA8;
                        if (t145 == 0) {
                            pfColor(0xFF00FF00, 0xFFCCFFCC, 0xFF00FF00, 0xFFCCFFCC);
                        } else {
                            t147 = *(int *)0xC2A9BA8;
                            t148 = 0xFFFFFF00;
                            t149 = 0xFFFFFFFF;
                            if (t147 == 1) {
                                t148 = 0xFFFF0000;
                                t149 = 0xFFFFCCCC;
                            }
                            pfColor(t148, t149, t148, t149);
                        }
                        FUN_0c0608de(0x140, 0x15E);
                        t153 = *(int *)0xC2A9BA4;
                        return pfCrazyBoxRecordTimePut(0x140, 0x190, t153);
                    }
                    return t142;
                }
                return t140;
            }
            return t132;
        }
        return t132;
    }
    return t119;
}

int FUN_0c05df6a(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;
    int t16;
    int t17;
    int t21;
    float u25;
    int t27;
    int t91;
    int t29;
    int t30;
    int t34;
    int t35;
    int t36;
    int t37;
    int t39;
    float u40;
    int t42;
    int t46;
    int t51;
    int t54;
    int t57;
    int t59;
    int t61;
    int t63;
    int t64;
    int t65;
    int t66;
    float u67;
    float u68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t85;
    int t86;
    int t90;
    int t95;
    int t88;
    int t89;
    int t83;
    int t84;
    int stk[15] = {0};

    t0 = *(int *)0xC2A9950;
    if (t0 == 0) {
        t1 = *(int *)0xC2A98F0;
        t2 = FUN_0c0418b8(t1);
        *(unsigned int *)0xC2A9BB4 = t2;
        FUN_0c0414b8();
        t4 = *(int *)0xC1EE210;
        t5 = *(int *)0xC1EE214;
        t6 = *(int *)0xC2A9BB4;
        t7 = *(int *)0xC2A11C4;
        t8 = FUN_0c0417c0(t7, (t4 + t5), t6);
        *(unsigned int *)0xC2A9BB0 = t8;
        t9 = *(int *)0xC1EE214;
        if (t9 != 15) {
            t10 = *(int *)0xC2A9BB0;
            t11 = 0x3;
            if (t10 == 0) {
                t11 = 0x5;
            }
            FUN_0c05fd70(t11);
        }
    }
    t14 = *(int *)0xC2A9950;
    if (t14 == 105) {
        t15 = *(int *)0xC1EE214;
        if (t15 != 15) {
            t16 = *(int *)0xC2A9BB0;
            t17 = 0x8;
            if (t16 == 0) {
                t17 = 0x7;
            }
            FUN_0c05fd70(t17);
        }
    }
    t21 = *(int *)0xC2A9BB0;
    if (t21 == 0) {
        *(unsigned int *)0xC2A9898 = 0x74;
    } else {
        *(unsigned int *)0xC2A9898 = 0x72;
    }
    FUN_0c05e2fa();
    *(float *)0xC2A989C = 320.0f;
    *(float *)0xC2A98A0 = 88.0f;
    u25 = *(float *)0xC2A994C;
    *(float *)0xC2A98A8 = (u25 + 1.0f);
    *(float *)0xC2A98AC = (u25 + 1.0f);
    nlSprPut(0xC2A9898);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    t27 = *(int *)0xC2A9950;
    t91 = 0x14;
    if ((int)t27 >= (int)0x57) {
        FUN_0c05e5cc(0x140, 0x173, 0xA, 0x5, 0.5f, 20.0f, 6.0f, 0.399999976f);
        t29 = *(int *)0xC2A9BAC;
        if ((int)t29 > 0) {
            t30 = *(int *)0xC2A9BAC;
            *(unsigned int *)0xC2A9BAC = (t30 - 32);
        }
        pfSetFont(0x2);
        pfSize(1.0f, 1.0f);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        t34 = *(int *)0xC1EE214;
        t35 = *(int *)0xC2A9BAC;
        if (t34 != 12) {
            t36 = *(int *)0xC1EE214;
            if (t36 == 4) {
                t37 = *(int *)0xC2A7614;
                pfCrazyBoxRecordComboPut((t35 + 0x140), 0xE8, t37);
            } else {
                t39 = *(int *)0xC1EE214;
                if (t39 == 0) {
                    u40 = *(float *)0xC2A9A24;
                    pfCrazyBoxRecordDistPut((t35 + 0x140), 0xE8, 0x1, u40);
                } else {
                    t42 = *(int *)0xC2A98F8;
                    pfCrazyBoxRecordTimePut((t35 + 0x140), 0xE8, t42);
                }
            }
        } else {
            t46 = *(int *)0xC2A7614;
            pfCrazyBoxRecordComboPut((t35 + 0x140), 0xE8, t46);
        }
        pfSetFont(0x0);
        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        t51 = *(int *)0xC2A9BAC;
        FUN_0c0608de((0x140 - t51), 0x90);
        pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
        t54 = *(int *)0xC2A9BAC;
        FUN_0c0608de((0x140 - t54), 0xD6);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        t57 = *(int *)0xC2A9BAC;
        FUN_0c0608ac((0xAC - t57), 0x144);
        t59 = *(int *)0xC2A9BAC;
        FUN_0c0608de((0x140 - t59), 0x144);
        t61 = *(int *)0xC2A9BAC;
        FUN_0c0608ac((0x1A4 - t61), 0x144);
        t63 = *(short *)0xC2A11C4;
        t64 = PutStringFixPfont(0x26, ((short)((short)t63 * (short)0x788) + 0xC28A4F8), 320.0f, 164.0f, 32.0f, 1.0f);
        t65 = t64;
        t66 = 0x0;
        u67 = 320.0f;
        u68 = 1.0f;
        while ((int)t66 < (int)0x3) {
            t65 = t66;
            if (t65 == 1) {
                t69 = *(int *)0xC2A9BAC;
                *(unsigned int *)(((int)stk + 12)) = t69;
            } else {
                t70 = *(int *)0xC2A9BAC;
                *(unsigned int *)(((int)stk + 12)) = (-t70);
            }
            t71 = *(int *)(((int)stk + 12));
            t72 = *(int *)0xC1EE210;
            t65 = 0xC2A11C4;
            t73 = *(int *)0xC1EE214;
            t74 = *(int *)0xC2A9BB4;
            u68 = (float)(((((t66 << 1) + t66) << 2) << 1) + 0x15E);
            u67 = (float)(t71 + 0xBE);
            t75 = *(int *)((t65 + 0x0));
            t76 = FUN_0c0417c0(t75, (t72 + t73), t74);
            t65 = t76;
            if (t66 == t65) {
                t77 = *(int *)0xC1EE330;
                if ((t77 & 0x8) != 0) {
                    t78 = *(int *)0xC1EE210;
                    t79 = *(int *)0xC1EE214;
                    t83 = 0x47;
                    t84 = ((t78 << 2) + t79);
                } else {
                    t80 = *(int *)0xC1EE210;
                    t81 = *(int *)0xC1EE214;
                    t83 = 0x27;
                    t84 = ((t80 << 2) + t81);
                }
                t88 = t83;
                t89 = t84;
            } else {
                t85 = *(int *)0xC1EE210;
                t86 = *(int *)0xC1EE214;
                t88 = 0x27;
                t89 = ((t85 << 2) + t86);
            }
            t90 = FUN_0c03ce68(t88, 0xFFFFFFFF, t89, t66, t66, 0x1, u67, u68);
            t65 = t90;
            t66 = (t66 + 0x1);
        }
        t91 = t65;
    }
    t95 = *(int *)0xC2A9950;
    *(unsigned int *)0xC2A9950 = (t95 + 0x1);
    return t91;
}
