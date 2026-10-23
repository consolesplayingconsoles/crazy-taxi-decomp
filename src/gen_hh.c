/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Psg_Init(int, int, int);
int Psg_SetPosPtrSet(int, int);
int set_event(int, int);
void kyakuTaskStart(int a4, int a5, int a6);

void kyakuTaskStart(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t4;
    int t33;
    int t36;

    t0 = set_event(0x248, 0xC024878);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x174)) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = a5;
        t3 = (int)((int)((int)((int)(*(int *)0xC1794EC) / (int)0x258)) % (int)0x3);
        *(unsigned int *)((t0 + 0x19C)) = t3;
        t4 = *(signed char *)((((a4 + 0x18) + t3) + 0x0));
        *(unsigned int *)((t0 + 0x198)) = (((short)((((t4 << 1) + t4) << 2) << 1) + 0xC1794F0) + 0x18);
        Psg_Init((t0 + 0x1C), (*(int *)((((*(int *)(((*(int *)((t0 + 0x14))) + 0x4))) << 2) + 0xC08A9B8))), (*(int *)(((*(int *)((t0 + 0x198))) + 0x0))));
        Psg_SetPosPtrSet((t0 + 0x1C), ((*(int *)((t0 + 0x14))) + 0x8));
        *(float *)((t0 + 0x178)) = 0.699999988f;
        *(float *)((t0 + 0x17C)) = 35.0f;
        *(unsigned short *)((t0 + 0x180)) = 0x0;
        *(float *)((t0 + 0x194)) = (((*(float *)((((t3 << 2) + ((*(int *)((t0 + 0x14))) + 0x1C)) + 0x0))) + -2000.0f) * 5.88235271e-05f);
        if ((*(float *)((t0 + 0x194))) > 1.0f) {
            *(float *)((t0 + 0x194)) = 1.0f;
        }
        if (0.0f > (*(float *)((t0 + 0x194)))) {
            *(float *)((t0 + 0x194)) = 0.0f;
        }
    }
    if ((*(int *)0xC1EE20C) == 2) {
        if (((*(int *)0xC1EE214) == 8) && ((int)a6 < (int)0x5)) {
            *(unsigned int *)(((a6 << 2) + 0xC1794D4)) = t0;
        }
        t33 = *(int *)0xC1EE214;
        if (t33 == 8) {
            *(float *)((t0 + 0x194)) = 1.0f;
        } else {
            if ((t33 == 12) || (t33 == 10)) {
                *(float *)((t0 + 0x194)) = 0.0f;
            }
        }
        t36 = *(int *)0xC1EE214;
        if ((t36 != 11) && (t36 != 8)) {
            *(unsigned int *)((t0 + 0x170)) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x170)) = (*(signed char *)((((*(int *)((t0 + 0x14))) + 0x18) + 0x0)));
        }
    } else {
        *(unsigned int *)((t0 + 0x170)) = 0x0;
    }
}
