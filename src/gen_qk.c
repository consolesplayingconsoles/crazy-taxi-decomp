/* Straight-line functions with calls and guards (batch gen_qk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int windowOpenStep(int);
int windowEnterStep(int);
int PutVM_Message(int, int, int, float, float);
int windowCardMissing(void);

int windowCardMissing(void)
{
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t13;
    int t14;

    windowOpenStep(0x14);
    PutVM_Message(0x20, 0x0, 0x0, 160.0f, 144.0f);
    PutVM_Message(0x20, 0x1, 0x0, 160.0f, 176.0f);
    PutVM_Message(0x20, 0x2, 0xC2A1238, 160.0f, 208.0f);
    PutVM_Message(0x20, 0x3, 0x0, 160.0f, 272.0f);
    PutVM_Message(0x20, 0x4, 0x0, 160.0f, 304.0f);
    t6 = *(int *)0xC2A1208;
    if ((t6 & 4) != 0) {
        t7 = *(int *)0xC2A121C;
        if (t7 == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            t8 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = (t8 | 0x9);
            t9 = *(int *)0xC2A1224;
            t10 = 0x5;
            if (t9 == 0) {
                t10 = 0x4;
            }
            NextWindow(t10);
        } else {
            t13 = *(int *)0xC2A11CC;
            if ((t13 & 1) != 0) {
                t14 = *(int *)0xC2A1208;
                *(unsigned int *)0xC2A1208 = (t14 | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                NextWindow(0x9);
            }
        }
    }
    return windowEnterStep(0x14);
}
