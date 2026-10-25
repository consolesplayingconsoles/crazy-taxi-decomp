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
