/* Straight-line functions with calls and guards (batch gen_pj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int windowOpenStep(int);
int windowEnterStep(int);
int PutVM_Message(int, int, int, float, float);
int windowCardDriveError(void);

int windowCardDriveError(void)
{
    float u1;
    int t2;
    float u3;
    int t5;
    float u6;
    float u8;
    float u10;
    float u12;
    float u14;
    int t16;
    float u17;
    float u18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t27;
    int t28;

    windowOpenStep(0x14);
    u1 = *(float *)0xC03E904;
    t2 = *(int *)0xC2A11B8;
    u3 = *(float *)0xC03E908;
    PutVM_Message(0x20, 0x9, ((((t2 << 2) << 2) << 1) + 0xC09F9F0), u1, u3);
    t5 = *(int *)0xC2A11B8;
    u6 = *(float *)0xC03E910;
    PutVM_Message(0x20, 0xA, ((((t5 << 2) << 2) << 1) + 0xC09F9F0), u1, u6);
    u8 = *(float *)0xC03E914;
    PutVM_Message(0x20, 0x1, 0x0, u1, u8);
    u10 = *(float *)0xC03E91C;
    PutVM_Message(0x20, 0x2, 0xC2A1238, u1, u10);
    u12 = *(float *)0xC03E920;
    PutVM_Message(0x20, 0x3, 0x0, u1, u12);
    u14 = *(float *)0xC03E924;
    PutVM_Message(0x20, 0x4, 0x0, u1, u14);
    t16 = *(int *)0xC2A11B8;
    u17 = *(float *)0xC03E928;
    u18 = *(float *)0xC03E92C;
    PutVM_Message(0x20, 0x7, ((((t16 << 2) << 2) << 1) + 0xC09F9F0), u18, u17);
    t20 = *(int *)0xC2A1208;
    if ((t20 & 4) != 0) {
        t21 = *(int *)0xC2A121C;
        if (t21 == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            t22 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = (t22 | 0x9);
            t23 = *(int *)0xC2A1224;
            t24 = 0x5;
            if (t23 == 0) {
                t24 = 0x4;
            }
            NextWindow(t24);
        } else {
            t27 = *(int *)0xC2A11CC;
            if ((t27 & 1) != 0) {
                t28 = *(int *)0xC2A1208;
                *(unsigned int *)0xC2A1208 = (t28 | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                NextWindow(0x9);
            }
        }
    }
    return windowEnterStep(0x14);
}
