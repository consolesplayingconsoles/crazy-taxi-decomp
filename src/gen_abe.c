/* Straight-line functions with calls and guards (batch gen_abe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void kmfGetInternalSystemMetrics(int a4);

void kmfGetInternalSystemMetrics(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t33;
    int t34;
    int t38;
    int t40;

    t0 = 0x0;
    t1 = 0x4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x0)) = (*(int *)((t0 + 0xC2EAB04)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x4)) = (*(int *)((t0 + 0xC2EAAF8)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x8)) = (*(int *)((t0 + 0xC2EAAF0)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0xC)) = (*(int *)((t0 + 0xC2EAB08)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x10)) = (*(int *)((t0 + 0xC2EAAFC)));
        *(unsigned int *)((((((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC2F91CC + t3) + 0x0)));
        t2 = (t2 + 0x1);
        t11 = *(int *)((t3 + 0xC2EA898));
        t3 = (t3 + 0x4);
        *(unsigned int *)((((a4 + 0x38) + t1) + 0x0)) = t11;
        t1 = (t1 - 4);
        t0 = (t0 + 0x20);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    if ((*(int *)0xC2EA9C4) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((*(int *)0xC2EA9DC) & 0x1) << 2) + 0xC2EA9B4)));
        *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((-((*(int *)0xC2EA9DC) & 0x1)) + 0x1) << 2) + 0xC2EA9B4)));
    } else {
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC2EA9B4 + (((*(int *)0xC2EA9DC) & 0x1) << 2))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((-((*(int *)0xC2EA9DC) & 0x1)) + 0x1) << 2) + 0xC2EA9B4)));
    }
    *(unsigned int *)((a4 + 0x40)) = (*(int *)0xC2EA934);
    *(unsigned int *)((a4 + 0x44)) = (*(int *)0xC2EA938);
    *(unsigned int *)((a4 + 0x48)) = (*(int *)0xC2F91B0);
    *(unsigned int *)((a4 + 0x4C)) = (*(int *)0xC2F91B4);
    *(unsigned int *)((a4 + 0x50)) = (*(int *)0xC2F91C4);
    *(unsigned int *)((a4 + 0x54)) = (*(int *)0xC2F91C8);
    t33 = 0x0;
    t34 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x0)) = (*(int *)((t34 + 0xC2EAA00)));
        *(unsigned int *)((((a4 + 0x58) + t33) + 0x14)) = (*(int *)((t34 + 0xC2EAA04)));
        *(unsigned int *)((((0x80 + a4) + t33) + 0x0)) = (*(int *)((t33 + 0xC2EAB44)));
        t38 = *(int *)(((0xC2F91D4 + t33) + 0x0));
        t40 = ((0x94 + a4) + t33);
        t33 = (t33 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t38;
        t34 = (t34 + 0x10);
        if ((unsigned int)t33 >= (unsigned int)0x14) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xA8)) = (*(int *)0xC2F91F4);
    *(unsigned int *)((a4 + 0xAC)) = (*(int *)0xC2F91EC);
}
