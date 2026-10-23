/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int Drv_StartAction(int, int, int);
int EndPsg_CrushReact(int, float, float);
int EndPsg_Kill(int);
int psgFrame(int);
int psgSetState(int, int, int, int);
int rinRandomSeed(int);
void EndPsg_Execute(int a4, float f4, float f5);

void EndPsg_Execute(int a4, float f4, float f5)
{
    int t2;
    int t24;
    int t19;
    int t14;
    int t28;
    float u39;
    float u64;
    int t65;
    int t40;
    int t50;
    int t81;
    int t8;
    float u58;

    if (a4 == 0) {
        return;
    }
    t2 = *(int *)((a4 + 0x174));
    if (t2 != 0) {
        t24 = a4;
        if (t2 == 1) {
            t19 = a4;
            if ((*(int *)((a4 + 0x3C))) == 4) {
                if ((((*(signed char *)((a4 + 0x164))) & 128) != 0) && (t8 = *(signed char *)((a4 + 0x164)), (t8 & 64) == 0)) {
                    *(unsigned int *)0xC179120 = 0x1;
                }
                t14 = a4;
                if ((*(int *)((a4 + 0x40))) == 3) {
                    EndPsg_Kill(a4);
                    t14 = 0x0;
                }
                t19 = t14;
            }
            t24 = t19;
        }
        t81 = t24;
    } else {
        t28 = *(int *)((a4 + 0x40));
        if (t28 != 13) {
            if (t28 != 14) {
                EndPsg_CrushReact(a4, f4, f5);
            }
        }
        if ((*(int *)0xC1EE234) != 0) {
            if ((CheckKyakuArea(0xC179144, (*(int *)((a4 + 0x15C))))) != 0) {
                u39 = *(float *)0xC179228;
                u64 = _builtin_fabsf(u39);
                t65 = 0;
                if (0.149999991f > _builtin_fabsf(u39)) {
                    t40 = *(short *)0xC179264;
                    if (16.0f > _builtin_fabsf((float)t40)) {
                        *(unsigned int *)0xC179120 = 0x0;
                        rinRandomSeed((*(int *)((a4 + 0x18))));
                        *(unsigned int *)(((0x164 + a4) + 0x0)) = (((*(int *)(((0x164 + a4) + 0x0))) & 0xFF9FFFFF) | ((unsigned int)((int)((unsigned int)(*(int *)((a4 + 0x14))) & 0x3)) << 21));
                        t50 = *(int *)((a4 + 0x15C));
                        psgSetState((a4 + 0x1C), 0x4, ((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC13F3B0 + ((*(int *)0xC1EE210) << 2))))))) + (((t50 << 1) + t50) << 2)), 0x0);
                        Drv_StartAction(0x4, (a4 + 0x1C), 0x0);
                        *(unsigned int *)((a4 + 0x174)) = ((*(int *)((a4 + 0x174))) + 0x1);
                    } else {
                        u58 = _builtin_fabsf((float)t40);
                    }
                    u64 = u58;
                    t65 = ((16.0f > _builtin_fabsf((float)t40)));
                } else {
                    t65 = (0);
                }
            }
        }
        t81 = a4;
    }
    if (t81 != 0) {
        psgFrame((t81 + 0x1C));
        if ((*(int *)0xC1EE234) != 0) {
            *(unsigned int *)((t81 + 0x178)) = ((*(int *)((t81 + 0x178))) + 0x1);
            if ((int)(*(int *)((t81 + 0x178))) > (int)0x258) {
                EndPsg_Kill(t81);
    return;
            }
            return;
        }
        return;
    }
}
