/* Straight-line functions with calls and guards (batch gen_vi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckXWord(int);
int EditEntryName(int);
int NextWindow(int);
int menuCursor(int, int, int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameEntry(void);

int windowNameEntry(void)
{
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t5;

    windowOpenStep(0x14);
    menuCursor(0x1, 0x1, 0x0);
    if (((*(int *)0xC2A1208) & 0x4) != 0) {
        EditEntryName(0x1);
        if ((((*(int *)0xC2A11CC) & 0x4) != 0) && (t5 = *(int *)0xC2A11DC, (int)t5 <= (int)0x1)) {
            NextWindow(0xA);
        }
        if (((*(int *)0xC2A11CC) & 2) != 0) {
            CheckXWord(0xC2A1248);
            t12 = 0x0;
            for (;;) {
                if ((int)t12 >= (int)0x4) {
                    return windowEnterStep(0x14);
                }
                t13 = 0x0;
                t14 = ((short)((short)t12 * (short)0x788) + 0xC28A4F8);
                t15 = 0xC2A1248;
                t16 = 0x0;
                for (;;) {
                    t18 = *(signed char *)((t14 + 0x0));
                    t14 = (t14 + 0x1);
                    t16 = (t16 + 0x1);
                    if (t18 == (*(signed char *)((t15 + 0x0)))) {
                        t13 = (t13 + 0x1);
                    }
                    t15 = (t15 + 0x1);
                    if ((int)t16 >= (int)0x3) {
                        break;
                    }
                }
                if ((int)t13 >= (int)0x3) {
                    break;
                }
                t12 = (t12 + 0x1);
            }
            NextWindow(0xE);
        }
    }
    return windowEnterStep(0x14);
}
