/* Straight-line functions with calls and guards (batch gen_arj): generated from the code and checked by tests. Calls are
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
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_Seek(int, int);
int ADXSTM_SetEos(int, int);
int ADXT_Stop(int);
int adxt_set_outpan(int);
int gdFsOpen(int, int, int, int);
int mwRnaErrCallFunc(int, int, int, int, int);
int nlsndG2DmaRequest(int, int, int, int);
int strncpy(int, int, int);
int adxt_stat_decinfo(int a4);
int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);

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
    *(unsigned int *)(((0x48 + a4) + 0x0)) = t17;
    t21 = ADXSJD_GetBlkSmpl(t0);
    *(unsigned int *)(((0x48 + a4) + 0x0)) = (((int)((int)((*(int *)((a4 + 0x48))) + (t21 << 1)) / (int)(t21 << 1))) * (t21 << 1));
    ADXSJD_SetMaxDecSmpl(t0, (*(int *)((a4 + 0x48))));
    if ((int)t9 > 0) {
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            *(unsigned int *)((a4 + 0x50)) = 0x0;
        } else {
            t29 = ADXSJD_GetLpEndOfst(t0);
            *(unsigned int *)((a4 + 0x50)) = (0x800 - ((int)((int)t29 % (int)0x800)));
            *(unsigned int *)(((0x50 + a4) + 0x0)) = ((int)((int)(*(int *)(((0x50 + a4) + 0x0))) % (int)0x800));
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
    ADXRNA_SetOutVol((*(int *)((a4 + 0xC))), (*(short *)((a4 + 0x40))));
    adxt_set_outpan(a4);
    if ((*(int *)((a4 + 0x74))) != 0) {
        ADXAMP_SetSfreq((*(int *)((a4 + 0x74))), t55);
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

int mwlSbTrnsDat(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t5;
    int t10;

    t0 = *(int *)((a4 + 0x10));
    t5 = nlsndG2DmaRequest((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0))) + ((int)((int)(a6 * t0) / (int)0x8))), ((int)((int)(a8 * t0) / (int)0x8)));
    if ((int)t5 < 0) {
        if (t5 == -1) {
            return (mwRnaErrCallFunc(t5, 0x0, 0x0, 0x0, 0xC176C54));
        }
        if (t5 == -2) {
            return (mwRnaErrCallFunc(t5, 0x0, 0x0, 0x0, 0xC176C84));
        }
        if (t5 == -3) {
            return (mwRnaErrCallFunc(t5, 0x0, 0x0, 0x0, 0xC176CC4));
        }
        t10 = t5;
        if (t5 == -4) {
            t10 = (mwRnaErrCallFunc(t5, 0x0, 0x0, 0x0, 0xC176D04));
        }
        return t10;
    }
    return t5;
}

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t7;

    t0 = gdFsOpen(a4, 0x0, a6, a7);
    if (t0 == 0) {
        ADXERR_CallErrFunc(t0, 0x0, 0x0, 0x0, 0xC1764F8);
        t7 = 0x0;
    } else {
        t2 = ADXSTMF_Create(t0, a5, (((a6 << 8) << 2) << 1), a7);
        if (t2 != 0) {
            strncpy((t2 + 0x40), a4, 0x20);
            ADXSTM_Seek(t2, 0x0);
        }
        t7 = t2;
    }
    return t7;
}
