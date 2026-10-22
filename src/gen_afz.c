/* Straight-line functions with calls and guards (batch gen_afz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int Start_Excellent(void);
int Start_Fault(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Exec_Crazy_Jump(void);

int Exec_Crazy_Jump(void)
{
    int t56;
    int t68;
    int t6;
    int t16;
    int t22;
    int t23;
    int t42;
    int t74;
    int t57;
    int t66;

    nlObjPutSetFadeColor(1.0f, 0.699999988f, 0.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nd_SprPut(0xC2A9898, 0x1E7, 491.0f, 57.0f);
    nd_SprPut(0xC2A9898, 0x1E8, 531.0f, 57.0f);
    nd_SprPut(0xC2A9898, 0x1E2, 580.0f, 50.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98B8 = 1.0f;
    ResetFadeColor();
    if (!(0.0f > (*(float *)0xC17914C)) && (t6 = *(int *)0xC2A9970, t6 == 0)) {
        *(unsigned int *)0xC2A9970 = ((*(int *)0xC2A9970) + 0x1);
    }
    if ((int)(*(int *)0xC2A9970) < (int)0x2) {
        *(float *)0xC2A9A24 = ((*(float *)0xC17914C) * 0.099999994f);
    }
    if (((*(int *)0xC17926C) == 0) && (t16 = *(int *)0xC2A9970, t16 == 1)) {
        *(unsigned int *)0xC2A9970 = ((*(int *)0xC2A9970) + 0x1);
    }
    if (!((*(float *)0xC179148) > 0.0f) && ((t22 = *(int *)0xC2A9970, (int)t22 <= (int)0x1) && (t23 = *(int *)0xC2A991C, t23 == 0))) {
        Start_Fault(0x0);
        *(unsigned int *)0xC2A991C = 0x1;
    }
    if ((*(int *)0xC2A9970) == 2) {
        *(unsigned int *)0xC2A98F4 = (int)((*(float *)0xC2A9A24) * 100.0f);
        *(unsigned int *)0xC2A9970 = ((*(int *)0xC2A9970) + 0x1);
    }
    if (((*(int *)0xC1EE794) == 0) && (t42 = *(int *)0xC2A991C, t42 == 0)) {
        Start_Fault(0x1);
        *(unsigned int *)0xC2A991C = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
        t74 = 0x54;
    } else {
        t56 = *(int *)0xC2A9970;
        t68 = t56;
        if ((t56 == 3) && (t57 = *(int *)0xC2A991C, t57 == 0)) {
            if (!((*(float *)0xC05C6C8) > (*(float *)0xC2A9A24))) {
                t66 = (Start_Excellent());
            } else {
                t66 = (Start_Fault(0x0));
            }
            *(unsigned int *)0xC2A991C = 0x1;
            t68 = t66;
        }
        t74 = t68;
    }
    return t74;
}
