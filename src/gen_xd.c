/* Straight-line functions with calls and guards (batch gen_xd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int hudHidePickUpNag(void);
int GS_GuestIn(int a4);

int GS_GuestIn(int a4)
{
    int t0;
    int t1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    float u16;
    float u17;
    float u18;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t42;
    int t43;
    int t44;
    int t45;
    int t66;
    int t67;
    int t84;
    float u85;
    float u86;
    int t87;
    int t102;
    int t10;
    int t32;

    *(unsigned int *)0xC1EE78C = 0x1;
    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)(((0x19C + a4) + 0x0));
    u2 = *(float *)((((t1 << 2) + (t0 + 0x1C)) + 0x0));
    *(float *)0xC1EE7A4 = u2;
    t3 = *(int *)0xC1EE234;
    if (t3 == 1) {
        t4 = *(signed char *)0xC28A4EA;
        t5 = *(int *)((0xC08AF68 + ((unsigned char)t4 << 2)));
        t10 = t5;
    } else {
        t6 = *(int *)0xC08AF74;
        t10 = t6;
    }
    t12 = *(int *)0xC1EE790;
    t13 = (int)((int)t12 / (int)0xE10);
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
        t21 = *(int *)((0xC08AEA8 + (t20 << 2)));
        *(unsigned int *)0xC1EE7D0 = t21;
        t22 = *(int *)0xC1EE7C4;
        t23 = *(int *)((0xC08AED8 + (t22 << 2)));
        *(unsigned int *)0xC1EE7D4 = t23;
        t24 = *(int *)0xC1EE7C4;
        t25 = *(int *)(((t24 << 2) + 0xC08AF08));
        t32 = t25;
    } else {
        t26 = *(int *)0xC08AED0;
        *(unsigned int *)0xC1EE7D0 = t26;
        t27 = *(int *)0xC08AF00;
        *(unsigned int *)0xC1EE7D4 = t27;
        t28 = *(int *)0xC08AF30;
        t32 = t28;
    }
    *(unsigned int *)0xC1EE7D8 = t32;
    t34 = *(int *)0xC1EE794;
    t35 = *(int *)0xC1EE798;
    t36 = *(int *)0xC1EE7D0;
    if ((int)t36 > (int)(t34 + t35)) {
        *(unsigned int *)0xC1EE7D0 = (t34 + t35);
    }
    t38 = *(int *)0xC1EE7D0;
    *(unsigned int *)0xC1EE7CC = ((int)u18 + t38);
    t39 = *(int *)0xC1EE798;
    *(unsigned int *)0xC1EE798 = (int)((float)t39 + u18);
    t40 = *(int *)0xC1EE210;
    if (t40 != 2) {
        t42 = *(int *)0xC1EE210;
        if (t42 != 2) {
            t43 = GetMenuMode(0x1);
            if (t43 != 0) {
                t44 = *(int *)0xC1EE210;
                if (t44 == 2) {
                    t45 = *(int *)0xC1EE794;
                    *(unsigned int *)0xC1EE7CC = t45;
                }
                *(unsigned int *)0xC1EE798 = 0x0;
            }
        }
    } else {
        t66 = *(int *)0xC1EE210;
        if (t66 == 2) {
            t67 = *(int *)0xC1EE794;
            *(unsigned int *)0xC1EE7CC = t67;
        }
        *(unsigned int *)0xC1EE798 = 0x0;
    }
    t84 = *(int *)0xC1EE7B4;
    u85 = 2.5f;
    u86 = *(float *)0xC1EE7A4;
    *(unsigned int *)0xC1EE7B4 = (t84 + (int)(u86 * u85));
    t87 = *(int *)0xC1EE210;
    if (t87 != 2) {
        hudHidePickUpNag();
    }
    t102 = *(int *)0xC1EE7E4;
    *(unsigned int *)0xC1EE7E4 = (t102 + 0x1);
    return 0x5C;
}
