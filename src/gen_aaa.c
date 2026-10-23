/* Straight-line functions with calls and guards (batch gen_aaa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenFname(int, int);
int ADXT_Stop(void);
int adxt_start_stm(int);
int ADXT_StartFname(int a4, int a5);

int ADXT_StartFname(int a4, int a5)
{
    int t3;

    ADXT_Stop();
    ADXCRS_Lock();
    t3 = ADXSTM_OpenFname(a5, (*(int *)((a4 + 0x10))));
    *(unsigned int *)((a4 + 0x8)) = t3;
    if (t3 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0xC175488, a5);
    } else {
        adxt_start_stm(a4);
    }
    return ADXCRS_Unlock();
}
