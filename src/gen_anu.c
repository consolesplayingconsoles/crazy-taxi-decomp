/* Straight-line functions with calls and guards (batch gen_anu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nd_CarSel_PutCar(int, int, int, int);
int nd_StartWait_PutDriver(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nd_StartWait_PutCar(void);
struct o0_short { short v; };
struct o0_ushort { unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int nd_StartWait_PutCar(void)
{
    int t0;
    int t18;
    int t25;

    t0 = *(int *)0xC2A720C;
    switch (t0) {
    case 0:
        (((struct o4_uint *)0xC12FFF0)->v) = 0x0;
        break;
    case 1:
        (((struct o4_uint *)0xC12FFF0)->v) = 0x1;
        break;
    case 2:
        (((struct o4_uint *)0xC12FFF0)->v) = 0x0;
        break;
    case 3:
        (((struct o4_uint *)0xC12FFF0)->v) = 0x1;
        break;
    case 4:
        (((struct o4_uint *)0xC12FFF0)->v) = 0x0;
        break;
    }
    if ((*(int *)0xC2A720C) == 2) {
        (((struct o8_uint *)0xC12FFF0)->v) = 0x0;
    } else {
        (((struct o8_uint *)0xC12FFF0)->v) = 0x1;
    }
    nlPushMatrix(0x0);
    nlTranslateV(0xC2A72CC);
    nlRotateAY(0x4000);
    nd_CarSel_PutCar((*(int *)0xC2A72D8), ((((struct o0_short *)0xC12FFF0)->v)), ((((struct o4_int *)0xC12FFF0)->v)), ((((struct o8_int *)0xC12FFF0)->v)));
    nd_StartWait_PutDriver();
    nlPopMatrix(0x1);
    t18 = *(int *)0xC2A720C;
    t25 = t18;
    if (t18 != 1) {
        t25 = *(int *)0xC2A720C;
        if (t25 != 3) {
            (((struct o0_ushort *)0xC12FFF0)->v) = (((((struct o0_short *)0xC12FFF0)->v)) + 0x2000);
        }
    }
    return t25;
}
