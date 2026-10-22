/* Straight-line functions with calls and guards (batch gen_ua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DC_Chari_Command_Check(void);
int DC_Reverse_Command_Check(void);
int End_Time_Count(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdc_FadeStopStreamSong(int, int);
void CarSel_Time_Count(void);

void CarSel_Time_Count(void)
{
    int t12;
    int t5;
    int t9;
    int t62;
    int t39;
    int t57;
    int t74;
    int t71;
    int t23;
    int t29;
    int t45;
    int t52;
    int t48;

    if ((*(int *)0xC2A7518) != 0) {
        return;
    }
    t12 = 0x0;
    if ((int)(*(int *)0xC2A757C) < (int)0x3B0) {
        DC_Chari_Command_Check();
        t5 = 0x0;
        if ((*(int *)0xC2A75C0) == 4) {
            t5 = 0x1;
        }
        DC_Reverse_Command_Check();
        t9 = t5;
        if (((*(int *)0xC17948C) == 1) && (t5 == 0)) {
            t9 = 0x1;
        }
        t12 = t9;
    }
    t62 = t12;
    if (((unsigned char)(*(signed char *)0xC28A4E8) & 0x1) != 0) {
        if ((((*(int *)0xC1EE250) & 16) != 0) && (t23 = *(int *)0xC2A75C4, t23 == 0)) {
            *(unsigned int *)0xC2A75C4 = 0x1;
            *(float *)0xC2A7504 = 480.0f;
        } else {
            if ((((*(int *)0xC1EE250) & 32) != 0) && (t29 = *(int *)0xC2A75C4, t29 != 0)) {
                *(unsigned int *)0xC2A75C4 = 0x0;
                *(float *)0xC2A7504 = 480.0f;
            }
        }
        t39 = *(int *)0xC2A75C4;
        t57 = t12;
        if (t39 != 0) {
            if ((((*(int *)0xC1EE250) & 4) != 0) && (t45 = *(int *)0xC2A757C, (int)t45 < (int)0x3B0)) {
                *(unsigned int *)0xC2A75C0 = 0x4;
                t52 = 0x1;
            } else {
                if ((t39 != 0) && (t48 = *(int *)0xC2A757C, t48 == 0)) {
                    *(unsigned int *)0xC2A75C0 = 0x4;
                }
                t52 = t12;
            }
            t57 = t52;
        }
        t62 = t57;
    }
    t74 = 0x1;
    if ((*(int *)0xC2A757C) != 0) {
        t71 = t62;
        if (((*(int *)0xC1EE250) & 4) != 0) {
            t71 = 0x1;
        }
        t74 = t71;
    }
    if (t74 != 0) {
        End_Time_Count(0x0);
        *(unsigned int *)0xC2A7518 = 0x1;
        *(unsigned int *)0xC2A75A4 = ((*(int *)0xC2A75A4) + 0x1);
        gdc_FadeStopStreamSong(0x3C, 0xF0);
        Voice_ShutUp(0x0);
        Voice_Request((*(int *)((((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2) + 0xC1306A0))), 0x0, 0x7F, 0x0);
    return;
    }
}
