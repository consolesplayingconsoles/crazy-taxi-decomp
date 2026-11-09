/* Straight-line functions with calls and guards (batch gen_apy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiGetSysConfigFlag(void);
int kmiSetSysConfigFlag(int);
int kmiWriteRegister(int, int);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    int t62;
    int t0;
    int t5;
    int t11;
    int t49;
    int t43;
    int t55;
    int t40;

    t62 = 0xE;
    if ((a4 != 0) && (a5 != 0)) {
        (((struct o24_uint *)0xC2B8C58)->v) = a4;
        (((struct o28_uint *)0xC2B8C58)->v) = a5;
        (((struct o2C_uint *)0xC2B8C58)->v) = a7;
        (((struct o0_uint *)0xC2B8C58)->v) = a6;
        *(unsigned int *)0xC2EA6B4 = a6;
        t0 = kmiGetSysConfigFlag();
        if (t0 != 0x80000000) {
            t5 = kmiAddSysConfigFlag(0x800);
            t11 = 0x0;
            if (t5 == 0xB00) {
                kmiSetSysConfigFlag(0x80000000);
                t11 = (kmiAllocSysConfig(((((struct o3C_int *)0xC2B8C58)->v))));
            }
            t55 = t11;
        } else {
            t49 = 0xF;
            if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            } else {
                t43 = 0x10;
                if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
                } else {
                    (((struct o0_uint *)0xC2EA9B4)->v) = (*(int *)((a4 + 0x1C)));
                    (((struct o8_uint *)0xC2EA9B4)->v) = 0x0;
                    (((struct o4_uint *)0xC2EA9B4)->v) = (*(int *)((a5 + 0x1C)));
                    (((struct oC_uint *)0xC2EA9B4)->v) = 0x0;
                    kmiWriteRegister(0x50, ((((struct o28_int *)0xC2EA928)->v)));
                    kmiWriteRegister(0x54, ((((struct o28_int *)0xC2EA928)->v)));
                    kmiWriteRegister(0x60, ((((struct o0_int *)0xC2EA9B4)->v)));
                    kmiWriteRegister(0x64, ((((struct o4_int *)0xC2EA9B4)->v)));
                    (((struct o28_uint *)0xC2EA928)->v) = ((((struct o0_int *)0xC2EA9B4)->v));
                    (((struct o2C_uint *)0xC2EA928)->v) = ((((struct o4_int *)0xC2EA9B4)->v));
                    if (a6 == 1) {
                        (((struct o30_uint *)0xC2EA868)->v) = 0x0;
                        (((struct o34_uint *)0xC2EA868)->v) = 0x0;
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC2EA928)->v)));
                        t40 = ((((struct o2C_int *)0xC2EA928)->v));
                    } else {
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC2EA928)->v)));
                        t40 = ((((struct o28_int *)0xC2EA928)->v));
                    }
                    kmiWriteRegister(0x54, t40);
                    (((struct o0_uint *)0xC2EA928)->v) = 0x1;
                    (((struct o0_uint *)0xC2EA868)->v) = a7;
                    t43 = 0x0;
                }
                t49 = t43;
            }
            t55 = t49;
        }
        t62 = t55;
    }
    return t62;
}
