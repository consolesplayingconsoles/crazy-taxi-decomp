/* Straight-line functions with calls and guards (batch gen_akz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int Voice_Request(int, int, int, int);
int menuCursor(int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int windowEnterStep(int, int);
int windowOpenStep(int);
int windowTryAgain(void);

int windowTryAgain(void)
{
    int t13;
    int t41;
    int t14;
    int t15;
    int t34;
    int t21;
    int t22;
    int t29;

    windowOpenStep(0x1);
    menuCursor(0x1, 0x2, 0x0);
    putLevelCTFontAssist(0x2026, 0xC09E028, 0x3, (*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0))), 0x0);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        t13 = *(int *)0xC2A11CC;
        if (((t13 & 0x2) != 0) && (t14 = *(int *)0xC2A11F4, t15 = *(int *)((((t14 << 2) + 0xC2A11F8) + 0x0)), t15 == 0)) {
            *(unsigned int *)0xC0EF550 = 0x277;
            Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
        } else {
            if ((((0x2 & t13) != 0) && (t21 = *(int *)0xC2A11F4, t22 = *(int *)((0xC2A11F8 + (t21 << 2))), t22 == 1)) || ((0x4 & t13) != 0)) {
                *(unsigned int *)0xC0EF550 = 0x25D;
                Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                NextWindow(0x3);
            } else {
                t29 = 0x2;
            }
            t34 = t29;
        }
        t41 = t34;
    }
    return windowEnterStep(0x5A, t41);
}
