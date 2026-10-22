/* Straight-line functions with calls and guards (batch gen_oa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckRanking(int);
int PutRecords(int, int, int, int, int, int, float, float);
int PutStringFixPfont(int, int, float, float, float, float);
int Put_Window_SpriteXtoY(int, int, int, int, float, float, float, float);
int SeachRankTotal(int, int, int);
int SetTotalRecords(void);
int Start_CrazyBox_Voice(int);
int Wobble_Record_Window(void);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfCrazyBoxRecordComboPut(int, int, int);
int pfCrazyBoxRecordDistPut(int, int, int, float);
int pfCrazyBoxRecordTimePut(int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int pfTextCenterPut(int, int);
int pfTextPut(int, int);
int Put_Record_Window(void);

int Put_Record_Window(void)
{
    int t12;
    int t27;
    float u38;
    int t50;
    int t80;
    int t81;
    float u82;
    float u83;
    int t23;
    int t108;
    int t51;
    int t96;
    int t103;
    int t105;
    int t106;
    int stk[15] = {0};

    if ((*(int *)0xC2A9950) == 0) {
        *(unsigned int *)0xC2A9BB4 = (CheckRanking((*(int *)0xC2A98F0)));
        SetTotalRecords();
        *(unsigned int *)0xC2A9BB0 = (SeachRankTotal((*(int *)0xC2A11C4), ((*(int *)0xC1EE210) + (*(int *)0xC1EE214)), (*(int *)0xC2A9BB4)));
        if ((*(int *)0xC1EE214) != 15) {
            t12 = 0x3;
            if ((*(int *)0xC2A9BB0) == 0) {
                t12 = 0x5;
            }
            Start_CrazyBox_Voice(t12);
        }
    }
    if (((*(int *)0xC2A9950) == 105) && (t23 = *(int *)0xC1EE214, t23 != 15)) {
        t27 = 0x8;
        if ((*(int *)0xC2A9BB0) == 0) {
            t27 = 0x7;
        }
        Start_CrazyBox_Voice(t27);
    }
    if ((*(int *)0xC2A9BB0) == 0) {
        *(unsigned int *)0xC2A9898 = 0x74;
    } else {
        *(unsigned int *)0xC2A9898 = 0x72;
    }
    Wobble_Record_Window();
    *(float *)0xC2A989C = 320.0f;
    *(float *)0xC2A98A0 = 88.0f;
    u38 = *(float *)0xC2A994C;
    *(float *)0xC2A98A8 = (u38 + 1.0f);
    *(float *)0xC2A98AC = (u38 + 1.0f);
    nlSprPut(0xC2A9898);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    if ((int)(*(int *)0xC2A9950) < (int)0x57) {
        t108 = 0x14;
    } else {
        Put_Window_SpriteXtoY(0x140, 0x173, 0xA, 0x5, 0.5f, 20.0f, 6.0f, 0.399999976f);
        if ((int)(*(int *)0xC2A9BAC) > 0) {
            *(unsigned int *)0xC2A9BAC = ((*(int *)0xC2A9BAC) - 32);
        }
        pfSetFont(0x2);
        pfSize(1.0f, 1.0f);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        t50 = *(int *)0xC2A9BAC;
        if (((*(int *)0xC1EE214) != 12) && (t51 = *(int *)0xC1EE214, t51 != 4)) {
            if ((*(int *)0xC1EE214) == 0) {
                pfCrazyBoxRecordDistPut((t50 + 0x140), 0xE8, 0x1, (*(float *)0xC2A9A24));
            } else {
                pfCrazyBoxRecordTimePut((t50 + 0x140), 0xE8, (*(int *)0xC2A98F8));
            }
        } else {
            pfCrazyBoxRecordComboPut((t50 + 0x140), 0xE8, (*(int *)0xC2A7614));
        }
        pfSetFont(0x0);
        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut((0x140 - (*(int *)0xC2A9BAC)), 0x90);
        pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
        pfTextCenterPut((0x140 - (*(int *)0xC2A9BAC)), 0xD6);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfTextPut((0xAC - (*(int *)0xC2A9BAC)), 0x144);
        pfTextCenterPut((0x140 - (*(int *)0xC2A9BAC)), 0x144);
        pfTextPut((0x1A4 - (*(int *)0xC2A9BAC)), 0x144);
        t80 = (PutStringFixPfont(0x26, ((short)((short)(*(short *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), 320.0f, 164.0f, 32.0f, 1.0f));
        t81 = 0x0;
        u82 = 320.0f;
        u83 = 1.0f;
        for (;;) {
            if ((int)t81 >= (int)0x3) {
                break;
            }
            t80 = t81;
            if (t80 == 1) {
                *(unsigned int *)(((int)stk + 12)) = (*(int *)0xC2A9BAC);
            } else {
                *(unsigned int *)(((int)stk + 12)) = (-(*(int *)0xC2A9BAC));
            }
            t80 = 0xC2A11C4;
            u83 = (float)(((((t81 << 1) + t81) << 2) << 1) + 0x15E);
            u82 = (float)((*(int *)(((int)stk + 12))) + 0xBE);
            t80 = (SeachRankTotal((*(int *)((t80 + 0x0))), ((*(int *)0xC1EE210) + (*(int *)0xC1EE214)), (*(int *)0xC2A9BB4)));
            if ((t81 == t80) && (t96 = *(int *)0xC1EE330, (t96 & 0x8) != 0)) {
                t103 = (t81);
                t105 = 0x47;
                t106 = (((*(int *)0xC1EE210) << 2) + (*(int *)0xC1EE214));
            } else {
                t103 = (t81);
                t105 = 0x27;
                t106 = (((*(int *)0xC1EE210) << 2) + (*(int *)0xC1EE214));
            }
            t80 = (PutRecords(t105, 0xFFFFFFFF, t106, t81, t103, 0x1, u82, u83));
            t81 = (t81 + 0x1);
        }
        t108 = t80;
    }
    *(unsigned int *)0xC2A9950 = ((*(int *)0xC2A9950) + 0x1);
    return t108;
}
