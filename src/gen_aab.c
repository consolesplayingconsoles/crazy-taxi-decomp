/* Straight-line functions with calls and guards (batch gen_aab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXT_Stop(void);
int SJMEM_Create(int, int);
int adxt_start_sj(int, int);
int FUN_0c151b9c(int a4, int a5, int a6);

int FUN_0c151b9c(int a4, int a5, int a6)
{
    int t1;
    int t3;
    int t4;

    ADXT_Stop();
    t1 = *(int *)((a5 + 0x4));
    if (((int)a6 < (int)((((unsigned char)(signed char)((unsigned int)((unsigned int)t1 >> 16) >> 8) | (((int)t1 >> 8) & 0xFF00)) | ((t1 << 8) & 0xFF0000)) | ((t1 << 16) << 8))) && ((int)a6 >= 0)) {
        ADXCRS_Lock();
        t3 = *(int *)((a5 + (((a6 + 0x1) << 1) << 2)));
        t4 = SJMEM_Create((((((unsigned char)(signed char)((unsigned int)((unsigned int)t3 >> 16) >> 8) | (((int)t3 >> 8) & 0xFF00)) | ((t3 << 8) & 0xFF0000)) | ((t3 << 16) << 8)) + a5), 0x40000000);
        if (t4 == 0) {
            ADXCRS_Unlock();
            ADXERR_CallErrFunc(0xC1754E0);
        } else {
            adxt_start_sj(a4, t4);
            *(unsigned char *)((a4 + 0x2)) = 0x2;
        }
        return ADXCRS_Unlock();
    }
    return 0xFF00;
}
