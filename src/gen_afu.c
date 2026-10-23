/* Straight-line functions with calls and guards (batch gen_afu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(int);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int menuRuleHandler(void);

int menuRuleHandler(void)
{
    int t4;
    int t5;
    int t14;
    int t15;
    int t16;
    int t17;
    int t24;

    menuOpenStep();
    menuCursor(0x0, 0x5, 0x0);
    menuPutFrame();
    t4 = *(int *)0xC2A1AD8;
    t5 = 0xC0A0758;
    if ((*(int *)0xC2A11DC) == 0) {
        t5 = 0xC0A0740;
    }
    menuPutSprites(t5, 0xC2A1A84, (t4 + 0x8), 0x18);
    menuPutHelpBar(0x0, (float)(-(*(int *)0xC2A1AD8)), 416.0f);
    putLevelCTFontAssist(0x817, 0xC09E36C, 0x5, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), 0x0);
    if ((((*(int *)0xC2A11EC) & 0x4) != 0) && ((t14 = *(int *)0xC2A11CC, (t14 & 2) != 0) && ((t15 = *(int *)0xC2A1214, t15 == 0) && (t16 = *(int *)0xC2A11D8, t17 = *(int *)((((t16 << 2) + 0xC2A11DC) + 0x0)), (int)t17 < (int)0x4)))) {
        *(unsigned int *)0xC0EF550 = (*(int *)((0xC0A1FC8 + ((*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) << 2))));
        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
    } else {
        t24 = 0x4;
    }
    return menuEnterStep(t24);
}
