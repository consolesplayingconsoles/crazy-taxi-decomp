/* Straight-line functions with calls and guards (batch gen_ahj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Start_TimeUp(void);
int hudShowPickUpNag(void);
int GS_GameMain(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int GS_GameMain(void)
{
    int t23;
    int t33;
    int t111;
    int t88;
    int t59;
    int t76;
    int t1;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t45;
    int t100;

    if ((((((struct o4_int *)0xC1EE788)->v)) == 1) && (t1 = (((struct o4_int *)0xC1EE7C8)->v), (int)t1 > 0)) {
        if (((((struct o0_int *)0xC1EE210)->v)) != 2) {
            (((struct o4_uint *)0xC1EE7C8)->v) = (((((struct o4_int *)0xC1EE7C8)->v)) - 1);
        } else {
            (((struct oC_uint *)0xC1EE7C8)->v) = 0x0;
        }
    }
    if (((((struct o38_float *)0xC1EE788)->v)) > 1200.0f) {
        (((struct o38_float *)0xC1EE788)->v) = (((((struct o38_float *)0xC1EE788)->v)) - 1200.0f);
        (((struct o3C_uint *)0xC1EE788)->v) = (((((struct o3C_int *)0xC1EE788)->v)) + 0x1);
        (((struct o0_uint *)0xC1EE7C8)->v) = 0x1;
    }
    (((struct o8_uint *)0xC1EE788)->v) = (((((struct o8_int *)0xC1EE788)->v)) + 0x1);
    t23 = (((struct o0_int *)0xC1EE210)->v);
    if (((*(int *)0xC0E5338) == 0) && ((t24 = (((struct o24_int *)0xC1EE7C8)->v), t24 == 1) && ((t25 = (((struct o0_int *)0xC1EE788)->v), t25 == 1) && ((t26 = (((struct oC_int *)0xC1EE788)->v), (int)t26 > 0) && ((t23 != 2) || ((t23 == 2) && ((t27 = (((struct o4_int *)0xC1EE210)->v), t27 != 0) && (t28 = *(int *)0xC2A9904, t28 == 0)))))))) {
        (((struct oC_uint *)0xC1EE788)->v) = (((((struct oC_int *)0xC1EE788)->v)) - 1);
    }
    t33 = (((struct o0_int *)0xC1EE210)->v);
    t111 = t33;
    if (t33 != 2) {
        if ((((((struct oC_int *)0xC1EE788)->v)) == 0) && (t45 = (((struct o24_int *)0xC1EE7C8)->v), t45 != 2)) {
            (((struct o24_uint *)0xC1EE7C8)->v) = 0x2;
            (((struct o28_uint *)0xC1EE7C8)->v) = 0x96;
            Start_TimeUp();
            (((struct o0_uint *)0xC1EE788)->v) = 0x3;
            t100 = 0x3;
        } else {
            t88 = 0x5C;
            if ((int)((((struct o1C_int *)0xC1EE7C8)->v)) <= (int)0x1) {
                t59 = (((struct o4_int *)0xC1EE788)->v);
                t76 = t59;
                if (t59 != 1) {
                    if ((int)((((struct o2C_int *)0xC1EE7C8)->v)) >= (int)((((struct o20_int *)0xC1EE7C8)->v))) {
                        hudShowPickUpNag();
                        (((struct o20_uint *)0xC1EE7C8)->v) = 0x258;
                        (((struct o2C_uint *)0xC1EE7C8)->v) = 0x0;
                    }
                    (((struct o2C_uint *)0xC1EE7C8)->v) = (((((struct o2C_int *)0xC1EE7C8)->v)) + 0x1);
                    t76 = 0x60;
                }
                t88 = t76;
            }
            t100 = t88;
        }
        t111 = t100;
    }
    return t111;
}
