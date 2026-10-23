/* Straight-line functions with calls and guards (batch gen_apd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int thunk_kmiWriteRegister(int, int);
int kmiSetVideoTimings(int a4, int a5, int a6, int a7, int a8);

int kmiSetVideoTimings(int a4, int a5, int a6, int a7, int a8)
{
    int t41;
    int t42;
    int t64;
    int stk[76];

    { int *ap = &a8; int k; for (k = 0; k < 63; k++) stk[5 + k] = ap[k]; }
    *(unsigned int *)0xC2EA6D8 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF8)));
    *(unsigned int *)0xC2EA6DC = (*(int *)(((((int)stk + 4) + 0x10) + 0xF0)));
    *(unsigned int *)0xC2EA6E0 = (*(int *)(((((int)stk + 4) + 0x10) + 0xF4)));
    *(unsigned int *)0xC2EA960 = (((((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x54))) << 1) | (*(int *)(((((int)stk + 4) + 0x10) + 0x50)))) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x5C))) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x68))) << 2) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x30))) << 2) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x60))) << 2) << 2) << 1)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x28))) << 2) << 2) << 2)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x2C))) << 7)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x48))) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x4C))) << 8) << 1));
    *(unsigned int *)0xC2EA96C = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA964 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) << 16);
    *(unsigned int *)0xC2EA970 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x8))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x14))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA974 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x10))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA968 = (((*(int *)(((((int)stk + 4) + 0x10) + 0x74))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x78))) & 0x7FF) << 16));
    *(unsigned int *)0xC2EA978 = (((((*(int *)(((((int)stk + 4) + 0x10) + 0x18))) & 0x7F) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x1C))) & 0xF) << 8)) | (((((*(int *)(((((int)stk + 4) + 0x10) + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x24))) & 0x7F) << 22));
    *(unsigned int *)0xC2EA984 = ((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x34))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x38))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x3C))) & 0x1) << 2)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x40))) & 0x1) << 2) << 1)) | (((0xF & (*(int *)(((((int)stk + 4) + 0x10) + 0x44)))) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x6C))) & 0x1) << 8)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x70))) & 0x3F) << 16));
    *(unsigned int *)0xC2EA988 = ((*(int *)0xC2EA6D8) + (*(int *)0xC2EA6D0));
    *(unsigned int *)0xC2EA98C = (((*(int *)0xC2EA6DC) + (*(int *)0xC2EA6D4)) | (((*(int *)0xC2EA6E0) + (*(int *)0xC2EA6D4)) << 16));
    if ((*(int *)0xC2EAB6C) != 1) {
        if (((*(int *)0xC2EA684) & 2) != 0) {
            for (;;) {
                t41 = kmiReadRegister(0x10C);
                if ((t41 & 0x3FF) != 0) {
                    break;
                }
            }
            for (;;) {
                t42 = kmiReadRegister(0x10C);
                if ((t42 & 0x3FF) == 0) {
                    break;
                }
            }
        }
    }
    thunk_kmiWriteRegister(0xE8, ((*(int *)0xC2EA984) | 0x8));
    t64 = 0x0;
    if (((*(int *)0xC2EA69C) & 1) != 0) {
        t64 = 0x800000;
    }
    thunk_kmiWriteRegister(0x44, t64);
    thunk_kmiWriteRegister(0x5C, 0x0);
    thunk_kmiWriteRegister(0xD0, (*(int *)0xC2EA960));
    thunk_kmiWriteRegister(0xD8, (*(int *)0xC2EA970));
    thunk_kmiWriteRegister(0xCC, (*(int *)0xC2EA968));
    thunk_kmiWriteRegister(0xD4, (*(int *)0xC2EA96C));
    thunk_kmiWriteRegister(0xDC, (*(int *)0xC2EA974));
    thunk_kmiWriteRegister(0xE0, (*(int *)0xC2EA978));
    thunk_kmiWriteRegister(0xEC, (*(int *)0xC2EA988));
    thunk_kmiWriteRegister(0xF0, (*(int *)0xC2EA98C));
    return (thunk_kmiWriteRegister(0xC8, (*(int *)0xC2EA964)));
}
