/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int nlSprPut(int, int);
int Result_Face_Put(void);
int Result_Name_Put(void);
int kmiInitializeFog(void);



int kmiInitializeFog(void)
{
    int t3;
    int t4;
    int t5;
    int t6;

    kmiWriteRegister(0xB8, 0xFF07);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    t3 = 0x200;
    t4 = 0xFE;
    t5 = 0xFF;
    do {
        t6 = kmiWriteRegister(t3, (unsigned short)(((unsigned char)t5 << 8) | (unsigned char)t4));
        t5 = (t5 - 1);
        t3 = (t3 + 0x4);
        t4 = (t4 - 1);
    } while ((int)t5 > (int)0x7F);
    return t6;
}

