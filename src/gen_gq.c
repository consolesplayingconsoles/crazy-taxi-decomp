/* Straight-line functions with calls and guards (batch gen_gq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int Voice_Request(int, int, int, int);
int menuCursor(int, int, int);
int putLevelCTFontAssist(int, int, int, int, int);
int windowEnterStep(int, int, int, int);
int windowOpenStep(int);
int windowTryAgain(int a4, int a5, int a6, int a7);

int windowTryAgain(int a4, int a5, int a6, int a7)
{
    int t8;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C03E9C6:;
    windowOpenStep(0x1);
    menuCursor(0x1, 0x2, 0x0);
    putLevelCTFontAssist(0x2026, 0xC09E028, 0x3, (*(int *)(((((*(int *)0xC2A11F4) << 2) + 0xC2A11F8) + 0x0))), 0x0);
    R14 = (0xC2A11F4);
    if ((((*(int *)0xC2A1208) & 4) == 0)) goto L_C03EAAA;
    goto L_C03EA02;
    L_C03EA02:;
    t8 = *(int *)0xC2A11CC;
    R12 = (0xC0EF550);
    R13 = (t8);
    R4 = (0xC0EF550);
    R5 = (0x2);
    if (((t8 & 0x2) == 0)) goto L_C03EA7C;
    goto L_C03EA12;
    L_C03EA12:;
    if (((*(int *)(((((*(int *)((R14 + 0x0))) << 2) + (R14 + 0x4)) + 0x0))) != 0)) goto L_C03EA7C;
    goto L_C03EA22;
    L_C03EA22:;
    *(unsigned int *)((R4 + 0x0)) = 0x277;
    Voice_Request(R12, 0x0, 0x7F, 0x0);
    goto L_C03EAAA;
    L_C03EAAA:;
    return windowEnterStep(0x5A, R5, R6, R7);
    L_C03EA7C:;
    if (((R5 & R13) == 0)) goto L_C03EA8E;
    goto L_C03EA80;
    L_C03EA80:;
    if (((*(int *)(((R14 + 0x4) + ((*(int *)((R14 + 0x0))) << 2)))) == 1)) goto L_C03EA94;
    goto L_C03EA8E;
    L_C03EA8E:;
    if (((0x4 & R13) == 0)) goto L_C03EAAA;
    goto L_C03EA94;
    L_C03EA94:;
    *(unsigned int *)((R4 + 0x0)) = 0x25D;
    Voice_Request(R12, 0x0, 0x7F, 0x0);
    NextWindow(0x3);
    goto L_C03EAAA;
}
