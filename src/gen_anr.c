/* Straight-line functions with calls and guards (batch gen_anr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetNowLanguage(int);
int Init_Window_Sprite(int);
int NextWindow(int);
int PutWindow(int, float, float);
int menuPutSprites(int, int, int, int);
int putString(int, int, float, float, float);
int windowEnterStep(int);
int windowOpenStep(int);
int windowBoxAdvice(void);

int windowBoxAdvice(void)
{
    int t5;

    if ((windowOpenStep(0x1)) == 1) {
        Init_Window_Sprite(0x3);
    }
    if ((((*(int *)0xC2A1208) & 4) != 0) && (t5 = *(int *)0xC2A11CC, (t5 & 5) != 0)) {
        *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x8);
    }
    NextWindow(0x0);
    if ((PutWindow(0x3, 8.0f, 264.0f)) == 1) {
        putString(0x23, 0xC0A2090, 428.0f, 272.0f, 1.0f);
        putString(0x20, 0xC0A2098, 520.0f, 272.0f, 1.0f);
        putString(0x23, 0xC0A20A8, 32.0f, 272.0f, 1.0f);
        menuPutSprites((*(int *)(((0xC0EF728 + ((((*(int *)((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC))) - 2) << 2) << 1)) + ((GetNowLanguage(0x1)) << 2)))), 0xC2A1A84, 0x40, 0x130);
    }
    return windowEnterStep(0x14);
}
