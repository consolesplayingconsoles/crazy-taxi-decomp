/* Straight-line functions with calls and guards (batch gen_agg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Execute(void);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int Exec_Fog(void);
int Exec_SeaFog(void);
int GoiTool(int);
int IsSeaFog(void);
int LightEffect(int);
int Pause_ExecRenderTexture1st(void);
int Pause_ExecRenderTexture2nd(void);
int PutCourse(void);
int ResetSpark(void);
int RinAqua_Execute(void);
int ShallWeHaveSomeRelaxation(float);
int camUpdate(int);
int crowdSpawn(void);
int entryCarPut(int);
int execDCmini(void);
int execMiniLight(void);
int execPlayer(void);
int execPlayerADV(void);
int exec_CarMain(void);
int exec_GameSystem(void);
int exec_KyakuMain(void);
int gdc_ExecStreamSongDisk(void);
int hudDraw(void);
int nlExecuteEvent(void);
int trafficControl(int);
int gameStateDrive(void);

int gameStateDrive(void)
{
    int t0;
    int t3;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t42;
    int t43;

    t0 = Pause_ExecRenderTexture1st();
    if (t0 == 1) {
        return t0;
    }
    camUpdate(0x0);
    Exec_Fog();
    t3 = *(int *)0xC1EE20C;
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
            } else {
                execMiniLight();
            }
        } else {
            Exec_SeaFog();
            if ((IsSeaFog()) != 0) {
                ShallWeHaveSomeRelaxation(-30.0f);
            }
        }
    } else {
        if (-1237.0f > (*(float *)0xC179844)) {
            LightEffect(0x1);
            ResetSpark();
            RinAqua_Execute();
        } else {
            LightEffect(0x0);
        }
    }
    if ((*(int *)0xC1EE234) == 0) {
        execPlayer();
    } else {
        execPlayerADV();
    }
    exec_GameSystem();
    gdc_ExecStreamSongDisk();
    exec_CarMain();
    if (((*(int *)0xC1EE20C) == 2) && ((t33 = *(int *)0xC1EE20C, t33 != 2) || ((t34 = *(int *)0xC1EE214, t34 == 1) || ((t35 = *(int *)0xC1EE214, t35 == 2) || ((t36 = *(int *)0xC1EE214, t36 == 3) || (t37 = *(int *)0xC1EE214, t37 == 0)))))) {
    } else {
        exec_KyakuMain();
    }
    ExecSetObject();
    if (((*(int *)0xC1EE20C) == 2) && ((t42 = *(int *)0xC1EE20C, t42 != 2) || (t43 = *(int *)0xC1EE214, t43 == 0))) {
    } else {
        ExecKyakuArea();
    }
    if ((*(int *)0xC1EE20C) == 0) {
        ExecHelicopter();
    }
    Act_Execute();
    entryCarPut(0x1);
    trafficControl(0x1);
    if ((*(int *)0xC1EE20C) != 2) {
        crowdSpawn();
    }
    if ((*(int *)0xC1EE210) == 2) {
        execDCmini();
    }
    nlExecuteEvent();
    ExecColliObj();
    PutCourse();
    GoiTool(0x1);
    if (((*(int *)0xC1EE284) & 0x400) != 0) {
        *(unsigned int *)0xC0E5320 = ((int)((int)((*(int *)0xC0E5320) + 0x1) % (int)0x2));
    }
    if ((*(int *)0xC0E5320) != 0) {
        hudDraw();
    }
    return Pause_ExecRenderTexture2nd();
}
