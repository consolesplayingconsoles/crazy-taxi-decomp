/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b674(int);
int FUN_0c05be5c(void);
int FUN_0c05c2d4(void);
int FUN_0c05c304(void);
int FUN_0c05c3fe(void);
int FUN_0c05c470(void);
int FUN_0c05c614(void);
int FUN_0c05c72e(void);
int FUN_0c05c7ac(void);
int FUN_0c05d076(void);
int FUN_0c05d21c(void);
int FUN_0c05d28e(int);
int FUN_0c05d4fc(void);
int FUN_0c05d556(void);
int FUN_0c05da9c(void);
int FUN_0c05dbdc(void);
int FUN_0c05df6a(void);
int FUN_0c05e944(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdc_StopStreamVoice(int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
#pragma inline_asm(iaOcbp)
static void iaOcbp(void *p)
{
    .DATA.W H'04A3
}
#pragma inline_asm(iaOcbwb)
static void iaOcbwb(void *p)
{
    .DATA.W H'04B3
}
int FUN_0c03b698(int a4);
int FUN_0c14ecd0(int a4, int a5);
void FUN_0c14ef2e(int a4, int a5);
void FUN_0c14f182(int a4, int a5);
int FUN_0c1697ee(int a4, int a5);
int execDCmini(void);
int kmChangeContextDSTBlendMode(int a4);
int kmChangeContextSRCBlendMode(int a4);

int FUN_0c03b698(int a4)
{
    int t6;
    int t11;
    int t12;

    if ((unsigned int)a4 < (unsigned int)0x11) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC2A1210 = 0x0;
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDE0;
                *(unsigned int *)0xC2A11B0 = 0x1;
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDC8;
                *(unsigned int *)0xC2A11B0 = 0x1;
            }
                break;
            case 6:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC78;
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC80;
            }
                break;
            case 10:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DC90;
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCA0;
            }
                break;
            case 14:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCB0;
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCC0;
            }
                break;
            case 18:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCD0;
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD70;
            }
                break;
            case 22:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD48;
            }
                break;
            case 24:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCF8;
            }
                break;
            case 26:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DD38;
            }
                break;
            case 28:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DCE0;
            }
                break;
            case 30:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDA8;
            }
                break;
            default:
            {
                *(unsigned int *)0xC2A1210 = 0xC09DDB8;
            }
                break;
        }
    } else {
        *(unsigned int *)0xC2A1210 = 0x0;
    }
    if (a4 == 0) {
        *(unsigned int *)0xC2A1208 = 0x0;
        *(unsigned int *)0xC2A11B0 = 0x0;
        *(unsigned int *)0xC2A1214 = 0x0;
    } else {
        t6 = *(int *)0xC2A1208;
        *(unsigned int *)0xC2A1208 = ((t6 & 0xFFFFFFF0) | 0x2);
        *(unsigned int *)0xC2A1214 = 0x1;
    }
    *(unsigned int *)0xC2A11F4 = 0x0;
    t11 = 0xC2A11F8;
    t12 = 0x0;
    for (;;) {
        if ((int)t12 >= (int)0x4) {
            break;
        }
        *(unsigned int *)((t11 + 0x0)) = 0x0;
        t11 = (t11 + 0x4);
        t12 = (t12 + 0x1);
    }
    return FUN_0c03b674(0x0);
}

int FUN_0c14ecd0(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int stk[6] = {0};

    if (a5 == 0) {
        return ((int (*)(int, int))(0xC14EF24))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        t0 = _builtin_get_imask();
        *(unsigned short *)(((int)stk + 4)) = t0;
        _builtin_set_imask(0xF);
        return ((int (*)(int, int))(0xAC14ED64))(a4, a5);
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0xC14EF24))(t1, t2);
}

void FUN_0c14ef2e(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int stk[6] = {0};

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        t0 = _builtin_get_imask();
        *(unsigned short *)(((int)stk + 4)) = t0;
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC14EFB8))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbp((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

void FUN_0c14f182(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int stk[6] = {0};

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x10000) {
        t0 = _builtin_get_imask();
        *(unsigned short *)(((int)stk + 4)) = t0;
        _builtin_set_imask(0xF);
        ((int (*)(int, int))(0xAC14F20C))(a4, a5);
    return;
    }
    t1 = (0x9FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbwb((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
}

int FUN_0c1697ee(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int stk[6] = {0};

    if (a5 == 0) {
        return ((int (*)(int, int))(0xC169A10))(a4, a5);
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        t0 = _builtin_get_imask();
        *(unsigned short *)(((int)stk + 4)) = t0;
        _builtin_set_imask(0xF);
        return ((int (*)(int, int))(0xAC169880))(a4, a5);
    }
    t1 = (0x1FFFFFE0 & a4);
    t2 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t1);
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x20);
        if (t2 == 0) {
            break;
        }
    }
    return ((int (*)(int, int))(0xC169A10))(t1, t2);
}

int execDCmini(void)
{
    int t0;
    int t9;
    int t18;
    int t22;
    int t26;
    int t30;
    int t34;
    int t40;
    int t58;
    int t41;
    int t42;
    int t43;
    int t52;
    int t44;
    int t47;
    int t45;
    int t46;
    int t66;
    int t97;
    int t67;
    int t88;
    int t68;
    int t79;
    int t70;
    int t69;
    int t106;
    int t110;
    int t122;
    int t111;
    int t113;
    int t112;

    t0 = *(int *)0xC1EE214;
    if ((unsigned int)t0 < (unsigned int)0x13) {
        switch ((t0 << 1)) {
            case 0:
            {
                FUN_0c05c470();
            }
                break;
            case 2:
            {
                FUN_0c05c72e();
            }
                break;
            case 4:
            {
                FUN_0c05e944();
            }
                break;
            case 6:
            {
                FUN_0c05c7ac();
            }
                break;
            case 8:
            {
                FUN_0c05c614();
            }
                break;
            case 10:
            case 12:
            case 26:
            {
                FUN_0c05d076();
            }
                break;
            case 14:
            case 22:
            case 34:
            {
                FUN_0c05d556();
            }
                break;
            case 16:
            {
                FUN_0c05d21c();
            }
                break;
            case 18:
            case 20:
            case 28:
            case 36:
            {
                t9 = *(int *)0xC2A9900;
                FUN_0c05d28e(t9);
            }
                break;
            case 24:
            {
                FUN_0c05da9c();
            }
                break;
            case 30:
            {
                FUN_0c05dbdc();
                FUN_0c05d076();
            }
                break;
            default:
            {
                FUN_0c05d076();
            }
                break;
        }
    } else {
        FUN_0c05d076();
    }
    t18 = *(short *)0xC2A992C;
    if (((unsigned short)t18 & 0x4) == 4) {
        FUN_0c05be5c();
    }
    t22 = *(short *)0xC2A992C;
    if (((unsigned short)t22 & 0x10) == 16) {
        FUN_0c05c2d4();
    }
    t26 = *(short *)0xC2A992C;
    if (((unsigned short)t26 & 0x20) == 32) {
        FUN_0c05c304();
    }
    t30 = *(short *)0xC2A992C;
    if (((unsigned short)t30 & 0x40) == 64) {
        FUN_0c05df6a();
    }
    t34 = *(short *)0xC2A992C;
    if (((unsigned short)t34 & 0x100) == 0x100) {
        FUN_0c05d4fc();
    }
    t40 = *(int *)0xC1EE788;
    t58 = t40;
    if (t40 == 1) {
        t41 = *(int *)0xC1EE214;
        t42 = *(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0));
        t43 = *(int *)0xC2A98F8;
        t52 = t40;
        if ((int)(t42 * 0x3C) > (int)t43) {
            t44 = *(int *)0xC2A9904;
            t47 = t44;
            if (t44 == 0) {
                t45 = *(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0));
                t46 = *(int *)0xC1EE794;
                *(unsigned int *)0xC2A98F8 = ((t45 * 0x3C) - t46);
                t47 = t45;
            }
            t52 = t47;
        }
        t58 = t52;
    }
    t66 = *(int *)0xC2A9934;
    t97 = t58;
    if (t66 == 0) {
        t67 = *(int *)0xC2A9930;
        t88 = t58;
        if (t67 == 0) {
            t68 = *(int *)0xC1EE214;
            t79 = t58;
            if (t68 != 0) {
                t70 = t68;
                if (t68 != 20) {
                    t69 = FUN_0c05c3fe();
                    t70 = t69;
                }
                t79 = t70;
            }
            t88 = t79;
        }
        t97 = t88;
    }
    t106 = *(int *)0xC2A11B0;
    if (t106 == 0) {
        *(unsigned int *)0xC2A9A68 = 0x0;
    }
    t110 = *(int *)0xC2A11B0;
    t122 = t97;
    if (t110 != 0) {
        t111 = *(int *)0xC2A9A68;
        t113 = 0xC2A9A68;
        if (t111 == 0) {
            t112 = gdc_StopStreamVoice(0x0);
            *(unsigned int *)0xC2A9A68 = 0x1;
            t113 = t112;
        }
        t122 = t113;
    }
    return t122;
}

int kmChangeContextDSTBlendMode(int a4)
{
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
    int t10;
    int t11;
    int t22;

    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                t0 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((t0 & 0x1FFFFFFF) | 0xA0000000);
                t1 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t1) | 0x10000000);
            }
                break;
            case 2:
            {
                t2 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((t2 & 0x1FFFFFFF) | 0x80000000);
                t3 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t3) | 0x14000000);
            }
                break;
            case 4:
            {
                t4 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t4) | 0x18000000);
            }
                break;
            case 6:
            case 10:
            {
            }
                break;
            case 8:
            {
                t5 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t5) | 0x1C000000);
            }
                break;
            case 12:
            {
                t6 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t6) | 0x14000000);
            }
                break;
            case 14:
            {
                t7 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t7) | 0xC000000);
            }
                break;
            case 16:
            {
                t8 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t8) | 0x10000000);
            }
                break;
            case 18:
            {
                t9 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t9) | 0x8000000);
            }
                break;
            case 20:
            {
                t10 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t10) | 0x4000000);
            }
                break;
            default:
            {
                t11 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = (0xE3FFFFFF & t11);
            }
                break;
        }
    }
    t22 = *(int *)0xC2EABB0;
    *(unsigned int *)0xC17830C = t22;
    return 0x0;
}

int kmChangeContextSRCBlendMode(int a4)
{
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
    int t10;
    int t11;
    int t24;

    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                t0 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t0) | 0xA0000000);
                t1 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t1) | 0x10000000);
            }
                break;
            case 2:
            {
                t2 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t2) | 0x80000000);
                t3 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0xE3FFFFFF & t3) | 0x14000000);
            }
                break;
            case 4:
            {
                t4 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t4) | 0xC0000000);
            }
                break;
            case 6:
            {
                t5 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t5) | 0x40000000);
            }
                break;
            case 8:
            {
                t6 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t6) | 0xE0000000);
            }
                break;
            case 10:
            {
                t7 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t7) | 0x60000000);
            }
                break;
            case 12:
            {
                t8 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t8) | 0xA0000000);
            }
                break;
            case 14:
            case 18:
            {
            }
                break;
            case 16:
            {
                t9 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t9) | 0x80000000);
            }
                break;
            case 20:
            {
                t10 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = ((0x1FFFFFFF & t10) | 0x20000000);
            }
                break;
            default:
            {
                t11 = *(int *)0xC2EABB0;
                *(unsigned int *)0xC2EABB0 = (0x1FFFFFFF & t11);
            }
                break;
        }
    }
    t24 = *(int *)0xC2EABB0;
    *(unsigned int *)0xC17830C = t24;
    return 0x0;
}
