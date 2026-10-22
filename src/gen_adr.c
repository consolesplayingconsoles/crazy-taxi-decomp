/* Straight-line functions with calls and guards (batch gen_adr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
int menuChangeValue(int, int, int);
int menuPutSprites(int, int, int, int);
int putMenuValue(int, int, int, int);
int menuItemName(int a4);

int menuItemName(int a4)
{
    int t0;
    int t2;
    int t16;
    int t20;
    int t37;
    int t41;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t25;
    int t26;
    int t27;
    int t34;
    int t46;
    int t47;
    int t48;

    t0 = *(signed char *)0xC28A4F6;
    if (a4 != 0) {
        t2 = (unsigned char)t0;
        if ((int)(unsigned char)t0 < (int)0x4) {
            t2 = ((unsigned char)t0 + 0x1);
        }
        if ((menuChangeValue(0x0, 0xC2A11C4, t2)) == 1) {
            *(unsigned int *)0xC2A1230 = 0x0;
        }
        if ((((*(int *)0xC2A11EC) & 4) != 0) && ((t9 = *(int *)0xC2A11CC, (t9 & 2) != 0) && ((t10 = *(int *)0xC2A1214, t10 == 0) && (t11 = *(signed char *)0xC28A4F6, t12 = *(int *)0xC2A11C4, (int)t12 >= (int)(unsigned char)t11)))) {
            return ((int (*)(void))(0xC040A94))();
        }
        t16 = 0x17;
        if ((a4 != 0) && (t13 = *(int *)0xC2A1214, t13 == 0)) {
            t16 = 0x8017;
        }
        putMenuValue(t16, 0xC09E448, t2, (*(int *)0xC2A11C4));
        t20 = *(int *)0xC2A1ADC;
        if ((int)(*(int *)0xC2A11C4) >= (int)(unsigned char)(*(signed char *)0xC28A4F6)) {
            if ((a4 != 0) && ((t25 = *(signed char *)0xC28A4F6, t25 == 0) && ((t26 = *(int *)0xC1EE330, (t26 & 16) == 0) && (t27 = *(int *)0xC2A1214, t27 != 1)))) {
                return t27;
            }
            return menuPutSprites(0xC0A08E8, 0xC2A1A84, (t20 + 0xE8), 0x88);
        }
        return PutStringFixPfont(0x17, ((short)((short)(*(int *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), (float)(t20 + 0xE8), (128.0f), (18.0f), 1.0f);
    }
    if ((int)(*(int *)0xC2A11C4) >= (int)(unsigned char)t0) {
        *(unsigned int *)0xC2A11C4 = 0x0;
    }
    t37 = 0x17;
    if ((a4 != 0) && (t34 = *(int *)0xC2A1214, t34 == 0)) {
        t37 = 0x8017;
    }
    putMenuValue(t37, 0xC09E448, (unsigned char)t0, (*(int *)0xC2A11C4));
    t41 = *(int *)0xC2A1ADC;
    if ((int)(*(int *)0xC2A11C4) >= (int)(unsigned char)(*(signed char *)0xC28A4F6)) {
        if ((a4 != 0) && ((t46 = *(signed char *)0xC28A4F6, t46 == 0) && ((t47 = *(int *)0xC1EE330, (t47 & 16) == 0) && (t48 = *(int *)0xC2A1214, t48 != 1)))) {
            return t48;
        }
        return menuPutSprites(0xC0A08E8, 0xC2A1A84, (t41 + 0xE8), 0x88);
    }
    return PutStringFixPfont(0x17, ((short)((short)(*(int *)0xC2A11C4) * (short)0x788) + 0xC28A4F8), (float)(t41 + 0xE8), (128.0f), (18.0f), 1.0f);
}
