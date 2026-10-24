/* Straight-line functions with calls and guards (batch gen_arh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeByte(int, int);
int ADXSTM_GetFsizeSct(int, int);
int adxf_SetFileInfo(int a4, int a5);

int adxf_SetFileInfo(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t18;
    int t13;
    int t9;
    int stk[9];

    t0 = ADXSTM_GetFad(a5, (((int)stk + 4) + 0x8));
    if ((int)t0 < 0) {
        ADXERR_CallErrFunc(0xC175754, a5, 0x0, 0x0, *(int *)((int)stk + 4));
        t18 = t0;
    } else {
        t2 = ADXSTM_GetFsizeSct(a5, (((int)stk + 4) + 0x4));
        if ((int)t2 < 0) {
            ADXERR_CallErrFunc(0xC17577C, a5, 0x0, 0x0, *(int *)((int)stk + 4));
            t13 = t2;
        } else {
            t4 = ADXSTM_GetFsizeByte(a5, ((int)stk + 4));
            if ((int)t4 < 0) {
                ADXERR_CallErrFunc(0xC1757B0, a5, 0x0, 0x0, *(int *)((int)stk + 4));
                t9 = t4;
            } else {
                *(unsigned int *)((a4 + 0xC)) = (*(int *)(((int)stk + 12)));
                *(unsigned int *)((a4 + 0x10)) = (*(int *)(((int)stk + 8)));
                *(unsigned int *)((a4 + 0x14)) = (*(int *)(((int)stk + 4)));
                t9 = 0x0;
            }
            t13 = t9;
        }
        t18 = t13;
    }
    return t18;
}
