/* Straight-line functions with calls and guards (batch gen_rr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndSeqRequest(int);
int nlsndPackLoadStatus(int a4, int a5, int a6);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };


int nlsndPackLoadStatus(int a4, int a5, int a6)
{
    int t0;
    int t114;
    int t13;
    int t14;
    int t16;
    int t17;
    int t19;
    int t57;
    int t40;
    int t41;
    int t43;
    int t44;
    int t46;
    int t75;
    int t101;
    int t104;
    int t65;
    int t30;

    t0 = (((struct o0_int *)0xC2B76FC)->v);
    t114 = 0xFFFFFFFF;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        t30 = (unsigned char)t0;
                        if ((unsigned char)t0 == 5) {
                            t30 = 0x1;
                            if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                            } else {
                                (((struct o0_uint *)0xA08000B0)->v) = 0x0;
                                (((struct o0_uint *)0xC2B76FC)->v) = 0x0;
                                t30 = 0x0;
                            }
                        }
                    } else {
                        t13 = (((struct o0_int *)0xC2B76FC)->v);
                        if ((t13 & 0xFF00) == 0) {
                            t14 = 0x0;
                            for (;;) {
                                if ((int)t14 >= (int)((((struct o4_int *)0xC2B76FC)->v))) {
                                    return 0x1;
                                }
                                t16 = (((struct o14_int *)0xC2B76FC)->v);
                                (((struct o14_uint *)0xC2B76FC)->v) = (t16 + 0x4);
                                t17 = (((struct o10_int *)0xC2B76FC)->v);
                                (((struct o10_uint *)0xC2B76FC)->v) = (t17 + 0x4);
                                *(unsigned int *)((((t16 + 0x4) - 4) + 0x0)) = (*(int *)((((t17 + 0x4) - 4) + 0x0)));
                                t19 = (((struct o8_int *)0xC2B76FC)->v);
                                (((struct o8_uint *)0xC2B76FC)->v) = (t19 - 4);
                                if ((t19 - 4) == 0) {
                                    break;
                                }
                                t14 = (t14 + 0x1);
                            }
                            (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                            (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                            t30 = 0x1;
                        } else {
                            t30 = 0x0;
                            if ((t13 & 0xFF00) == 0x100) {
                                (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                                (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                                t30 = 0x1;
                            }
                        }
                    }
                    t65 = t30;
                } else {
                    t57 = 0x1;
                    if ((nlsndBlockMoveStatus()) == 0) {
                        (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                        t40 = (((struct o0_int *)0xC2B76FC)->v);
                        if ((t40 & 0xFF00) == 0) {
                            t41 = 0x0;
                            for (;;) {
                                if ((int)t41 >= (int)((((struct o4_int *)0xC2B76FC)->v))) {
                                    return 0x1;
                                }
                                t43 = (((struct o14_int *)0xC2B76FC)->v);
                                (((struct o14_uint *)0xC2B76FC)->v) = (t43 + 0x4);
                                t44 = (((struct o10_int *)0xC2B76FC)->v);
                                (((struct o10_uint *)0xC2B76FC)->v) = (t44 + 0x4);
                                *(unsigned int *)((((t43 + 0x4) - 4) + 0x0)) = (*(int *)((((t44 + 0x4) - 4) + 0x0)));
                                t46 = (((struct o8_int *)0xC2B76FC)->v);
                                (((struct o8_uint *)0xC2B76FC)->v) = (t46 - 4);
                                if ((t46 - 4) == 0) {
                                    break;
                                }
                                t41 = (t41 + 0x1);
                            }
                            (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                            (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                            t57 = 0x1;
                        } else {
                            t57 = 0x0;
                            if ((t40 & 0xFF00) == 0x100) {
                                (((struct o0_uint *)0xA08000B0)->v) = 0x1;
                                (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                                t57 = 0x1;
                            }
                        }
                    }
                    t65 = t57;
                }
                t104 = t65;
            } else {
                if (((((struct o4_int *)0xA08000B0)->v)) != 0) {
                    t75 = (((struct oC_int *)0xC2B76FC)->v);
                    if (t75 != 0) {
                        nlsndBlockMove(((((struct o14_int *)0xC2B76FC)->v)), (((((struct o14_int *)0xC2B76FC)->v)) + ((((struct o8_int *)0xC2B76FC)->v))), t75);
                    }
                    (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                }
                t104 = 0x1;
            }
        } else {
            t101 = 0x0;
            for (;;) {
                if ((nlsndSeqRequest(0x18A0)) != 0) {
                    t101 = (t101 + 0x1);
                    if ((int)t101 >= (int)0x400000) {
                        break;
                    }
                    continue;
                }
                (((struct o0_uint *)0xC2B76FC)->v) = (((((struct o0_int *)0xC2B76FC)->v)) + 0x1);
                return 0x1;
            }
            t104 = 0x1;
        }
        t114 = t104;
    }
    return t114;
}
