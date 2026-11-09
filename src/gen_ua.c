/* Straight-line functions with calls and guards (batch gen_ua): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DC_Chari_Command_Check(void);
int DC_Reverse_Command_Check(void);
int End_Time_Count(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdc_FadeStopStreamSong(int, int);
void CarSel_Time_Count(void);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


void CarSel_Time_Count(void)
{
    int t12;
    int t5;
    int t39;
    int t74;
    int t71;
    int t23;
    int t29;
    int t45;
    int t48;

    if (((((struct o14_int *)0xC2A7504)->v)) != 0) {
        return;
    }
    t12 = 0x0;
    if ((int)((((struct o0_int *)0xC2A757C)->v)) < (int)0x3B0) {
        DC_Chari_Command_Check();
        t5 = 0x0;
        if (((((struct o0_int *)0xC2A75C0)->v)) == 4) {
            t5 = 0x1;
        }
        DC_Reverse_Command_Check();
        t12 = t5;
        if (((*(int *)0xC17948C) == 1) && (t5 == 0)) {
            t12 = 0x1;
        }
    }
    t71 = t12;
    if (((unsigned char)(*(signed char *)0xC28A4E8) & 0x1) != 0) {
        if ((((*(int *)0xC1EE250) & 16) != 0) && (t23 = (((struct o4_int *)0xC2A75C0)->v), t23 == 0)) {
            (((struct o4_uint *)0xC2A75C0)->v) = 0x1;
            (((struct o0_float *)0xC2A7504)->v) = 480.0f;
        } else {
            if ((((*(int *)0xC1EE250) & 32) != 0) && (t29 = (((struct o4_int *)0xC2A75C0)->v), t29 != 0)) {
                (((struct o4_uint *)0xC2A75C0)->v) = 0x0;
                (((struct o0_float *)0xC2A7504)->v) = 480.0f;
            }
        }
        t39 = (((struct o4_int *)0xC2A75C0)->v);
        t71 = t12;
        if (t39 != 0) {
            if ((((*(int *)0xC1EE250) & 4) != 0) && (t45 = (((struct o0_int *)0xC2A757C)->v), (int)t45 < (int)0x3B0)) {
                (((struct o0_uint *)0xC2A75C0)->v) = 0x4;
                t71 = 0x1;
            } else {
                if ((t39 != 0) && (t48 = (((struct o0_int *)0xC2A757C)->v), t48 == 0)) {
                    (((struct o0_uint *)0xC2A75C0)->v) = 0x4;
                }
                t71 = t12;
            }
        }
    }
    t74 = 0x1;
    if (((((struct o0_int *)0xC2A757C)->v)) != 0) {
        if (((*(int *)0xC1EE250) & 4) != 0) {
            t71 = 0x1;
        }
        t74 = t71;
    }
    if (t74 != 0) {
        End_Time_Count(0x0);
        (((struct o14_uint *)0xC2A7504)->v) = 0x1;
        (((struct o28_uint *)0xC2A757C)->v) = (((((struct o28_int *)0xC2A757C)->v)) + 0x1);
        gdc_FadeStopStreamSong(0x3C, 0xF0);
        Voice_ShutUp(0x0);
        Voice_Request((*(int *)((((*(int *)((((((struct o18_int *)0xC2A7504)->v)) + 0x0))) << 2) + 0xC1306A0))), 0x0, 0x7F, 0x0);
    return;
    }
}
