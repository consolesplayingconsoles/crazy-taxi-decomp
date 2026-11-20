/* Straight-line functions with calls and guards (batch gen_fj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiFlipVertexBuffer(int a4);

int kmiFlipVertexBuffer(int a4)
{
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;

    t0 = *(int *)0xC2EA9C4;
    if (t0 != 1) {
        *(unsigned int *)0xC2B8CB8 = ((((a4 << 2) + a4) << 2) + 0xC2B8CCC);
    } else {
        *(unsigned int *)0xC2B8CB8 = 0xC2B8CCC;
    }
    t4 = *(int *)0xC2B8CB8;
    t5 = *(int *)((t4 + 0x0));
    t6 = *(int *)0xC2B8CBC;
    *(unsigned int *)((t6 + 0x0)) = t5;
    t7 = *(int *)0xC2B8CB8;
    t8 = *(int *)0xC2B8CBC;
    t9 = *(int *)((t7 + 0x4));
    *(unsigned int *)((t8 + 0x4)) = t9;
    t10 = *(int *)0xC2B8CB8;
    t11 = *(int *)0xC2B8CBC;
    t12 = *(int *)((t10 + 0x8));
    *(unsigned int *)((t11 + 0x8)) = t12;
    t13 = *(int *)0xC2B8CB8;
    t14 = *(int *)0xC2B8CBC;
    t15 = *(int *)((t13 + 0xC));
    *(unsigned int *)((t14 + 0xC)) = t15;
    t16 = *(int *)0xC2B8CB8;
    t17 = *(int *)0xC2B8CBC;
    t18 = *(int *)((t16 + 0x10));
    *(unsigned int *)((t17 + 0x10)) = t18;
    t19 = 0x0;
    for (;;) {
        t20 = *(int *)0xC2B8CBC;
        t21 = t19;
        t22 = t19;
        t19 = (t19 + 0x4);
        t23 = *(int *)((t20 + t21));
        *(unsigned int *)(((t22 + 0xC2B8D08) + 0x0)) = t23;
        if ((unsigned int)t19 >= (unsigned int)0x14) {
            break;
        }
    }
    *(unsigned int *)0xC2B8CB4 = (a4 & 0x1);
    t24 = 0x0;
    for (;;) {
        t25 = *(int *)0xC2B8CBC;
        t26 = *(int *)((0xC2B8D28 + t24));
        t27 = *(int *)(((t25 + t24) + 0x0));
        t28 = t24;
        t29 = (t25 + t24);
        t24 = (t24 + 0x4);
        *(unsigned int *)((t29 + 0x0)) = (t27 + (t26 << 2));
        if ((unsigned int)t24 >= (unsigned int)0x14) {
            break;
        }
    }
    return t28;
}
