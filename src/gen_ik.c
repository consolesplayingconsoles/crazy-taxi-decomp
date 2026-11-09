/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Default2_Sprite(void);
int Put_Default_Sprite(int, int);
int Put_OverArea(void);
int Put_Pass_Time(void);
int Put_PickUp_Nag(void);
int Put_ReverseDriving(void);
int Put_TimeUp(void);
int Put_Time_Bonus(int, int);
int Put_Time_Count(int, float);
int gdc_StopStreamVoice(int);
int hudDrawJudgement(void);
int hudDrawJudgement2(void);
int hudDrawPassRanking(void);
int hudDrawTime(void);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int pfTextPut(int, int, int);
int hudDraw(float f4);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };


int hudDraw(float f4)
{
    int t4;
    int t145;
    int t154;
    int t185;
    int t6;
    int t52;
    int t67;
    int t68;
    int t129;
    int t134;
    int t146;
    int t151;

    if (((*(int *)0xC2A75E0) & 0x1) == 1) {
        Put_Time_Count(0x0, f4);
    }
    t4 = *(int *)0xC2A75E0;
    if ((t4 & 0x80) == 0x80) {
        if (((t4 & 0x10000000) != 0x10000000) && (t6 = *(int *)0xC1EE20C, t6 != 2)) {
            Put_Pass_Time();
        }
        hudDrawTime();
    } else {
        t52 = 0x80;
    }
    if (((*(int *)0xC2A75E0) & 0x100) == 0x100) {
        Put_Time_Bonus(0x100, t52);
    } else {
        t67 = 0x100;
    }
    t68 = t52;
    if ((*(int *)0xC1EE20C) != 2) {
        if (((*(int *)0xC2A75E0) & 0x400) == 0x400) {
            hudDrawJudgement();
        } else {
        }
        if (((*(int *)0xC2A75E0) & 0x800) == 0x800) {
            hudDrawJudgement2();
        } else {
        }
        if (((*(int *)0xC2A75E0) & 0x1000) == 0x1000) {
            hudDrawPassRanking();
        } else {
            t67 = 0x1000;
        }
        t68 = t52;
    }
    if (((*(int *)0xC2A75E0) & 0x10) == 16) {
        Put_Default2_Sprite();
    } else {
    }
    if (((*(int *)0xC2A75E0) & 0x20) == 32) {
        Put_Default_Sprite(t67, t68);
    }
    if (((*(int *)0xC2A75E0) & 0x1000000) == 0x1000000) {
        Put_ReverseDriving();
    }
    if (((*(int *)0xC2A75E0) & 0x2000000) == 0x2000000) {
        Put_PickUp_Nag();
    }
    if (((*(int *)0xC2A75E0) & 0x4000000) == 0x4000000) {
        Put_OverArea();
    }
    if (((*(int *)0xC2A75E0) & 0x10000000) == 0x10000000) {
        Put_TimeUp();
    }
    t185 = 0xC052FF8;
    if ((*(int *)0xC17948C) != 0) {
        pfSetFont(0x0);
        pfSize(1.0f, 1.0f);
        pfSetZ(0.149999991f);
        pfColor(0xFF00FF00, 0xFFFFFF00, 0xFF00FF00, 0xFFFFFF00);
        t185 = (pfTextPut(0x23, 0x1A9, 0xC0D0878));
    }
    if ((((((struct o4_int *)0xC2A7368)->v)) == 0) && (t129 = (((struct o0_int *)0xC2A7368)->v), t129 == 0)) {
    } else {
        pfSetFont(0x0);
        pfSize(1.0f, 1.0f);
        t154 = pfSetZ(0.149999991f);
        if ((((((struct o4_int *)0xC2A7368)->v)) != 0) && (t134 = (((struct o0_int *)0xC2A7368)->v), t134 == 0)) {
            pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
            t185 = (pfTextPut(0x23, 0x197, 0xC0D0884));
        } else {
            t145 = (((struct o4_int *)0xC2A7368)->v);
            if ((t145 == 0) && (t146 = (((struct o0_int *)0xC2A7368)->v), t146 != 0)) {
                pfColor(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                t185 = (pfTextPut(0x23, 0x197, 0xC0D0890));
            } else {
                if ((t145 != 0) && (t151 = (((struct o0_int *)0xC2A7368)->v), t151 != 0)) {
                    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                    t154 = (pfTextPut(0x23, 0x197, 0xC0D08A4));
                }
                t185 = t154;
            }
        }
    }
    if ((*(int *)0xC2A11B0) == 0) {
        *(unsigned int *)0xC2A91C8 = 0x0;
    }
    if ((*(int *)0xC2A11B0) != 0) {
        t185 = 0xC2A91C8;
        if ((*(int *)0xC2A91C8) == 0) {
            t185 = gdc_StopStreamVoice(0x0);
            *(unsigned int *)0xC2A91C8 = 0x1;
        }
    }
    return t185;
}
