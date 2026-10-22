/* Straight-line functions with calls and guards (batch gen_uf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Start_Excellent(void);
int Start_Fault(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Exec_Crazy_Balloons(void);

int Exec_Crazy_Balloons(void)
{
    int t7;
    int stk[8] = {0};

    if ((*(int *)0xC1319F8) == 0) {
        Start_Excellent();
    }
    if (((*(int *)0xC2A991C) == 0) && (t7 = *(int *)0xC1EE794, (int)t7 <= 0)) {
        Start_Fault(0x1);
        *(unsigned int *)0xC2A991C = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
    }
    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    nd_SprPut(0xC2A9898, 0x1EC, 506.0f, 55.0f);
    nd_SprPut(0xC2A9898, 0x1ED, 602.0f, 55.0f);
    ResetFadeColor();
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x8) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0)) = ((int)((int)(*(int *)0xC1319F8) / (int)0xA));
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = ((int)((int)(*(int *)0xC1319F8) % (int)0xA));
    if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
        nd_SprPut(0xC2A9C10, ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x50), 474.0f, 90.0f);
    }
    nd_SprPut(0xC2A9C10, ((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + 0x50), 498.0f, 90.0f);
    nd_SprPut(0xC2A9C10, 0x1E1, 523.0f, 90.0f);
    nd_SprPut(0xC2A9C10, 0x52, 550.0f, 90.0f);
    return (nd_SprPut(0xC2A9C10, 0x50, 574.0f, 90.0f));
}
