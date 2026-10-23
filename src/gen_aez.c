/* Straight-line functions with calls and guards (batch gen_aez): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlTranslateV(int);
int set_event(int, int);
void setObjHitBreakCount(int a4);

void setObjHitBreakCount(int a4)
{
    int t5;
    int t6;
    int t10;
    int t11;
    int t13;
    int t7;
    int t24;
    int t14;
    int stk[13];

    if ((*(int *)((a4 + 0x20))) == 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC097210); }
        nlPushUnitMatrix();
        nlTranslateV(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0xC0EE1E8;
        t5 = a4;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)(*(int *)(((((int)stk + 4) + 0x4) + ((*(int *)((a4 + 0x6C))) << 2))))) {
                break;
            }
            t5 = 0x84;
            t10 = set_event(t5, 0xC0385AC);
            t5 = t10;
            if (t10 != 0) {
                t7 = t5;
                t7 = (t7 + 0x14);
                t11 = a4;
                t13 = t7;
                for (;;) { t14 = *(int *)t11; t11 = (t11 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t11) break; *(unsigned int *)t13 = t14; t13 = (t13 + 4); }
                t5 = 0x0;
                nlGetPushedMatrix(t5);
                t5 = (*(int *)((a4 + 0x6C)));
                t5 = (t5 << 2);
                t5 = (t5 << 2);
                t5 = (t5 << 2);
                t5 = (t5 << 1);
                t5 = (t5 + 0xC0EE224);
                t5 = (t5 + ((t6 << 2) << 2));
                nlTranslateV(t5);
                t5 = t7;
                nlGetTranslate(t5);
                *(unsigned int *)((t7 + 0x54)) = 0xC0EDD94;
                *(unsigned int *)((t7 + 0x64)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)));
                t5 = t7;
                SetColliObj(t5, 0x10);
            } else {
                t24 = t5;
            }
            t6 = (t6 + 0x1);
            t5 = t24;
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    }
}
