/* Straight-line functions with calls and guards (batch gen_op): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Max_Combo(void);

int Put_Max_Combo(void)
{
    int t15;
    int t13;
    int t29;
    int t30;
    float u33;
    float u48;
    float u49;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t57;
    int stk[13] = {0};

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC0D09B8); }
    if ((int)(*(int *)0xC2A7614) > (int)0x3E7) {
        *(unsigned int *)0xC2A7614 = 0x3E7;
    }
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = ((int)((int)(*(int *)0xC2A7614) / (int)0x64));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = ((int)((int)((int)((int)(*(int *)0xC2A7614) / (int)0xA)) % (int)0xA));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((int)((int)((*(int *)0xC2A7614) - ((*(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0))) * 0x64)) % (int)0xA));
    t15 = 0x0;
    if ((*(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0))) == 0) {
        t13 = 0x18;
        if ((*(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0))) == 0) {
            t13 = 0x30;
        }
        t15 = t13;
    }
    pfSetFont(0x0);
    t29 = 0xFFFFFF00;
    t30 = 0xFFFFFFFF;
    if (((*(int *)0xC1EE20C) == 2) && (((t20 = *(int *)0xC1EE214, t20 == 12) && (t21 = *(int *)0xC2A7614, (int)t21 >= (int)0x1E)) || ((t22 = *(int *)0xC1EE20C, t22 == 2) && ((t23 = *(int *)0xC1EE214, t23 == 4) && (t24 = *(int *)0xC2A7614, (int)t24 >= (int)0xF))))) {
        t29 = 0xFF0088FF;
        t30 = 0xFF88FFFF;
    }
    pfColor(t29, t30, t29, t30);
    pfSize(1.0f, 1.0f);
    u33 = *(float *)0xC056A00;
    pfLocate((float)(t15 + 0x1B4), u33);
    pfPuts(0xC0D09C4);
    *(unsigned int *)0xC2A88DC = ((*(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0))) + 0x50);
    *(float *)0xC2A88E0 = (*(float *)0xC056A14);
    *(float *)0xC2A88E4 = u33;
    u48 = 1.0f;
    u49 = 0.0f;
    if (((*(int *)0xC1EE20C) == 2) && (((t39 = *(int *)0xC1EE214, t39 == 12) && (t40 = *(int *)0xC2A7614, (int)t40 >= (int)0x1E)) || ((t41 = *(int *)0xC1EE20C, t41 == 2) && ((t42 = *(int *)0xC1EE214, t42 == 4) && (t43 = *(int *)0xC2A7614, (int)t43 >= (int)0xF))))) {
        u48 = 0.0f;
        u49 = 1.0f;
    }
    nlObjPutSetFadeColor(u48, 1.0f, u49);
    if ((*(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0))) != 0) {
        nlSprPut(0xC2A88DC);
    }
    if (((*(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0))) == 0) && (t57 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)), t57 == 0)) {
    } else {
        *(unsigned int *)0xC2A88DC = ((*(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0))) + 0x50);
        *(float *)0xC2A88E0 = (*(float *)0xC056A28);
        nlSprPut(0xC2A88DC);
    }
    *(unsigned int *)0xC2A88DC = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x50);
    *(float *)0xC2A88E0 = (*(float *)0xC056A2C);
    nlSprPut(0xC2A88DC);
    return (ResetFadeColor());
}
