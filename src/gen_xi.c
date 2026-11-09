/* Straight-line functions with calls and guards (batch gen_xi): generated from the code and checked by tests. Calls are
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
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_short { char p[0x10]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };


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
    int stk[11];

    if (((*(int *)0xC1EE214) == 14) && ((t1 = (((struct o0_int *)0xC2A9A2C)->v), (int)t1 < (int)0x7) && ((t2 = *(int *)0xC1EE794, t2 != 0) && ((u3 = (((struct o28_float *)0xC179120)->v), !(-10.0f > u3)) || (u4 = (((struct o2C_float *)0xC179120)->v), 4000.0f > u4))))) {
        (((struct o0_uint *)0xC2A991C)->v) = 0x0;
    }
    if (((((struct o0_int *)0xC2A991C)->v)) == 0) {
        if ((int)(*(int *)0xC1794D0) >= (int)a4) {
            Start_Excellent();
            (((struct o0_uint *)0xC2A991C)->v) = 0x1;
            (((struct o0_uint *)0xC179120)->v) = 0x0;
            if (((*(int *)0xC1EE214) == 14) && (t24 = *(int *)0xC1EE794, (int)t24 <= 0)) {
                (((struct o0_uint *)0xC179120)->v) = 0x0;
            }
        } else {
            if ((*(int *)0xC1EE794) == 0) {
                Start_Fault(0x0);
                (((struct o0_uint *)0xC2A991C)->v) = 0x1;
                (((struct o0_uint *)0xC179120)->v) = 0x0;
                if (((*(int *)0xC1EE214) == 14) && (t34 = *(int *)0xC1EE794, (int)t34 <= 0)) {
                    (((struct o0_uint *)0xC179120)->v) = 0x0;
                }
            } else {
                if ((*(int *)0xC1EE214) == 14) {
                    if ((-10.0f > ((((struct o28_float *)0xC179120)->v))) && (u42 = (((struct o2C_float *)0xC179120)->v), !(4000.0f > u42))) {
                        Start_Fault(0x3);
                        (((struct o0_uint *)0xC2A991C)->v) = 0x1;
                    }
                    if (((*(int *)0xC1EE214) == 14) && (t52 = *(int *)0xC1EE794, (int)t52 <= 0)) {
                        (((struct o0_uint *)0xC179120)->v) = 0x0;
                    }
                }
            }
        }
    } else {
        if (((*(int *)0xC1EE214) == 14) && (t78 = *(int *)0xC1EE794, (int)t78 <= 0)) {
            (((struct o0_uint *)0xC179120)->v) = 0x0;
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
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)(0xC131970); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC179144); }
        (((struct o4_ushort *)0xC2A9B90)->v) = ((Current_to_Target_angleY()) + 0x8000);
        nlPushMatrix(0x0);
        nlTranslateV(0xC131970);
        nlTranslate(0.0f, 0.0f, (-1e+01f));
        if (((unsigned short)((((struct o10_short *)0xC2A991C)->v)) & 0x100) == 0x100) {
            t105 = ((((struct o38_short *)0xC2A9A2C)->v));
        } else {
            t105 = ((((struct o4_short *)0xC2A9B90)->v));
        }
        nlRotateAY((unsigned short)t105);
        if (((unsigned short)((((struct o10_short *)0xC2A991C)->v)) & 0x100) == 0x100) {
            FcvPlay(0xC9C6C40, 0x16, (float)((((struct o0_int *)0xC2A9B90)->v)));
        } else {
            humanDraw(0xCADBCA8, 0x16, 0x0, 0x0);
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslateV(0xC131988);
        nlRotateAY((unsigned short)((((struct o4_short *)0xC2A9B90)->v)));
        FcvPlay(0xC9EF530, 0x24, 0.0f);
        return nlPopMatrix(0x1);
    }
    return t95;
}
