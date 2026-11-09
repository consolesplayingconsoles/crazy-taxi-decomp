/* Straight-line functions with calls and guards (batch gen_all): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Check_DCmini_End(void);
int Exec_Check_Point(float, float, float);
int Exec_Crazy_Balloons(void);
int Exec_Crazy_Bowling(int, int, int, int, float);
int Exec_Crazy_Jump(float);
int Exec_DCmini_Game1(void);
int Exec_DCmini_Game12(float);
int Exec_DCmini_Game4(float);
int Exec_DCmini_Game7(int, int, int, int);
int Exec_DCmini_Game8(void);
int Exec_DCmini_Game9(int);
int Exec_Excellent(void);
int Exec_Fault(void);
int Put_JumpDistance(void);
int Put_PoleMarriageKiss(void);
int Put_Record_Window(void);
int Set_Record_Time(void);
int gdc_StopStreamVoice(int);
int execDCmini(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o34_short { char p[0x34]; short v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


int execDCmini(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t0;
    int t41;
    int t53;
    int t45;
    int t105;
    int t68;
    int t69;

    t0 = *(int *)0xC1EE214;
    if ((unsigned int)t0 < (unsigned int)0x13) {
        switch ((t0 << 1)) {
            case 0:
            {
                Exec_Crazy_Jump(f4);
            }
                break;
            case 2:
            {
                Exec_DCmini_Game1();
            }
                break;
            case 4:
            {
                Exec_Crazy_Balloons();
            }
                break;
            case 6:
            {
                Exec_Crazy_Bowling(a4, a5, a6, a7, f4);
            }
                break;
            case 8:
            {
                Exec_DCmini_Game4(f4);
            }
                break;
            case 10:
            case 12:
            case 26:
            {
                Check_DCmini_End();
            }
                break;
            case 14:
            case 22:
            case 34:
            {
                Exec_DCmini_Game7(a4, a5, a6, a7);
            }
                break;
            case 16:
            {
                Exec_DCmini_Game8();
            }
                break;
            case 18:
            case 20:
            case 28:
            case 36:
            {
                Exec_DCmini_Game9(((((struct o8_int *)0xC2A98F8)->v)));
            }
                break;
            case 24:
            {
                Exec_DCmini_Game12(f4);
            }
                break;
            case 30:
            {
                Exec_Check_Point(f4, f5, f6);
                Check_DCmini_End();
            }
                break;
            default:
            {
                Check_DCmini_End();
            }
                break;
        }
    } else {
        Check_DCmini_End();
    }
    if (((unsigned short)((((struct o34_short *)0xC2A98F8)->v)) & 0x4) == 4) {
        Put_JumpDistance();
    }
    if (((unsigned short)((((struct o34_short *)0xC2A98F8)->v)) & 0x10) == 16) {
        Exec_Excellent();
    }
    if (((unsigned short)((((struct o34_short *)0xC2A98F8)->v)) & 0x20) == 32) {
        Exec_Fault();
    }
    if (((unsigned short)((((struct o34_short *)0xC2A98F8)->v)) & 0x40) == 64) {
        Put_Record_Window();
    }
    if (((unsigned short)((((struct o34_short *)0xC2A98F8)->v)) & 0x100) == 0x100) {
        Put_PoleMarriageKiss();
    }
    t53 = (((struct o0_int *)0xC1EE788)->v);
    t105 = t53;
    if (t53 == 1) {
        t41 = *(int *)0xC1EE214;
        if ((int)((*(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0))) * 0x3C) > (int)((((struct o0_int *)0xC2A98F8)->v))) {
            t45 = (((struct oC_int *)0xC2A98F8)->v);
            t53 = t45;
            if (t45 == 0) {
                t53 = *(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0));
                (((struct o0_uint *)0xC2A98F8)->v) = ((t53 * 0x3C) - ((((struct oC_int *)0xC1EE788)->v)));
            }
        }
        t105 = t53;
    }
    if ((((((struct o3C_int *)0xC2A98F8)->v)) == 0) && ((t68 = (((struct o38_int *)0xC2A98F8)->v), t68 == 0) && (t69 = *(int *)0xC1EE214, t69 != 0))) {
        if (t69 != 20) {
            t105 = (Set_Record_Time());
        } else {
            t105 = t69;
        }
    }
    if ((*(int *)0xC2A11B0) == 0) {
        *(unsigned int *)0xC2A9A68 = 0x0;
    }
    if ((*(int *)0xC2A11B0) != 0) {
        t105 = 0xC2A9A68;
        if ((*(int *)0xC2A9A68) == 0) {
            t105 = gdc_StopStreamVoice(0x0);
            *(unsigned int *)0xC2A9A68 = 0x1;
        }
    }
    return t105;
}
