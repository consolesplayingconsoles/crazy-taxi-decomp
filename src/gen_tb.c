/* Straight-line functions with calls and guards (batch gen_tb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int menuPutSprites(int, int, int, int);
int putMenuValue(int, int, int, int);
int menuItemCabbie(int a4);

int menuItemCabbie(int a4)
{
    int t1;
    int t13;
    int t14;
    int t16;
    int t17;

    t1 = 0x8;
    if (((unsigned char)(*(signed char *)0xC28A4E8) & 1) == 0) {
        t1 = 0x4;
    }
    if ((int)(*(int *)0xC2A1240) >= (int)t1) {
        *(unsigned int *)0xC2A1240 = 0x0;
    }
    if (a4 != 0) {
        menuChangeValue(0x0, 0xC2A1240, t1);
    }
    *(unsigned int *)0xC179488 = (*(int *)0xC2A1240);
    t13 = *(int *)0xC2A1240;
    t14 = 0x17;
    if (a4 != 0) {
        t14 = 0x8017;
    }
    t16 = putMenuValue(t14, 0xC09E4F8, t1, t13);
    t17 = *(int *)0xC2A1240;
    if ((int)(t17 - 4) >= 0) {
        return menuPutSprites((*(int *)((((t17 - 4) << 2) + 0xC0EF638))), 0xC2A1A84, (int)((*(float *)0xC09E4F8) + (float)(*(int *)0xC2A1ADC)), (int)((*(float *)0xC09E4FC) + 8.0f));
    }
    return t16;
}
