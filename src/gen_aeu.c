/* Straight-line functions with calls and guards (batch gen_aeu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckBoxFlag(int);
int PutRecords(int, int, int, int, int, int, float, float);
int menuChangeValue(int, int, int);
int putMenuValue(int, int, int, int);
void menuItemRecords(int a4, int a5);

void menuItemRecords(int a4, int a5)
{
    int t1;
    int t8;
    int t9;
    int t10;
    int t15;
    int t17;
    int t20;
    int t21;
    int t13;

    if (a4 == 0) {
    } else {
        t1 = *(int *)0xC2A11E0;
        if (a5 != 2) {
            menuChangeValue(0x0, 0xC2A1244, 0x4);
            putMenuValue(0x8013, 0xC09F444, 0x4, (*(int *)0xC2A1244));
            PutRecords(0x24, (t1 - 1), ((*(int *)0xC2A1244) + (a5 << 2)), 0x0, 0x9, 0x2, (float)((*(int *)0xC2A1ADC) + 0x78), 128.0f);
        } else {
            if ((int)(t1 - 1) < 0) {
                t8 = 0xFFFF;
                t9 = 0x0;
                for (;;) {
                    t10 = CheckBoxFlag(t9);
                    t9 = (t9 + 0x1);
                    t8 = (t8 & t10);
                    if ((int)t9 >= (int)0x4) {
                        break;
                    }
                }
                t13 = t8;
            } else {
                t13 = (CheckBoxFlag((t1 - 1)));
            }
            t15 = 0x8;
            if ((0x3000 & t13) == 0x3000) {
                t15 = 0x7;
            }
            t17 = t15;
            if ((t13 & 0xC000) == 0xC000) {
                t17 = (t15 - 1);
            }
            menuChangeValue(0x0, 0xC2A1244, t17);
            t20 = *(int *)0xC2A1244;
            t21 = t20;
            if (((0x3000 & t13) == 0x3000) && (((t13 & 0xC000) != 0xC000) && (t20 == (t17 - 1)))) {
                t21 = (t20 + 0x1);
            }
            if (((((int)(t21 << 1) >= 0) ? (0x1 << ((t21 << 1) & 31)) : ((-(int)(t21 << 1) & 31) ? ((int)0x1 >> (-(int)(t21 << 1) & 31)) : ((int)0x1 >> 31))) & t13) == 0) {
                putMenuValue(0x8013, 0xC09F4F4, t17, t21);
                PutRecords(0x24, (t1 - 1), ((a5 << 2) + (t21 << 1)), 0x0, 0x4, 0x2, (float)((*(int *)0xC2A1ADC) + 0x78), 128.0f);
            }
            if (((((int)((t21 << 1) + 0x1) >= 0) ? (0x1 << (((t21 << 1) + 0x1) & 31)) : ((-(int)((t21 << 1) + 0x1) & 31) ? ((int)0x1 >> (-(int)((t21 << 1) + 0x1) & 31)) : ((int)0x1 >> 31))) & t13) == 0) {
                putMenuValue(0x8013, 0xC09F654, t17, t21);
                PutRecords(0x24, (t1 - 1), (((a5 << 2) + (t21 << 1)) + 0x1), 0x0, 0x4, 0x2, (float)((*(int *)0xC2A1ADC) + 0x78), 268.0f);
            }
        }
    }
}
