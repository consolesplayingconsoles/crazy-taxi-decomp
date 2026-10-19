/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c053100(int, int, int, int, int, float);
int GetMenuMode(int);
int Sound_Request(int, int);

void init_GameSystem(void)
{
    int t0;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t15;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;

    *(unsigned int *)0xC1EE7EC = 0x0;
    t0 = *(int *)0xC1EE210;
    if (t0 != 2) {
        *(unsigned int *)0xC1EE7F0 = 0x16E;
    } else {
        *(unsigned int *)0xC1EE7F0 = 0xBE;
    }
    Sound_Request(0x605A9, 0x0);
    *(unsigned int *)0xC1EE788 = 0x0;
    *(unsigned int *)0xC1EE78C = 0x0;
    *(unsigned int *)0xC1EE790 = 0x0;
    t3 = *(int *)0xC1EE234;
    if (t3 == 1) {
        t4 = *(signed char *)0xC28A4E9;
        t5 = *(int *)((0xC089F60 + ((unsigned char)t4 << 2)));
        *(unsigned int *)0xC1EE794 = (t5 * 0x3C);
        t6 = GetMenuMode(0x1);
        if (t6 != 0) {
            if (t6 != 1) {
                if (t6 != 2) {
                    if (t6 != 3) {
                        t7 = *(signed char *)0xC28A4E9;
                        t8 = *(int *)((0xC089F60 + ((unsigned char)t7 << 2)));
                        *(unsigned int *)0xC1EE794 = (t8 * 0x3C);
                    } else {
                        *(unsigned int *)0xC1EE794 = 0x8CA0;
                    }
                } else {
                    *(unsigned int *)0xC1EE794 = 0x4650;
                }
            } else {
                *(unsigned int *)0xC1EE794 = 0x2A30;
            }
        } else {
            t12 = *(signed char *)0xC28A4E9;
            t13 = *(int *)((0xC089F60 + ((unsigned char)t12 << 2)));
            *(unsigned int *)0xC1EE794 = (t13 * 0x3C);
        }
    } else {
        t15 = *(int *)0xC089F6C;
        *(unsigned int *)0xC1EE794 = (t15 * 0x3C);
    }
    t17 = *(int *)0xC1EE210;
    if (t17 == 2) {
        t18 = *(int *)0xC1EE214;
        t19 = *(int *)(((t18 << 2) + 0xC0D0DD0));
        *(unsigned int *)0xC1EE794 = (t19 * 0x3C);
    }
    *(unsigned int *)0xC1EE798 = 0x0;
    *(unsigned int *)0xC1EE79C = 0x0;
    *(unsigned int *)0xC1EE7A0 = 0x0;
    *(float *)0xC1EE7A4 = 0.0f;
    *(unsigned int *)0xC1EE7AC = 0x0;
    *(unsigned int *)0xC1EE7A8 = 0x0;
    *(unsigned int *)0xC1EE7B4 = 0x0;
    *(unsigned int *)0xC1EE7B0 = 0x0;
    *(unsigned int *)0xC1EE7B8 = 0x0;
    *(float *)0xC1EE7BC = 0.0f;
    *(float *)0xC1EE7C0 = 0.0f;
    *(unsigned int *)0xC1EE7C4 = 0x0;
    *(unsigned int *)0xC1EE7C8 = 0x1;
    *(unsigned int *)0xC1EE7CC = 0x0;
    t21 = *(int *)0xC08AEA8;
    *(unsigned int *)0xC1EE7D0 = t21;
    t22 = *(int *)0xC08AED8;
    *(unsigned int *)0xC1EE7D4 = t22;
    *(unsigned int *)0xC1EE7DC = 0x1;
    *(unsigned int *)0xC1EE7E0 = 0x0;
    *(unsigned int *)0xC1EE7E4 = 0x0;
    *(unsigned int *)0xC1EE7E8 = 0x384;
    *(unsigned int *)0xC1EE7F4 = 0x0;
    FUN_0c053100(0xC1EE794, 0xC1EE798, 0xC1EE7A8, 0xC1EE7AC, 0xC1791EC, 0.0f);
    t24 = *(int *)0xC1EE210;
    t25 = *(int *)0xC1EE214;
    t26 = *(int *)(((((t24 + t25) << 2) + 0xC0C3D04) + 0x0));
    t27 = *(int *)0xC2A6690;
    t28 = *(int *)(((((t26 << 1) + t26) << 2) + t27));
    *(unsigned int *)0xC2A1B28 = t28;
    t29 = *(int *)(((((t24 + t25) << 2) + 0xC0C3D04) + 0x0));
    t30 = *(int *)0xC2A6690;
    t31 = *(int *)((((((t29 << 1) + t29) << 2) + t30) + 0x4));
    t32 = *(int *)((t31 + 0x0));
    *(unsigned int *)0xC2A1B2C = t32;
}
