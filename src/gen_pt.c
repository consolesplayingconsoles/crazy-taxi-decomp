/* Straight-line functions with calls and guards (batch gen_pt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b674(int);
int FUN_0c03bf42(int);
int FUN_0c03bf76(int);
int PutVM_Message(int, int, int, float, float);
int FUN_0c03e5dc(void);

int FUN_0c03e5dc(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t9;
    float u29;
    int t30;
    float u31;
    int t32;
    float u35;
    float u37;
    float u39;
    int t40;
    float u41;

    FUN_0c03bf42(0x14);
    t1 = *(int *)0xC2A1208;
    if ((t1 & 4) != 0) {
        t2 = *(int *)0xC2A121C;
        if (t2 == 1) {
            *(unsigned int *)0xC2A121C = 0x2;
            t3 = *(int *)0xC2A1208;
            *(unsigned int *)0xC2A1208 = (t3 | 0x9);
            t4 = *(int *)0xC2A1224;
            t5 = 0x5;
            if (t4 == 0) {
                t5 = 0x4;
            }
            FUN_0c03b674(t5);
        } else {
            t8 = *(int *)0xC2A11CC;
            if ((t8 & 1) != 0) {
                t9 = *(int *)0xC2A1208;
                *(unsigned int *)0xC2A1208 = (t9 | 0x9);
                *(unsigned int *)0xC2A121C = 0x0;
                FUN_0c03b674(0x9);
            }
        }
    }
    u29 = *(float *)0xC03E780;
    t30 = *(int *)0xC2A1224;
    u31 = *(float *)0xC03E784;
    t32 = 0xD;
    if (t30 == 0) {
        t32 = 0x13;
    }
    PutVM_Message(0x20, t32, 0x0, u31, u29);
    u35 = *(float *)0xC03E78C;
    PutVM_Message(0x20, 0x3, 0x0, u31, u35);
    u37 = *(float *)0xC03E790;
    PutVM_Message(0x20, 0x4, 0x0, u31, u37);
    u39 = *(float *)0xC03E79C;
    t40 = *(int *)0xC2A11B8;
    u41 = *(float *)0xC03E7A0;
    PutVM_Message(0x20, 0x7, ((((t40 << 2) << 2) << 1) + 0xC09F9F0), u41, u39);
    return FUN_0c03bf76(0x14);
}
