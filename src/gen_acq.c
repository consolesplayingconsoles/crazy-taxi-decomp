/* Straight-line functions with calls and guards (batch gen_acq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslateV(int);
int set_event(int, int);
void setObjHitBreakSet(int a4);

void setObjHitBreakSet(int a4)
{
    int t3;
    int t9;
    int t10;
    int t12;
    int t13;
    int t15;
    int t11;
    int t16;

    if ((*(int *)((a4 + 0x20))) == 0) {
    } else {
        t3 = 0x8;
        if ((int)(*(int *)((a4 + 0x6C))) < (int)0x3) {
            t3 = 0x3;
        }
        nlPushUnitMatrix();
        nlTranslateV(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        if ((int)t3 > 0) {
            t9 = 0x0;
            t10 = 0x0;
            for (;;) {
                t12 = set_event(0x84, 0xC0385AC);
                if (t12 != 0) {
                    t11 = t12;
                    t11 = (t11 + 0x14);
                    t13 = a4;
                    t15 = t11;
                    for (;;) { t16 = *(int *)t13; t13 = (t13 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t13) break; *(unsigned int *)t15 = t16; t15 = (t15 + 4); }
                    nlGetPushedMatrix(0x0);
                    nlTranslateV((((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 2) << 1) + 0xC0EE224) + t10));
                    nlRotateAY((*(int *)(((((((((*(int *)((a4 + 0x6C))) << 2) << 2) << 2) << 1) + 0xC0EE224) + t10) + 0xC))));
                    nlGetTranslate(t11);
                    GetRotVec((t11 + 0x30));
                    *(unsigned int *)((t11 + 0x54)) = 0xC0EDBC0;
                    *(unsigned int *)((t11 + 0x64)) = (*(int *)(((*(int *)0xC0EE1B4) + 0x0)));
                    SetColliObj(t11, 0x10);
                }
                t9 = (t9 + 0x1);
                t10 = (t10 + 0x10);
                if ((int)t9 >= (int)t3) {
                    break;
                }
            }
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    }
}
