/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int windowEnterStep(int, int, int);
int windowOpenStep(int);
int windowCardDriveError(void);

int windowCardDriveError(void)
{
    float u1;
    int t49;
    int t27;
    int t48;
    int t42;
    int t43;
    int t36;
    int t37;

    windowOpenStep(0x14);
    u1 = 1.6e+02f;
    PutVM_Message(0x20, 0x9, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), u1, 112.0f);
    PutVM_Message(0x20, 0xA, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), u1, 144.0f);
    PutVM_Message(0x20, 0x1, 0x0, u1, 176.0f);
    PutVM_Message(0x20, 0x2, 0xC2A1238, u1, 208.0f);
    PutVM_Message(0x20, 0x3, 0x0, u1, 272.0f);
    PutVM_Message(0x20, 0x4, 0x0, u1, 304.0f);
    PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), 2.2e+02f, 368.0f);
    t49 = 0xC2A11D8;
    if (((*(int *)0xC2A1208) & 4) != 0) {
        if ((*(int *)0xC2A121C) == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
            t27 = 0x5;
            if ((*(int *)0xC2A1224) == 0) {
                t27 = 0x4;
            }
            NextWindow(t27);
        } else {
            if (((*(int *)0xC2A11CC) & 1) != 0) {
                *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                NextWindow(0x9);
            } else {
                t36 = 0xC2A121C;
                t37 = 0xC2A11D8;
            }
            t42 = t36;
            t43 = t37;
        }
        t48 = t42;
        t49 = t43;
    }
    return windowEnterStep(0x14, t48, t49);
}
