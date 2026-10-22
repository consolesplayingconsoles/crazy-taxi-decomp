/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
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
    int t0;
    int t1;
    int t2;
    int t3;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t19;
    int t22;
    int t23;
    int t24;
    int t10;
    int t27;
    int t17;
    int stk[13] = {0};

    t0 = *(int *)((a4 + 0x20));
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC097218;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t1;
        t2 = *(int *)0xC097214;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t2;
        t3 = *(int *)0xC097210;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t3;
        nlPushUnitMatrix();
        nlTranslateV(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0xC0EE1E8;
        t8 = a4;
        t9 = 0x0;
        for (;;) {
            t11 = *(int *)((a4 + 0x6C));
            t12 = *(int *)(((((int)stk + 4) + 0x4) + (t11 << 2)));
            if ((int)t9 >= (int)t12) {
                break;
            }
            t8 = 0x84;
            t13 = set_event(t8, 0xC0385AC);
            t8 = t13;
            if (t13 != 0) {
                t10 = t8;
                t10 = (t10 + 0x14);
                t14 = a4;
                t15 = (a4 + 112);
                t16 = t10;
                for (;;) { t17 = *(int *)t14; t14 = (t14 + 4); if ((unsigned int)t15 < (unsigned int)t14) break; *(unsigned int *)t16 = t17; t16 = (t16 + 4); }
                t8 = 0x0;
                nlGetPushedMatrix(t8);
                t19 = *(int *)((a4 + 0x6C));
                t8 = t19;
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t8 = (t8 << 2);
                t8 = (t8 << 1);
                t8 = (t8 + 0xC0EE224);
                t8 = (t8 + ((t9 << 2) << 2));
                nlTranslateV(t8);
                t8 = t10;
                nlGetTranslate(t8);
                *(unsigned int *)((t10 + 0x54)) = 0xC0EDD94;
                t22 = *(int *)(((int)stk + 4));
                t23 = *(int *)((t22 + 0x0));
                t24 = *(int *)((t23 + 0x0));
                *(unsigned int *)((t10 + 0x64)) = t24;
                t8 = t10;
                SetColliObj(t8, 0x10);
            } else {
                t27 = t8;
            }
            t9 = (t9 + 0x1);
            t8 = t27;
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    }
}
