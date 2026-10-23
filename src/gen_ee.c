/* Straight-line functions with calls and guards (batch gen_ee): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Act_Execute(void);
int ExecAdvCamera(void);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int Exec_Fog(void);
int GetCollision2D(int, float);
int GoiTool(int);
int PutCourse(void);
int camUpdate(int);
int crowdSpawn(void);
int entryCarPut(int);
int execPlayer(void);
int execPlayerADV(void);
int exec_CarMain(void);
int exec_KyakuMain(void);
int getKyakuOffFlag(void);
int nlExecuteEvent(void);
int nlGetMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int replay(int);
int trafficControl(int);
int exec_loop_Replay(void);

int exec_loop_Replay(void)
{
    int t43;
    int t52;
    int t61;
    int stk[14];

    ExecAdvCamera();
    camUpdate(0x0);
    Exec_Fog();
    if ((*(int *)0xC1EE234) == 0) {
        execPlayer();
    } else {
        execPlayerADV();
    }
    if ((replay(0x0)) != 4) {
        exec_CarMain();
        if ((getKyakuOffFlag()) == 0) {
            exec_KyakuMain();
        }
        ExecSetObject();
        ExecKyakuArea();
        if ((*(int *)0xC1EE20C) == 0) {
            ExecHelicopter();
        }
        Act_Execute();
    } else {
        nlPushUnitMatrix();
        nlTranslateV(0xC179144);
        nlRotateAY((unsigned short)(*(short *)0xC179152));
        nlRotateAX((unsigned short)(*(short *)0xC179150));
        nlRotateAZ((unsigned short)(*(short *)0xC179154));
        nlPushMatrix(0x0);
        nlRotateAX((unsigned short)(*(short *)0xC179178));
        nlRotateAZ((unsigned short)(*(short *)0xC17917C));
        nlTranslate(0.0f, -2.5f, 0.0f);
        nlGetMatrix(0xC179180);
        nlObjPutUseViewMatrix((*(int *)((((*(int *)0xC179488) << 2) + 0xC0E5324))));
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 4)) = 0xF6;
        t43 = 0xC0DB008;
        for (;;) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((t43 + 0x8)); }
            *(float *)(((int)stk + 12)) = (*(float *)(((GetCollision2D((((int)stk + 4) + 0x4), 0.0f)) + 0x18)));
            nlPushMatrix(0x0);
            nlTranslateV((((int)stk + 4) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC17985A));
            nlObjPutUseViewMatrix(0xC5AA130);
            nlPopMatrix(0x1);
            t52 = *(signed char *)(((t43 + 0x18) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(((short)((((t52 << 1) + t52) << 2) << 1) + 0xC1794F4)); }
            *(float *)(((int)stk + 12)) = (*(float *)(((GetCollision2D((((int)stk + 4) + 0x4), 0.0f)) + 0x18)));
            nlPushMatrix(0x0);
            nlTranslateV((((int)stk + 4) + 0x4));
            nlRotateAY((unsigned short)(*(short *)0xC17985A));
            nlObjPutUseViewMatrix(0xC5AA228);
            nlPopMatrix(0x1);
            t61 = *(int *)(((int)stk + 4));
            t43 = (t43 + 0x28);
            *(unsigned int *)(((int)stk + 4)) = (t61 - 1);
            if ((t61 - 1) == 0) {
                break;
            }
        }
    }
    entryCarPut(0x1);
    if ((replay(0x0)) != 4) {
        trafficControl(0x1);
    }
    if ((replay(0x0)) != 4) {
        crowdSpawn();
    }
    if ((replay(0x0)) != 4) {
        nlExecuteEvent();
        ExecColliObj();
    }
    PutCourse();
    return (GoiTool(0x1));
}
