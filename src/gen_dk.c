/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckBoxFlag(int);
int GetNowLanguage(int);
int Init_Window_Sprite(int);
int PutWindow(int, float, float);
int Voice_Request(int, int, int, int);
int callBoxAdvice(void);
int menuCursorBox(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int menuCrazyBoxHandler(void);

int menuCrazyBoxHandler(void)
{
    int t6;
    int t7;
    int t14;
    int t15;
    int t22;
    int t34;
    int t109;
    int t112;
    int t116;
    int t62;
    int t113;
    int t114;

    if ((menuOpenStep()) == 1) {
        *(unsigned int *)0xC2A1230 = 0x0;
    }
    t6 = *(signed char *)0xC28A4F6;
    t7 = ((CheckBoxFlag((*(int *)0xC2A11C4))) << 2);
    if (t6 == 0) {
        t7 = 0x3FFFE;
    }
    menuCursorBox(0x0, 0x13, t7);
    menuPutFrame();
    menuPutSprites(0xC0A0770, 0xC2A1A84, ((*(int *)0xC2A1AD8) + 0x8), 0x18);
    t14 = *(int *)0xC2A1AD8;
    t15 = *(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0));
    if ((t15 != 0) && (t15 != 1)) {
        t22 = 0x1;
        if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 18) {
            t22 = 0x0;
        }
        menuPutHelpBar(t22, (float)(-t14), 416.0f);
    } else {
        menuPutHelpBar(0x2, (float)(-t14), 416.0f);
    }
    putLevelCTFontAssist(0x1017, 0xC09E658, 0x13, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), (t7));
    if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) != 1) {
        t34 = *(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0));
        if ((int)t34 < (int)0x2) {
            Init_Window_Sprite(0x1);
            Init_Window_Sprite(0x2);
        } else {
            if ((int)t34 > (int)0x11) {
                Init_Window_Sprite(0x1);
                Init_Window_Sprite(0x2);
            } else {
                if ((PutWindow(0x1, (float)((*(int *)0xC2A1ADC) + 0x138), 112.0f)) == 1) {
                    putString(0x23, 0xC0A2130, (float)((*(int *)0xC2A1ADC) + 0x190), 232.0f, 1.0f);
                    putString(0x20, 0xC0A2098, (float)((*(int *)0xC2A1ADC) + 0x1FE), 232.0f, 1.0f);
                    putString(0x4023, (((((*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) << 2) << 2) << 1) + 0xC09FAF0), (float)((*(int *)0xC2A1ADC) + 0x148), 120.0f, 1.0f);
                    putString(0x23, 0xC0A213C, (float)(0x148 + (*(int *)0xC2A1ADC)), 146.0f, 1.0f);
                    menuPutSprites((*(int *)(((0xC0EF6A8 + ((((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) - 2) << 2) << 1)) + ((GetNowLanguage(0x1)) << 2)))), 0xC2A1A84, ((*(int *)0xC2A1ADC) + 0x158), 0xB2);
                }
                if ((((*(int *)0xC2A11EC) & 4) != 0) && (t62 = *(int *)0xC2A1214, t62 == 0)) {
                    if (((*(int *)0xC2A11CC) & 1) != 0) {
                        callBoxAdvice();
                    }
                    if (((*(int *)0xC2A11CC) & 2) != 0) {
                        *(unsigned int *)0xC0EF550 = (*(int *)(((((*(int *)((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC))) + 0x2) << 2) + 0xC0A1FC8)));
                        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                    }
                }
            }
        }
    } else {
        Init_Window_Sprite(0x2);
        if ((PutWindow(0x1, (float)((*(int *)0xC2A1ADC) + 0x138), 112.0f)) == 1) {
            putString(0x4023, (((((*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) << 2) << 2) << 1) + 0xC09FAF0), (float)((*(int *)0xC2A1ADC) + 0x148), 120.0f, 1.0f);
            putString(0x4020, ((short)((short)(0x3 & (*(int *)0xC2A1240)) * (short)0x2C) + 0xC09E504), (float)(0x148 + (*(int *)0xC2A1ADC)), 140.0f, 1.0f);
            menuPutSprites((*(int *)(((((*(int *)0xC2A1240) & 0x3) << 2) + 0xC0EF648))), 0xC2A1A84, ((*(int *)0xC2A1ADC) + 0x23C), 0xC8);
            t109 = 0x0;
            for (;;) {
                putString(0x4020, (0xC09FEB0 + (((t109 << 2) << 2) << 1)), (float)((*(int *)0xC2A1ADC) + 0x158), (float)(((((t109 << 2) << 1) + t109) << 1) + 0x9E), 1.0f);
                t112 = *(int *)0xC2A1ADC;
                if ((t109 == 3) && ((t113 = *(int *)0xC2A1240, (t113 & 0x3) == 2) && (t114 = *(signed char *)0xC28A4E8, ((unsigned char)t114 & 32) == 0))) {
                    putString(0x4020, 0xC09FE70, (float)(t112 + 0x1BC), (float)(((((t109 << 2) << 1) + t109) << 1) + 0x9E), 1.0f);
                } else {
                    t116 = *(int *)0xC2A1240;
                    putString(0x4020, (((short)(((((((0x3 & t116) + 0x1) << 2) + ((0x3 & t116) + 0x1)) << 2) << 2) << 1) + 0xC09FEB0) + (((t109 << 2) << 2) << 1)), (float)(t112 + 0x1BC), (float)(((((t109 << 2) << 1) + t109) << 1) + 0x9E), 1.0f);
                }
                t109 = (t109 + 0x1);
                if ((int)t109 >= (int)0x5) {
                    break;
                }
            }
        }
    }
    return menuEnterStep();
}
