/* Straight-line functions with calls and guards (batch gen_zo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void carBoxVertexInit(void);

void carBoxVertexInit(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t8;
    int t10;
    int t12;
    int stk[12];

    t0 = 0x0;
    for (;;) {
        t1 = ((short)(((((t0 << 1) + t0) << 2) << 2) << 1) + 0xC2A465C);
        t2 = 0x0;
        for (;;) {
            t4 = t1;
            t1 = (t1 + 0xC);
            *(float *)((((int)stk + 4) + 0x4)) = ((*(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0x4) + 0x0))) * (float)t2);
            *(float *)((((int)stk + 4) + 0x0)) = (-(*(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0))));
            *(float *)((((int)stk + 4) + 0x8)) = (*(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0xC) + 0x0)));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)(((int)stk + 4)); }
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0)));
            t8 = t1;
            t1 = (t1 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t8) = *(struct mv3 *)(((int)stk + 4)); }
            *(float *)((((int)stk + 4) + 0x8)) = (*(float *)((((((t0 << 2) << 2) + 0xC0ED68C) + 0x8) + 0x0)));
            t10 = t1;
            t1 = (t1 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t10) = *(struct mv3 *)(((int)stk + 4)); }
            t12 = t1;
            t1 = (t1 + 0xC);
            *(float *)((((int)stk + 4) + 0x0)) = (-(*(float *)(((((t0 << 2) << 2) + 0xC0ED68C) + 0x0))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t12) = *(struct mv3 *)(((int)stk + 4)); }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x2) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xF) {
            break;
        }
    }
}
