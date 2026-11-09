/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_CrazyBox_Voice(int);
int Wobble_Record_Window(void);
int nlSprPut(int);
int thunk_callTryAgain(void);
int Exec_Fault(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };


int Exec_Fault(void)
{
    int t0;
    float u7;
    int t11;
    int t32;
    int t39;

    t0 = (((struct o0_int *)0xC2A993C)->v);
    (((struct o0_uint *)0xC2A993C)->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) >= (int)0xB4) {
        thunk_callTryAgain();
    }
    Wobble_Record_Window();
    (((struct o0_uint *)0xC2A9898)->v) = 0x73;
    (((struct o34_uint *)0xC2A9898)->v) = 0xA;
    (((struct o4_float *)0xC2A9898)->v) = 320.0f;
    (((struct o8_float *)0xC2A9898)->v) = 88.0f;
    u7 = (((struct o10_float *)0xC2A993C)->v);
    (((struct o10_float *)0xC2A9898)->v) = (u7 + 1.0f);
    (((struct o14_float *)0xC2A9898)->v) = (u7 + 1.0f);
    nlSprPut(0xC2A9898);
    (((struct o34_uint *)0xC2A9898)->v) = 0x200A;
    if (((((struct o0_int *)0xC2A993C)->v)) == 20) {
        t11 = *(int *)0xC2A9B8C;
        switch (t11) {
        case 0:
            Start_CrazyBox_Voice(0x9);
            break;
        case 1:
            Start_CrazyBox_Voice(0xA);
            break;
        case 2:
            Start_CrazyBox_Voice(0xB);
            break;
        case 3:
            Start_CrazyBox_Voice(0xC);
            break;
        }
    }
    t32 = *(int *)0xC1EE214;
    t39 = t32;
    if ((t32 == 7) || ((t32 == 11) || ((t32 == 5) || ((t32 == 6) || (t32 == 14))))) {
        t39 = (((struct o0_int *)0xC2A993C)->v);
        if (t39 == 30) {
            *(unsigned int *)0xC179860 = 0x8;
        }
    }
    return t39;
}
