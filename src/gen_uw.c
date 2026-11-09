/* Straight-line functions with calls and guards (batch gen_uw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckRanking(int, int, int, int);
int PutRecords(int, int, int, int, int, int, float, float);
int PutStringFixPfont(int, int, float, float, float, float);
int Put_Window_SpriteXtoY(int, int, int, int, int, float, float, float, float);
int SeachRankTotal(int, int, int);
int SetTotalRecords(void);
int Start_CrazyBox_Voice(int);
int Wobble_Record_Window(void);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfCrazyBoxRecordComboPut(int, int, int, int);
int pfCrazyBoxRecordDistPut(int, int, int, float);
int pfCrazyBoxRecordTimePut(int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int pfTextPut(int, int, int);
int Put_Record_Window(int a4, int a5, int a6, int a7);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int Put_Record_Window(int a4, int a5, int a6, int a7)
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
    int stk[15];
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    if (((((struct o4_int *)0xC2A994C)->v)) == 0) {
        (((struct o8_uint *)0xC2A9BAC)->v) = (CheckRanking(((((struct o0_int *)0xC2A98F0)->v)), a5, a6, a7));
        SetTotalRecords();
        (((struct o4_uint *)0xC2A9BAC)->v) = (SeachRankTotal((*(int *)0xC2A11C4), (((((struct o0_int *)0xC1EE210)->v)) + ((((struct o4_int *)0xC1EE210)->v))), ((((struct o8_int *)0xC2A9BAC)->v))));
        if (((((struct o4_int *)0xC1EE210)->v)) != 15) {
            t12 = 0x3;
            if (((((struct o4_int *)0xC2A9BAC)->v)) == 0) {
                t12 = 0x5;
            }
            Start_CrazyBox_Voice(t12);
        }
    }
    if ((((((struct o4_int *)0xC2A994C)->v)) == 105) && (t23 = (((struct o4_int *)0xC1EE210)->v), t23 != 15)) {
        t27 = 0x8;
        if (((((struct o4_int *)0xC2A9BAC)->v)) == 0) {
            t27 = 0x7;
        }
        Start_CrazyBox_Voice(t27);
    }
    if (((((struct o4_int *)0xC2A9BAC)->v)) == 0) {
        (((struct o0_uint *)0xC2A9898)->v) = 0x74;
    } else {
        (((struct o0_uint *)0xC2A9898)->v) = 0x72;
    }
    Wobble_Record_Window();
    (((struct o4_float *)0xC2A9898)->v) = 320.0f;
    (((struct o8_float *)0xC2A9898)->v) = 88.0f;
    u38 = (((struct o0_float *)0xC2A994C)->v);
    (((struct o10_float *)0xC2A9898)->v) = (u38 + 1.0f);
    (((struct o14_float *)0xC2A9898)->v) = (u38 + 1.0f);
    nlSprPut(0xC2A9898);
    (((struct o10_float *)0xC2A9898)->v) = 1.0f;
    (((struct o14_float *)0xC2A9898)->v) = 1.0f;
    if ((int)((((struct o4_int *)0xC2A994C)->v)) < (int)0x57) {
        t108 = 0x14;
    } else {
        Put_Window_SpriteXtoY(0x140, 0x173, 0xA, 0x5, 0x1, 0.5f, 20.0f, 6.0f, 0.399999976f);
        if ((int)((((struct o0_int *)0xC2A9BAC)->v)) > 0) {
            (((struct o0_uint *)0xC2A9BAC)->v) = (((((struct o0_int *)0xC2A9BAC)->v)) - 32);
        }
        pfSetFont(0x2);
        pfSize(1.0f, 1.0f);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        t50 = (((struct o0_int *)0xC2A9BAC)->v);
        if ((((((struct o4_int *)0xC1EE210)->v)) != 12) && (t51 = (((struct o4_int *)0xC1EE210)->v), t51 != 4)) {
            if (((((struct o4_int *)0xC1EE210)->v)) == 0) {
                pfCrazyBoxRecordDistPut((t50 + 0x140), 0xE8, 0x1, (*(float *)0xC2A9A24));
            } else {
                pfCrazyBoxRecordTimePut((t50 + 0x140), 0xE8, ((((struct o8_int *)0xC2A98F0)->v)));
            }
        } else {
            pfCrazyBoxRecordComboPut((t50 + 0x140), 0xE8, (*(int *)0xC2A7614), 0x1);
        }
        pfSetFont(0x0);
        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut((0x140 - ((((struct o0_int *)0xC2A9BAC)->v))), 0x90, 0xC0D1508);
        pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
        pfTextCenterPut((0x140 - ((((struct o0_int *)0xC2A9BAC)->v))), 0xD6, 0xC0D1514);
        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfTextPut((0xAC - ((((struct o0_int *)0xC2A9BAC)->v))), 0x144, 0xC0D1520);
        pfTextCenterPut((0x140 - ((((struct o0_int *)0xC2A9BAC)->v))), 0x144, 0xC0D1528);
        pfTextPut((0x1A4 - ((((struct o0_int *)0xC2A9BAC)->v))), 0x144, 0xC0D1530);
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
                R1012 = ((((struct o0_int *)0xC2A9BAC)->v));
            } else {
                R1012 = (-((((struct o0_int *)0xC2A9BAC)->v)));
            }
            t80 = 0xC2A11C4;
            u83 = (float)(((((t81 << 1) + t81) << 2) << 1) + 0x15E);
            u82 = (float)((R1012) + 0xBE);
            t80 = (SeachRankTotal((*(int *)((t80 + 0x0))), (((((struct o0_int *)0xC1EE210)->v)) + ((((struct o4_int *)0xC1EE210)->v))), ((((struct o8_int *)0xC2A9BAC)->v))));
            if ((t81 == t80) && (t96 = *(int *)0xC1EE330, (t96 & 0x8) != 0)) {
                t103 = (t81);
                t105 = 0x47;
                t106 = ((((((struct o0_int *)0xC1EE210)->v)) << 2) + ((((struct o4_int *)0xC1EE210)->v)));
            } else {
                t103 = (t81);
                t105 = 0x27;
                t106 = ((((((struct o0_int *)0xC1EE210)->v)) << 2) + ((((struct o4_int *)0xC1EE210)->v)));
            }
            t80 = (PutRecords(t105, 0xFFFFFFFF, t106, t81, t103, 0x1, u82, u83));
            t81 = (t81 + 0x1);
        }
        t108 = t80;
    }
    (((struct o4_uint *)0xC2A994C)->v) = (((((struct o4_int *)0xC2A994C)->v)) + 0x1);
    return t108;
}
