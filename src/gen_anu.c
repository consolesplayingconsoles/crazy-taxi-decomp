/* Straight-line functions with calls and guards (batch gen_anu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nd_CarSel_PutCar(int, int, int, int);
int nd_StartWait_PutDriver(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nd_StartWait_PutCar(void);

int nd_StartWait_PutCar(void)
{
    int t0;
    int t18;
    int t25;
    int t20;

    t0 = *(int *)0xC2A720C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                    } else {
                        *(unsigned int *)0xC12FFF4 = 0x0;
                    }
                } else {
                    *(unsigned int *)0xC12FFF4 = 0x1;
                }
            } else {
                *(unsigned int *)0xC12FFF4 = 0x0;
            }
        } else {
            *(unsigned int *)0xC12FFF4 = 0x1;
        }
    } else {
        *(unsigned int *)0xC12FFF4 = 0x0;
    }
    if ((*(int *)0xC2A720C) == 2) {
        *(unsigned int *)0xC12FFF8 = 0x0;
    } else {
        *(unsigned int *)0xC12FFF8 = 0x1;
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC2A72CC);
    nlRotateAY(0x4000);
    nd_CarSel_PutCar((*(int *)0xC2A72D8), (*(short *)0xC12FFF0), (*(int *)0xC12FFF4), (*(int *)0xC12FFF8));
    nd_StartWait_PutDriver();
    nlPopMatrix(0x1);
    t18 = *(int *)0xC2A720C;
    t25 = t18;
    if (t18 != 1) {
        t20 = *(int *)0xC2A720C;
        if (t20 != 3) {
            *(unsigned short *)0xC12FFF0 = ((*(short *)0xC12FFF0) + 0x2000);
        }
        t25 = t20;
    }
    return t25;
}
