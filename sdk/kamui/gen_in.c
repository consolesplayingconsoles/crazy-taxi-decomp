/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteRegister(int, int);
int kmSetUserClipLevelAdjust(int a4, int a5);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int kmSetUserClipLevelAdjust(int a4, int a5)
{
    int t1;
    int t2;
    int t14;
    int t21;
    int t22;
    int t35;
    int t38;
    int t39;
    int t41;
    int t49;
    int t16;

    if (((((struct o18_int *)0xC2EA6A0)->v)) == 1) {
        t1 = (((struct o4_int *)0xC2EA940)->v);
        t2 = (((struct o1C_int *)0xC2EA6A0)->v);
        (((struct o0_uint *)0xC2EA898)->v) = (((((struct o0_int *)0xC2EA898)->v)) - (((t2 * t1) << 2) << 1));
        (((struct o4_uint *)0xC2EA898)->v) = (((((struct o4_int *)0xC2EA898)->v)) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 == 1) {
            t14 = 0x0;
            if ((((((struct o0_int *)0xC2EA6A0)->v)) & 0x1) == 1) {
                t14 = 0x1;
            }
            if ((t14 != 1) && (t16 = (((struct o0_int *)0xC2EA6A0)->v), (t16 & 32) == 0)) {
                (((struct o1C_uint *)0xC2EA6A0)->v) = 0x8;
            } else {
                (((struct o1C_uint *)0xC2EA6A0)->v) = 0x10;
            }
            t21 = (((struct o4_int *)0xC2EA940)->v);
            t22 = (((struct o1C_int *)0xC2EA6A0)->v);
            (((struct o0_uint *)0xC2EA898)->v) = (((((struct o0_int *)0xC2EA898)->v)) + (((t22 * t21) << 2) << 1));
            (((struct o4_uint *)0xC2EA898)->v) = ((((t22 * t21) << 2) << 1) + ((((struct o4_int *)0xC2EA898)->v)));
        }
    } else {
        (((struct o1C_uint *)0xC2EA6A0)->v) = 0x0;
    }
    t35 = (((struct o0_int *)0xC2EA940)->v);
    t38 = (((struct o24_int *)0xC2EA6A0)->v);
    t39 = 0xC2EA6BC;
    if ((int)((((struct o1C_int *)0xC2EA6A0)->v)) < (int)((((struct o34_int *)0xC2EA6A0)->v))) {
        t39 = 0xC2EA6D4;
    }
    t41 = *(int *)((t39 + 0x0));
    t49 = (t38 - t41);
    if ((unsigned int)(((((struct o34_int *)0xC2EA6A0)->v)) + (t38 - t41)) > (unsigned int)((((struct o24_int *)0xC2EA6A0)->v))) {
        t49 = (((((struct o24_int *)0xC2EA6A0)->v)) - ((((struct o1C_int *)0xC2EA6A0)->v)));
    }
    if ((unsigned int)((((struct o24_int *)0xC2EA6A0)->v)) < (unsigned int)t49) {
        (((struct o24_uint *)0xC2EA6A0)->v) = t49;
    }
    (((struct o0_uint *)0xC2EA940)->v) = ((((t49 & 0x3FF) << 8) << 2) | (t35 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, ((((struct o0_int *)0xC2EA940)->v)));
    kmiWriteRegister(0x44, ((((struct o8_int *)0xC2EA940)->v)));
    (((struct o18_uint *)0xC2EA6A0)->v) = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = ((((struct o1C_int *)0xC2EA6A0)->v));
    }
    return 0x0;
}
