/* Straight-line functions with calls and guards (batch gen_cb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(void);
int ADXF_Close(int);
int ADXF_Open(int, int);
int ADXSTM_GetFad(int, int);
int Act_Execute(void);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int exec_GameSystem(void);
int execPlayerADV(void);
int execPlayer(void);
int gdc_ExecStreamSongDisk(void);
int Pause_ExecRenderTexture1st(void);
int Pause_ExecRenderTexture2nd(void);
int Exec_Fog(void);
int Exec_SeaFog(void);
int RinAqua_Execute(void);
int GoiTool(int);
int LightEffect(int);
int PutCourse(void);
int ResetSpark(void);
int ShallWeHaveSomeRelaxation(float);
int IsSeaFog(void);
int adxf_ChkPrmPt(int);
int adxf_LoadData(int, int, int);
int camUpdate(int);
int crowdSpawn(void);
int entryCarPut(int);
int execDCmini(void);
int execMiniLight(void);
int exec_CarMain(void);
int exec_KyakuMain(void);
int hudDraw(void);
int nlExecuteEvent(void);
int rtcGetSeconds(void);
int strlen(int);
int trafficControl(int);
void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int table(int a4);
int CheckNameEntryPad(void);
int ADXF_AddPartition(int a4, int a5, int a6, int a7);
int gameStateDrive(void);
int Result_Insert_Rank(void);

void FUN_0c085c60(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    
}

int table(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t3;
    int t4;
    int t5;
    int t6;

    t0 = strlen(a4);
    t1 = 0xC2A66A0;
    t2 = 0x0;
    do {
        t2 = (t2 + 0x1);
        *(unsigned int *)((t1 + 0x0)) = t0;
        t1 = (t1 + 0x4);
    } while ((int)t2 <= (int)0xFF);
    t7 = t0;
    if ((int)(t0 - 1) > 0) {
        t3 = (t0 - 1);
        t4 = a4;
        t5 = 0x0;
        do {
            t6 = *(signed char *)((t4 + 0x0));
            t4 = (t4 + 0x1);
            t5 = (t5 + 0x1);
            *(unsigned int *)((0xC2A66A0 + (t6 << 2))) = t3;
            t3 = (t3 - 1);
        } while ((int)t5 < (int)(t0 - 1));
        t7 = (t6 << 2);
    }
    return t7;
}




