/* Straight-line functions with calls and guards (batch gen_aeg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuCursor(int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int vibIsReady(void);
int windowEnterStep(int);
int windowOpenStep(int);
int windowPause(void);

int windowPause(void)
{
    int t2;

    windowOpenStep(0x1);
    t2 = 0x0;
    if ((vibIsReady()) == 0) {
        t2 = 0x8;
    }
    if (((*(int *)0xC2A11CC) & 4) == 0) {
        menuCursor(0x1, 0x4, t2);
    }
    putLevelCTFontAssist(0x2020, 0xC09E0AC, 0x4, (*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0))));
    putString(0x24, 0xC0A2088, (310.0f), (62.0f), (1.1999999f));
    return windowEnterStep(0x14);
}
