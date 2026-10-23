/* Straight-line functions with calls and guards (batch gen_anl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buInit(int, int, int, int);
int memset(int, int, int);
int saveBufferInit(int);
int BupInit(void);

int BupInit(void)
{
    int t2;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t8;
    int t12;
    int t16;

    memset(0xC291E50, 0x0, 0x260);
    buInit(0xF, 0xFF, 0xC2920B0, 0xC03A9EE);
    { struct mvb15 { char b[15]; }; *(struct mvb15 *)(0xC28A4E8) = *(struct mvb15 *)(0xC09D048); }
    t2 = 0x0;
    for (;;) {
        saveBufferInit(((short)((short)t2 * (short)0x788) + 0xC28A4F8));
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    t5 = 0xC09D058;
    t7 = 0xC28C318;
    for (;;) { t8 = *(int *)t5; t5 = (t5 + 4); if ((unsigned int)((0xC09D058 + 960)) < (unsigned int)t5) break; *(unsigned int *)t7 = t8; t7 = (t7 + 4); }
    t9 = 0xC09D418;
    t11 = 0xC28C6D8;
    for (;;) { t12 = *(int *)t9; t9 = (t9 + 4); if ((unsigned int)((0xC09D418 + 960)) < (unsigned int)t9) break; *(unsigned int *)t11 = t12; t11 = (t11 + 4); }
    t13 = 0xC28A4E8;
    t15 = 0xC28F8A0;
    for (;;) { t16 = *(int *)t13; t13 = (t13 + 4); if ((unsigned int)((0xC28A4E8 + 9648)) < (unsigned int)t13) break; *(unsigned int *)t15 = t16; t15 = (t15 + 4); }
    return memset(0xC28CA98, 0x0, 0x8);
}
