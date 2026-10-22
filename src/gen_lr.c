/* Straight-line functions with calls and guards (batch gen_lr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckColliWallEdge(int a4, int a5);

int CheckColliWallEdge(int a4, int a5)
{
    int t0;
    float u1;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    float u10;
    float u16;
    float u11;

    t0 = *(int *)((a4 + 0x0));
    u1 = *(float *)((t0 + 0x4));
    if (!(u1 > (*(float *)((a5 + 0x14))))) {
        if (!(((*(float *)((a5 + 0x18))) - (*(float *)((a4 + 0x14)))) > u1)) {
            u5 = *(float *)((t0 + 0x0));
            u6 = *(float *)((a5 + 0x8));
            u7 = *(float *)((a5 + 0x4));
            u8 = *(float *)((t0 + 0x8));
            u9 = *(float *)((a5 + 0xC));
            u10 = *(float *)((a5 + 0x0));
            if (((((u6 - u5) * u7) - ((u9 - u8) * u10)) > 0.0f) && (u11 = *(float *)((a5 + 0x1C)), u11 > (((u6 - u5) * u7) - ((u9 - u8) * u10)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)((a4 + 0x4)) = *(struct mv2 *)(a5); }
                u16 = ((*(float *)((a5 + 0x4))) * (*(float *)((t0 + 0x8))));
                u16 = u16 + (*(float *)((t0 + 0x0))) * (*(float *)((a5 + 0x0)));
                *(float *)((a4 + 0x10)) = (u16 + (*(float *)((a5 + 0x10))));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
