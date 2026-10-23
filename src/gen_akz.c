/* Straight-line functions with calls and guards (batch gen_akz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void setObjHitSplitSleep(int a4);

void setObjHitSplitSleep(int a4)
{
    float u1;
    int t2;
    int t4;
    int t5;
    int t7;
    int t3;
    int t8;
    int stk[15];

    if ((nlLength((a4 + 0xC), (a4 + 0x58))) > (1.0f + 1.0f)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
        *(unsigned int *)(((int)stk + 4)) = 0xC0EDEB4;
        u1 = *(float *)0xC0387B0;
        t2 = 0x0;
        for (;;) {
            t4 = set_event(0x84, 0xC0385E2);
            if (t4 != 0) {
                t3 = t4;
                t3 = (t3 + 0x14);
                t5 = a4;
                t7 = t3;
                for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
                if (t2 != 0) {
                    nlScaleVector((t3 + 0x30), (t3 + 0x30), (-1.0f));
                }
                nlScaleVector((((int)stk + 4) + 0x4), (t3 + 0x30), u1);
                nlAddVector(t3, (((int)stk + 4) + 0x4));
                *(unsigned int *)((t3 + 0x28)) = (t3 + 0x30);
                *(unsigned int *)((t3 + 0x54)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)((t3 + 0x64)) = (*(int *)(((((*(int *)((a4 + 0x6C))) << 2) + (*(int *)0xC0EE208)) + 0x0)));
                SetColliObj(t3, 0x10);
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}
