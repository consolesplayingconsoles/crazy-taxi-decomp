/* Straight-line functions with calls and guards (batch gen_bp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXB_EntryData(int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ADXSJD_GetBlkSmpl(int);
int ADXSJD_GetTotalNumSmpl(int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int bootJumpVector(void);
int kmiDefaultInterruptHandler(int a4);
int SJUNI_PutChunk(int a4, int a5, int a6);
int SJUNI_UngetChunk(int a4, int a5, int a6);
int adxsjd_decexec_start(int a4);


int kmiDefaultInterruptHandler(int a4)
{
    int t0;
    int t1;

    t0 = *(int *)((((a4 << 2) << 1) + 0xC2EA8B0));
    t1 = *(int *)(((0xC2EA8B0 + ((a4 << 2) << 1)) + 0x4));
    return ((int (*)(int))(t0))(t1);
}


