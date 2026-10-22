/* Straight-line functions with calls and guards (batch gen_adb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carCalcInertia(int a4);

float carCalcInertia(int a4)
{
    float u0;
    float u1;
    float u3;
    float u4;
    float u5;
    float u7;
    float u8;
    float u9;
    float u11;

    u0 = *(float *)((a4 + 0x140));
    u1 = *(float *)((a4 + 0x13C));
    u3 = (u1 * u1);
    u3 = u3 + u0 * u0;
    *(float *)((a4 + 0x14C)) = (1.0f / (((*(float *)((a4 + 0x128))) * u3) / 12.0f));
    u4 = *(float *)((a4 + 0x144));
    u5 = *(float *)((a4 + 0x13C));
    u7 = (u5 * u5);
    u7 = u7 + u4 * u4;
    *(float *)((a4 + 0x148)) = (1.0f / (((*(float *)((a4 + 0x128))) * u7) / 12.0f));
    u8 = *(float *)((a4 + 0x144));
    u9 = *(float *)((a4 + 0x140));
    u11 = (u9 * u9);
    u11 = u11 + u8 * u8;
    *(float *)((a4 + 0x150)) = (1.0f / (((*(float *)((a4 + 0x128))) * u11) / 12.0f));
    return u8;
}
