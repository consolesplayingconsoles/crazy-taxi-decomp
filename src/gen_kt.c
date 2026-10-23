/* Straight-line functions with calls and guards (batch gen_kt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Count_Remain_Drop(void);
int Current_to_Target_angleY(void);
int Exec_Remain_Arrow(void);
int FcvPlay(int, int, float);
int Put_Remain_Icon(void);
int Start_Excellent(void);
int Start_Fault(int);
int humanDraw(int, int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Exec_DCmini_Game9(int a4);

int Exec_DCmini_Game9(int a4)
{
    int t95;
    int t1;
    int t2;
    float u3;
    float u4;
    int t24;
    int t34;
    float u42;
    int t52;
    int t78;
    int t105;
    int stk[12];

    if (((*(int *)0xC1EE214) == 14) && ((t1 = *(int *)0xC2A9A2C, (int)t1 < (int)0x7) && ((t2 = *(int *)0xC1EE794, t2 != 0) && ((u3 = *(float *)0xC179148, !(-10.0f > u3)) || (u4 = *(float *)0xC17914C, 4000.0f > u4))))) {
        *(unsigned int *)0xC2A991C = 0x0;
    }
    if ((*(int *)0xC2A991C) == 0) {
        if ((int)(*(int *)0xC1794D0) >= (int)a4) {
            Start_Excellent();
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
            if (((*(int *)0xC1EE214) == 14) && (t24 = *(int *)0xC1EE794, (int)t24 <= 0)) {
                *(unsigned int *)0xC179120 = 0x0;
            }
        } else {
            if ((*(int *)0xC1EE794) == 0) {
                Start_Fault(0x0);
                *(unsigned int *)0xC2A991C = 0x1;
                *(unsigned int *)0xC179120 = 0x0;
                if (((*(int *)0xC1EE214) == 14) && (t34 = *(int *)0xC1EE794, (int)t34 <= 0)) {
                    *(unsigned int *)0xC179120 = 0x0;
                }
            } else {
                if ((*(int *)0xC1EE214) == 14) {
                    if ((-10.0f > (*(float *)0xC179148)) && (u42 = *(float *)0xC17914C, !(4000.0f > u42))) {
                        Start_Fault(0x3);
                        *(unsigned int *)0xC2A991C = 0x1;
                    }
                    if (((*(int *)0xC1EE214) == 14) && (t52 = *(int *)0xC1EE794, (int)t52 <= 0)) {
                        *(unsigned int *)0xC179120 = 0x0;
                    }
                }
            }
        }
    } else {
        if (((*(int *)0xC1EE214) == 14) && (t78 = *(int *)0xC1EE794, (int)t78 <= 0)) {
            *(unsigned int *)0xC179120 = 0x0;
        }
    }
    if ((*(int *)0xC1EE214) != 9) {
        Exec_Remain_Arrow();
    } else {
        Count_Remain_Drop();
    }
    Put_Remain_Icon();
    t95 = *(int *)0xC1EE214;
    if (t95 == 10) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0xC131970); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC179144); }
        *(unsigned short *)0xC2A9B94 = ((Current_to_Target_angleY()) + 0x8000);
        nlPushMatrix(0x0);
        nlTranslateV(0xC131970);
        nlTranslate(0.0f, 0.0f, (*(float *)0xC05D4C8));
        if (((unsigned short)(*(short *)0xC2A992C) & 0x100) == 0x100) {
            t105 = (*(short *)0xC2A9A64);
        } else {
            t105 = (*(short *)0xC2A9B94);
        }
        nlRotateAY((unsigned short)t105);
        if (((unsigned short)(*(short *)0xC2A992C) & 0x100) == 0x100) {
            FcvPlay(0xC9C6C40, 0x16, (float)(*(int *)0xC2A9B90));
        } else {
            humanDraw(0xCADBCA8, 0x16, 0x0, 0x0);
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslateV(0xC131988);
        nlRotateAY((unsigned short)(*(short *)0xC2A9B94));
        FcvPlay(0xC9EF530, 0x24, 0.0f);
        return nlPopMatrix(0x1);
    }
    return t95;
}
