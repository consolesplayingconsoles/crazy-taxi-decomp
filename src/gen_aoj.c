/* Straight-line functions with calls and guards (batch gen_aoj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Sound_Request(int, int);
int Start_Default_Sprite(int, int, int, int, int, float);
int init_GameSystem(void);

int init_GameSystem(void)
{
    int t8;
    int t55;
    int t56;
    int t57;
    int t60;

    *(unsigned int *)0xC1EE7EC = 0x0;
    if ((*(int *)0xC1EE210) != 2) {
        *(unsigned int *)0xC1EE7F0 = 0x16E;
    } else {
        *(unsigned int *)0xC1EE7F0 = 0xBE;
    }
    Sound_Request(0x605A9, 0x0);
    *(unsigned int *)0xC1EE788 = 0x0;
    *(unsigned int *)0xC1EE78C = 0x0;
    *(unsigned int *)0xC1EE790 = 0x0;
    if ((*(int *)0xC1EE234) == 1) {
        *(unsigned int *)0xC1EE794 = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
        t8 = GetMenuMode(0x1);
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 != 3) {
                        *(unsigned int *)0xC1EE794 = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
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
            *(unsigned int *)0xC1EE794 = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
        }
    } else {
        *(unsigned int *)0xC1EE794 = ((*(int *)0xC089F6C) * 0x3C);
    }
    if ((*(int *)0xC1EE210) == 2) {
        *(unsigned int *)0xC1EE794 = ((*(int *)((((*(int *)0xC1EE214) << 2) + 0xC0D0DD0))) * 0x3C);
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
    *(unsigned int *)0xC1EE7D0 = (*(int *)0xC08AEA8);
    *(unsigned int *)0xC1EE7D4 = (*(int *)0xC08AED8);
    *(unsigned int *)0xC1EE7DC = 0x1;
    *(unsigned int *)0xC1EE7E0 = 0x0;
    *(unsigned int *)0xC1EE7E4 = 0x0;
    *(unsigned int *)0xC1EE7E8 = 0x384;
    *(unsigned int *)0xC1EE7F4 = 0x0;
    Start_Default_Sprite(0xC1EE794, 0xC1EE798, 0xC1EE7A8, 0xC1EE7AC, 0xC1791EC, 0.0f);
    t55 = *(int *)0xC1EE210;
    t56 = *(int *)0xC1EE214;
    t57 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    *(unsigned int *)0xC2A1B28 = (*(int *)(((((t57 << 1) + t57) << 2) + (*(int *)0xC2A6690))));
    t60 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    *(unsigned int *)0xC2A1B2C = (*(int *)(((*(int *)((((((t60 << 1) + t60) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0)));
    return 0xC2A1B28;
}
