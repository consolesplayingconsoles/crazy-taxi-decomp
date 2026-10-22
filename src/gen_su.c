/* Straight-line functions with calls and guards (batch gen_su): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int pedIsSpecialModel(int);
int pedPickIdle(int);
int pedInit(int a4, int a5);

int pedInit(int a4, int a5)
{
    int t0;
    int t25;
    int t2;
    int t11;

    t0 = *(int *)0xC1EE20C;
    t25 = t0;
    if ((t0 != 0) && (t0 != 1)) {
    } else {
        t2 = (int)((int)(nlRand()) % (int)0x2);
        *(unsigned int *)((a4 + 0x1C)) = t2;
        if (t2 == 0) {
            *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
        }
        *(unsigned int *)((a4 + 0x24)) = (*(int *)0xC2A71F4);
        if (((*(int *)0xC1EE20C) == 0) && (((int)a5 >= (int)0xA1) && ((int)a5 <= (int)0xB6))) {
            t11 = (((int)((int)(nlRand()) % (int)0x4)) + 0xC);
        } else {
            t11 = ((int)((int)((*(int *)0xC2A71F4) + 0x1) % (int)0x9));
        }
        *(unsigned int *)0xC2A71F4 = t11;
        pedPickIdle(a4);
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x2C)) = *(struct mv3 *)(0xC12FF00); }
        *(unsigned short *)((a4 + 0x38)) = 0x0;
        *(float *)((a4 + 0x3C)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC12FF00); }
        *(unsigned int *)((a4 + 0x4C)) = 0x0;
        *(unsigned int *)((a4 + 0x50)) = 0x1;
        if ((*(int *)0xC1EE20C) == 1) {
            if ((pedIsSpecialModel(a5)) != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x1;
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = 0x0;
        }
        t25 = 0x60;
    }
    return t25;
}
