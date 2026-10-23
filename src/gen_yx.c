/* Straight-line functions with calls and guards (batch gen_yx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int menuChangeValue(int, int, int);
int ndPuru2Start(int, int, int);
int ndPuru2Stop(int);
int putMenuValue(int, int, int, int);
int vibIsReady(void);
int menuItemVibration(int a4);

int menuItemVibration(int a4)
{
    int t1;
    int t4;
    int t40;
    int t32;
    int t28;
    int t29;
    int t36;
    int t37;
    int stk[7];

    *(unsigned char *)(((int)stk + 8)) = 0x0;
    t1 = (((int)stk + 4) + 0x4);
    if ((vibIsReady()) == 1) {
        t1 = 0xC28A4EF;
    }
    t4 = *(int *)0xC2A1214;
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(*(signed char *)((t1 + 0x0)));
    if (a4 != 0) {
        if ((menuChangeValue((((t4 == 1)) ? 1 : 0), ((int)stk + 4), 0x2)) == 1) {
            *(unsigned char *)((t1 + 0x0)) = (*(int *)(((int)stk + 4)));
            if ((((t4 == 1)) ? 1 : 0) == 0) {
                if ((*(int *)(((int)stk + 4))) != 0) {
                    ndPuru2Start(0x2, 0x1, 0x0);
                } else {
                    ndPuru2Stop(0x2);
                }
            }
        }
    }
    if ((((t4 == 1)) ? 1 : 0) == 1) {
        if (a4 != 0) {
            t32 = (putMenuValue(0xA044, 0xC09E15C, 0x2, (*(int *)(((int)stk + 4)))));
        } else {
            if ((vibIsReady()) == 1) {
                t28 = 0x2024;
                t29 = (*(int *)(((int)stk + 4)));
            } else {
                t28 = 0x2084;
                t29 = (*(int *)(((int)stk + 4)));
            }
            t32 = (putMenuValue(t28, 0xC09E15C, 0x2, t29));
        }
        t40 = t32;
    } else {
        if (a4 != 0) {
            t36 = 0xC017;
            t37 = (*(int *)(((int)stk + 4)));
        } else {
            t36 = 0x4017;
            t37 = (*(int *)(((int)stk + 4)));
        }
        t40 = (putMenuValue(t36, 0xC09EB54, 0x2, t37));
    }
    return t40;
}
