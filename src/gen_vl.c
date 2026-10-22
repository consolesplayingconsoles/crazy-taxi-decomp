/* Straight-line functions with calls and guards (batch gen_vl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float CalcHomingAngle(int a4);

float CalcHomingAngle(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u5;
    float u6;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    float u14;
    float u15;
    float u16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float u23;
    float u24;
    float u25;
    int t26;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x18));
    t2 = *(int *)((a4 + 0xC));
    t3 = (t1 - t0);
    if ((int)(short)(t1 - t0) > (int)((short)(t1 - t0) + 0x8000)) {
        t3 = (-(t1 - t0));
    }
    u5 = *(float *)((a4 + 0x24));
    u6 = *(float *)((a4 + 0x28));
    u7 = ((float)(short)t3 * u5);
    u7 = u7 + u6 * (float)t2;
    *(unsigned int *)((a4 + 0xC)) = (int)u7;
    t8 = *(int *)((a4 + 0x0));
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)(t8 + (int)u7);
    t9 = *(int *)((a4 + 0x1C));
    t10 = *(int *)((a4 + 0x4));
    t11 = *(int *)((a4 + 0x10));
    t12 = (t9 - t10);
    if ((int)(short)(t9 - t10) > (int)((short)(t9 - t10) + 0x8000)) {
        t12 = (-(t9 - t10));
    }
    u14 = *(float *)((a4 + 0x24));
    u15 = *(float *)((a4 + 0x28));
    u16 = ((float)(short)t12 * u14);
    u16 = u16 + u15 * (float)t11;
    *(unsigned int *)((a4 + 0x10)) = (int)u16;
    t17 = *(int *)((a4 + 0x4));
    *(unsigned int *)((a4 + 0x4)) = (unsigned short)(t17 + (int)u16);
    t18 = *(int *)((a4 + 0x20));
    t19 = *(int *)((a4 + 0x8));
    t20 = *(int *)((a4 + 0x14));
    t21 = (t18 - t19);
    if ((int)(short)(t18 - t19) > (int)(0x8000 + (short)(t18 - t19))) {
        t21 = (-(t18 - t19));
    }
    u23 = *(float *)((a4 + 0x24));
    u24 = *(float *)((a4 + 0x28));
    u25 = ((float)(short)t21 * u23);
    u25 = u25 + u24 * (float)t20;
    *(unsigned int *)((a4 + 0x14)) = (int)u25;
    t26 = *(int *)((a4 + 0x8));
    *(unsigned int *)((a4 + 0x8)) = (unsigned short)(t26 + (int)u25);
    return u24;
}
