/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int lcdFillData(int, int);
int lcdSetData(int, int, int, int, int);
int lcdSync(int);
int pdGetPeripheral(int);
int Exec_LCDLogoDemo(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int Exec_LCDLogoDemo(void)
{
    int t0;
    int t1;
    int t4;
    int t8;
    int t15;
    int t18;
    int t19;
    int t31;
    int t34;

    t0 = (((struct o0_int *)0xC132320)->v);
    t1 = (((struct o4_int *)0xC132320)->v);
    t4 = *(int *)(((*(int *)(((pdGetPeripheral((((t0 << 1) + (t0 << 2)) + t1))) + 0x30))) + 0x0));
    if ((t4 & 4) != 0) {
        lcdFillData(0x0, (((t0 << 1) + (t0 << 2)) + t1));
        t8 = 0xC0D2DDC;
        if ((int)((int)((int)(*(int *)0xC2A9FAC) % (int)0x4)) < (int)0x2) {
            t8 = 0xC0D2D18;
        }
        lcdSetData(t8, 0x0, 0x0, 0x1, (((t0 << 1) + (t0 << 2)) + t1));
        lcdSync((((t0 << 1) + (t0 << 2)) + t1));
    }
    t15 = (((struct o0_int *)0xC132320)->v);
    t34 = t15;
    if (t15 == 3) {
        t19 = (((struct o4_int *)0xC132320)->v);
        t34 = t19;
        if (t19 == 2) {
            t18 = *(int *)0xC2A9FAC;
            *(unsigned int *)0xC2A9FAC = (t18 + 0x1);
            if ((t18 + 0x1) == 0x280) {
                *(unsigned int *)0xC2A9FAC = 0x0;
                t19 = 0x0;
            }
            t34 = t19;
        }
    }
    t31 = (((struct o4_int *)0xC132320)->v);
    (((struct o4_uint *)0xC132320)->v) = (t31 + 0x1);
    if ((int)(t31 + 0x1) > (int)0x2) {
        (((struct o4_uint *)0xC132320)->v) = 0x1;
        t34 = (int)((int)(((((struct o0_int *)0xC132320)->v)) + 0x1) % (int)0x4);
        (((struct o0_uint *)0xC132320)->v) = t34;
    }
    return t34;
}
