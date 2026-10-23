/* Straight-line functions with calls and guards (batch gen_ahq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int padPortAConnected(void);
int putLevelCTFontAssist(int, int, int, int);
int putString(int, int, float, float, float);
int menuControllerHandler(void);

int menuControllerHandler(void)
{
    int t2;
    int t8;
    int t11;

    menuOpenStep();
    t2 = 0x0;
    if ((padPortAConnected()) == 0) {
        t2 = 0x1;
    }
    menuCursor(0x0, 0x2, t2);
    menuPutFrame();
    putString(0x20013, 0xC0A211C, (float)((*(int *)0xC2A1AD8) + 0x20), 36.0f, 1.51999998f);
    t8 = *(int *)0xC2A1AD8;
    t11 = 0x0;
    if ((*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) == 0) {
        t11 = 0x2;
    }
    menuPutHelpBar(t11, (float)(-t8), 416.0f);
    putLevelCTFontAssist(0x217, 0xC09F0A8, 0x2, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))));
    return menuEnterStep();
}
