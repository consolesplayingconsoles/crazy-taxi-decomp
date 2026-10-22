/* Straight-line functions with calls and guards (batch gen_rn): generated from the code and checked by tests. Calls are
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
    int t0;
    int t4;
    int t5;
    int t6;
    int t7;
    int t11;
    int t13;
    int t14;
    int t15;
    int t20;
    int t21;
    int t22;
    int t27;
    int t28;
    int t29;
    int t31;
    int t32;
    int t33;
    int t34;
    int t39;
    int t40;
    int t41;
    int t43;
    int t45;
    int t46;
    int t47;
    int t49;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t61;
    int t65;
    int t71;
    int t72;
    int t73;
    int t74;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t102;
    int t103;
    int t105;
    int t106;
    int t107;
    int t109;
    int t110;
    int t112;
    int t116;
    int t62;
    int t113;
    int t114;

    t0 = menuOpenStep();
    if (t0 == 1) {
        *(unsigned int *)0xC2A1230 = 0x0;
    }
    t4 = *(int *)0xC2A11C4;
    t5 = CheckBoxFlag(t4);
    t6 = *(signed char *)0xC28A4F6;
    t7 = (t5 << 2);
    if (t6 == 0) {
        t7 = 0x3FFFE;
    }
    menuCursorBox(0x0, 0x13, t7);
    menuPutFrame();
    t11 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A0770, 0xC2A1A84, (t11 + 0x8), 0x18);
    t13 = *(int *)0xC2A11D8;
    t14 = *(int *)0xC2A1AD8;
    t15 = *(int *)((((t13 << 2) + 0xC2A11DC) + 0x0));
    if ((t15 != 0) && (t15 != 1)) {
        t20 = *(int *)0xC2A11D8;
        t21 = *(int *)((0xC2A11DC + (t20 << 2)));
        t22 = 0x1;
        if (t21 == 18) {
            t22 = 0x0;
        }
        menuPutHelpBar(t22, (float)(-t14), 416.0f);
    } else {
        menuPutHelpBar(0x2, (float)(-t14), 416.0f);
    }
    t27 = t7;
    t28 = *(int *)0xC2A11D8;
    t29 = *(int *)((((t28 << 2) + 0xC2A11DC) + 0x0));
    putLevelCTFontAssist(0x1017, 0xC09E658, 0x13, t29, t27);
    t31 = *(int *)0xC2A11D8;
    t32 = *(int *)((0xC2A11DC + (t31 << 2)));
    if (t32 != 1) {
        t33 = *(int *)0xC2A11D8;
        t34 = *(int *)((((t33 << 2) + 0xC2A11DC) + 0x0));
        if ((int)t34 < (int)0x2) {
            Init_Window_Sprite(0x1);
            Init_Window_Sprite(0x2);
        } else {
            if ((int)t34 > (int)0x11) {
                Init_Window_Sprite(0x1);
                Init_Window_Sprite(0x2);
            } else {
                t39 = *(int *)0xC2A1ADC;
                t40 = PutWindow(0x1, (float)(t39 + 0x138), 112.0f);
                if (t40 == 1) {
                    t41 = *(int *)0xC2A1ADC;
                    putString(0x23, 0xC0A2130, (float)(t41 + 0x190), 232.0f, 1.0f);
                    t43 = *(int *)0xC2A1ADC;
                    putString(0x20, 0xC0A2098, (float)(t43 + 0x1FE), 232.0f, 1.0f);
                    t45 = *(int *)0xC2A1ADC;
                    t46 = *(int *)0xC2A11D8;
                    t47 = *(int *)((((t46 << 2) + 0xC2A11DC) + 0x0));
                    putString(0x4023, ((((t47 << 2) << 2) << 1) + 0xC09FAF0), (float)(t45 + 0x148), 120.0f, 1.0f);
                    t49 = *(int *)0xC2A1ADC;
                    putString(0x23, 0xC0A213C, (float)(0x148 + t49), 146.0f, 1.0f);
                    t51 = *(int *)0xC2A1ADC;
                    t52 = *(int *)0xC2A11D8;
                    t53 = *(int *)((0xC2A11DC + (t52 << 2)));
                    t54 = GetNowLanguage(0x1);
                    t55 = *(int *)(((0xC0EF6A8 + (((t53 - 2) << 2) << 1)) + (t54 << 2)));
                    menuPutSprites(t55, 0xC2A1A84, (t51 + 0x158), 0xB2);
                }
                t61 = *(int *)0xC2A11EC;
                if (((t61 & 4) != 0) && (t62 = *(int *)0xC2A1214, t62 == 0)) {
                    t65 = *(int *)0xC2A11CC;
                    if ((t65 & 1) != 0) {
                        callBoxAdvice();
                    }
                    t71 = *(int *)0xC2A11CC;
                    if ((t71 & 2) != 0) {
                        t72 = *(int *)0xC2A11D8;
                        t73 = *(int *)(((t72 << 2) + 0xC2A11DC));
                        t74 = *(int *)((((t73 + 0x2) << 2) + 0xC0A1FC8));
                        *(unsigned int *)0xC0EF550 = t74;
                        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                    }
                }
            }
        }
    } else {
        Init_Window_Sprite(0x2);
        t96 = *(int *)0xC2A1ADC;
        t97 = PutWindow(0x1, (float)(t96 + 0x138), 112.0f);
        if (t97 == 1) {
            t98 = *(int *)0xC2A1ADC;
            t99 = *(int *)0xC2A11D8;
            t100 = *(int *)((((t99 << 2) + 0xC2A11DC) + 0x0));
            putString(0x4023, ((((t100 << 2) << 2) << 1) + 0xC09FAF0), (float)(t98 + 0x148), 120.0f, 1.0f);
            t102 = *(int *)0xC2A1ADC;
            t103 = *(int *)0xC2A1240;
            putString(0x4020, ((short)((short)(0x3 & t103) * (short)0x2C) + 0xC09E504), (float)(0x148 + t102), 140.0f, 1.0f);
            t105 = *(int *)0xC2A1240;
            t106 = *(int *)0xC2A1ADC;
            t107 = *(int *)((((t105 & 0x3) << 2) + 0xC0EF648));
            menuPutSprites(t107, 0xC2A1A84, (t106 + 0x23C), 0xC8);
            t109 = 0x0;
            for (;;) {
                t110 = *(int *)0xC2A1ADC;
                putString(0x4020, (0xC09FEB0 + (((t109 << 2) << 2) << 1)), (float)(t110 + 0x158), (float)(((((t109 << 2) << 1) + t109) << 1) + 0x9E), 1.0f);
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
