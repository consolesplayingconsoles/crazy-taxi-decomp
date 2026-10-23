/* Straight-line functions with calls and guards (batch gen_jf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int menuPutSprites();
void putRecordFrame(int a4, int a5, float f4, float f5, float f6);

void putRecordFrame(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    float u28;
    float u31;
    int t32;
    int t33;
    int t35;
    float u25;
    float u26;
    float u19;
    float u20;
    float u13;
    float u14;
    float u7;
    float u8;

    if (a4 == 0) {
        t0 = ((int (*)(int, int, int, int, float, float, float))(menuPutSprites))(0xC0A1DA8, 0xC2A1A84, (int)f4, (int)f5, f4, f5, f6);
    } else {
        if (a4 == 1) {
            t1 = ((int (*)(int, int, int, int, float, float, float))(menuPutSprites))(0xC0A1DF8, 0xC2A1A84, (int)f4, (int)f5, f4, f5, f6);
        } else {
            if (a4 == 2) {
                t2 = ((int (*)(int, int, int, int, float, float, float))(menuPutSprites))(0xC0A1E48, 0xC2A1A84, (int)f4, (int)f5, f4, f5, f6);
            } else {
                if (a4 == 3) {
                    t3 = ((int (*)(int, int, int, int, float, float, float))(menuPutSprites))(0xC0A1E98, 0xC2A1A84, (int)f4, (int)f5, f4, f5, f6);
                } else {
                    u7 = f4;
                    u8 = f5;
                }
                u13 = u7;
                u14 = u8;
            }
            u19 = u13;
            u20 = u14;
        }
        u25 = u19;
        u26 = u20;
    }
    u28 = *(float *)0xC03CF08;
    *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) + u28);
    *(float *)0xC2A1AB0 = (*(float *)0xC03CF10);
    u31 = *(float *)0xC03CF20;
    if ((int)a5 > 0) {
        t32 = 0x0;
        for (;;) {
            t33 = 0xC0A1EF8;
            if ((t32 & 0x1) != 0) {
                t33 = 0xC0A1EE8;
            }
            t35 = ((int (*)(int, int, int, int, float, float))(menuPutSprites))(t33, 0xC2A1A84, (int)f4, (int)(((float)(((t32 << 2) + t32) << 2) + f5) + u31), u25, u26);
            t32 = (t32 + 0x1);
            if ((int)t32 >= (int)a5) {
                break;
            }
        }
    }
    *(float *)0xC2A1AB0 = 1.0f;
    *(float *)0xC2A1AD4 = ((*(float *)0xC2A1AD4) - u28);
}
