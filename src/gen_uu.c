/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int hudHidePickUpNag(void);
int GS_GuestIn(int a4);

int GS_GuestIn(int a4)
{
    float u2;
    int t13;
    int t14;
    float u16;
    float u17;
    float u18;
    int t20;
    int t34;
    int t35;
    int t43;
    int t10;
    int t32;

    *(unsigned int *)0xC1EE78C = 0x1;
    u2 = *(float *)(((((*(int *)(((0x19C + a4) + 0x0))) << 2) + ((*(int *)((a4 + 0x14))) + 0x1C)) + 0x0));
    *(float *)0xC1EE7A4 = u2;
    if ((*(int *)0xC1EE234) == 1) {
        t10 = (*(int *)((0xC08AF68 + ((unsigned char)(*(signed char *)0xC28A4EA) << 2))));
    } else {
        t10 = (*(int *)0xC08AF74);
    }
    t13 = (int)((int)(*(int *)0xC1EE790) / (int)0xE10);
    t14 = 0x28;
    if ((int)t13 < (int)0xA) {
        t14 = (t13 << 2);
    }
    u16 = *(float *)((0xC08AF38 + t14));
    u17 = ((u2 * 0.109999999f) + ((float)t10 + 240.0f));
    u18 = (u17 * u16);
    if (300.0f > (u17 * u16)) {
        u18 = 300.0f;
    }
    t20 = *(int *)0xC1EE7C4;
    if ((int)t20 < (int)0xA) {
        *(unsigned int *)0xC1EE7D0 = (*(int *)((0xC08AEA8 + (t20 << 2))));
        *(unsigned int *)0xC1EE7D4 = (*(int *)((0xC08AED8 + ((*(int *)0xC1EE7C4) << 2))));
        t32 = (*(int *)((((*(int *)0xC1EE7C4) << 2) + 0xC08AF08)));
    } else {
        *(unsigned int *)0xC1EE7D0 = (*(int *)0xC08AED0);
        *(unsigned int *)0xC1EE7D4 = (*(int *)0xC08AF00);
        t32 = (*(int *)0xC08AF30);
    }
    *(unsigned int *)0xC1EE7D8 = t32;
    t34 = *(int *)0xC1EE794;
    t35 = *(int *)0xC1EE798;
    if ((int)(*(int *)0xC1EE7D0) > (int)(t34 + t35)) {
        *(unsigned int *)0xC1EE7D0 = (t34 + t35);
    }
    *(unsigned int *)0xC1EE7CC = ((int)u18 + (*(int *)0xC1EE7D0));
    *(unsigned int *)0xC1EE798 = (int)((float)(*(int *)0xC1EE798) + u18);
    if ((*(int *)0xC1EE210) != 2) {
        if ((*(int *)0xC1EE210) != 2) {
            t43 = GetMenuMode(0x1);
            if (t43 != 0) {
                if ((*(int *)0xC1EE210) == 2) {
                    *(unsigned int *)0xC1EE7CC = (*(int *)0xC1EE794);
                }
                *(unsigned int *)0xC1EE798 = 0x0;
            }
        }
    } else {
        if ((*(int *)0xC1EE210) == 2) {
            *(unsigned int *)0xC1EE7CC = (*(int *)0xC1EE794);
        }
        *(unsigned int *)0xC1EE798 = 0x0;
    }
    *(unsigned int *)0xC1EE7B4 = ((*(int *)0xC1EE7B4) + (int)((*(float *)0xC1EE7A4) * 2.5f));
    if ((*(int *)0xC1EE210) != 2) {
        hudHidePickUpNag();
    }
    *(unsigned int *)0xC1EE7E4 = ((*(int *)0xC1EE7E4) + 0x1);
    return 0x5C;
}
