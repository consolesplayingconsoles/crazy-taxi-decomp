/* Straight-line functions with calls and guards (batch gen_wr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int menuRecordsHandler(void);

int menuRecordsHandler(void)
{
    int t1;
    int t5;
    int t2;
    int t3;
    int t4;
    int t18;
    int t19;
    int t22;

    menuOpenStep();
    t1 = *(signed char *)0xC28A4F6;
    t5 = 0x0;
    if ((int)((unsigned char)t1 + 0x1) < (int)0x5) {
        t2 = ((unsigned char)t1 + 0x1);
        t3 = 0x0;
        for (;;) {
            t4 = (((int)t2 >= 0) ? (0x1 << (t2 & 31)) : ((-(int)t2 & 31) ? ((int)0x1 >> (-(int)t2 & 31)) : ((int)0x1 >> 31)));
            t2 = (t2 + 0x1);
            t3 = (t3 | t4);
            if ((int)t2 >= (int)0x5) {
                break;
            }
        }
        t5 = t3;
    }
    menuCursor(0x0, 0x6, t5);
    menuPutFrame();
    menuPutSprites(0xC0A0898, 0xC2A1A84, ((*(int *)0xC2A1AD8) + 0x8), 0x18);
    menuPutHelpBar(0x0, (float)(-(*(int *)0xC2A1AD8)), 416.0f);
    putLevelCTFontAssist(0x117, 0xC09F28C, 0x6, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), (t5));
    t18 = 0x1;
    for (;;) {
        t19 = *(int *)0xC2A1ADC;
        if ((t18 & 0x1) != 0) {
            t22 = (t19 - 64);
        } else {
            t22 = (0xFFFFFFC0 - t19);
        }
        PutStringFixPfont(0x17, ((short)((short)(t18 - 1) * (short)0x788) + 0xC28A4F8), ((*(float *)((((short)((short)t18 * (short)0x2C) + 0xC09F28C) + 0x0))) + (float)t22), (*(float *)((((short)((short)t18 * (short)0x2C) + 0xC09F28C) + 0x4))), 20.0f, 1.0f);
        t18 = (t18 + 0x1);
        if ((int)t18 >= (int)0x5) {
            break;
        }
    }
    return menuEnterStep();
}
