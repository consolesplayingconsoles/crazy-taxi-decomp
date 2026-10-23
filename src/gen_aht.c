/* Straight-line functions with calls and guards (batch gen_aht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carListShiftBack(int a4, int a5);

int carListShiftBack(int a4, int a5)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t7;
    int t1;
    float u5;

    t0 = 0xC044B78;
    t2 = 0xC2A44CC;
    t3 = a5;
    t4 = 0x0;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)(*(int *)0xC2A44C8)) {
            break;
        }
        t0 = 0x94;
        t4 = (t4 + 0x1);
        t7 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t3 = t7;
        u5 = (*(float *)((t3 + t0)));
        u5 = (u5 - 10000.0f);
        *(float *)((t3 + t0)) = u5;
        t0 = (t0 + 0x40);
        t1 = (*(int *)((t3 + t0)));
        t1 = (t1 - 0x3E8);
        *(unsigned int *)((t3 + t0)) = t1;
    }
    return t0;
}
