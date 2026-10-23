/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_CrazyBox_Voice(int);
int Wobble_Record_Window(void);
int nlSprPut(int);
int thunk_FUN_0c0409d2(void);
int Exec_Fault(void);

int Exec_Fault(void)
{
    int t0;
    float u7;
    int t11;
    int t32;
    int t39;
    int t35;

    t0 = *(int *)0xC2A993C;
    *(unsigned int *)0xC2A993C = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0xB4) {
        thunk_FUN_0c0409d2();
    }
    Wobble_Record_Window();
    *(unsigned int *)0xC2A9898 = 0x73;
    *(unsigned int *)0xC2A98CC = 0xA;
    *(float *)0xC2A989C = 320.0f;
    *(float *)0xC2A98A0 = 88.0f;
    u7 = *(float *)0xC2A994C;
    *(float *)0xC2A98A8 = (u7 + 1.0f);
    *(float *)0xC2A98AC = (u7 + 1.0f);
    nlSprPut(0xC2A9898);
    *(unsigned int *)0xC2A98CC = 0x200A;
    if ((*(int *)0xC2A993C) == 20) {
        t11 = *(int *)0xC2A9B8C;
        if (t11 != 0) {
            if (t11 != 1) {
                if (t11 != 2) {
                    if (t11 != 3) {
                    } else {
                        Start_CrazyBox_Voice(0xC);
                    }
                } else {
                    Start_CrazyBox_Voice(0xB);
                }
            } else {
                Start_CrazyBox_Voice(0xA);
            }
        } else {
            Start_CrazyBox_Voice(0x9);
        }
    }
    t32 = *(int *)0xC1EE214;
    t39 = t32;
    if ((t32 == 7) || ((t32 == 11) || ((t32 == 5) || ((t32 == 6) || (t32 == 14))))) {
        t35 = *(int *)0xC2A993C;
        if (t35 == 30) {
            *(unsigned int *)0xC179860 = 0x8;
        }
        t39 = t35;
    }
    return t39;
}
