/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlSetBackColor(int, int, int);
extern int nlLineCalcFogA();
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
extern int syIntAdrChk_prints();
int syIntAdrChk_printh(int);
int nlLocate(int, int);
extern int nlPrintf();
int nlSetFontSize(int, int);
int syIntAdrChk_dumpline(int a4, int a5, int a6);
int Warning(void);
int nlLineCalcColor(int a4, int a5);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int syIntAdrChk_dumpline(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t10;

    t0 = ((int (*)(void))(syIntAdrChk_prints))();
    if ((int)a5 < (int)(a5 + a6)) {
        t1 = a5;
        t2 = (a5 << 2);
        do {
            t3 = *(int *)0xC2FB794;
            t4 = *(int *)((t2 + t3));
            syIntAdrChk_printh(t4);
            t6 = ((int (*)(int))(syIntAdrChk_prints))(0xC176F70);
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x4);
        } while ((int)t1 < (int)(a5 + a6));
    }
    t10 = ((int (*)(int))(syIntAdrChk_prints))(0xC176F68);
    return t10;
}


