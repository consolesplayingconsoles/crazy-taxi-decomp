/* Straight-line functions with calls and guards (batch gen_vx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int PutVM_Message(int, int, int, float, float);
int windowEnterStep(int);
int windowOpenStep(int);
int windowCardError(void);

int windowCardError(void)
{
    int t8;
    float u32;
    float u34;
    int t35;

    windowOpenStep(0x14);
    if (((*(int *)0xC2A1208) & 4) != 0) {
        if ((*(int *)0xC2A121C) == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
            t8 = 0x5;
            if ((*(int *)0xC2A1224) == 0) {
                t8 = 0x4;
            }
            NextWindow(t8);
        } else {
            if (((*(int *)0xC2A11CC) & 1) != 0) {
                *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                NextWindow(0x9);
            }
        }
    }
    u32 = *(float *)0xC03E780;
    u34 = *(float *)0xC03E784;
    t35 = 0xD;
    if ((*(int *)0xC2A1224) == 0) {
        t35 = 0x13;
    }
    PutVM_Message(0x20, t35, 0x0, u34, u32);
    PutVM_Message(0x20, 0x3, 0x0, u34, (*(float *)0xC03E78C));
    PutVM_Message(0x20, 0x4, 0x0, u34, (*(float *)0xC03E790));
    PutVM_Message(0x20, 0x7, (((((*(int *)0xC2A11B8) << 2) << 2) << 1) + 0xC09F9F0), (*(float *)0xC03E7A0), (*(float *)0xC03E79C));
    return windowEnterStep(0x14);
}
