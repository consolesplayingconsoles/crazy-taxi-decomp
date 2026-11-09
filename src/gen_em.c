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
struct o0_float { float v; };
struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };


int menuSaveLoadHandler(void)
{
    int t3;
    int t5;
    int t9;
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
    float R1008;
    int R1012;
    float R1016;
    int R1020;

    R1008 = *(float *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    menuOpenStep();
    t3 = 0x0;
    if ((buIsReady(((((struct o0_int *)0xC2A11B8)->v)))) == 0) {
        t3 = 0x3;
    }
    t5 = *(signed char *)0xC28A4F6;
    t9 = (t3 | 0x4);
    if ((int)(unsigned char)t5 >= (int)0x4) {
    } else {
        t9 = t3;
        if ((int)(unsigned char)t5 <= 0) {
            t9 = (t3 | 0x18);
        }
    }
    menuCursor(0x0, 0x6, t9);
    menuPutFrame();
    menuPutSprites(0xC0A08C8, 0xC2A1A84, (((((struct o28_int *)0xC2A1AB0)->v)) + 0x8), 0x18);
    menuPutHelpBar(0x0, (float)(-((((struct o28_int *)0xC2A1AB0)->v))), 416.0f);
    putLevelCTFontAssist(0x117, 0xC09F7B4, 0x6, (*(int *)((((((((struct o20_int *)0xC2A11B8)->v)) << 2) + 0xC2A11DC) + 0x0))), (t9));
    if ((int)(*(int *)((((((((struct o20_int *)0xC2A11B8)->v)) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x1) {
        R1020 = 0x0;
    } else {
        t24 = *(signed char *)0xC28A4F6;
        if ((*(int *)((0xC2A11DC + (((((struct o20_int *)0xC2A11B8)->v)) << 2)))) == 2) {
            R1020 = (~(((int)(unsigned char)t24 >= 0) ? (0xFFFFFFFF << ((unsigned char)t24 & 31)) : ((-(int)(unsigned char)t24 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t24 & 31)) : 0)));
        } else {
            if ((int)(*(int *)((((((((struct o20_int *)0xC2A11B8)->v)) << 2) + 0xC2A11DC) + 0x0))) <= (int)0x4) {
                R1020 = (((int)(unsigned char)t24 >= 0) ? (0xFFFFFFFF << ((unsigned char)t24 & 31)) : ((-(int)(unsigned char)t24 & 31) ? ((unsigned int)0xFFFFFFFF >> (-(int)(unsigned char)t24 & 31)) : 0));
            } else {
                R1020 = 0xF;
            }
        }
    }
    t43 = 0x0;
    for (;;) {
        t44 = (((struct o2C_int *)0xC2A1AB0)->v);
        t45 = t44;
        if ((t43 & 0x1) == 0) {
            t45 = (-t44);
        }
        R1008 = (float)(((((t43 << 2) + t43) << 2) << 2) + 0x88);
        (((struct o24_float *)0xC2A1AB0)->v) = (((((struct o24_float *)0xC2A1AB0)->v)) + 0.0199999996f);
        u48 = R1008;
        R1012 = (int)u48;
        R1016 = ((float)t45 + 504.0f);
        menuPutSprites((*(int *)(((t43 << 2) + 0xC0EF7D0))), 0xC2A1A84, (int)((float)t45 + 504.0f), (int)u48);
        if (((((int)t43 >= 0) ? (0x1 << (t43 & 31)) : ((-(int)t43 & 31) ? ((int)0x1 >> (-(int)t43 & 31)) : ((int)0x1 >> 31))) & (R1020)) == 0) {
            menuPutSprites(0xC0A1D78, 0xC2A1A84, (int)((float)t45 + 364.0f), (R1012));
        } else {
            (((struct o0_float *)0xC2A1AB0)->v) = 0.799999952f;
            menuPutSprites(0xC0A1D88, 0xC2A1A84, (int)((float)t45 + 364.0f), (R1012));
            (((struct o0_float *)0xC2A1AB0)->v) = 1.0f;
        }
        (((struct o24_float *)0xC2A1AB0)->v) = (((((struct o24_float *)0xC2A1AB0)->v)) - 0.0199999996f);
        u59 = R1008;
        putRecordUnit(0x17, (t43 + 0x1), 0x1, 0x0, 0x10, ((float)t45 + 364.0f), (u59 + -8.0f));
        if ((int)t43 < (int)(unsigned char)(*(signed char *)0xC28A4F6)) {
            PutStringFixPfont(0x17, ((short)((short)t43 * (short)0x788) + 0xC28A4F8), (R1016), (u59 + -8.0f), 20.0f, 1.0f);
        } else {
            putString(0x17, 0xC0A2144, (R1016), (u59 + -8.0f), 1.0f);
        }
        t43 = (t43 + 0x1);
        if ((int)t43 < (int)0x4) continue;
        break;
    }
    if (((0x4 & ((((struct o34_int *)0xC2A11B8)->v))) != 0) && ((t79 = (((struct o14_int *)0xC2A11B8)->v), (t79 & 2) != 0) && (t80 = (((struct o0_int *)0xC2A1214)->v), t80 == 0))) {
        t88 = *(int *)((0xC2A11DC + (((((struct o20_int *)0xC2A11B8)->v)) << 2)));
        if (t88 != 0) {
            if (t88 != 1) {
                if ((t88 != 2) && ((t88 != 3) && (t88 != 4))) {
                } else {
                    (((struct o14_uint *)0xC2A1214)->v) = ((((struct o0_int *)0xC1EE234)->v));
                    (((struct o18_uint *)0xC2A1214)->v) = ((((struct o4_int *)0xC1EE234)->v));
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
