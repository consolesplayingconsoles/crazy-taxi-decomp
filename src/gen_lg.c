/* Straight-line functions with calls and guards (batch gen_lg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void setObjHitBreakOff(int a4);

void setObjHitBreakOff(int a4)
{
    float t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    float u11;
    int t14;
    int t15;
    int t23;
    int t24;
    int t25;
    int t5;
    int stk[10] = {0};

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0385AC);
        if (t1 != 0) {
            t2 = a4;
            t3 = (a4 + 112);
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)t3 < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), 8.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 4) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            *(unsigned int *)(((t1 + 0x14) + 0x54)) = 0xC0EDF44;
            t8 = *(int *)0xC0EE218;
            t9 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((t1 + 0x14) + 0x64)) = t9;
            SetColliObj((t1 + 0x14), 0x10);
            u11 = *(float *)0xC038D14;
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), u11);
            nlAddVector(a4, (((int)stk + 4) + 0xC));
            *(unsigned int *)((a4 + 0x54)) = 0xC0EDF68;
            t14 = *(int *)0xC0EE21C;
            t15 = *(int *)((t14 + 0x0));
            *(unsigned int *)((a4 + 0x64)) = t15;
        }
        t23 = *(int *)(((a4 + 0xC) + 0x8));
        t24 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((a4 + 0x58) + 0x8)) = t23;
        t25 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((a4 + 0x58) + 0x4)) = t24;
        *(unsigned int *)(((a4 + 0x58) + 0x0)) = t25;
    }
}
