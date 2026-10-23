/* Straight-line functions with calls and guards (batch gen_px): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckXWord(int);
int EditEntryName(int);
int NextWindow(int);
int menuCursor(int, int, int);
extern int windowEnterStep();
int windowOpenStep(int);
int windowNameEntry(int a4, int a5, int a6, int a7);

int windowNameEntry(int a4, int a5, int a6, int a7)
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
            t12 = a7;
            t13 = 0x0;
            for (;;) {
                if ((int)t13 >= (int)0x4) {
                    return ((int (*)(int, int, int, int))(windowEnterStep))(0x14, 0x3, 0x0, t12);
                }
                t12 = 0x0;
                t14 = 0x0;
                t15 = ((short)((short)t13 * (short)0x788) + 0xC28A4F8);
                t16 = 0xC2A1248;
                for (;;) {
                    t18 = *(signed char *)((t15 + 0x0));
                    t15 = (t15 + 0x1);
                    t12 = (t12 + 0x1);
                    if (t18 == (*(signed char *)((t16 + 0x0)))) {
                        t14 = (t14 + 0x1);
                    }
                    t16 = (t16 + 0x1);
                    if ((int)t12 >= (int)0x3) {
                        break;
                    }
                }
                if ((int)t14 >= (int)0x3) {
                    break;
                }
                t13 = (t13 + 0x1);
            }
            NextWindow(0xE);
        }
    }
    return ((int (*)(int))(windowEnterStep))(0x14);
}
