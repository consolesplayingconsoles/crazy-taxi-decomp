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
struct o15C_int { char p[0x15C]; int v; };
struct o164_int { char p[0x164]; int v; };
struct o164_uint { char p[0x164]; unsigned int v; };
struct o174_int { char p[0x174]; int v; };
struct o174_uint { char p[0x174]; unsigned int v; };
struct o178_int { char p[0x178]; int v; };
struct o178_uint { char p[0x178]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };


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
    float s1;

    if (a4 == 0) {
        return;
    }
    t2 = (((struct o174_int *)(a4))->v);
    if (t2 != 0) {
        t24 = a4;
        if (t2 == 1) {
            t19 = a4;
            if ((*(int *)((a4 + 0x3C))) == 4) {
                if ((((*(signed char *)((a4 + 0x164))) & 128) != 0) && (t8 = *(signed char *)((a4 + 0x164)), (t8 & 64) == 0)) {
                    *(unsigned int *)0xC179120 = 0x1;
                }
                t14 = a4;
                if (((((struct o40_int *)(a4))->v)) == 3) {
                    EndPsg_Kill(a4);
                    t14 = 0x0;
                }
                t19 = t14;
            }
            t24 = t19;
        }
        t81 = t24;
    } else {
        t28 = (((struct o40_int *)(a4))->v);
        if (t28 != 13) {
            if (t28 != 14) {
                EndPsg_CrushReact(a4, f4, f5);
            }
        }
        if ((*(int *)0xC1EE234) != 0) {
            if ((CheckKyakuArea(0xC179144, ((((struct o15C_int *)(a4))->v)))) != 0) {
                u39 = *(float *)0xC179228;
                s1 = _builtin_fabsf(u39);
                u64 = s1;
                t65 = 0;
                if (0.149999991f > s1) {
                    t40 = *(short *)0xC179264;
                    if (16.0f > _builtin_fabsf((float)t40)) {
                        *(unsigned int *)0xC179120 = 0x0;
                        rinRandomSeed((*(int *)((a4 + 0x18))));
                        (((struct o164_uint *)(a4))->v) = ((((((struct o164_int *)(a4))->v)) & 0xFF9FFFFF) | ((unsigned int)((int)((unsigned int)(*(int *)((a4 + 0x14))) & 0x3)) << 21));
                        t50 = (((struct o15C_int *)(a4))->v);
                        psgSetState((a4 + 0x1C), 0x4, ((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC13F3B0 + ((*(int *)0xC1EE210) << 2))))))) + (((t50 << 1) + t50) << 2)), 0x0);
                        Drv_StartAction(0x4, (a4 + 0x1C), 0x0);
                        (((struct o174_uint *)(a4))->v) = (((((struct o174_int *)(a4))->v)) + 0x1);
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
            (((struct o178_uint *)(t81))->v) = (((((struct o178_int *)(t81))->v)) + 0x1);
            if ((int)((((struct o178_int *)(t81))->v)) > (int)0x258) {
                EndPsg_Kill(t81);
    return;
            }
            return;
        }
        return;
    }
}
