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

int bootJumpVector(void)
{
    int t0;
    int t1;

    t0 = *(int *)0x8C00FA18;
    t1 = *(int *)(((((unsigned int)((unsigned int)t0 >> 2) >> 1) + 0x8C00F5C0) + 0x0));
    return ((int (*)(int))(t1))(t1);
}


