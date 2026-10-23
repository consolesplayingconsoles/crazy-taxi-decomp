/* Straight-line functions with calls and guards (batch gen_ft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int Put_JumpDistance(void);
int Exec_Excellent(void);
int Exec_Fault(void);
int Set_Record_Time(void);
int Exec_Crazy_Jump(void);
int Exec_DCmini_Game4(void);
int Exec_DCmini_Game1(void);
int Exec_Crazy_Bowling(void);
int Check_DCmini_End(void);
int Exec_DCmini_Game8(void);
int Exec_DCmini_Game9(int);
int Put_PoleMarriageKiss(void);
int Exec_DCmini_Game7(void);
int Exec_DCmini_Game12(void);
int Exec_Check_Point(void);
int Put_Record_Window(void);
int Exec_Crazy_Balloons(void);
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
int SetWindow(int a4);
int syCacheOCBI(int a4, int a5);
void syCacheOCBP(int a4, int a5);
void syCacheOCWB(int a4, int a5);
int ADXF_Ocbi(int a4, int a5);
int execDCmini(void);
int kmChangeContextDSTBlendMode(int a4);
int kmChangeContextSRCBlendMode(int a4);


int syCacheOCBI(int a4, int a5)
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

void syCacheOCBP(int a4, int a5)
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

void syCacheOCWB(int a4, int a5)
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

int ADXF_Ocbi(int a4, int a5)
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
