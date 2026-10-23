/* Straight-line functions with calls and guards (batch gen_ahr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuPutSprites(int, int, int, int, float, float, float);
int menuPutBackground(float f4, float f5, float f6);

int menuPutBackground(float f4, float f5, float f6)
{
    int t0;
    float u1;
    int t5;
    int t4;

    t0 = *(int *)0xC1EE234;
    u1 = *(float *)0xC2A1AD4;
    t5 = t0;
    if (t0 != 1) {
        *(float *)0xC2A1AD4 = (*(float *)0xC03C1DC);
        *(float *)0xC2A1AB0 = (*(float *)0xC03C1E0);
        t4 = menuPutSprites(0xC0A0678, 0xC2A1A84, 0x170, 0xD0, f4, f5, f6);
        *(float *)0xC2A1AB0 = 1.0f;
        *(float *)0xC2A1AD4 = u1;
        t5 = t4;
    }
    return t5;
}
