/* Straight-line functions with calls and guards (batch gen_afi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Drum_Fare(void);

int Init_Drum_Fare(void)
{
    int t0;
    int t2;

    *(unsigned int *)0xC2A8EA4 = 0x0;
    *(unsigned int *)0xC2A8EA8 = 0x0;
    *(unsigned int *)0xC2A8EAC = 0x0;
    *(unsigned int *)0xC2A8EB4 = 0x0;
    *(float *)0xC2A8EB8 = 36.0f;
    *(unsigned int *)0xC2A8F6C = 0x0;
    *(unsigned int *)0xC2A8F70 = 0x0;
    *(unsigned int *)0xC2A8EB0 = 0x1;
    *(unsigned int *)0xC2A8F5C = 0x0;
    *(unsigned int *)0xC2A8F60 = 0x0;
    *(unsigned int *)0xC2A8F64 = 0x0;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EA8 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7EB8 = 0.299999982f;
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(float *)0xC2A7E90 = 0.0f;
    *(float *)0xC2A7E94 = 0.0f;
    *(float *)0xC2A7E98 = 0.25f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(unsigned int *)0xC2A7EBC = 0x2;
    *(float *)0xC2A8890 = 0.0f;
    *(float *)0xC2A8894 = 0.0f;
    *(float *)0xC2A8898 = 0.279999971f;
    *(float *)0xC2A889C = 1.0f;
    *(float *)0xC2A88A0 = 1.0f;
    *(float *)0xC2A88A4 = 0.0f;
    *(float *)0xC2A88A8 = 0.0f;
    *(float *)0xC2A88AC = 1.0f;
    *(float *)0xC2A88B0 = 1.0f;
    *(unsigned int *)0xC2A88B4 = 0x0;
    *(unsigned int *)0xC2A88C0 = 0xA;
    *(float *)0xC2A88B8 = 1.0f;
    *(unsigned int *)0xC2A88BC = 0x2;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2A8E34 + (t0 << 2))) = 0x0;
        if ((int)t0 >= (int)0x3) {
            *(unsigned int *)((0xC2A8E50 + (t0 << 2))) = 0xA;
        } else {
            *(unsigned int *)((0xC2A8E50 + (t0 << 2))) = 0x0;
        }
        t2 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC2A8E6C + t2)) = 0x1;
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    *(unsigned int *)0xC2A8E90 = 0x2;
    *(unsigned int *)0xC2A8E88 = 0x7;
    *(unsigned int *)0xC2A8E8C = 0x3;
    return t2;
}
