/* Straight-line functions with calls and guards (batch gen_tq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetNowLanguage(int);
int PutVM_Message(int, int, int, float, float);
int menuCursor(int, int, int);
int putLevelCTFontAssist(int, int, int, int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameDelete(void);

int windowNameDelete(void)
{
    windowOpenStep(0xA);
    menuCursor(0x1, 0x2, 0x0);
    putLevelCTFontAssist(0x24, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, ((*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)))));
    PutVM_Message(0x20, 0x19, 0xC2A1248, (195.0f), (208.0f));
    return windowEnterStep(0x14);
}
