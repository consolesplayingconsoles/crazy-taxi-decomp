/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlPow(float, float);
float Init_Pass_Fare(void);

float Init_Pass_Fare(void)
{
    float t0;
    int t1;
    int t2;
    int t4;
    int t14;

    *(unsigned int *)0xC2A8E9C = 0x0;
    *(float *)0xC2A8EA0 = -2.0f;
    *(unsigned int *)0xC2A8EA4 = 0x0;
    *(unsigned int *)0xC2A8EA8 = 0x0;
    *(unsigned int *)0xC2A8EAC = 0x0;
    *(unsigned int *)0xC2A8EB4 = 0xFFFFFFFB;
    t0 = nlPow(-5.0f, (1.0f + 1.0f));
    *(float *)0xC2A8EB8 = t0;
    *(unsigned int *)0xC2A8F6C = 0x0;
    *(unsigned int *)0xC2A8F70 = 0x0;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EA8 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7EC0 = 0x6;
    *(float *)0xC2A7E90 = 0.0f;
    *(float *)0xC2A7E94 = 0.0f;
    *(float *)0xC2A7E98 = 0.25f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    t1 = 0x0;
    for (;;) {
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x18)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x1C)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x20)) = 1.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x24)) = 0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x24)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x24)) = 0.0f;
        *(unsigned int *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x34)) = 0xE;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x34)) = 0x6;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x34)) = 0x6;
        t2 = 0x0;
        for (;;) {
            *(unsigned int *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x28)) = 0x0;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x4)) = 0.0f;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x8)) = 240.0f;
            if (t2 == 1) {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.25f;
            } else {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.279999971f;
            }
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x10)) = 1.0f;
            t4 = (((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2));
            t2 = (t2 + 0x1);
            *(float *)((t4 + 0x14)) = 0.5f;
            *(unsigned int *)((t4 + 0x28)) = 0x0;
            *(float *)((t4 + 0x2C)) = 1.0f;
            if ((int)t2 >= (int)0x3) {
                break;
            }
        }
        *(unsigned int *)(((t1 << 2) + 0xC2A8EDC)) = 0x0;
        if ((t1 != 7) && ((t1 != 6) && ((t1 != 5) && (t1 != 4)))) {
            if (t1 == 3) {
                *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xB;
            } else {
                *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0x9;
            }
        } else {
            *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
        }
        if ((t1 != 7) && ((t1 != 6) && ((t1 != 5) && (t1 != 4)))) {
            if (t1 == 3) {
                *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xB;
            } else {
                *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0x9;
            }
        } else {
            *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
        }
        *(unsigned int *)((((0xC2A8EFC + (t1 << 2)) + 0x40) + 0x0)) = 0x8;
        t14 = (t1 << 2);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t14 + 0xC2A8EBC)) = 0xA;
        if ((int)t1 < (int)0x8) continue;
        break;
    }
    *(unsigned int *)0xC2A8EB0 = 0x0;
    *(unsigned int *)0xC2A8F5C = 0x0;
    *(unsigned int *)0xC2A8F60 = 0x0;
    *(unsigned int *)0xC2A8F64 = 0x0;
    return t0;
}
