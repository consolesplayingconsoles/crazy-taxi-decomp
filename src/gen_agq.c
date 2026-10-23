/* Straight-line functions with calls and guards (batch gen_agq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int VSklIpPlay(int, int, int, int, int, int, float);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int humanDraw(int, int, int, int);
int selectPlayPickMotion(void);

int selectPlayPickMotion(void)
{
    int t0;
    int t1;
    int t2;
    int t10;
    int t18;
    int t29;
    int t31;
    int t36;

    t0 = *(int *)0xC2A75A4;
    t1 = *(int *)0xC2A751C;
    if (t0 != 1) {
        if (t0 != 2) {
            return t0;
        }
        t2 = *(int *)((t1 + 0x0));
        return humanDraw((*(int *)(((((t2 << 2) << 2) + 0xC130748) + 0x8))), (*(int *)(((((t2 << 2) << 2) + 0xC130748) + 0xC))), (*(int *)((0xC2A7538 + ((*(int *)((t1 + 0x0))) << 2)))), 0x0);
    }
    t10 = *(int *)((t1 + 0x0));
    VSklIpPlay((*(int *)(((((t10 << 2) << 2) + 0xC130748) + 0x4))), (*(int *)0xC2A75AC), (*(int *)(((((t10 << 2) << 2) + 0xC130748) + 0x8))), 0x0, ((*(int *)(((((t10 << 2) << 2) + 0xC130748) + 0xC)))), 0x0, ((float)(*(int *)((0xC2A7538 + ((*(int *)((t1 + 0x0))) << 2)))) / (float)(*(int *)0xC2A75B0)));
    t18 = *(int *)(((*(int *)0xC2A751C) + 0x0));
    if ((*(int *)((0xC2A7538 + (t18 << 2)))) == ((*(int *)0xC2A75B0) - 1)) {
        *(unsigned int *)0xC2A75A4 = ((*(int *)0xC2A75A4) + 0x1);
        *(unsigned int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2))) = 0x0;
        *(unsigned int *)0xC2A7518 = 0x3;
        Voice_ShutUp(0x0);
        Voice_Request((*(int *)((((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2) + 0xC130710))), 0x0, 0x7F, 0x0);
        t29 = *(int *)0xC2A75C0;
        t31 = t29;
        if (t29 == 4) {
            t31 = (Sound_Request(0x308A9, 0x0));
        }
        if ((*(int *)0xC17948C) != 0) {
            t36 = *(int *)0xC2A75C0;
            if (t36 != 4) {
                return Sound_Request(0x501A9, 0x0);
            }
            return t36;
        }
        return t31;
    }
    return (t18 << 2);
}
