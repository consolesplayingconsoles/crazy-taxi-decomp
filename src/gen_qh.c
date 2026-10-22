/* Straight-line functions with calls and guards (batch gen_qh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int setTechnicalBonus(int, int, int);
int trafficLevelControl(int a4);

int trafficLevelControl(int a4)
{
    int t7;
    int t10;
    int t13;
    int t26;
    int t32;
    int t30;
    int t29;
    int t36;
    int t37;
    int t3;

    if (a4 == 0) {
        t7 = 0x3;
        if (((*(int *)0xC1EE234) == 1) && (t3 = *(int *)0xC1EE210, (int)t3 <= (int)0x1)) {
            t7 = ((int)((int)(unsigned char)(*(signed char *)0xC28A4EB) % (int)0x8));
        }
        t10 = *(int *)(((t7 << 2) + 0xC0A2178));
        *(unsigned int *)0xC2A4488 = t10;
        *(unsigned int *)0xC2A1B6C = t10;
        *(unsigned int *)0xC2A1B70 = 0x0;
        *(unsigned int *)0xC2A448C = (*(int *)(((t7 << 2) + 0xC0A2198)));
        *(unsigned int *)0xC2A4490 = (*(int *)(((t7 << 2) + 0xC0A21B8)));
        *(unsigned int *)0xC2A4494 = 0x0;
        *(unsigned int *)0xC2A4498 = 0x0;
        return 0xC0A21B8;
    }
    t13 = *(int *)0xC2A4494;
    *(unsigned int *)0xC2A4494 = (t13 + 0x1);
    if ((int)(t13 + 0x1) > (int)(*(int *)0xC2A448C)) {
        *(unsigned int *)0xC2A4494 = 0x0;
        if ((int)(*(int *)0xC2A1B6C) < (int)0x17) {
            *(unsigned int *)0xC2A1B6C = ((*(int *)0xC2A1B6C) + 0x1);
        }
    }
    if ((*(int *)((0x58 + (*(int *)0xC2A1B30)))) == 1) {
        *(unsigned int *)0xC2A4498 = ((*(int *)0xC2A4498) + 0x1);
        t26 = *(int *)0xC2A4498;
        t32 = t26;
        if ((int)t26 > (int)(*(int *)0xC2A4490)) {
            *(unsigned int *)0xC2A1B70 = ((*(int *)0xC2A1B70) + 0x1);
            *(unsigned int *)0xC2A4498 = 0x0;
            t30 = t26;
            if ((int)(*(int *)0xC2A1B6C) < (int)0x17) {
                t29 = *(int *)0xC2A1B6C;
                *(unsigned int *)0xC2A1B6C = (t29 + 0x1);
                t30 = (t29 + 0x1);
            }
            t32 = t30;
        }
        return t32;
    }
    t36 = *(int *)0xC2A1B6C;
    t37 = *(int *)0xC2A1B70;
    *(unsigned int *)0xC2A1B6C = (t36 - t37);
    if ((int)(t36 - t37) < (int)(*(int *)0xC2A4488)) {
        *(unsigned int *)0xC2A1B6C = (*(int *)0xC2A4488);
    }
    *(unsigned int *)0xC2A1B70 = 0x0;
    *(unsigned int *)0xC2A4498 = 0x0;
    return setTechnicalBonus(0xFFFFFFFF, 0x0, 0xC2A4498);
}
