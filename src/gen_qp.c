/* Straight-line functions with calls and guards (batch gen_qp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecScreen(void);
int ExecWindow(void);
int menuReadPad(int);
int menuPutBackground(void);
int DO_NOT_LCDAccess(void);
int LCDAccessOK(void);
int Menu(void);

int Menu(void)
{
    int t1;
    int t2;
    int t3;
    int t11;

    menuReadPad(0x1);
    t1 = *(int *)0xC1EE238;
    t2 = *(int *)(((t1 << 2) + 0xC0A2164));
    if (t2 == 0) {
        *(unsigned int *)0xC1EE238 = 0x0;
    } else {
        t3 = ((int (*)(int))(t2))(0xC1EE238);
    }
    menuPutBackground();
    ExecScreen();
    ExecWindow();
    t11 = *(int *)0xC2A1214;
    if (t11 == 1) {
        return DO_NOT_LCDAccess();
    }
    return LCDAccessOK();
}
