/* Straight-line functions with calls and guards (batch gen_abu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c080470(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int FUN_0c172350(int a4, int a5, int a6, int a7);

int FUN_0c172350(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t5;
    int t10;

    t0 = *(int *)((a4 + 0x10));
    t1 = (a6 * t0);
    if ((int)(a6 * t0) < 0) {
        t1 = ((a6 * t0) + 0x7);
    }
    t5 = FUN_0c080470((*(int *)((((a4 + 0x2C) + (a5 << 2)) + 0x0))), a7, ((((t1 >> 1) >> 1) >> 1) + (*(int *)((((a5 << 2) + (a4 + 0x20)) + 0x0)))), 0x20);
    if ((int)t5 < 0) {
        if (t5 == -1) {
            return (mwRnaErrCallFunc(0xC176C54));
        }
        if (t5 == -2) {
            return (mwRnaErrCallFunc(0xC176C84));
        }
        if (t5 == -3) {
            return (mwRnaErrCallFunc(0xC176CC4));
        }
        t10 = t5;
        if (t5 == -4) {
            t10 = (mwRnaErrCallFunc(0xC176D04));
        }
        return t10;
    }
    return t5;
}
