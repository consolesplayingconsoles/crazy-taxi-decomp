/* Straight-line functions with calls and guards (batch gen_xb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarInit(int, int, int);
int courseCarType(void);
int courseStatusGet(int, int, int, int);
float nlLength(int, int);
int stopingCarSpawn(int, int);
int pcarSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int pcarSpawn(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int t72;
    int t4;
    int t12;
    int t13;
    int t17;
    int t18;
    int t64;
    int t29;
    int t57;
    int t24;
    int t25;
    int t48;

    t72 = 0x0;
    if ((unsigned int)(*(int *)0xC2A44A8) >= (unsigned int)0x64) {
    } else {
        *(volatile int *)(((*(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0));
        t4 = courseCarType();
        if ((int)t4 >= (int)0xA) {
            *(unsigned int *)((a8 + 0x0)) = (int)((float)(*(int *)((a8 + 0x0))) + 6.39999962f);
        }
        if (a4 != 0) {
            t12 = *(int *)((a8 + 0x0));
            t13 = 0x0;
            if ((int)(a6 - 10) > 0) {
                t13 = (a6 - 10);
            }
            t24 = t13;
            t25 = (t12 + 0xA);
        } else {
            t17 = *(int *)(((*(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0));
            t18 = (t17 - 1);
            if ((int)(a6 + 0xA) < (int)(t17 - 1)) {
                t18 = (a6 + 0xA);
            }
            t24 = t18;
            t25 = (0xFFFFFFF6 - (*(int *)((a8 + 0x0))));
        }
        t64 = 0x0;
        if ((courseStatusGet(a5, t24, 0x0, t25)) == 0) {
            t29 = *(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2A6690)) + 0x0));
            t57 = 0x0;
            if (!(((*(float *)0xC2A1B18) * 0.5f) > (nlLength(((*(int *)0xC2A1B30) + 0x78), ((((a6 << 1) + a6) << 2) + t29))))) {
                if ((*(int *)((a10 + 0x0))) == 0) {
                    *(unsigned int *)((a8 + 0x0)) = a7;
                } else {
                    *(unsigned int *)((a10 + 0x0)) = ((*(int *)((a10 + 0x0))) - 1);
                }
                if (((*(int *)((a10 + 0x0))) != 0) && (a9 != 0)) {
                } else {
                    PcarInit(t4, a5, ((((a6 << 1) + a6) << 2) + t29));
                }
                if ((a4 != 2) && (((t48 = *(int *)((a10 + 0x0)), t48 == 0) || (a9 == 1)) && ((int)a6 > (int)0x4))) {
                    stopingCarSpawn(a5, ((((a6 << 1) + a6) << 2) + t29));
                }
                t57 = 0x1;
            }
            t64 = t57;
        }
        t72 = t64;
    }
    return t72;
}
