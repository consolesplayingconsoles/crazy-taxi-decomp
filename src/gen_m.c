/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813e0(int, int, int);
int syBtCfgSet(int, int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int *);

void nlLog(float f4)
{
    if (!(0.0f > f4)) {
        if ((f4 == 0.0f)) {
        return;
        }
        }
}

int syCfgGetLanguage(int *out)
{
    int lang;
    int bt;
    int saved;

    if (out == 0) {
        return -1;
    }
    *out = 0;
    bt = *(int *)0xC177AC8;
    if (bt == 0) {
        return -1;
    }
    if (syBtCfgSet(0, bt) == -1) {
        return -1;
    }
    saved = *(signed char *)0x8C00007D;
    if (saved == -1) {
        syCfgGetDefaultLanguage(&lang);
        if (lang == -1) {
            *out = 1;
        } else {
            *out = syCfgConvLang(lang);
        }
    } else {
        *out = saved;
    }
    return 0;
}

void FUN_0c172f1e(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC1771F4, 0x4);
    if ((t0 == 0)) {
        t1 = FUN_0c0813e0((a4 + 0x8), 0xC1771FC, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}

void ADXB_CheckAu(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC177204, 0x4);
    if (!(t0 == 0)) {
        t1 = FUN_0c0813e0(a4, 0xC17720C, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}

void ADXB_CheckWav(int a4)
{
    int t0;
    int t1;

    t0 = FUN_0c0813e0(a4, 0xC177218, 0x4);
    if ((t0 == 0)) {
        t1 = FUN_0c0813e0((a4 + 0x8), 0xC177228, 0x4);
        if ((t1 == 0)) {
        return;
        }
        }
}
