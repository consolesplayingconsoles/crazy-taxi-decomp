/* Straight-line functions with calls and guards (batch gen_xh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Sound_Request(int, int);
int Start_Default_Sprite(int, int, int, int);
int init_GameSystem(void);

int init_GameSystem(void)
{
    int t0;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t28;
    int t29;
    int t36;
    int t44;
    int t45;
    int t46;
    int t52;
    int t53;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;

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
    t5 = *(int *)0xC1EE234;
    if (t5 == 1) {
        t6 = *(signed char *)0xC28A4E9;
        t7 = *(int *)((0xC089F60 + ((unsigned char)t6 << 2)));
        *(unsigned int *)0xC1EE794 = (t7 * 0x3C);
        t8 = GetMenuMode(0x1);
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 != 3) {
                        t9 = *(signed char *)0xC28A4E9;
                        t10 = *(int *)((0xC089F60 + ((unsigned char)t9 << 2)));
                        *(unsigned int *)0xC1EE794 = (t10 * 0x3C);
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
            t28 = *(signed char *)0xC28A4E9;
            t29 = *(int *)((0xC089F60 + ((unsigned char)t28 << 2)));
            *(unsigned int *)0xC1EE794 = (t29 * 0x3C);
        }
    } else {
        t36 = *(int *)0xC089F6C;
        *(unsigned int *)0xC1EE794 = (t36 * 0x3C);
    }
    t44 = *(int *)0xC1EE210;
    if (t44 == 2) {
        t45 = *(int *)0xC1EE214;
        t46 = *(int *)(((t45 << 2) + 0xC0D0DD0));
        *(unsigned int *)0xC1EE794 = (t46 * 0x3C);
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
    t52 = *(int *)0xC08AEA8;
    *(unsigned int *)0xC1EE7D0 = t52;
    t53 = *(int *)0xC08AED8;
    *(unsigned int *)0xC1EE7D4 = t53;
    *(unsigned int *)0xC1EE7DC = 0x1;
    *(unsigned int *)0xC1EE7E0 = 0x0;
    *(unsigned int *)0xC1EE7E4 = 0x0;
    *(unsigned int *)0xC1EE7E8 = 0x384;
    *(unsigned int *)0xC1EE7F4 = 0x0;
    Start_Default_Sprite(0xC1EE794, 0xC1EE798, 0xC1EE7A8, 0xC1EE7AC);
    t55 = *(int *)0xC1EE210;
    t56 = *(int *)0xC1EE214;
    t57 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    t58 = *(int *)0xC2A6690;
    t59 = *(int *)(((((t57 << 1) + t57) << 2) + t58));
    *(unsigned int *)0xC2A1B28 = t59;
    t60 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    t61 = *(int *)0xC2A6690;
    t62 = *(int *)((((((t60 << 1) + t60) << 2) + t61) + 0x4));
    t63 = *(int *)((t62 + 0x0));
    *(unsigned int *)0xC2A1B2C = t63;
    return 0xC2A1B28;
}
