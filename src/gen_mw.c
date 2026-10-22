/* Straight-line functions with calls and guards (batch gen_mw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecKyakuArea(void);
int PutKyakuStopArea(int, int);
int nd_StartWait_Camera(void);
int nd_StartWait_MoveCar(void);
int nd_StartWait_PutCar(void);
int nd_StartWait_PutKyaku(void);
int nd_StartWait_PutMessage(void);
int nd_StartWait_SetFog(void);
int nd_StartWait_SetLight(void);
int nd_StartWait_Stub(void);
int Exec_nd_StartWait(void);

int Exec_nd_StartWait(void)
{
    int t9;

    ExecKyakuArea();
    nd_StartWait_Stub();
    nd_StartWait_SetLight();
    nd_StartWait_SetFog();
    nd_StartWait_Camera();
    nd_StartWait_PutCar();
    nd_StartWait_PutKyaku();
    nd_StartWait_PutMessage();
    PutKyakuStopArea(0x21, 0x5);
    t9 = nd_StartWait_MoveCar();
    *(unsigned int *)0xC2A7208 = ((*(int *)0xC2A7208) + 0x1);
    return t9;
}
