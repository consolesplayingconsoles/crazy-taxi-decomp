/* Straight-line functions with calls and guards (batch gen_tt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan2(float, float);
float screenOutCheck(int a4);

float screenOutCheck(int a4)
{
    float u16;
    int t3;
    float u7;

    u16 = 0.0f;
    if (0.0f > (*(float *)((a4 + 0x8)))) {
        t3 = nlArcTan2(_builtin_fabsf((*(float *)((a4 + 0x0)))), (-(*(float *)((a4 + 0x8)))));
        u7 = 0.0f;
        if ((int)(unsigned short)t3 < (int)((int)((((*(float *)0xC1798A4) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF)) {
            u7 = (*(float *)((a4 + 0x8)));
        }
        u16 = u7;
    }
    return u16;
}
