/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int nlSprPut(int, int);
int Result_Face_Put(void);
int Result_Name_Put(void);
int kmiInitializeFog(void);

int Result_Face_Put(void)
{
    int t0;
    int t1;
    int t2;
    float u3;
    int t4;
    float u5;
    float u6;

    t0 = *(int *)0xC2A96F4;
    if ((int)t0 > (int)0x2A) {
        t1 = *(int *)0xC2A96F0;
        t2 = *(int *)(((t1 << 2) + 0xC0D0D48));
        *(unsigned int *)0xC2A96F8 = t2;
        *(unsigned int *)0xC2A972C = 0xA;
        u3 = *(float *)0xC059A6C;
        *(float *)0xC2A96FC = u3;
        t4 = *(int *)0xC2A9748;
        *(float *)0xC2A9700 = (float)(t4 + 0xBE);
        u5 = *(float *)0xC2A9758;
        *(float *)0xC2A9708 = (u5 + 1.0f);
        u6 = *(float *)0xC2A9758;
        *(float *)0xC2A970C = (u6 + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        return nlSprPut(0xC2A96F8, 0xC2A9758);
    }
    return 0xC2A96F4;
}


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

