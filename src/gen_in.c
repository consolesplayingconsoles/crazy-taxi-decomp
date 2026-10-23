/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int kmSetUserClipLevelAdjust(int a4, int a5);

int kmSetUserClipLevelAdjust(int a4, int a5)
{
    int t1;
    int t2;
    int t14;
    int t21;
    int t22;
    int t35;
    int t38;
    int t39;
    int t41;
    int t49;
    int t16;

    if ((*(int *)0xC2EA6B8) == 1) {
        t1 = *(int *)0xC2EA944;
        t2 = *(int *)0xC2EA6BC;
        *(unsigned int *)0xC2EA898 = ((*(int *)0xC2EA898) - (((t2 * t1) << 2) << 1));
        *(unsigned int *)0xC2EA89C = ((*(int *)0xC2EA89C) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 == 1) {
            t14 = 0x0;
            if (((*(int *)0xC2EA6A0) & 0x1) == 1) {
                t14 = 0x1;
            }
            if ((t14 != 1) && (t16 = *(int *)0xC2EA6A0, (t16 & 32) == 0)) {
                *(unsigned int *)0xC2EA6BC = 0x8;
            } else {
                *(unsigned int *)0xC2EA6BC = 0x10;
            }
            t21 = *(int *)0xC2EA944;
            t22 = *(int *)0xC2EA6BC;
            *(unsigned int *)0xC2EA898 = ((*(int *)0xC2EA898) + (((t22 * t21) << 2) << 1));
            *(unsigned int *)0xC2EA89C = ((((t22 * t21) << 2) << 1) + (*(int *)0xC2EA89C));
        }
    } else {
        *(unsigned int *)0xC2EA6BC = 0x0;
    }
    t35 = *(int *)0xC2EA940;
    t38 = *(int *)0xC2EA6C4;
    t39 = 0xC2EA6BC;
    if ((int)(*(int *)0xC2EA6BC) < (int)(*(int *)0xC2EA6D4)) {
        t39 = 0xC2EA6D4;
    }
    t41 = *(int *)((t39 + 0x0));
    t49 = (t38 - t41);
    if ((unsigned int)((*(int *)0xC2EA6D4) + (t38 - t41)) > (unsigned int)(*(int *)0xC2EA6C4)) {
        t49 = ((*(int *)0xC2EA6C4) - (*(int *)0xC2EA6BC));
    }
    if ((unsigned int)(*(int *)0xC2EA6C4) < (unsigned int)t49) {
        *(unsigned int *)0xC2EA6C4 = t49;
    }
    *(unsigned int *)0xC2EA940 = ((((t49 & 0x3FF) << 8) << 2) | (t35 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, (*(int *)0xC2EA940));
    kmiWriteRegister(0x44, (*(int *)0xC2EA948));
    *(unsigned int *)0xC2EA6B8 = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)0xC2EA6BC);
    }
    return 0x0;
}
