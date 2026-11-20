/* Straight-line functions with calls and guards (batch gen_ati): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXAMP_SetSfreq(int, int);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXRNA_SetBitPerSmpl(int, int);
int ADXRNA_SetNumChan(int, int);
int ADXRNA_SetOutVol(int, int);
int ADXRNA_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXRNA_SetTotalNumSmpl(void);
int ADXRNA_SetTransSw(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetFormat(int);
int ADXSJD_GetLpEndOfst(int);
int ADXSJD_GetLpEndPos(int);
int ADXSJD_GetNumChan(int);
int ADXSJD_GetNumLoop(int);
int ADXSJD_GetOutBps(int);
int ADXSJD_GetSfreq(int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_GetStat(int);
int ADXSJD_GetTotalNumSmpl(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(int);
int adxt_set_outpan(int);
int adxt_stat_decinfo(int a4);
struct o40_short { char p[0x40]; short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };


int adxt_stat_decinfo(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t11;
    int t13;
    int t21;
    int t29;
    int t41;
    int t55;
    int t56;
    int t58;
    int t77;
    int t78;
    int t17;

    t0 = *(int *)((a4 + 0x4));
    t1 = ADXSJD_GetStat(t0);
    if (t1 != 2) {
        return t1;
    }
    t2 = ADXSJD_GetNumChan(t0);
    if ((int)t2 > (int)(*(signed char *)((a4 + 0x3)))) {
        *(volatile signed char *)((a4 + 0x3));
        ADXERR_CallErrFunc(t2, 0x0, 0x0, 0x0, 0xC176588);
        return ADXT_Stop(a4);
    }
    t8 = ADXSJD_GetSfreq(t0);
    t9 = ADXSJD_GetNumLoop(t0);
    if ((int)t9 > 0) {
        t11 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
        t17 = ((t11 << 1) + t11);
    } else {
        t13 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
        t17 = (((int)((unsigned int)((int)((unsigned int)((t13 << 1) + t13) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t13 << 1) + t13))) ? 1u : 0u))) >> 1);
    }
    (((struct o48_uint *)(a4))->v) = t17;
    t21 = ADXSJD_GetBlkSmpl(t0);
    (((struct o48_uint *)(a4))->v) = (((int)((int)(((((struct o48_int *)(a4))->v)) + (t21 << 1)) / (int)(t21 << 1))) * (t21 << 1));
    ADXSJD_SetMaxDecSmpl(t0, ((((struct o48_int *)(a4))->v)));
    if ((int)t9 > 0) {
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            (((struct o50_uint *)(a4))->v) = 0x0;
        } else {
            t29 = ADXSJD_GetLpEndOfst(t0);
            (((struct o50_uint *)(a4))->v) = (0x800 - ((int)((int)t29 % (int)0x800)));
            (((struct o50_uint *)(a4))->v) = ((int)((int)((((struct o50_int *)(a4))->v)) % (int)0x800));
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), ((int)((int)((0x800 + t29) - 1) / (int)0x800)));
            ADXSTM_EntryEosFunc((*(int *)((a4 + 0x8))), 0xC168FCC, a4);
        }
        t41 = ADXSJD_GetLpEndPos(t0);
        ADXSJD_SetTrapNumSmpl(t0, t41);
        ADXSJD_SetTrapDtLen(t0, 0x0);
        ADXSJD_SetTrapCnt(t0, 0x0);
        ADXSJD_EntryTrapFunc(t0, 0xC168F00, a4);
    } else {
        if ((*(int *)((a4 + 0x8))) != 0) {
            ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
        }
    }
    t55 = ADXSJD_GetSfreq(t0);
    t56 = ADXSJD_GetNumChan(t0);
    ADXSJD_GetTotalNumSmpl(t0);
    t58 = ADXSJD_GetOutBps(t0);
    ADXRNA_SetBitPerSmpl((*(int *)((a4 + 0xC))), t58);
    ADXRNA_SetSfreq((*(int *)((a4 + 0xC))), t55);
    ADXRNA_SetNumChan((*(int *)((a4 + 0xC))), t56);
    *(volatile int *)((a4 + 0xC));
    ADXRNA_SetTotalNumSmpl();
    ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), ((((struct o40_short *)(a4))->v)));
    adxt_set_outpan(a4);
    if (((((struct o74_int *)(a4))->v)) != 0) {
        ADXAMP_SetSfreq(((((struct o74_int *)(a4))->v)), t55);
    }
    t77 = ADXSJD_GetFormat(t0);
    if (t77 == 2) {
        t78 = ADXSJD_GetSpsdInfo(t0);
        ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t78);
    }
    ADXRNA_SetTransSw((*(int *)((a4 + 0xC))), 0x1);
    *(unsigned char *)((a4 + 0x1)) = 0x2;
    return 0x2;
}
