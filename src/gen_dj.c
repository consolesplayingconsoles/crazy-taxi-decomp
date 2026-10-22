/* Straight-line functions with calls and guards (batch gen_dj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int pedIsSpecialModel(int);
int FUN_0c156f4c(int, int, int);
int FUN_0c157ba0(int, int);
int FUN_0c157cc8(void);
int FUN_0c157d20(int);
int FUN_0c157d46(int, int);
int GetCollision2D(int, float);
int ResetFadeColor(void);
int kmiFBgetfreememEx(int, int);
int nlAddVector(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlRand(void);
extern int nlSprPut();
int pedInit(int, int);
int kmiVQalloc(int a4, int a5, int a6);
int menuPutSprites(int a4, int a5, int a6, int a7);
int pedSpawn(int a4, int a5);

int kmiVQalloc(int a4, int a5, int a6)
{
    int t1;
    int t23;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t19;
    int t30;
    int t57;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t42;
    int t43;
    int t48;
    int t49;
    int t50;
    int t64;
    int t65;
    int t66;
    int t22;
    int t2;
    int t6;
    int t67;
    int t45;
    int t51;
    int stk[13] = {0};

    FUN_0c157ba0((((int)stk + 4) + 0x8), a4);
    t1 = *(int *)0xC177FE4;
    t23 = 0x0;
    if (t1 != 0) {
        t3 = t1;
        t4 = a5;
        t5 = a6;
        t7 = 0x0;
        for (;;) {
            t8 = *(short *)((t3 + 0x0));
            t9 = *(int *)(((int)stk + 12));
            if (((unsigned short)t8 & 0xF000) == t9) {
                t10 = *(int *)(((int)stk + 28));
                t5 = t10;
                t4 = 0x0;
                if ((unsigned int)0x0 < (unsigned int)t5) {
                    for (;;) {
                        t2 = t4;
                        t2 = (t2 << 2);
                        t2 = (t2 + (t3 + 0xC));
                        t11 = *(int *)((t2 + 0x0));
                        if (t11 == 0) {
                            t6 = t4;
                            t7 = t3;
                            t3 = 0x0;
                            t4 = t5;
                        }
                        t4 = (t4 + 0x1);
                        if ((unsigned int)t4 >= (unsigned int)t5) {
                            break;
                        }
                    }
                }
            }
            if (t7 == 0) {
                t19 = *(int *)((t3 + 0x4));
                t3 = t19;
            }
            if (t3 == 0) {
                break;
            }
        }
        t22 = t6;
        t23 = t7;
    }
    if (t23 == 0) {
        t30 = FUN_0c157cc8();
        t57 = 0x3;
        if (t30 != 0) {
            t31 = (t30 + 0xC);
            for (;;) {
                *(unsigned int *)((t31 + 0x0)) = 0x0;
                t31 = (t31 + 0x4);
                if ((unsigned int)t31 >= (unsigned int)(t30 + 0x4C)) {
                    break;
                }
            }
            FUN_0c157d46(0xC177FE4, t30);
            t33 = *(short *)((t30 + 0x0));
            t34 = *(int *)(((int)stk + 12));
            *(unsigned short *)((t30 + 0x0)) = (t33 | t34);
            t35 = *(int *)(((int)stk + 24));
            t36 = *(int *)0xC2EA684;
            if ((t36 & 4) != 0) {
                kmiFBgetfreememEx(((int)stk + 4), (((int)stk + 4) + 0x4));
                t38 = *(int *)(((int)stk + 4));
                t39 = *(int *)(((int)stk + 8));
                t40 = 0x0;
                if ((int)t38 < (int)t39) {
                    t40 = 0x1;
                }
                t42 = FUN_0c156f4c(t40, t35, t30);
                t45 = t42;
            } else {
                t43 = FUN_0c156f4c(0x1, t35, t30);
                t45 = t43;
            }
            if (t45 != 0) {
                FUN_0c157d20(t30);
                t51 = 0x3;
            } else {
                t48 = *(int *)(((int)stk + 16));
                t49 = *(int *)((t30 + 0x8));
                *(unsigned int *)((a4 + 0x1C)) = (((0x0 * ((unsigned int)t48 >> 2)) << 2) + t49);
                *(unsigned int *)(((0x0 + (t30 + 0xC)) + 0x0)) = a4;
                t50 = *(short *)((t30 + 0x0));
                *(unsigned short *)((t30 + 0x0)) = (t50 | 0x2);
                t51 = 0x0;
            }
            t57 = t51;
        }
        t67 = t57;
    } else {
        t64 = *(int *)(((int)stk + 16));
        t65 = *(int *)((t23 + 0x8));
        *(unsigned int *)((a4 + 0x1C)) = (((t22 * ((unsigned int)t64 >> 2)) << 2) + t65);
        *(unsigned int *)((((t22 << 2) + (t23 + 0xC)) + 0x0)) = a4;
        t66 = *(short *)((t23 + 0x0));
        *(unsigned short *)((t23 + 0x0)) = (t66 | 0x2);
        t67 = 0x0;
    }
    return t67;
}


