/* Straight-line functions with calls and guards (batch gen_ahf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int saveBufferInit(int);
int windowEnterStep(int);
int windowOpenStep(int);
int windowNameErase(void);

int windowNameErase(void)
{
    int t7;
    int t8;
    int t9;
    int t12;
    int t14;
    int t5;
    int t6;

    windowOpenStep(0x3C);
    PutVM_Message(0x20, 0x1A, 0xC2A1248, 240.0f, 240.0f);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x8);
        t7 = 0xC2A11C4;
        t8 = 0xC2A11F4;
        t9 = (*(int *)0xC2A11C4);
        for (;;) {
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)(unsigned char)(*(signed char *)0xC28A4F6)) {
                break;
            }
            t5 = t9;
            t7 = 0x788;
            t5 = (t5 - 1);
            t8 = 0xC28A4E8;
            t8 = (t8 + 0x10);
            t5 = ((short)t5 * (short)t7);
            t5 = (short)t5;
            t5 = (t5 + t8);
            t6 = ((short)t9 * (short)t7);
            t6 = (short)t6;
            t12 = t7;
            t7 = 0xC081268;
            t6 = (t6 + t8);
            t14 = 0;
            for (; t14 < (int)t12; t14++) *(unsigned char *)(t5 + t14) = *(unsigned char *)(t6 + t14);
        }
        saveBufferInit(((short)((short)(t9 - 1) * (short)0x788) + 0xC28A4F8));
        *(unsigned char *)0xC28A4F6 = ((*(signed char *)0xC28A4F6) - 1);
    }
    NextWindow(0x0);
    return windowEnterStep(0x0);
}
