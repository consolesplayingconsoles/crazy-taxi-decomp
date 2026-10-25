/* Straight-line functions with calls and guards (batch gen_atd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Init(void);
int ADXERR_Init(void);
int ADXF_Init(void);
int ADXRNA_Init(void);
int ADXSJD_Init(void);
int ADXSTM_Init(void);
int SJMEM_Init(void);
int SJRBF_Init(void);
int SJUNI_Init(void);
int memset(int, int, int);
int thunk_mwRnaErrEntryFunc(int, int);
int ADXT_Init(void);

int ADXT_Init(void)
{
    ADXF_Init();
    SJUNI_Init();
    SJRBF_Init();
    SJMEM_Init();
    ADXCRS_Init();
    ADXRNA_Init();
    ADXSTM_Init();
    ADXSJD_Init();
    ADXERR_Init();
    thunk_mwRnaErrEntryFunc(0xC1519A4, 0x0);
    return memset(0xC177AE0, 0x0, 0x460);
}
