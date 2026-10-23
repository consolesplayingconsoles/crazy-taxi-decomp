/* Straight-line functions with calls and guards (batch gen_yk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int TOANG2(int, float);
int carBodyTilt(int a4);

int carBodyTilt(int a4)
{
    int t0;
    int t10;
    int t20;
    int stk[11];

    t0 = *(int *)((a4 + 0x70));
    *(unsigned int *)(((int)stk + 8)) = t0;
    *(volatile float *)(((t0 + 0x24) + 0x8));
    *(volatile float *)((t0 + 0x14));
    TOANG2(((int)stk + 4), ((((*(float *)(((0x84 + (0x1A0 + a4)) + 0x74))) + (*(float *)(((0x1A0 + a4) + 0x74)))) * 0.5f) - (((*(float *)(((0x18C + (0x1A0 + a4)) + 0x74))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x74)))) * 0.5f)));
    *(unsigned short *)((a4 + 0xF8)) = ((*(short *)((a4 + 0xF8))) + (*(short *)(((int)stk + 4))));
    t10 = *(int *)((a4 + 0x70));
    *(unsigned int *)(((int)stk + 8)) = t10;
    *(volatile float *)(((t10 + 0x24) + 0x8));
    *(volatile float *)((t10 + 0x14));
    TOANG2(((int)stk + 4), ((((*(float *)(((0x84 + (0x1A0 + a4)) + 0x78))) + (*(float *)(((0x1A0 + a4) + 0x78)))) * 0.5f) - (((*(float *)(((0x18C + (0x1A0 + a4)) + 0x78))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x78)))) * 0.5f)));
    *(unsigned short *)((a4 + 0xF6)) = ((*(short *)((a4 + 0xF6))) - (*(short *)(((int)stk + 4))));
    t20 = *(int *)((a4 + 0x70));
    *(unsigned int *)(((int)stk + 8)) = t20;
    *(volatile float *)((t20 + 0x0));
    *(volatile float *)(((t20 + 0xC) + 0x0));
    TOANG2(((int)stk + 4), ((((*(float *)(((0x84 + (0x1A0 + a4)) + 0x78))) + (*(float *)(((0x18C + (0x1A0 + a4)) + 0x78)))) * 0.5f) - (((*(float *)(((0x1A0 + a4) + 0x78))) + (*(float *)(((0x108 + (0x1A0 + a4)) + 0x78)))) * 0.5f)));
    *(unsigned short *)((a4 + 0xFA)) = ((*(short *)((a4 + 0xFA))) - (*(short *)(((int)stk + 4))));
    return 0xFA;
}
