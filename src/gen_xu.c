/* Straight-line functions with calls and guards (batch gen_xu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int vibIsReady(void);
int menuOptionHandler(void);

int menuOptionHandler(void)
{
    int t1;
    int t2;
    int t6;
    int t8;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;

    menuOpenStep();
    t1 = vibIsReady();
    t2 = 0x0;
    if (t1 == 0) {
        t2 = 0x80;
    }
    menuCursor(0x0, 0x9, t2);
    menuPutFrame();
    t6 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A0840, 0xC2A1A84, (t6 + 0x8), 0x18);
    t8 = *(int *)0xC2A11D8;
    t9 = *(int *)0xC2A1AD8;
    t10 = *(int *)((((t8 << 2) + 0xC2A11DC) + 0x0));
    t11 = 0x0;
    if ((t10 != 6) && (t10 != 8)) {
        t11 = 0x2;
    }
    menuPutHelpBar(t11, (float)(-t9), 416.0f);
    t14 = *(int *)0xC2A11D8;
    t15 = *(int *)((((t14 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x817, 0xC09F100, 0x9, t15);
    return menuEnterStep();
}
