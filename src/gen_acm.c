/* Straight-line functions with calls and guards (batch gen_acm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BupSave(int, int, int, int);
int strcpy(int, int);
int buStat(int);
int memmove(int, int, int);
int memset(int, int, int);
int nlFree(int);
int nlMalloc(int);
int SaveVMSicon(int a4);

int SaveVMSicon(int a4)
{
    int t0;
    int t13;
    int t11;

    t0 = nlMalloc(0x400);
    t13 = 0xFFFFFFFF;
    if (t0 != 0) {
        memset(t0, 0x0, 0x400);
        strcpy(t0, 0xC09DB7C);
        *(unsigned int *)((t0 + 0x10)) = 0x20;
        *(unsigned int *)((t0 + 0x14)) = 0xA0;
        memset((t0 + 0x18), 0x0, 0x8);
        memmove((t0 + 0x20), 0xC0EF2A3, 0x80);
        memmove((0xA0 + t0), 0xC0EF323, 0x20);
        memmove((0xC0 + t0), 0xC0EF343, 0x200);
        if ((BupSave(a4, 0xC09DB8C, t0, 0x2)) != 0) {
            nlFree(t0);
            t11 = 0xFFFFFFFF;
        } else {
            for (;;) {
                if ((buStat(a4)) != -1) {
                    break;
                }
            }
            nlFree(t0);
            t11 = 0x0;
        }
        t13 = t11;
    }
    return t13;
}
