/* Straight-line functions with calls and guards (batch gen_lf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetColliObj(int, int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int set_event(int, int);
void setObjHitBreakSide(int a4);

void setObjHitBreakSide(int a4)
{
    float t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    float t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t35;
    int t36;
    int t37;
    int t5;
    int t18;
    int stk[12] = {0};

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0385AC);
        if (t1 != 0) {
            t2 = a4;
            t3 = (a4 + 112);
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)t3 < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            nlScaleVector((((int)stk + 4) + 0xC), ((t1 + 0x14) + 0x3C), 12.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 4) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            *(unsigned int *)(((t1 + 0x14) + 0x54)) = 0xC0EDED8;
            t8 = *(int *)0xC0EE20C;
            t9 = *(int *)((t8 + 0x0));
            *(unsigned int *)(((t1 + 0x14) + 0x64)) = t9;
            SetColliObj((t1 + 0x14), 0x10);
            nlSubVector3op((((int)stk + 4) + 0xC), (a4 + 0xC), (a4 + 0x58));
            nlOuterProduct((a4 + 0x3C), (a4 + 0x30), ((int)stk + 4));
            t13 = nlInnerProduct((((int)stk + 4) + 0xC), ((int)stk + 4));
            if (t13 > 0.0f) {
                *(unsigned int *)((a4 + 0x54)) = 0xC0EDEFC;
                t14 = *(int *)0xC0EE210;
                t15 = *(int *)((t14 + 0x0));
                t18 = t15;
            } else {
                *(unsigned int *)((a4 + 0x54)) = 0xC0EDF20;
                t16 = *(int *)0xC0EE214;
                t17 = *(int *)((t16 + 0x0));
                t18 = t17;
            }
            *(unsigned int *)((a4 + 0x64)) = t18;
        }
        t35 = *(int *)(((a4 + 0xC) + 0x8));
        t36 = *(int *)(((a4 + 0xC) + 0x4));
        *(unsigned int *)(((a4 + 0x58) + 0x8)) = t35;
        t37 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)(((a4 + 0x58) + 0x4)) = t36;
        *(unsigned int *)(((a4 + 0x58) + 0x0)) = t37;
    }
}
