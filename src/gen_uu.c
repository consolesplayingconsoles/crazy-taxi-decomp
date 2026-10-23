/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckRanking(int);
int GetNowLanguage(int);
int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int callSaveData(int);
int memcmp(int, int, int);
int memmove(int, int, int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameSet(void);

int windowNameSet(void)
{
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t30;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t57;
    int t68;
    int t61;
    int t64;
    int t47;
    int t48;
    float u50;
    int t58;
    int stk[20];

    windowOpenStep(0x3C);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        if ((memcmp(0xC2A124C, 0xC0A2044, 0x4)) == 0) {
            *(unsigned char *)0xC28A4F6 = ((*(signed char *)0xC28A4F6) + 0x1);
        }
        memmove(((short)((short)(*(short *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), 0xC2A1248, 0x4);
        *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x8);
    }
    NextWindow(0x0);
    if ((memcmp(0xC2A124C, 0xC0A2044, 0x4)) == 0) {
        if ((int)(*(int *)0xC2A11DC) > (int)0x1) {
            PutVM_Message(0x20, 0x17, 0xC2A1248, 237.0f, 240.0f);
        } else {
            PutVM_Message(0x20, 0x23, 0xC2A1248, (*(float *)0xC03F3F4), 240.0f);
        }
    } else {
        t22 = *(int *)0xC2A11DC;
        if ((int)t22 <= (int)0x1) {
            t47 = 0x23;
            t48 = 0xC2A1248;
            u50 = (*(float *)0xC03F3F4);
        } else {
            t24 = t22;
            t25 = 0x0;
            t26 = 0xC2A124C;
            t27 = (((int)stk + 4) + 0x4);
            for (;;) {
                if ((int)t25 >= (int)0x3) {
                    break;
                }
                t24 = (*(signed char *)((t26 + 0x0)));
                t26 = (t26 + 0x1);
                t25 = (t25 + 0x1);
                *(unsigned char *)((t27 + 0x0)) = t24;
                t27 = (t27 + 0x1);
            }
            *(unsigned int *)(((int)stk + 4)) = 0xC0EF7A8;
            t29 = 0x0;
            t30 = t27;
            for (;;) {
                t33 = *(int *)(((((GetNowLanguage(0x0)) << 2) + (*(int *)(((int)stk + 4)))) + 0x14));
                if ((int)t29 >= (int)t33) {
                    break;
                }
                *(unsigned char *)((t30 + 0x0)) = 0x20;
                t29 = (t29 + 0x1);
                t30 = (t30 + 0x1);
            }
            t34 = t33;
            t35 = 0x0;
            t36 = 0xC2A1248;
            t37 = t30;
            for (;;) {
                if ((int)t35 >= (int)0x3) {
                    break;
                }
                t34 = (*(signed char *)((t36 + 0x0)));
                t36 = (t36 + 0x1);
                t35 = (t35 + 0x1);
                *(unsigned char *)((t37 + 0x0)) = t34;
                t37 = (t37 + 0x1);
            }
            *(unsigned char *)((t37 + 0x0)) = 0x0;
            t47 = 0x1D;
            t48 = (((int)stk + 4) + 0x4);
            u50 = (*(float *)0xC03F400);
        }
        PutVM_Message(0x20, t47, t48, u50, 240.0f);
    }
    t57 = windowEnterStep(0x0);
    t68 = t57;
    if ((t57 == 1) && (t58 = *(int *)0xC2A11DC, (int)t58 <= (int)0x1)) {
        t61 = *(int *)0xC2A1208;
        t64 = t61;
        if ((t61 & 2) != 0) {
            CheckRanking(0xC2A11C8);
            t64 = (callSaveData(0x1));
        }
        t68 = t64;
    }
    return t68;
}
