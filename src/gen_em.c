/* Straight-line functions with calls and guards (batch gen_em): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
int SetScreen(int);
int SetWindow(int);
int buIsReady(int);
int callLoadData(int);
int callSaveData(int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int nlsndSeqRequest(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putRecordUnit(int, int, int, int, int, float, float);
int putString(int, int, float, float, float);
int menuSaveLoadHandler(void);

int menuSaveLoadHandler(void)
{
    int t3;
    int t5;
    int t9;
    int t6;
    int t24;
    int t43;
    int t44;
    int t45;
    float u48;
    float u59;
    int t88;
    int t79;
    int t80;
    int stk[19];

    menuOpenStep();
    t3 = 0x0;
    if ((buIsReady((*(int *)0xC2A11B8))) == 0) {
        t3 = 0x3;
    }
    t5 = *(signed char *)0xC28A4F6;
    t9 = (t3 | 0x4);
    if ((int)(unsigned char)t5 >= (int)0x4) {
    } else {
        t6 = t3;
        if ((int)(unsigned char)t5 <= 0) {
            t6 = (t3 | 0x18);
        }
        t9 = t6;
    }
    menuCursor(0x0, 0x6, t9);
    menuPutFrame();
    menuPutSprites(0xC0A08C8, 0xC2A1A84, ((*(int *)0xC2A1AD8) + 0x8), 0x18);
    menuPutHelpBar(0x0, (float)(-(*(int *)0xC2A1AD8)), 416.0f);
    putLevelCTFontAssist(0x117, 0xC09F7B4, 0x6, (*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))), (t9));
    if ((int)(*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x1) {
        *(unsigned int *)(((int)stk + 20)) = 0x0;
    } else {
        t24 = *(signed char *)0xC28A4F6;
        if ((*(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)))) == 2) {
            *(unsigned int *)(((int)stk + 20)) = (~(((int)(unsigned char)t24 >= 0) ? (0xFFFFFFFF << ((unsigned char)t24 & 31)) : ((-(int)(unsigned char)t24 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t24 & 31)) : 0)));
        } else {
            if ((int)(*(int *)(((((*(int *)0xC2A11D8) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x4) {
                *(unsigned int *)(((int)stk + 20)) = (((int)(unsigned char)t24 >= 0) ? (0xFFFFFFFF << ((unsigned char)t24 & 31)) : ((-(int)(unsigned char)t24 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t24 & 31)) : 0));
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0xF;
            }
        }
    }
    t43 = 0x0;
    for (;;) {
        t44 = *(int *)0xC2A1ADC;
        t45 = t44;
        if ((t43 & 0x1) == 0) {
            t45 = (-t44);
        }
        *(float *)(((int)stk + 8)) = (float)(((((t43 << 2) + t43) << 2) << 2) + 0x88);
        *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) + 0.0199999996f);
        u48 = *(float *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 12)) = (int)u48;
        *(float *)(((int)stk + 16)) = ((float)t45 + 504.0f);
        menuPutSprites((*(int *)(((t43 << 2) + 0xC0EF7D0))), 0xC2A1A84, (int)((float)t45 + 504.0f), (int)u48);
        if (((((int)t43 >= 0) ? (0x1 << (t43 & 31)) : ((-(int)t43 & 31) ? ((int)0x1 >> (-(int)t43 & 31)) : ((int)0x1 >> 31))) & (*(int *)(((int)stk + 20)))) == 0) {
            menuPutSprites(0xC0A1D78, 0xC2A1A84, (int)((float)t45 + 364.0f), (*(int *)(((int)stk + 12))));
        } else {
            *(float *)0xC2A1AB0 = 0.799999952f;
            menuPutSprites(0xC0A1D88, 0xC2A1A84, (int)((float)t45 + 364.0f), (*(int *)(((int)stk + 12))));
            *(float *)0xC2A1AB0 = 1.0f;
        }
        *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) - 0.0199999996f);
        u59 = *(float *)(((int)stk + 8));
        putRecordUnit(0x17, (t43 + 0x1), 0x1, 0x0, 0x10, ((float)t45 + 364.0f), (u59 + -8.0f));
        if ((int)t43 < (int)(unsigned char)(*(signed char *)0xC28A4F6)) {
            PutStringFixPfont(0x17, ((short)((short)t43 * (short)0x788) + 0xC28A4F8), (*(float *)(((int)stk + 16))), (u59 + -8.0f), 20.0f, 1.0f);
        } else {
            putString(0x17, 0xC0A2144, (*(float *)(((int)stk + 16))), (u59 + -8.0f), 1.0f);
        }
        t43 = (t43 + 0x1);
        if ((int)t43 < (int)0x4) continue;
        break;
    }
    if (((0x4 & (*(int *)0xC2A11EC)) != 0) && ((t79 = *(int *)0xC2A11CC, (t79 & 2) != 0) && (t80 = *(int *)0xC2A1214, t80 == 0))) {
        t88 = *(int *)((0xC2A11DC + ((*(int *)0xC2A11D8) << 2)));
        if (t88 != 0) {
            if (t88 != 1) {
                if ((t88 != 2) && ((t88 != 3) && (t88 != 4))) {
                } else {
                    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
                    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
                    SetWindow(0xB);
                    nlsndSeqRequest(0x605A9);
                }
            } else {
                SetScreen(0x3);
                callLoadData(0x0);
            }
        } else {
            SetScreen(0x3);
            callSaveData(0x0);
        }
    }
    return menuEnterStep();
}
