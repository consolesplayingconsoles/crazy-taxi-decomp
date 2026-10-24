/* Straight-line functions with calls and guards (batch gen_adr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int menuPutSprites(int, int, int, int);
int putString(int, int, float, float, float);
int menuItemDifficulty(int a4, int a5);

int menuItemDifficulty(int a4, int a5)
{
    int t0;
    int t12;
    int t13;
    float u16;
    float u17;
    float u35;
    int t46;
    int t40;
    int t42;
    int t44;
    int t3;
    int t4;
    float u6;
    float u7;
    int stk[12];

    t0 = *(int *)0xC2A1ADC;
    t12 = 0x8;
    t13 = 0xC28A4EA;
    u16 = 154.0f;
    u17 = (float)(t0 + 0x1DE);
    if (a5 == 1) {
    } else {
        if (a5 == 2) {
            t3 = 0x8;
            t4 = 0xC28A4EB;
            u6 = 188.0f;
            u7 = (float)(0x1DE - t0);
        }
        t12 = t3;
        t13 = t4;
        u16 = u6;
        u17 = u7;
    }
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)((t13 + 0x0)));
    if (a4 != 0) {
        if ((menuChangeValue(0x0, ((int)stk + 4), t12)) == 1) {
            *(unsigned char *)((t13 + 0x0)) = (*(int *)(((int)stk + 4)));
        }
    }
    u35 = (-7.0f);
    putString(0x28, 0xC0A2048, (u17 + (-82.0f)), (u16 + u35), 1.0f);
    t46 = (putString(0x20, 0xC0A2050, (u17 + 82.0f), (u16 + u35), 1.0f));
    if ((int)t12 > 0) {
        t40 = 0x0;
        for (;;) {
            t42 = 0xC0A0868;
            if ((int)t40 <= (int)(*(int *)(((int)stk + 4)))) {
                t42 = 0xC0A0858;
            }
            t44 = menuPutSprites(t42, 0xC2A1A84, (int)((float)(((((t40 - 3) << 2) + (t40 - 3)) << 2) - 10) + u17), (int)u16);
            t40 = (t40 + 0x1);
            if ((int)t40 >= (int)t12) {
                break;
            }
        }
        t46 = t44;
    }
    return t46;
}
