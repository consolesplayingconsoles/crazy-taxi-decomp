/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_FadeStopStreamSong(int, int);
int DC_Chari_Command_Check(void);
int DC_Reverse_Command_Check(void);
int End_Time_Count(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
void CarSel_Time_Count(void);

void CarSel_Time_Count(void)
{
    int t0;
    int t1;
    int t14;
    int t3;
    int t4;
    int t7;
    int t10;
    int t8;
    int t18;
    int t86;
    int t19;
    int t20;
    int t21;
    int t22;
    int t38;
    int t39;
    int t56;
    int t80;
    int t57;
    int t58;
    int t59;
    int t68;
    int t93;
    int t98;
    int t94;
    int t95;
    int t101;
    int t104;
    int t105;
    int t106;
    int t74;
    int t64;

    t0 = *(int *)0xC2A7518;
    if (t0 != 0) {
        return;
    }
    t1 = *(int *)0xC2A757C;
    t14 = 0x0;
    if ((int)t1 < (int)0x3B0) {
        DC_Chari_Command_Check();
        t3 = *(int *)0xC2A75C0;
        t4 = 0x0;
        if (t3 == 4) {
            t4 = 0x1;
        }
        DC_Reverse_Command_Check();
        t7 = *(int *)0xC17948C;
        t10 = t4;
        if (t7 == 1) {
            t8 = t4;
            if (t4 == 0) {
                t8 = 0x1;
            }
            t10 = t8;
        }
        t14 = t10;
    }
    t18 = *(signed char *)0xC28A4E8;
    t86 = t14;
    if (((unsigned char)t18 & 0x1) != 0) {
        t19 = *(int *)0xC1EE250;
        if ((t19 & 16) != 0) {
            t20 = *(int *)0xC2A75C4;
            if (t20 == 0) {
                *(unsigned int *)0xC2A75C4 = 0x1;
                *(float *)0xC2A7504 = 480.0f;
            } else {
                t21 = *(int *)0xC1EE250;
                if ((t21 & 32) != 0) {
                    t22 = *(int *)0xC2A75C4;
                    if (t22 != 0) {
                        *(unsigned int *)0xC2A75C4 = 0x0;
                        *(float *)0xC2A7504 = 480.0f;
                    }
                }
            }
        } else {
            t38 = *(int *)0xC1EE250;
            if ((t38 & 32) != 0) {
                t39 = *(int *)0xC2A75C4;
                if (t39 != 0) {
                    *(unsigned int *)0xC2A75C4 = 0x0;
                    *(float *)0xC2A7504 = 480.0f;
                }
            }
        }
        t56 = *(int *)0xC2A75C4;
        t80 = t14;
        if (t56 != 0) {
            t57 = *(int *)0xC1EE250;
            if ((t57 & 4) != 0) {
                t58 = *(int *)0xC2A757C;
                if ((int)t58 < (int)0x3B0) {
                    *(unsigned int *)0xC2A75C0 = 0x4;
                    t64 = 0x1;
                } else {
                    if (t56 != 0) {
                        t59 = *(int *)0xC2A757C;
                        if (t59 == 0) {
                            *(unsigned int *)0xC2A75C0 = 0x4;
                        }
                    }
                    t64 = t14;
                }
                t74 = t64;
            } else {
                if (t56 != 0) {
                    t68 = *(int *)0xC2A757C;
                    if (t68 == 0) {
                        *(unsigned int *)0xC2A75C0 = 0x4;
                    }
                }
                t74 = t14;
            }
            t80 = t74;
        }
        t86 = t80;
    }
    t93 = *(int *)0xC2A757C;
    t98 = 0x1;
    if (t93 != 0) {
        t94 = *(int *)0xC1EE250;
        t95 = t86;
        if ((t94 & 4) != 0) {
            t95 = 0x1;
        }
        t98 = t95;
    }
    if (t98 != 0) {
        End_Time_Count(0x0);
        *(unsigned int *)0xC2A7518 = 0x1;
        t101 = *(int *)0xC2A75A4;
        *(unsigned int *)0xC2A75A4 = (t101 + 0x1);
        gdc_FadeStopStreamSong(0x3C, 0xF0);
        Voice_ShutUp(0x0);
        t104 = *(int *)0xC2A751C;
        t105 = *(int *)((t104 + 0x0));
        t106 = *(int *)(((t105 << 2) + 0xC1306A0));
        Voice_Request(t106, 0x0, 0x7F, 0x0);
    return;
    }
}
