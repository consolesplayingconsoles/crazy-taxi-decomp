/* Straight-line functions with calls and guards (batch gen_qn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuPutSprites(int, int, int, int, float, float, float);
int menuPutFrame(float f4, float f5, float f6);

int menuPutFrame(float f4, float f5, float f6)
{
    float u1;
    int t3;

    u1 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = 99.899994f;
    t3 = menuPutSprites(0xC0A06E8, 0xC2A1A84, (*(int *)0xC2A1AD8), 0x0, f4, f5, f6);
    *(float *)0xC2A1AD4 = u1;
    return t3;
}
