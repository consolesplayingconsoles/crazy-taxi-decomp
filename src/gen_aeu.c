/* Straight-line functions with calls and guards (batch gen_aeu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Check_DCmini_End(void);
int Exec_Check_Point(void);
int Exec_Crazy_Balloons(void);
int Exec_Crazy_Bowling(void);
int Exec_Crazy_Jump(void);
int Exec_DCmini_Game1(void);
int Exec_DCmini_Game12(void);
int Exec_DCmini_Game4(void);
int Exec_DCmini_Game7(void);
int Exec_DCmini_Game8(void);
int Exec_DCmini_Game9(int);
int Exec_Excellent(void);
int Exec_Fault(void);
int Put_JumpDistance(void);
int Put_PoleMarriageKiss(void);
int Put_Record_Window(void);
int Set_Record_Time(void);
int gdc_StopStreamVoice(int);
int execDCmini(void);

int execDCmini(void)
{
    int t0;
    int t40;
    int t59;
    int t41;
    int t53;
    int t45;
    int t48;
    int t46;
    int t80;
    int t105;
    int t96;
    int t95;
    int t68;
    int t69;
    int t71;

    t0 = *(int *)0xC1EE214;
    if ((unsigned int)t0 < (unsigned int)0x13) {
        switch ((t0 << 1)) {
            case 0:
            {
                Exec_Crazy_Jump();
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
                Exec_Crazy_Bowling();
            }
                break;
            case 8:
            {
                Exec_DCmini_Game4();
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
                Exec_DCmini_Game7();
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
                Exec_DCmini_Game9((*(int *)0xC2A9900));
            }
                break;
            case 24:
            {
                Exec_DCmini_Game12();
            }
                break;
            case 30:
            {
                Exec_Check_Point();
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
    if (((unsigned short)(*(short *)0xC2A992C) & 0x4) == 4) {
        Put_JumpDistance();
    }
    if (((unsigned short)(*(short *)0xC2A992C) & 0x10) == 16) {
        Exec_Excellent();
    }
    if (((unsigned short)(*(short *)0xC2A992C) & 0x20) == 32) {
        Exec_Fault();
    }
    if (((unsigned short)(*(short *)0xC2A992C) & 0x40) == 64) {
        Put_Record_Window();
    }
    if (((unsigned short)(*(short *)0xC2A992C) & 0x100) == 0x100) {
        Put_PoleMarriageKiss();
    }
    t40 = *(int *)0xC1EE788;
    t59 = t40;
    if (t40 == 1) {
        t41 = *(int *)0xC1EE214;
        t53 = t40;
        if ((int)((*(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0))) * 0x3C) > (int)(*(int *)0xC2A98F8)) {
            t45 = *(int *)0xC2A9904;
            t48 = t45;
            if (t45 == 0) {
                t46 = *(int *)((((t41 << 2) + 0xC0D0DD0) + 0x0));
                *(unsigned int *)0xC2A98F8 = ((t46 * 0x3C) - (*(int *)0xC1EE794));
                t48 = t46;
            }
            t53 = t48;
        }
        t59 = t53;
    }
    t80 = t59;
    if (((*(int *)0xC2A9934) == 0) && ((t68 = *(int *)0xC2A9930, t68 == 0) && (t69 = *(int *)0xC1EE214, t69 != 0))) {
        if (t69 != 20) {
            t71 = (Set_Record_Time());
        } else {
            t71 = t69;
        }
        t80 = t71;
    }
    if ((*(int *)0xC2A11B0) == 0) {
        *(unsigned int *)0xC2A9A68 = 0x0;
    }
    t105 = t80;
    if ((*(int *)0xC2A11B0) != 0) {
        t96 = 0xC2A9A68;
        if ((*(int *)0xC2A9A68) == 0) {
            t95 = gdc_StopStreamVoice(0x0);
            *(unsigned int *)0xC2A9A68 = 0x1;
            t96 = t95;
        }
        t105 = t96;
    }
    return t105;
}
