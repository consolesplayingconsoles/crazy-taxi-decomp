/* Straight-line functions with calls and guards (batch gen_of): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carSteerWheels(int a4, int a5, int a6, int a7, float f4, float f5);

int carSteerWheels(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t3;
    float u8;
    float u11;
    float u13;
    float u15;
    float u30;
    int t35;
    int t18;
    float u20;

    if ((*(int *)((a4 + 0x5C))) != 3) {
        *(unsigned short *)(((0x1A0 + a4) + 0x80)) = (*(short *)((a4 + 0x114)));
        *(unsigned short *)((((0x1A0 + a4) + 0x84) + 0x80)) = (*(short *)((a4 + 0x114)));
        t3 = *(short *)((a4 + 0x114));
        if (((int)t3 < (int)0x600) && ((int)t3 > (int)0xFFFFFA00)) {
            u8 = 0.36999997f;
            *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((float)(*(short *)((a4 + 0x114))) * u8);
            *(unsigned short *)((((((0x1A0 + a4) + 0x84) + 0x84) + 0x84) + 0x80)) = (int)((float)(*(short *)((a4 + 0x114))) * u8);
        } else {
            u11 = 0.16f;
            if ((int)(*(short *)((a4 + 0x114))) > 0) {
                u13 = 568.31995f;
                *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)((*(short *)((a4 + 0x114))) - 1536) * u11)) + u13);
                t18 = 0xFFFFFA00;
                u20 = u13;
            } else {
                u15 = -568.31995f;
                *(unsigned short *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x80)) = (int)((-((float)((*(short *)((a4 + 0x114))) + 0x600) * u11)) + u15);
                t18 = 0x600;
                u20 = u15;
            }
            *(unsigned short *)((((((0x1A0 + a4) + 0x84) + 0x84) + 0x84) + 0x80)) = (int)((-((float)((*(short *)((a4 + 0x114))) + t18) * u11)) + u20);
        }
        t35 = 0x80;
    } else {
        u30 = 0.099999994f;
        *(unsigned short *)((a4 + 0x2A4)) = (int)((float)(*(short *)((a4 + 0x114))) * u30);
        *(unsigned short *)((a4 + 0x220)) = (int)((float)(*(short *)((a4 + 0x114))) * u30);
        *(unsigned short *)((a4 + 0x3AC)) = (-(*(short *)((a4 + 0x114))));
        *(unsigned short *)((a4 + 0x328)) = (-(*(short *)((a4 + 0x114))));
        t35 = 0x328;
    }
    return t35;
}
