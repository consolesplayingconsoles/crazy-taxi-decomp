/* Straight-line functions with calls and guards (batch gen_px): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int windowEnterStep(int);
int windowOpenStep(int);
int windowCardMissing(void);

int windowCardMissing(void)
{
    int t13;

    windowOpenStep(0x14);
    PutVM_Message(0x20, 0x0, 0x0, 160.0f, 144.0f);
    PutVM_Message(0x20, 0x1, 0x0, 160.0f, 176.0f);
    PutVM_Message(0x20, 0x2, 0xC2A1238, 160.0f, 208.0f);
    PutVM_Message(0x20, 0x3, 0x0, 160.0f, 272.0f);
    PutVM_Message(0x20, 0x4, 0x0, 160.0f, 304.0f);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        if ((*(int *)0xC2A121C) == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
            t13 = 0x5;
            if ((*(int *)0xC2A1224) == 0) {
                t13 = 0x4;
            }
            NextWindow(t13);
        } else {
            if (((*(int *)0xC2A11CC) & 1) != 0) {
                *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                NextWindow(0x9);
            }
        }
    }
    return windowEnterStep(0x14);
}
