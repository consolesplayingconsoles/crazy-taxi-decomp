/* Straight-line functions with calls and guards (batch gen_ahj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_TimeUp(void);
int hudShowPickUpNag(void);
int FUN_0c02d5ea(void);

int FUN_0c02d5ea(void)
{
    int t23;
    int t33;
    int t111;
    int t88;
    int t59;
    int t76;
    int t1;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t45;
    int t100;

    if (((*(int *)0xC1EE78C) == 1) && (t1 = *(int *)0xC1EE7CC, (int)t1 > 0)) {
        if ((*(int *)0xC1EE210) != 2) {
            *(unsigned int *)0xC1EE7CC = ((*(int *)0xC1EE7CC) - 1);
        } else {
            *(unsigned int *)0xC1EE7D4 = 0x0;
        }
    }
    if ((*(float *)0xC1EE7C0) > 1200.0f) {
        *(float *)0xC1EE7C0 = ((*(float *)0xC1EE7C0) - 1200.0f);
        *(unsigned int *)0xC1EE7C4 = ((*(int *)0xC1EE7C4) + 0x1);
        *(unsigned int *)0xC1EE7C8 = 0x1;
    }
    *(unsigned int *)0xC1EE790 = ((*(int *)0xC1EE790) + 0x1);
    t23 = *(int *)0xC1EE210;
    if (((*(int *)0xC0E5338) == 0) && ((t24 = *(int *)0xC1EE7EC, t24 == 1) && ((t25 = *(int *)0xC1EE788, t25 == 1) && ((t26 = *(int *)0xC1EE794, (int)t26 > 0) && ((t23 != 2) || ((t23 == 2) && ((t27 = *(int *)0xC1EE214, t27 != 0) && (t28 = *(int *)0xC2A9904, t28 == 0)))))))) {
        *(unsigned int *)0xC1EE794 = ((*(int *)0xC1EE794) - 1);
    }
    t33 = *(int *)0xC1EE210;
    t111 = t33;
    if (t33 != 2) {
        if (((*(int *)0xC1EE794) == 0) && (t45 = *(int *)0xC1EE7EC, t45 != 2)) {
            *(unsigned int *)0xC1EE7EC = 0x2;
            *(unsigned int *)0xC1EE7F0 = 0x96;
            Start_TimeUp();
            *(unsigned int *)0xC1EE788 = 0x3;
            t100 = 0x3;
        } else {
            t88 = 0x5C;
            if ((int)(*(int *)0xC1EE7E4) <= (int)0x1) {
                t59 = *(int *)0xC1EE78C;
                t76 = t59;
                if (t59 != 1) {
                    if ((int)(*(int *)0xC1EE7F4) >= (int)(*(int *)0xC1EE7E8)) {
                        hudShowPickUpNag();
                        *(unsigned int *)0xC1EE7E8 = 0x258;
                        *(unsigned int *)0xC1EE7F4 = 0x0;
                    }
                    *(unsigned int *)0xC1EE7F4 = ((*(int *)0xC1EE7F4) + 0x1);
                    t76 = 0x60;
                }
                t88 = t76;
            }
            t100 = t88;
        }
        t111 = t100;
    }
    return t111;
}
