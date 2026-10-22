/* Straight-line functions with calls and guards (batch gen_wo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int hudDrawFareFrame(void);

int hudDrawFareFrame(void)
{
    int t0;
    float u1;
    float u5;
    float u7;
    float u8;
    int t11;
    float u15;
    float u17;
    float u19;
    float u20;
    float u21;
    float u22;
    float u24;
    float u25;
    float u26;

    t0 = *(int *)0xC2A8EB0;
    if ((t0 != 1) && (t0 != 6)) {
        *(float *)0xC2A7EA8 = 0.0f;
    } else {
        u1 = *(float *)0xC2A8EA0;
        *(float *)0xC2A7EA8 = (1.0f - u1);
    }
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x128;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    *(float *)0xC2A7E94 = 96.0f;
    *(float *)0xC2A7E98 = 0.049999997f;
    *(float *)0xC2A7E9C = 9.0f;
    *(float *)0xC2A7EA0 = (1.0f + 1.0f);
    *(float *)0xC2A7EB8 = 0.699999988f;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    nlSprPut(0xC2A7E8C);
    u5 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (96.0f - u5);
    *(unsigned int *)0xC2A7EB4 = 0x0;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 458.0f;
    u7 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (79.0f - u7);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u8 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u8;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7E98 = 0.279999971f;
    *(unsigned int *)0xC2A7E8C = 0x10E;
    *(float *)0xC2A7E90 = 468.0f;
    nlSprPut(0xC2A7E8C);
    t11 = *(int *)0xC2A8E64;
    if (t11 != 10) {
        *(unsigned int *)0xC2A7E8C = 0x10D;
    } else {
        *(unsigned int *)0xC2A7E8C = 0xFE;
    }
    *(float *)0xC2A7E9C = 1.0f;
    u15 = 512.0f;
    *(float *)0xC2A7E90 = u15;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x10F;
    *(float *)0xC2A7E9C = 1.0f;
    u17 = 568.0f;
    *(float *)0xC2A7E90 = u17;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(unsigned int *)0xC2A7EC0 = 0x200E;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    u19 = 606.0f;
    *(float *)0xC2A7E90 = u19;
    u20 = *(float *)0xC2A8EB8;
    u21 = 79.0f;
    *(float *)0xC2A7E94 = (u21 - u20);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u22 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u22;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    nlSprPut(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(unsigned int *)0xC2A7E8C = 0x1A2;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    u24 = 111.0f;
    u25 = *(float *)0xC2A8EB8;
    *(float *)0xC2A7E94 = (u24 - u25);
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    u26 = *(float *)0xC2A8EA0;
    *(float *)0xC2A7EA0 = u26;
    nlSprPut(0xC2A7E8C);
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    return 0x24;
}
