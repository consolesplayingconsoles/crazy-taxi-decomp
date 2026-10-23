/* Straight-line functions with calls and guards (batch gen_cr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec4Ang(int, int, int);
int pcarRejoinLane(int);
int nlCalcVector(int, int);
int nlsndSeqRequest(void);
int GetCollision2D(int, float);
int GetMenuMode(int);
int carBalance(int);
int calcCheck(int);
int calcCheckExec(int, int);
int carColliReflection(void);
int carEntry(int);
int carResistance(void);
int dropOutCheck(int);
int nlAddVector(int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarEnd(int);
int technicalCheck(int);
int pfAddNumber(int a4, int a5);
int menuChangeValue(int a4, int a5, int a6);
int SeachRankTotal(int a4, int a5, int a6);
int nlsndStreamGetParam(int a4, int a5, int a6);
int stopingCarExec(int a4);

int pfAddNumber(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;
    int t17;
    int t18;
    int t19;
    int t1;
    int t2;

    t3 = a4;
    if ((int)a4 < 0) {
        t0 = *(int *)0xC26E310;
        *(unsigned int *)0xC26E310 = (t0 + 0x1);
        *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = 0x2D;
        t1 = ((t0 + 0x1) - 0x1);
        t2 = 0x2D;
        t3 = (-a4);
    }
    t4 = t1;
    t5 = t2;
    t6 = t3;
    t7 = 0x0;
    while ((int)t6 >= (int)0xA) {
        t4 = t7;
        t5 = 0xC08106C;
        t4 = (t4 << 2);
        t4 = (t4 + 0xC26E314);
        t8 = (int)((int)t6 % (int)0xA);
        *(unsigned int *)((t4 + 0x0)) = t8;
        t4 = 0xC080F10;
        t9 = (int)((int)t6 / (int)0xA);
        t6 = t9;
        t7 = (t7 + 0x1);
    }
    *(unsigned int *)((0xC26E314 + (t7 << 2))) = t6;
    if ((int)(a5 - (t7 + 0x1)) > 0) {
        t10 = t5;
        t11 = (a5 - (t7 + 0x1));
        while (t11 != 0) {
            t12 = *(int *)0xC26E310;
            t10 = t12;
            t11 = (t11 - 1);
            t10 = (t10 + 0x1);
            *(unsigned int *)0xC26E310 = t10;
            *(unsigned char *)(((t10 - 0x1) + 0x0)) = 0x30;
            t10 = (t10 - 0x1);
        }
    }
    t16 = (t7 + 0x1);
    do {
        t17 = *(int *)0xC26E310;
        t16 = (t16 - 1);
        *(unsigned int *)0xC26E310 = (t17 + 0x1);
        t18 = *(int *)((0xC26E314 + (t16 << 2)));
        *(unsigned char *)((((t17 + 0x1) - 0x1) + 0x0)) = (t18 + 0x30);
    } while (t16 != 0);
    t19 = *(int *)0xC26E310;
    *(unsigned char *)((t19 + 0x0)) = 0x0;
    return (t16 << 2);
}



int nlsndStreamGetParam(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t4;
    int t3;
    int t5;
    int t9;
    int t8;
    int t7;
    int t54;
    int t44;
    int t40;
    int t11;
    int t10;
    int t12;
    int t15;
    int t13;
    int t14;
    int t20;
    int t25;
    int t30;
    int t35;
    int t48;
    int t49;
    int t58;
    int t2;
    int t6;
    int t59;
    int t50;
    int t36;
    int t31;
    int t26;
    int t21;
    int t17;

    t0 = *(signed char *)((a4 + 0x9));
    t1 = *(int *)((a4 + 0xC));
    t4 = 0x1;
    if ((t0 & 0x3) != 0) {
        t3 = 0x2;
        if ((t0 & 0x3) != 1) {
            if ((t0 & 0x3) == 2) {
                t2 = 0x4;
            }
            t3 = t2;
        }
        t4 = t3;
    }
    t5 = *(signed char *)((a4 + 0x8));
    t9 = 0x10;
    if (t5 != 0) {
        t8 = 0x8;
        if (t5 != 1) {
            t7 = 0x4;
            if (t5 != 2) {
                if (t5 == 3) {
                    t6 = 0x4;
                }
                t7 = t6;
            }
            t8 = t7;
        }
        t9 = t8;
    }
    if (a5 != 0) {
        t54 = t9;
        if (a5 != 1) {
            if (a5 != 2) {
                t44 = t1;
                if (a5 != 3) {
                    t40 = t4;
                    if (a5 != 4) {
                        if (a5 != 5) {
                            if (a5 != 6) {
                                if (a5 != 7) {
                                    if (a5 != 8) {
                                        if (a5 != 9) {
                                            t11 = 0xFFFFFFFF;
                                            if (a5 == 10) {
                                                t10 = *(signed char *)(((a4 + 0x1E) + 0x0));
                                                t11 = (unsigned char)t10;
                                            }
                                            t17 = t11;
                                        } else {
                                            t12 = *(signed char *)((a4 + 0x1F));
                                            t15 = 0x0;
                                            if ((unsigned char)t12 == 0) {
                                                t13 = *(short *)((a4 + 0x16));
                                                t14 = ((unsigned int)((unsigned int)((unsigned int)(unsigned short)t13 >> 2) >> 2) >> 2);
                                                if (((unsigned int)((unsigned int)((unsigned int)(unsigned short)t13 >> 2) >> 2) >> 2) == 0) {
                                                    t14 = 0x1;
                                                }
                                                t15 = t14;
                                            }
                                            t17 = t15;
                                        }
                                        t21 = t17;
                                    } else {
                                        t20 = *(signed char *)(((a4 + 0x33) + 0x0));
                                        t21 = ((int)((unsigned char)t20 & 0xF0) >> 4);
                                    }
                                    t26 = t21;
                                } else {
                                    t25 = *(signed char *)(((a4 + 0x33) + 0x0));
                                    t26 = ((unsigned char)t25 & 0xF);
                                }
                                t31 = t26;
                            } else {
                                t30 = *(signed char *)((((((short)a6 << 2) + a4) + 0x32) + 0x0));
                                t31 = (unsigned char)t30;
                            }
                            t36 = t31;
                        } else {
                            t35 = *(signed char *)((((((short)a6 << 2) + a4) + 0x31) + 0x0));
                            t36 = (unsigned char)t35;
                        }
                        t40 = t36;
                    }
                    t44 = t40;
                }
                t50 = t44;
            } else {
                t48 = (int)((int)((t1 << 2) << 1) / (int)t9);
                t49 = (int)((int)t48 / (int)t4);
                t50 = t49;
            }
            t54 = t50;
        }
        t59 = t54;
    } else {
        t58 = *(short *)(((a4 + 0x2A) + 0x0));
        t59 = (unsigned short)t58;
    }
    return t59;
}

