/* Straight-line functions with calls and guards (batch gen_ba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_tas(char *);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_set_dreset_ns(void);
int kdSetDeviceResetEx(int a4, int a5);

int kdSetDeviceResetEx(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;

    t0 = *(int *)0xC1701BC;
    if (_builtin_tas((char *)t0) == 0) {
        mpdrv_dpf(0xC176314);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns();
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    t5 = *(int *)0xC1701BC;
    *(unsigned char *)((t5 + 0x0)) = 0x0;
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((t6 + 0x10E8));
    if (t7 != 0) {
        kdRecvFrame();
    }
    return t2;
}
