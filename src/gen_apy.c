/* Straight-line functions with calls and guards (batch gen_apy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiGetSysConfigFlag(void);
int kmiSetSysConfigFlag(int);
int kmiWriteRegister(int, int);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);

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
        *(unsigned int *)0xC2B8C7C = a4;
        *(unsigned int *)0xC2B8C80 = a5;
        *(unsigned int *)0xC2B8C84 = a7;
        *(unsigned int *)0xC2B8C58 = a6;
        *(unsigned int *)0xC2EA6B4 = a6;
        t0 = kmiGetSysConfigFlag();
        if (t0 != 0x80000000) {
            t5 = kmiAddSysConfigFlag(0x800);
            t11 = 0x0;
            if (t5 == 0xB00) {
                kmiSetSysConfigFlag(0x80000000);
                t11 = (kmiAllocSysConfig((*(int *)0xC2B8C94)));
            }
            t55 = t11;
        } else {
            t49 = 0xF;
            if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            } else {
                t43 = 0x10;
                if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
                } else {
                    *(unsigned int *)0xC2EA9B4 = (*(int *)((a4 + 0x1C)));
                    *(unsigned int *)0xC2EA9BC = 0x0;
                    *(unsigned int *)0xC2EA9B8 = (*(int *)((a5 + 0x1C)));
                    *(unsigned int *)0xC2EA9C0 = 0x0;
                    kmiWriteRegister(0x50, (*(int *)0xC2EA950));
                    kmiWriteRegister(0x54, (*(int *)0xC2EA950));
                    kmiWriteRegister(0x60, (*(int *)0xC2EA9B4));
                    kmiWriteRegister(0x64, (*(int *)0xC2EA9B8));
                    *(unsigned int *)0xC2EA950 = (*(int *)0xC2EA9B4);
                    *(unsigned int *)0xC2EA954 = (*(int *)0xC2EA9B8);
                    if (a6 == 1) {
                        *(unsigned int *)0xC2EA898 = 0x0;
                        *(unsigned int *)0xC2EA89C = 0x0;
                        kmiWriteRegister(0x50, (*(int *)0xC2EA950));
                        t40 = (*(int *)0xC2EA954);
                    } else {
                        kmiWriteRegister(0x50, (*(int *)0xC2EA950));
                        t40 = (*(int *)0xC2EA950);
                    }
                    kmiWriteRegister(0x54, t40);
                    *(unsigned int *)0xC2EA928 = 0x1;
                    *(unsigned int *)0xC2EA868 = a7;
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
