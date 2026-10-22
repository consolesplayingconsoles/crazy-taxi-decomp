/* Straight-line functions with calls and guards (batch gen_gg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLocate(int, int);
int nlPrintf(int, ...);
int FUN_0c04d240(void);

int FUN_0c04d240(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;

    t0 = *(int *)0xC1EDF26;
    t1 = *(signed char *)((t0 + 0x0));
    *(unsigned char *)0xC2A6698 = t1;
    t2 = *(int *)0xC1EDF2A;
    t3 = *(signed char *)((t2 + 0x0));
    *(unsigned char *)0xC2A6699 = t3;
    t4 = *(int *)0xC1EDF2E;
    t5 = *(signed char *)((t4 + 0x0));
    *(unsigned char *)0xC2A669A = t5;
    t6 = *(int *)0xC1EDF32;
    t7 = *(signed char *)((t6 + 0x0));
    *(unsigned char *)0xC2A669B = t7;
    t8 = *(int *)0xC1EDF36;
    t9 = *(signed char *)((t8 + 0x0));
    *(unsigned char *)0xC2A669C = t9;
    t10 = *(int *)0xC1EDF3A;
    t11 = *(signed char *)((t10 + 0x0));
    *(unsigned char *)0xC2A669D = t11;
    t12 = *(int *)0xC1EDF3E;
    t13 = *(signed char *)((t12 + 0x0));
    *(unsigned char *)0xC2A669E = t13;
    t14 = *(int *)0xC1EDF42;
    t15 = *(signed char *)((t14 + 0x0));
    *(unsigned char *)0xC2A669F = t15;
    nlLocate(0x37, 0x34);
    t17 = *(signed char *)0xC2A669B;
    t18 = *(signed char *)0xC2A669A;
    t19 = *(signed char *)0xC2A6699;
    t20 = *(signed char *)0xC2A6698;
    nlPrintf(0xC0C8348, (unsigned char)t20, (unsigned char)t19, (unsigned char)t18, (unsigned char)t17);
    nlLocate(0x37, 0x35);
    t23 = *(signed char *)0xC2A669F;
    t24 = *(signed char *)0xC2A669E;
    t25 = *(signed char *)0xC2A669D;
    t26 = *(signed char *)0xC2A669C;
    t27 = nlPrintf(0xC0C8348, (unsigned char)t26, (unsigned char)t25, (unsigned char)t24, (unsigned char)t23);
    return t27;
}
