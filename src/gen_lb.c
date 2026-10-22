/* Straight-line functions with calls and guards (batch gen_lb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0813e0(int, int, int);
int GetNowLanguage(int);
int PutVM_Message(int, int, int, float, float);
int memmove(int, int, int);
int menuCursor(int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameConfirm(void);

int windowNameConfirm(void)
{
    int t37;
    int t38;
    int t39;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t58;
    int t59;
    float u61;
    int t36;
    int stk[22] = {0};

    if ((windowOpenStep(0xA)) == 1) {
        memmove(0xC2A124C, ((short)((short)(*(short *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), 0x4);
    }
    menuCursor(0x1, 0x2, 0x0);
    if ((FUN_0c0813e0(0xC2A124C, 0xC0A2044, 0x4)) == 0) {
        if ((int)(*(int *)0xC2A11DC) > (int)0x1) {
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, ((*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)))), 0x0);
            PutVM_Message(0x20, 0x15, 0xC2A1248, 197.0f, 208.0f);
        } else {
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, ((*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)))), 0x0);
            PutVM_Message(0x20, 0x22, 0xC2A1248, 197.0f, 208.0f);
        }
    } else {
        if ((int)(*(int *)0xC2A11DC) <= (int)0x1) {
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, ((*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)))), 0x0);
            t58 = 0x22;
            t59 = 0xC2A1248;
            u61 = 197.0f;
        } else {
            putLevelCTFontAssist(0x2024, (0xC09E1B4 + (short)((short)(GetNowLanguage(0x0)) * (short)0x58)), 0x2, ((*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0)))), 0x0);
            t37 = 0x0;
            t38 = 0xC2A124C;
            t39 = ((int)stk + 12);
            for (;;) {
                if ((int)t37 >= (int)0x3) {
                    break;
                }
                t36 = (*(signed char *)((t38 + 0x0)));
                t38 = (t38 + 0x1);
                t37 = (t37 + 0x1);
                *(unsigned char *)((t39 + 0x0)) = t36;
                t39 = (t39 + 0x1);
            }
            t41 = 0x0;
            t42 = t39;
            for (;;) {
                t44 = *(int *)((0xC0EF7A8 + ((GetNowLanguage(0x0)) << 2)));
                if ((int)t41 >= (int)t44) {
                    break;
                }
                *(unsigned char *)((t42 + 0x0)) = 0x20;
                t41 = (t41 + 0x1);
                t42 = (t42 + 0x1);
            }
            t45 = t44;
            t46 = 0x0;
            t47 = 0xC2A1248;
            t48 = t42;
            for (;;) {
                if ((int)t46 >= (int)0x3) {
                    break;
                }
                t45 = (*(signed char *)((t47 + 0x0)));
                t47 = (t47 + 0x1);
                t46 = (t46 + 0x1);
                *(unsigned char *)((t48 + 0x0)) = t45;
                t48 = (t48 + 0x1);
            }
            *(unsigned char *)((t48 + 0x0)) = 0x0;
            t58 = 0x1C;
            t59 = ((int)stk + 12);
            u61 = (*(float *)0xC03F2B4);
        }
        PutVM_Message(0x20, t58, t59, u61, 208.0f);
    }
    return (windowEnterStep(0x14));
}
