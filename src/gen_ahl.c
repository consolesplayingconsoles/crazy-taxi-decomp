/* Straight-line functions with calls and guards (batch gen_ahl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c032144(int a4, int a5, int a6);

int FUN_0c032144(int a4, int a5, int a6)
{
    int t4;
    int t5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u11;

    t4 = a5;
    t5 = 0x4;
    u6 = ((*(float *)(((((((a6 - 1) << 1) + (a6 - 1)) << 2) + a5) + 0x0))) - (*(float *)((a4 + 0x0))));
    u7 = ((*(float *)(((((((a6 - 1) << 1) + (a6 - 1)) << 2) + a5) + 0x8))) - (*(float *)((a4 + 0x8))));
    for (;;) {
        if (t5 == 0) {
            return 0x1;
        }
        u8 = *(float *)((t4 + 0x0));
        u9 = *(float *)((a4 + 0x0));
        u10 = *(float *)((t4 + 0x8));
        u11 = *(float *)((a4 + 0x8));
        u7 = (u7 * (u8 - u9));
        u6 = (u6 * (u10 - u11));
        u6 = (u6 - u7);
        if (0.0f > u6) {
            break;
        }
        t4 = (t4 + 0xC);
        u6 = (u8 - u9);
        t5 = (t5 - 1);
        u7 = (u10 - u11);
    }
    return 0x0;
}
