/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_SetCoef(int, int, int);
int ADX_DecodeInfo(int, int);
int ADX_DecodeInfoExADPCM2(int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int CheckKyakuArea(int, int);
int num2char(int);
int char2num(int);
int PutRecords(int, int, int, int, int, int, float, float);
int SetTotalRecords(void);
int SeachRankTotal(int, int, int);
int CheckRanking(int);
int Start_Excellent(void);
int Start_Fault(int);
int Wobble_Record_Window(void);
int Put_Window_SpriteXtoY(int, int, int, int, float, float, float, float);
int Start_CrazyBox_Voice(int);
int pfTextPut(int, int);
int pfTextCenterPut(int, int);
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
int Exec_Fault(void);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
int EditEntryName(int a4);
int kmiInterruptHandlerSH(void);
int Exec_Check_Point(void);
int Put_Record_Window(void);

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


