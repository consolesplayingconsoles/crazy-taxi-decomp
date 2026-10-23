/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int Init_Remain_Arrow(void);
int ResetFadeColor(void);
int Start_CrazyBox_Voice(int);
extern float nlLength();
int nlObjPutSetFadeColor(float, float, float);
void Exec_Remain_Arrow(float f4, float f5);

void Exec_Remain_Arrow(float f4, float f5)
{
    int t30;
    int t31;
    int t33;
    int t39;
    int t74;
    int t75;
    int t77;
    int t83;
    int t94;
    int t95;
    int t97;
    int t103;
    int t2;
    int t21;
    float u37;
    int t45;
    int t52;
    int t65;
    float u81;
    int t89;
    float u101;
    int t109;

    if (((*(int *)0xC1794D0) != (*(int *)0xC2A98FC)) && (t2 = *(int *)0xC1EE214, t2 != 14)) {
        if ((*(int *)0xC2A98EC) != 0) {
            *(unsigned int *)0xC2A98EC = ((*(int *)0xC2A98EC) - 1);
            *(unsigned int *)0xC2A9968 = 0x0;
            if ((*(int *)0xC1EE214) != 14) {
                *(unsigned int *)0xC2A98FC = ((*(int *)0xC2A98FC) + 0x1);
                Init_Remain_Arrow();
            } else {
                *(unsigned int *)0xC2A9A34 = 0x1;
                *(unsigned int *)0xC2A9A38 = 0x0;
            }
            if (((*(int *)0xC1EE214) != 14) && (t21 = *(int *)0xC2A98EC, t21 != 0)) {
                Start_CrazyBox_Voice((*(int *)((((*(int *)0xC2A98EC) << 2) + 0xC131180))));
            }
            t30 = *(int *)0xC2A98FC;
            t31 = *(int *)0xC1EE214;
            if (t31 == 10) {
                u37 = (((float (*)(int, int))(nlLength))(0xC179144, (0xC131084 + (signed char)(((t30 << 1) + t30) << 2))));
            } else {
                t33 = (0xC131030 + (signed char)(((t30 << 1) + t30) << 2));
                if (t31 == 14) {
                    t33 = 0xC1310E4;
                }
                u37 = (((float (*)(int, int))(nlLength))(0xC179144, t33));
            }
            t39 = *(int *)0xC1EE214;
            if (t39 == 14) {
                if (t39 == 14) {
                    if (((*(float *)0xC05D8D0) > u37) && (t45 = *(int *)0xC2A9A2C, (int)t45 >= (int)0x7)) {
                        nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
                        ExecArrow(0x1, u37);
                        ResetFadeColor();
    return;
                    }
                    return;
                }
                return;
            }
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
            ExecArrow(0x1, u37);
            ResetFadeColor();
    return;
        }
        return;
    }
    if (((*(int *)0xC2A9A2C) != (0x7 - (*(int *)0xC2A98EC))) && (t52 = *(int *)0xC1EE214, t52 == 14)) {
        if ((*(int *)0xC2A98EC) != 0) {
            *(unsigned int *)0xC2A98EC = ((*(int *)0xC2A98EC) - 1);
            *(unsigned int *)0xC2A9968 = 0x0;
            if ((*(int *)0xC1EE214) != 14) {
                *(unsigned int *)0xC2A98FC = ((*(int *)0xC2A98FC) + 0x1);
                Init_Remain_Arrow();
            } else {
                *(unsigned int *)0xC2A9A34 = 0x1;
                *(unsigned int *)0xC2A9A38 = 0x0;
            }
            if (((*(int *)0xC1EE214) != 14) && (t65 = *(int *)0xC2A98EC, t65 != 0)) {
                Start_CrazyBox_Voice((*(int *)((((*(int *)0xC2A98EC) << 2) + 0xC131180))));
            }
            t74 = *(int *)0xC2A98FC;
            t75 = *(int *)0xC1EE214;
            if (t75 == 10) {
                u81 = (((float (*)(int, int))(nlLength))(0xC179144, (0xC131084 + (signed char)(((t74 << 1) + t74) << 2))));
            } else {
                t77 = (0xC131030 + (signed char)(((t74 << 1) + t74) << 2));
                if (t75 == 14) {
                    t77 = 0xC1310E4;
                }
                u81 = (((float (*)(int, int))(nlLength))(0xC179144, t77));
            }
            t83 = *(int *)0xC1EE214;
            if (t83 == 14) {
                if (t83 == 14) {
                    if (((*(float *)0xC05D8D0) > u81) && (t89 = *(int *)0xC2A9A2C, (int)t89 >= (int)0x7)) {
                        nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
                        ExecArrow(0x1, u81);
                        ResetFadeColor();
    return;
                    }
                    return;
                }
                return;
            }
            nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
            ExecArrow(0x1, u81);
            ResetFadeColor();
    return;
        }
        return;
    }
    t94 = *(int *)0xC2A98FC;
    t95 = *(int *)0xC1EE214;
    if (t95 == 10) {
        u101 = (((float (*)(int, int, float, float))(nlLength))(0xC179144, (0xC131084 + (signed char)(((t94 << 1) + t94) << 2)), f4, f5));
    } else {
        t97 = (0xC131030 + (signed char)(((t94 << 1) + t94) << 2));
        if (t95 == 14) {
            t97 = 0xC1310E4;
        }
        u101 = (((float (*)(int, int, float, float))(nlLength))(0xC179144, t97, f4, f5));
    }
    t103 = *(int *)0xC1EE214;
    if (t103 == 14) {
        if (t103 == 14) {
            if (((*(float *)0xC05D8D0) > u101) && (t109 = *(int *)0xC2A9A2C, (int)t109 >= (int)0x7)) {
                nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
                ExecArrow(0x1, u101);
                ResetFadeColor();
    return;
            }
            return;
        }
        return;
    }
    nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    ExecArrow(0x1, u101);
    ResetFadeColor();
}
