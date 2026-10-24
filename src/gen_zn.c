/* Straight-line functions with calls and guards (batch gen_zn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int menuRecordViewHandler(void);

int menuRecordViewHandler(void)
{
    int t9;
    int t19;
    float u20;
    int t23;

    if ((menuOpenStep()) == 1) {
        *(unsigned int *)0xC2A1244 = 0x0;
    }
    if ((menuCursor(0x0, 0x4, 0x0)) == 1) {
        *(unsigned int *)0xC2A1244 = 0x0;
    }
    menuPutFrame();
    t9 = *(int *)0xC2A1AD8;
    if ((*(int *)0xC2A11E0) == 0) {
        putString(0x20013, 0xC0A210C, (float)(t9 + 0x20), 36.0f, 1.51999998f);
    } else {
        PutStringFixPfont(0x20013, ((short)((short)((*(int *)0xC2A11E0) - 1) * (short)0x788) + 0xC28A4F8), (float)(t9 + 0x20), 36.0f, 3e+01f, 1.51999998f);
        putString(0x20013, 0xC0A2060, (float)((*(int *)0xC2A1AD8) + 0x84), 36.0f, 1.51999998f);
    }
    t19 = *(int *)0xC2A1AD8;
    u20 = 416.0f;
    t23 = 0x4;
    if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 3) {
        t23 = 0x0;
    }
    menuPutHelpBar(t23, (float)(-t19), u20);
    putLevelCTFontAssist(0x417, 0xC09F394, 0x4, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), 0x0);
    return menuEnterStep();
}
