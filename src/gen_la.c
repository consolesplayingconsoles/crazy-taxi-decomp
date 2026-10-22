/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void FUN_0c038688(int a4);

void FUN_0c038688(int a4)
{
    float t0;
    int t1;
    int t2;
    int t3;
    float u4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t20;
    int t21;
    int t22;
    int t23;
    int t29;
    int t30;
    int t31;
    int t6;
    int t11;
    int stk[15] = {0};

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = *(int *)(((a4 + 0xC) + 0x8));
        t2 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((a4 + 0x58) + 0x8)) = t1;
        t3 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((a4 + 0x58) + 0x4)) = t2;
        *(unsigned int *)(((a4 + 0x58) + 0x0)) = t3;
        *(unsigned int *)(((int)stk + 4)) = 0xC0EDEB4;
        u4 = *(float *)0xC0387B0;
        t5 = 0x0;
        for (;;) {
            t7 = set_event(0x84, 0xC0385E2);
            if (t7 != 0) {
                t6 = t7;
                t6 = (t6 + 0x14);
                t8 = a4;
                t9 = (a4 + 112);
                t10 = t6;
                for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)t9 < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
                if (t5 != 0) {
                    nlScaleVector((t6 + 0x30), (t6 + 0x30), (-1.0f));
                }
                nlScaleVector((((int)stk + 4) + 0x4), (t6 + 0x30), u4);
                nlAddVector(t6, (((int)stk + 4) + 0x4));
                *(unsigned int *)((t6 + 0x28)) = (t6 + 0x30);
                t20 = *(int *)(((int)stk + 4));
                *(unsigned int *)((t6 + 0x54)) = t20;
                t21 = *(int *)((a4 + 0x6C));
                t22 = *(int *)0xC0EE208;
                t23 = *(int *)((((t21 << 2) + t22) + 0x0));
                *(unsigned int *)((t6 + 0x64)) = t23;
                SetColliObj(t6, 0x10);
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)0x2) {
                break;
            }
        }
        KillColliObj(a4);
        *(unsigned int *)((a4 + 0x68)) = 0xFFFFFFFE;
    } else {
        t29 = *(int *)(((a4 + 0xC) + 0x8));
        t30 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((a4 + 0x58) + 0x8)) = t29;
        t31 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((a4 + 0x58) + 0x4)) = t30;
        *(unsigned int *)(((a4 + 0x58) + 0x0)) = t31;
    }
}
