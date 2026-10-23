/* Straight-line functions with calls and guards (batch gen_sz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitEffect(void);

int InitEffect(void)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t6;
    int t7;
    int t9;
    int t14;
    int t16;
    float u17;
    int t23;
    int t19;

    t0 = 0xC0EDA78;
    t1 = 0x0;
    for (;;) {
        t2 = *(int *)((t0 + 0x0));
        t1 = (t1 + 0x1);
        *(unsigned int *)((t2 + 0x20)) = ((*(int *)((t2 + 0x20))) & 0x3F);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        *(unsigned int *)((t4 + 0x20)) = ((*(int *)((t4 + 0x20))) | 0x941604C0);
        if ((int)t1 >= (int)0x5) {
            break;
        }
    }
    t6 = 0x0;
    t7 = 0x0;
    for (;;) {
        t7 = (t7 + 0x1);
        *(unsigned int *)((0xC0EDA48 + t6)) = 0x0;
        *(unsigned int *)((0xC0EDA38 + t6)) = 0x0;
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)0xC0EDA64 = 0x0;
    *(unsigned int *)0xC0EDA60 = 0x0;
    *(unsigned int *)0xC0EDA5C = 0x0;
    *(unsigned int *)0xC0EDA58 = 0x0;
    *(unsigned int *)0xC27425C = 0x1E;
    *(unsigned int *)0xC274260 = 0x0;
    *(unsigned int *)0xC274268 = 0x1E;
    *(unsigned int *)0xC27426C = 0x1;
    *(unsigned int *)0xC274264 = 0x1;
    t9 = *(int *)0xC1EE20C;
    if (t9 == 0) {
        *(float *)0xC274258 = (*(float *)0xC03676C);
        t23 = 0xC03676C;
    } else {
        if (t9 == 1) {
            *(float *)0xC274258 = (*(float *)0xC036770);
            t19 = 0xC036770;
        } else {
            t14 = *(int *)0xC1EE214;
            t16 = t14;
            u17 = 0.0f;
            if (t14 == 1) {
                t16 = 0xC036778;
                u17 = (*(float *)0xC036778);
            }
            *(float *)0xC274258 = u17;
            t19 = t16;
        }
        t23 = t19;
    }
    *(unsigned int *)0xC14AA70 = ((*(int *)0xC14AA70) | 0x800000);
    return t23;
}
