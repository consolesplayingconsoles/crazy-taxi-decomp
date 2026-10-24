/* Straight-line functions with calls and guards (batch gen_vd): generated from the code and checked by tests. Calls are
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
    int t4;
    int t5;
    int stk[10];

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0385AC);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), 8.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 4) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            *(unsigned int *)(((t1 + 0x14) + 0x54)) = 0xC0EDF44;
            *(unsigned int *)(((t1 + 0x14) + 0x64)) = (*(int *)(((*(int *)0xC0EE218) + 0x0)));
            SetColliObj((t1 + 0x14), 0x10);
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), (-8.0f));
            nlAddVector(a4, (((int)stk + 4) + 0xC));
            *(unsigned int *)((a4 + 0x54)) = 0xC0EDF68;
            *(unsigned int *)((a4 + 0x64)) = (*(int *)(((*(int *)0xC0EE21C) + 0x0)));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}
