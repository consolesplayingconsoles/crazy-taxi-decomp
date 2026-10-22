/* Straight-line functions with calls and guards (batch gen_vy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetZ(float);
int SetScreen(int a4);

int SetScreen(int a4)
{
    int t7;
    int t5;
    int t3;

    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 != 3) {
                    if (a4 != 4) {
                        if (a4 != 5) {
                            if (a4 != 6) {
                            } else {
                                *(float *)0xC2A1AE4 = 0.75f;
                            }
                        } else {
                            *(float *)0xC2A1AE4 = 1.0f;
                        }
                    } else {
                        *(float *)0xC2A1AE4 = 0.0f;
                    }
                    t3 = a4;
                } else {
                    *(float *)0xC2A1A10 = 0.75f;
                    *(float *)0xC2A1AE4 = 0.75f;
                    t3 = 0x2C;
                }
                t5 = t3;
            } else {
                *(float *)0xC2A1A10 = 1.0f;
                *(float *)0xC2A1AE4 = 1.0f;
                t5 = 0x2C;
            }
            t7 = t5;
        } else {
            *(float *)0xC2A1A10 = 0.0f;
            *(float *)0xC2A1AE4 = 0.0f;
            t7 = 0x2C;
        }
        return t7;
    }
    *(unsigned int *)0xC2A19E4 = 0x62;
    *(float *)0xC2A19E8 = 0.0f;
    *(float *)0xC2A19EC = 0.0f;
    *(float *)0xC2A19F0 = 0.399999976f;
    *(float *)0xC2A19F4 = 40.0f;
    *(float *)0xC2A19F8 = 30.0f;
    *(float *)0xC2A19FC = 0.0f;
    *(float *)0xC2A1A00 = 0.0f;
    *(float *)0xC2A1A04 = 1.0f;
    *(float *)0xC2A1A08 = 1.0f;
    *(unsigned int *)0xC2A1A0C = 0x0;
    *(unsigned int *)0xC2A1A18 = 0x3005;
    *(unsigned int *)0xC2A1A14 = 0x2;
    *(float *)0xC2A1A10 = 0.0f;
    *(float *)0xC2A1AE4 = 0.0f;
    return pfSetZ(0.099999994f);
}
