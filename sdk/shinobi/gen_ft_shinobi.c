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


