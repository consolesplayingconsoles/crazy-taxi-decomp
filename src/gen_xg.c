/* Straight-line functions with calls and guards (batch gen_xg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float drvAccelDot(void);
int psgEnterState3(int);
void EndPsg_CrushReact(int a4);

void EndPsg_CrushReact(int a4)
{
    int t0;
    float t8;
    int t9;
    int t14;
    int t18;
    int t25;
    int t32;
    int t34;
    int t15;
    int t26;

    t0 = *(int *)0xC1790EC;
    if (t0 != 0) {
        t8 = drvAccelDot();
        t9 = *(int *)0xC1790EC;
        if (((0x7FFE & t9) == 0) && ((0x80000000 & t9) == 0)) {
            t14 = *(int *)0xC1790EC;
            if (((t14 & 0x1F0000) == 0) && (t15 = *(int *)0xC1790EC, (t15 & 0x20000) == 0)) {
                return;
            }
            *(unsigned int *)((a4 + 0x40)) = 0xE;
            *(volatile int *)((a4 + 0x40));
            psgEnterState3((a4 + 0x1C));
    return;
        }
        if (!(-6.0f > t8) && !(-4.0f > t8)) {
            return;
        }
        *(unsigned int *)((a4 + 0x40)) = 0xD;
        *(volatile int *)((a4 + 0x40));
        psgEnterState3((a4 + 0x1C));
    return;
    }
    t18 = *(int *)((a4 + 0x40));
    if (t18 != 12) {
        t25 = *(int *)((a4 + 0x40));
        if ((t25 != 11) && (t26 = *(int *)0xC2AD010, t26 == 1)) {
            *(unsigned int *)((a4 + 0x40)) = 0xB;
            *(volatile int *)((a4 + 0x40));
            psgEnterState3((a4 + 0x1C));
    return;
        }
        t32 = *(int *)((a4 + 0x40));
        if (t32 == 11) {
            t34 = *(int *)0xC2AD010;
            if (t34 != 1) {
                *(unsigned int *)((a4 + 0x40)) = 0xC;
                *(volatile int *)((a4 + 0x40));
                psgEnterState3((a4 + 0x1C));
    return;
            }
            return;
        }
        return;
    }
}
