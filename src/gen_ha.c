/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int KillColliObj(int);
int SetCameraPosVelocity(int);
int SetColliObj(int, int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslateV(int);
int set_event(int, int);
void FUN_0c038776(int a4);

void FUN_0c038776(int a4)
{
    int t0;
    int t1;
    int t2;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t17;
    int t19;
    int t20;
    int t24;
    int t25;
    int t10;
    int t15;

    t0 = *(int *)((a4 + 0x20));
    if (t0 == 0) {
    } else {
        t1 = *(int *)((a4 + 0x6C));
        t2 = 0x8;
        if ((int)t1 < (int)0x3) {
            t2 = 0x3;
        }
        nlPushUnitMatrix();
        nlTranslateV(a4);
        SetCameraPosVelocity((a4 + 0x30));
        nlPushMatrix(0x0);
        if ((int)t2 > 0) {
            t8 = 0x0;
            t9 = 0x0;
            for (;;) {
                t11 = set_event(0x84, 0xC0385AC);
                if (t11 != 0) {
                    t10 = t11;
                    t10 = (t10 + 0x14);
                    t12 = a4;
                    t13 = (a4 + 112);
                    t14 = t10;
                    for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)t13 < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
                    nlGetPushedMatrix(0x0);
                    t17 = *(int *)((a4 + 0x6C));
                    nlTranslateV(((((((t17 << 2) << 2) << 2) << 1) + 0xC0EE224) + t9));
                    t19 = *(int *)((a4 + 0x6C));
                    t20 = *(int *)((((((((t19 << 2) << 2) << 2) << 1) + 0xC0EE224) + t9) + 0xC));
                    nlRotateAY(t20);
                    nlGetTranslate(t10);
                    GetRotVec((t10 + 0x30));
                    *(unsigned int *)((t10 + 0x54)) = 0xC0EDBC0;
                    t24 = *(int *)0xC0EE1B4;
                    t25 = *(int *)((t24 + 0x0));
                    *(unsigned int *)((t10 + 0x64)) = t25;
                    SetColliObj(t10, 0x10);
                }
                t8 = (t8 + 0x1);
                t9 = (t9 + 0x10);
                if ((int)t8 >= (int)t2) {
                    break;
                }
            }
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    }
}
