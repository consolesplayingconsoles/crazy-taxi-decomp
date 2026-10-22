/* Straight-line functions with calls and guards (batch gen_oz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int Drv_StartAction(int, int, int);
int FUN_0c071d98(int);
int FUN_0c071fa4(int);
int psgFrame(int);
int psgSetState(int, int, int, int);
int rinRandomSeed(int);
void FUN_0c071e10(int a4);

void FUN_0c071e10(int a4)
{
    int t0;
    int t23;
    int t1;
    int t18;
    int t2;
    int t3;
    int t10;
    int t13;
    int t27;
    int t35;
    int t36;
    int t37;
    float u38;
    float u63;
    int t64;
    int t39;
    int t40;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t52;
    int t89;
    int t90;
    int t91;
    int t80;
    float u57;

    if (a4 == 0) {
        return;
    }
    t0 = *(int *)((a4 + 0x174));
    if (t0 != 0) {
        t23 = a4;
        if (t0 == 1) {
            t1 = *(int *)((a4 + 0x3C));
            t18 = a4;
            if (t1 == 4) {
                t2 = *(signed char *)((a4 + 0x164));
                if ((t2 & 128) != 0) {
                    t3 = *(signed char *)((a4 + 0x164));
                    if ((t3 & 64) == 0) {
                        *(unsigned int *)0xC179120 = 0x1;
                    }
                }
                t10 = *(int *)((a4 + 0x40));
                t13 = a4;
                if (t10 == 3) {
                    FUN_0c071d98(a4);
                    t13 = 0x0;
                }
                t18 = t13;
            }
            t23 = t18;
        }
        t80 = t23;
    } else {
        t27 = *(int *)((a4 + 0x40));
        if (t27 != 13) {
            if (t27 != 14) {
                FUN_0c071fa4(a4);
            }
        }
        t35 = *(int *)0xC1EE234;
        if (t35 != 0) {
            t36 = *(int *)((a4 + 0x15C));
            t37 = CheckKyakuArea(0xC179144, t36);
            if (t37 != 0) {
                u38 = *(float *)0xC179228;
                u63 = _builtin_fabsf(u38);
                t64 = 0;
                if (0.149999991f > _builtin_fabsf(u38)) {
                    t39 = *(short *)0xC179264;
                    if (16.0f > _builtin_fabsf((float)t39)) {
                        *(unsigned int *)0xC179120 = 0x0;
                        t40 = *(int *)((a4 + 0x18));
                        rinRandomSeed(t40);
                        t42 = *(int *)((a4 + 0x14));
                        t43 = *(int *)(((0x164 + a4) + 0x0));
                        t44 = (int)((unsigned int)t42 & 0x3);
                        *(unsigned int *)(((0x164 + a4) + 0x0)) = ((t43 & 0xFF9FFFFF) | ((unsigned int)t44 << 21));
                        t45 = *(int *)0xC1EE210;
                        t46 = *(int *)0xC1EE214;
                        t47 = *(int *)((0xC13F3B0 + (t45 << 2)));
                        t48 = *(int *)(((t46 << 2) + t47));
                        t49 = *(int *)((a4 + 0x15C));
                        psgSetState((a4 + 0x1C), 0x4, (t48 + (((t49 << 1) + t49) << 2)), 0x0);
                        Drv_StartAction(0x4, (a4 + 0x1C), 0x0);
                        t52 = *(int *)((a4 + 0x174));
                        *(unsigned int *)((a4 + 0x174)) = (t52 + 0x1);
                    } else {
                        u57 = _builtin_fabsf((float)t39);
                    }
                    u63 = u57;
                    t64 = ((16.0f > _builtin_fabsf((float)t39)));
                } else {
                    t64 = (0);
                }
            }
        }
        t80 = a4;
    }
    if (t80 != 0) {
        psgFrame((t80 + 0x1C));
        t89 = *(int *)0xC1EE234;
        if (t89 != 0) {
            t90 = *(int *)((t80 + 0x178));
            *(unsigned int *)((t80 + 0x178)) = (t90 + 0x1);
            t91 = *(int *)((t80 + 0x178));
            if ((int)t91 > (int)0x258) {
                FUN_0c071d98(t80);
    return;
            }
            return;
        }
        return;
    }
}
