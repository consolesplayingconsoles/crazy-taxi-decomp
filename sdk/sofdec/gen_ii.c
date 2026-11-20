/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSTM_ExecServer(void);
int ADXF_ExecServer(void);
int ADXF_GetNumReadSct(int);
int ADXF_GetStat(int);
int ADXF_ReadNw32(int, int, int);
int adxf_wait_1ms(void);
int gdFsExecServer(int);
int adxf_LoadData(int a4, int a5, int a6);

int adxf_LoadData(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t8;
    int t12;
    int t7;

    t0 = 0x0;
    for (;;) {
        t1 = ADXF_ReadNw32(a4, a5, a6);
        if ((int)t1 <= 0) {
            gdFsExecServer(t1);
            ADXSTM_ExecServer();
            ADXF_ExecServer();
            adxf_wait_1ms();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x2710) {
                break;
            }
            continue;
        }
        t7 = t1; break;
    }
    if (t0 == 0x2710) {
        return 0x0;
    }
    t8 = 0x0;
    for (;;) {
        gdFsExecServer(t7);
        ADXSTM_ExecServer();
        ADXF_ExecServer();
        t12 = ADXF_GetStat(a4);
        if (t12 != 3) {
            adxf_wait_1ms();
            t8 = (t8 + 0x1);
            if ((int)t8 >= (int)0x2710) {
                break;
            }
            continue;
        }
        break;
    }
    return ADXF_GetNumReadSct(a4);
}
