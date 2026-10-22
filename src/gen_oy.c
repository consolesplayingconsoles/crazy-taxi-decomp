/* Straight-line functions with calls and guards (batch gen_oy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
int PutRecords(int, int, int, int, int, int, float, float);
int CheckBoxFlag(int);
void menuItemRecords(int a4, int a5);

void menuItemRecords(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t7;
    int t8;
    int t9;
    int t10;
    int t14;
    int t16;
    int t19;
    int t25;
    int t22;
    int t20;
    int t30;
    int t37;
    int t12;

    if (a4 == 0) {
    } else {
        t0 = *(int *)0xC2A11E0;
        if (a5 != 2) {
            menuChangeValue(0x0, 0xC2A1244, 0x4);
            t2 = *(int *)0xC2A1244;
            putMenuValue(0x8013, 0xC09F444, 0x4, t2);
            t4 = *(int *)0xC2A1ADC;
            t5 = *(int *)0xC2A1244;
            PutRecords(0x24, (t0 - 1), (t5 + (a5 << 2)), 0x0, 0x9, 0x2, (float)(t4 + 0x78), 128.0f);
        } else {
            if ((int)(t0 - 1) < 0) {
                t7 = 0xFFFF;
                t8 = 0x0;
                for (;;) {
                    t9 = CheckBoxFlag(t8);
                    t8 = (t8 + 0x1);
                    t7 = (t7 & t9);
                    if ((int)t8 >= (int)0x4) {
                        break;
                    }
                }
                t12 = t7;
            } else {
                t10 = CheckBoxFlag((t0 - 1));
                t12 = t10;
            }
            t14 = 0x8;
            if ((0x3000 & t12) == 0x3000) {
                t14 = 0x7;
            }
            t16 = t14;
            if ((t12 & 0xC000) == 0xC000) {
                t16 = (t14 - 1);
            }
            menuChangeValue(0x0, 0xC2A1244, t16);
            t19 = *(int *)0xC2A1244;
            t25 = t19;
            if ((0x3000 & t12) == 0x3000) {
                t22 = t19;
                if ((t12 & 0xC000) != 0xC000) {
                    t20 = t19;
                    if (t19 == (t16 - 1)) {
                        t20 = (t19 + 0x1);
                    }
                    t22 = t20;
                }
                t25 = t22;
            }
            if (((((int)(t25 << 1) >= 0) ? (0x1 << ((t25 << 1) & 31)) : ((-(int)(t25 << 1) & 31) ? ((int)0x1 >> (-(int)(t25 << 1) & 31)) : ((int)0x1 >> 31))) & t12) == 0) {
                putMenuValue(0x8013, 0xC09F4F4, t16, t25);
                t30 = *(int *)0xC2A1ADC;
                PutRecords(0x24, (t0 - 1), ((a5 << 2) + (t25 << 1)), 0x0, 0x4, 0x2, (float)(t30 + 0x78), 128.0f);
            }
            if (((((int)((t25 << 1) + 0x1) >= 0) ? (0x1 << (((t25 << 1) + 0x1) & 31)) : ((-(int)((t25 << 1) + 0x1) & 31) ? ((int)0x1 >> (-(int)((t25 << 1) + 0x1) & 31)) : ((int)0x1 >> 31))) & t12) == 0) {
                putMenuValue(0x8013, 0xC09F654, t16, t25);
                t37 = *(int *)0xC2A1ADC;
                PutRecords(0x24, (t0 - 1), (((a5 << 2) + (t25 << 1)) + 0x1), 0x0, 0x4, 0x2, (float)(t37 + 0x78), 268.0f);
            }
        }
    }
}
