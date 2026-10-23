/* Straight-line functions with calls and guards (batch gen_acf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float drvAccelDot(float, float);
int psgEnterState3(int, int);
void EndPsg_CrushReact(int a4, float f4, float f5);

void EndPsg_CrushReact(int a4, float f4, float f5)
{
    float t8;
    int t9;
    int t15;
    int t26;

    if ((*(int *)0xC1790EC) != 0) {
        t8 = drvAccelDot(f4, f5);
        t9 = *(int *)0xC1790EC;
        if (((0x7FFE & t9) == 0) && ((0x80000000 & t9) == 0)) {
            if ((((*(int *)0xC1790EC) & 0x1F0000) == 0) && (t15 = *(int *)0xC1790EC, (t15 & 0x20000) == 0)) {
                return;
            }
            *(unsigned int *)((a4 + 0x40)) = 0xE;
            psgEnterState3((a4 + 0x1C), (*(int *)((a4 + 0x40))));
    return;
        }
        if (!(-6.0f > t8) && !(-4.0f > t8)) {
            return;
        }
        *(unsigned int *)((a4 + 0x40)) = 0xD;
        psgEnterState3((a4 + 0x1C), (*(int *)((a4 + 0x40))));
    return;
    }
    if ((*(int *)((a4 + 0x40))) != 12) {
        if (((*(int *)((a4 + 0x40))) != 11) && (t26 = *(int *)0xC2AD010, t26 == 1)) {
            *(unsigned int *)((a4 + 0x40)) = 0xB;
            psgEnterState3((a4 + 0x1C), (*(int *)((a4 + 0x40))));
    return;
        }
        if ((*(int *)((a4 + 0x40))) == 11) {
            if ((*(int *)0xC2AD010) != 1) {
                *(unsigned int *)((a4 + 0x40)) = 0xC;
                psgEnterState3((a4 + 0x1C), (*(int *)((a4 + 0x40))));
    return;
            }
            return;
        }
        return;
    }
}
