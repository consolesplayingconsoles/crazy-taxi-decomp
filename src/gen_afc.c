/* Straight-line functions with calls and guards (batch gen_afc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
void setObjHitShed(int a4);

void setObjHitShed(int a4)
{
    int t2;
    int t3;
    int t5;
    float u1;
    int t6;
    int stk[7] = {0};

    if (!((nlLength((a4 + 0xC), (a4 + 0x58))) > (1.0f + 1.0f)) && (u1 = *(float *)((a4 + 0x40)), !(0.699999988f > u1))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
        t2 = set_event(0x84, 0xC0385AC);
        if (t2 != 0) {
            t3 = a4;
            t5 = (t2 + 0x14);
            for (;;) { t6 = *(int *)t3; t3 = (t3 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t3) break; *(unsigned int *)t5 = t6; t5 = (t5 + 4); }
            nlScaleVector(((int)stk + 4), ((t2 + 0x14) + 0x3C), -8.0f);
            nlAddVector((t2 + 0x14), ((int)stk + 4));
            *(unsigned int *)(((t2 + 0x14) + 0x28)) = ((t2 + 0x14) + 0x30);
            *(unsigned int *)(((t2 + 0x14) + 0x54)) = 0xC0EDC08;
            *(unsigned int *)(((t2 + 0x14) + 0x64)) = (*(int *)(((*(int *)0xC0EE1BC) + 0x0)));
            SetColliObj((t2 + 0x14), 0x10);
            nlScaleVector(((int)stk + 4), (a4 + 0x3C), 11.0f);
            nlAddVector(a4, ((int)stk + 4));
            *(unsigned int *)((a4 + 0x54)) = 0xC0EDCBC;
            *(unsigned int *)((a4 + 0x64)) = (*(int *)(((*(int *)0xC0EE1D0) + 0x0)));
        }
    }
}
