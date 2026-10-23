/* Straight-line functions with calls and guards (batch gen_zy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int, float, float);
int nlOuterProduct(int, int, int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int set_event(int, int);
void setObjHitBreakSide(int a4, float f4, float f5);

void setObjHitBreakSide(int a4, float f4, float f5)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t18;
    int stk[12];

    if ((nlLength((a4 + 0xC), (a4 + 0x58), f4, f5)) > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0385AC);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), 12.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 4) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            *(unsigned int *)(((t1 + 0x14) + 0x54)) = 0xC0EDED8;
            *(unsigned int *)(((t1 + 0x14) + 0x64)) = (*(int *)(((*(int *)0xC0EE20C) + 0x0)));
            SetColliObj((t1 + 0x14), 0x10);
            nlSubVector3op((((int)stk + 4) + 0xC), (a4 + 0xC), (a4 + 0x58));
            nlOuterProduct((a4 + 0x3C), (a4 + 0x30), ((int)stk + 4));
            if ((nlInnerProduct((((int)stk + 4) + 0xC), ((int)stk + 4))) > 0.0f) {
                *(unsigned int *)((a4 + 0x54)) = 0xC0EDEFC;
                t18 = (*(int *)(((*(int *)0xC0EE210) + 0x0)));
            } else {
                *(unsigned int *)((a4 + 0x54)) = 0xC0EDF20;
                t18 = (*(int *)(((*(int *)0xC0EE214) + 0x0)));
            }
            *(unsigned int *)((a4 + 0x64)) = t18;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}
