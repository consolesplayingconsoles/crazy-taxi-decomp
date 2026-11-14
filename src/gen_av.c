/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[12]; } Stk12;
int syRtcMakeAgeOfMoon(int);
extern int syRtcMakeDayOfWeek();
int syRtcCountToDate(int a4, int a5);

int syRtcCountToDate(int a4, int a5)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t19;
    register int t20;
    register int t24;
    register int t29;
    register int t36;
    register int t41;
    register int t48;
    register int t53;
    register int t57;
    register int t67;
    register int t68;
    register int t78;
    register int t16;
    register int t65;
    int t30;
    int t42;
    int t70;

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 0)) = *(struct mv12 *)(0xC174FD0); }
    *(unsigned char *)((a5 + 0x6)) = ((int)((unsigned int)a4 % (unsigned int)0x3C));
    t1 = (int)((unsigned int)a4 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x5)) = ((int)((unsigned int)t1 % (unsigned int)0x3C));
    t3 = (int)((unsigned int)t1 / (unsigned int)0x3C);
    *(unsigned char *)((a5 + 0x4)) = ((int)((unsigned int)t3 % (unsigned int)0x18));
    t5 = (int)((unsigned int)t3 / (unsigned int)0x18);
    t6 = (int)((unsigned int)t5 / (unsigned int)0x16D);
    t7 = (int)((unsigned int)t5 % (unsigned int)0x16D);
    if ((unsigned int)((unsigned int)(t6 + 0x1) >> 2) <= (unsigned int)t7) {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79E);
        t16 = (t7 - ((unsigned int)(t6 + 0x1) >> 2));
    } else {
        *(unsigned short *)((a5 + 0x0)) = (t6 + 0x79D);
        t8 = *(short *)((a5 + 0x0));
        t9 = ((~(((~(unsigned short)t8) + 0x1) & 0x3)) + 0x1);
        if ((int)(unsigned short)t8 >= 0) {
            t9 = ((unsigned short)t8 & 0x3);
        }
        t16 = (t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2)));
        if (t9 == 0) {
            t16 = ((t7 + (0x16D - ((unsigned int)(t6 + 0x1) >> 2))) + 0x1);
        }
    }
    t19 = *(short *)((a5 + 0x0));
    t20 = ((~(((~(unsigned short)t19) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t19 >= 0) {
        t20 = ((unsigned short)t19 & 0x3);
    }
    if (t20 == 0) {
        if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + 0x4)))) {
            t24 = 0x2;
            for (;;) {
                if ((unsigned int)t16 >= (unsigned int)((*(int *)((((int)stk + 0) + (t24 << 2)))) + 0x1)) {
                    t24 = (t24 + 0x1);
                    if ((unsigned int)t24 >= (unsigned int)0xC) {
                        break;
                    }
                    continue;
                }
                *(unsigned char *)((a5 + 0x2)) = t24;
                *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t24 - 1) << 2))))) + 0x1);
                t29 = *(short *)((a5 + 0x0));
                if ((int)(unsigned short)t29 >= 0) {
                    if ((((unsigned short)t29 & 0x3) == 0) && (t30 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t30 > (int)0x2)) {
                        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                        t24 = (*(short *)((a5 + 0x0)));
                        *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int, Stk12))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3))), *(Stk12 *)(((int)stk + 0))));
                        t24 = a5;
                        t36 = syRtcMakeAgeOfMoon(t24);
                        *(unsigned char *)((a5 + 0x8)) = t36;
                        return t36;
                    }
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t41 = syRtcMakeAgeOfMoon(t24);
                    *(unsigned char *)((a5 + 0x8)) = t41;
                    return t41;
                }
                if ((((~(((~(unsigned short)t29) + 0x1) & 0x3)) + 0x1) == 0) && (t42 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t42 > (int)0x2)) {
                    *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
                    t24 = (*(short *)((a5 + 0x0)));
                    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                    t24 = a5;
                    t48 = syRtcMakeAgeOfMoon(t24);
                    *(unsigned char *)((a5 + 0x8)) = t48;
                    return t48;
                }
                t24 = (*(short *)((a5 + 0x0)));
                *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))(t24, (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
                t24 = a5;
                t53 = syRtcMakeAgeOfMoon(t24);
                *(unsigned char *)((a5 + 0x8)) = t53;
                return t53;
            }
            t65 = t24;
        } else {
            t65 = 0x1;
        }
    } else {
        t57 = 0x1;
        for (;;) {
            if ((unsigned int)t16 >= (unsigned int)(*(int *)((((int)stk + 0) + (t57 << 2))))) {
                t57 = (t57 + 0x1);
                if ((unsigned int)t57 >= (unsigned int)0xC) {
                    break;
                }
                continue;
            }
            break;
        }
        t65 = t57;
    }
    *(unsigned char *)((a5 + 0x2)) = t65;
    *(unsigned char *)((a5 + 0x3)) = ((t16 - (*(int *)((((int)stk + 0) + ((t65 - 1) << 2))))) + 0x1);
    t67 = *(short *)((a5 + 0x0));
    t68 = ((~(((~(unsigned short)t67) + 0x1) & 0x3)) + 0x1);
    if ((int)(unsigned short)t67 >= 0) {
        t68 = ((unsigned short)t67 & 0x3);
    }
    if ((t68 == 0) && (t70 = *(signed char *)((a5 + 0x2)), (int)(unsigned char)t70 > (int)0x2)) {
        *(unsigned char *)((a5 + 0x3)) = ((*(signed char *)((a5 + 0x3))) - 1);
    }
    *(unsigned char *)((a5 + 0x7)) = (((int (*)(int, int, int))(syRtcMakeDayOfWeek))((*(short *)((a5 + 0x0))), (*(signed char *)((a5 + 0x2))), (*(signed char *)((a5 + 0x3)))));
    t78 = syRtcMakeAgeOfMoon(a5);
    *(unsigned char *)((a5 + 0x8)) = t78;
    return t78;
}
