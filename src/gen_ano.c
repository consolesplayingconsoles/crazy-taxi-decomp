/* Straight-line functions with calls and guards (batch gen_ano): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int vibIsReady(void);
int menuOptionHandler(void);

int menuOptionHandler(void)
{
    int t2;
    int t9;
    int t10;
    int t11;

    menuOpenStep();
    t2 = 0x0;
    if ((vibIsReady()) == 0) {
        t2 = 0x80;
    }
    menuCursor(0x0, 0x9, t2);
    menuPutFrame();
    menuPutSprites(0xC0A0840, 0xC2A1A84, ((*(int *)0xC2A1AD8) + 0x8), 0x18);
    t9 = *(int *)0xC2A1AD8;
    t10 = *(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0));
    t11 = 0x0;
    if ((t10 != 6) && (t10 != 8)) {
        t11 = 0x2;
    }
    menuPutHelpBar(t11, (float)(-t9), 416.0f);
    putLevelCTFontAssist(0x817, 0xC09F100, 0x9, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), (t2));
    return menuEnterStep();
}
