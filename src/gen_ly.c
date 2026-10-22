/* Straight-line functions with calls and guards (batch gen_ly): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077f70(void);
int FUN_0c07b9d0(void);
int GetCollisionFirst(int, int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlSqrt(int, int);
void ExecSpark(void);

void ExecSpark(void)
{
    int t2;
    int t4;
    int t5;
    int t8;
    int t11;
    int t16;
    float t24;
    int t31;
    float u33;
    int t6;
    int t7;
    int t9;
    int t10;
    float u12;
    int t39;
    int t42;
    int t26;
    int stk[16] = {0};

    if ((int)(*(int *)0xC2757D0) < (int)0x1) {
    } else {
        nlPushUnitMatrix();
        t2 = FUN_0c077f70();
        *(unsigned int *)(((int)stk + 4)) = (*(int *)0xC2757D0);
        t4 = *(int *)0xC2757D4;
        *(unsigned int *)(((int)stk + 8)) = t4;
        t5 = t2;
        t8 = t4;
        t11 = ((short)((short)t4 * (short)0x1C) + 0xC274DF8);
        for (;;) {
            if ((*(int *)(((int)stk + 4))) != 0) {
                t6 = (*(int *)((t11 + 0x18)));
                t6 = (t6 - 1);
                *(unsigned int *)((t11 + 0x18)) = t6;
                if ((int)t6 < 0) {
                    t7 = (*(int *)0xC2757D0);
                    t7 = (t7 - 1);
                    *(unsigned int *)0xC2757D0 = t7;
                    t7 = 0x5A;
                    t16 = *(int *)0xC2757D4;
                    *(unsigned int *)0xC2757D4 = (t16 + 0x1);
                    if ((int)(t16 + 0x1) >= (int)t7) {
                        *(unsigned int *)0xC2757D4 = 0x0;
                    }
                    t39 = t6;
                    t42 = t10;
                } else {
                    u12 = 0.0f;
                    t10 = 0xC031B6A;
                    t8 = t11;
                    t5 = (GetCollisionFirst(t8, (t11 + 0xC)));
                    t9 = t5;
                    t5 = (*(int *)((t9 + 0x1C)));
                    t10 = 0xC078BC0;
                    if (t5 == -1) {
                        t8 = t11;
                        t26 = (t11 + 0xC);
                    } else {
                        t5 = 0x18;
                        t8 = ((int)stk + 4);
                        t8 = (t8 + 0x8);
                        t5 = (nlScaleVector(t8, (t11 + 0xC), (*(float *)((t9 + t5)))));
                        t8 = t11;
                        t5 = (nlAddVector(t8, (((int)stk + 4) + 0x8)));
                        t5 = 0xC037868;
                        u12 = (*(float *)((t5 + 0x0)));
                        t8 = t11;
                        t8 = (t8 + 0xC);
                        t24 = nlInnerProduct(t8, (t9 + 0xC));
                        t8 = ((int)stk + 4);
                        t8 = (t8 + 0x8);
                        t5 = (nlScaleVector(t8, (t9 + 0xC), (-(t24 * u12))));
                        t8 = t11;
                        t8 = (t8 + 0xC);
                        t26 = (((int)stk + 4) + 0x8);
                    }
                    t7 = 0xC078A50;
                    t5 = (nlAddVector(t8, t26));
                    t7 = 0xC2757DC;
                    t9 = (*(int *)(((int)stk + 8)));
                    t31 = *(signed char *)((t7 + 0x0));
                    t9 = (t9 << 2);
                    t6 = 0xC0771B0;
                    t9 = (t9 << 2);
                    t9 = (t9 << 1);
                    t9 = (t9 + 0xC274298);
                    t8 = t11;
                    t5 = (nlSqrt(t8, ((signed char)(((t31 << 1) + t31) << 2) + (t9 + 0x8))));
                    t5 = 0xC037874;
                    u33 = *(float *)((t5 + 0x0));
                    t5 = 0x10;
                    t8 = t11;
                    *(float *)((t11 + t5)) = ((*(float *)((t11 + t5))) - u33);
                    t5 = 0xC037878;
                    u12 = (*(float *)((t5 + 0x0)));
                    t8 = (t8 + 0xC);
                    t5 = (nlScaleVector(t8, (t11 + 0xC), u12));
                    t5 = (*(int *)((t11 + 0x18)));
                    t8 = 0xC0EDB40;
                    t5 = (t5 << 2);
                    *(unsigned int *)((t9 + 0x4)) = (*(int *)((t8 + t5)));
                    t42 = 0xC078BC0;
                }
                t6 = t39;
                t7 = (*(int *)(((int)stk + 8)));
                t10 = t42;
                t7 = (t7 + 0x1);
                *(unsigned int *)(((int)stk + 8)) = t7;
                if ((int)t7 >= (int)0x5A) {
                    t11 = 0xC274DF8;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                } else {
                    t11 = (t11 + 0x1C);
                }
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) - 1);
                continue;
            }
            break;
        }
        nlPopMatrix(0x1);
        if ((int)(*(int *)0xC2757D0) > 0) {
            if ((*(int *)0xC2757E0) == 0) {
                nlLineBlendFunc(0x1, 0x4);
                nlLineSetThickness((1.0f + 1.0f));
                nlLineSetDiv((*(float *)0xC0379BC));
                if ((*(int *)0xC2757D0) == 90) {
                    *(unsigned int *)0xC274DD8 = 0x0;
                } else {
                    *(unsigned int *)(((((((*(int *)0xC2757D8) << 2) << 2) << 1) + 0xC274298) + 0x0)) = 0x0;
                    if ((int)(*(int *)0xC2757D4) > (int)(*(int *)0xC2757D8)) {
                        *(unsigned int *)0xC274DD8 = 0x0;
                        FUN_0c07b9d0();
                    }
                    *(volatile int *)0xC2757D4;
                }
                FUN_0c07b9d0();
            }
        } else {
            *(unsigned int *)0xC2757D8 = 0x0;
            *(unsigned int *)0xC2757D4 = 0x0;
            *(unsigned int *)0xC2757D0 = 0x0;
        }
        *(unsigned int *)0xC2757DC = ((*(int *)0xC2757DC) ^ 0x1);
        *(unsigned int *)0xC2757E0 = 0x0;
    }
}
