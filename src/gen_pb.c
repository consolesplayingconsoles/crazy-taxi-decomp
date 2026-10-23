/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Init_Result_Parm(void);
int Init_Result_Standard_Sprite(void);
int Money_Array(int, int, int);
int Result_Drop_Lowest_Rank(void);
int Result_Insert_Rank(void);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlUnitMatrix(void);
int Init_Result(int a4);

int Init_Result(int a4)
{
    int t14;
    int t15;
    int t19;
    int t21;
    int t39;
    int t24;
    int t34;
    int t26;
    int t29;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    if ((*(int *)0xC1EE210) != 2) {
        if ((GetMenuMode(0x1)) == 0) {
            *(unsigned int *)0xC2A7618 = 0x1;
        } else {
            *(unsigned int *)0xC2A7618 = 0x0;
        }
    } else {
        *(unsigned int *)0xC2A7618 = 0x1;
    }
    t14 = 0xC2A986C;
    t15 = 0x0;
    for (;;) {
        t15 = (t15 + 0x1);
        *(unsigned int *)((t14 + 0x0)) = 0x0;
        t14 = (t14 + 0x4);
        if ((int)t15 >= (int)0xA) {
            break;
        }
    }
    *(unsigned int *)0xC2A96F0 = ((int)((int)a4 % (int)0x4));
    Init_Result_Standard_Sprite();
    Init_Result_Parm();
    t19 = *(int *)0xC1EE340;
    *(unsigned int *)0xC2A97DC = t19;
    t21 = *(int *)0xC2A97DC;
    t39 = (Money_Array(0xC2A97CC, t19, 0x3));
    if ((int)t21 < (int)0x64) {
        t24 = *(int *)0xC17948C;
        t34 = t24;
        if (t24 == 0) {
            t26 = *(int *)0xC2A7618;
            t29 = t26;
            if (t26 != 0) {
                Result_Drop_Lowest_Rank();
                t29 = (Result_Insert_Rank());
            }
            t34 = t29;
        }
        t39 = t34;
    }
    *(unsigned int *)0xC2A9858 = 0x0;
    *(unsigned int *)0xC2A985C = 0x0;
    *(unsigned int *)0xC2A9860 = 0x0;
    *(unsigned int *)0xC2A9864 = 0x0;
    *(unsigned int *)0xC2A9868 = 0x0;
    return t39;
}
