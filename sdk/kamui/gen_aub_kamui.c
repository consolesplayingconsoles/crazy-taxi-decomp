/* Straight-line functions with calls and guards (batch gen_aub): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(int);
int ADXSTMF_Create(int, int, int, int);
int ADXSTM_OpenFname(int, int);
int ADXSTM_Tell(int);
int ADXT_Stop(int);
int SJMEM_Create(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int adxt_start_sj(int, int);
int adxt_start_stm(int);
int buIsFormat(int);
int check_file_correct(int, int);
int fmMngMcpy(int, int, int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsInitSub(void);
int gdFsOpenRange(int, int, int);
int gdFsReopenHn(int, int, int, int);
int gdFsSeek(int, int, int);
int get_fat(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdIsChanged(int);
int kmiResetCallback(int, int);
int memmove(int, int, int);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndCheckPackFreeError(int);
int nlsndPackFreeInit(int, int, int);
int nlsndSeqRequest(int);
int search_dir(int, int, int);
int strncpy(int, int, int);
int syBtCfgSet(int, int, int);
int syBtFlWrite(int, int, int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_isready(int);
int write_sys(int);
int nlsndPackFree(int a4);
int vmsfs_fread1(int a4, int a5);
int gdFsReinitG(int a4, int a5, int a6, int a7);
int adxsjd_decode_prep(int a4, int a5, int a6, int a7);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int trigger(int a4, int a5);
int ADXT_StartMemIdx(int a4, int a5, int a6);
int fmMngAddData(int a4);
int vmsfs_rewrite_exec_file(int a4, int a5, int a6, int a7, int a8);
int vmsfs_setvolume(int a4, int a5);
int vmsfs_fisexist(int a4, int a5);
int vmsfs_fsetparam(int a4, int a5, int a6);
int gdFsDaGetInfoG(int a4, int a5, int a6, int a7);
void kmiRegisterCallback(int a4, int a5, int a6, int a7);
int pdLcdGetDirection(int a4);
int vmsio_ismount(int a4);
int ADXT_StartSj(int a4, int a5, int a6, int a7);
int syCfgGetLanguage(int a4, int a5, int a6);
int ADXSTM_OpenRange(int a4, int a5, int a6);
int syCfgGetSoundMode(int a4, int a5, int a6);
int ADXT_StartFname(int a4, int a5);
int ADXSTM_Seek(int a4, int a5);


void kmiRegisterCallback(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((((a5 << 2) << 1) + (0x234 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x234 + a4) + ((a5 << 2) << 1)) + 0x4)) = a7;
    } else {
        kmiResetCallback(a4, a5);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}


