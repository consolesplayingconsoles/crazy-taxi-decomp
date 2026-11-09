/* Straight-line functions with calls and guards (batch gen_aoj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Sound_Request(int, int);
int Start_Default_Sprite(int, int, int, int, int);
int init_GameSystem(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int init_GameSystem(void)
{
    int t8;
    int t55;
    int t56;
    int t57;
    int t60;

    (((struct o24_uint *)0xC1EE7C8)->v) = 0x0;
    if (((((struct o0_int *)0xC1EE210)->v)) != 2) {
        (((struct o28_uint *)0xC1EE7C8)->v) = 0x16E;
    } else {
        (((struct o28_uint *)0xC1EE7C8)->v) = 0xBE;
    }
    Sound_Request(0x605A9, 0x0);
    (((struct o0_uint *)0xC1EE788)->v) = 0x0;
    (((struct o4_uint *)0xC1EE788)->v) = 0x0;
    (((struct o8_uint *)0xC1EE788)->v) = 0x0;
    if (((((struct o24_int *)0xC1EE210)->v)) == 1) {
        (((struct oC_uint *)0xC1EE788)->v) = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
        t8 = GetMenuMode(0x1);
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 != 3) {
                        (((struct oC_uint *)0xC1EE788)->v) = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
                    } else {
                        (((struct oC_uint *)0xC1EE788)->v) = 0x8CA0;
                    }
                } else {
                    (((struct oC_uint *)0xC1EE788)->v) = 0x4650;
                }
            } else {
                (((struct oC_uint *)0xC1EE788)->v) = 0x2A30;
            }
        } else {
            (((struct oC_uint *)0xC1EE788)->v) = ((*(int *)((0xC089F60 + ((unsigned char)(*(signed char *)0xC28A4E9) << 2)))) * 0x3C);
        }
    } else {
        (((struct oC_uint *)0xC1EE788)->v) = ((*(int *)0xC089F6C) * 0x3C);
    }
    if (((((struct o0_int *)0xC1EE210)->v)) == 2) {
        (((struct oC_uint *)0xC1EE788)->v) = ((*(int *)(((((((struct o4_int *)0xC1EE210)->v)) << 2) + 0xC0D0DD0))) * 0x3C);
    }
    (((struct o10_uint *)0xC1EE788)->v) = 0x0;
    (((struct o14_uint *)0xC1EE788)->v) = 0x0;
    (((struct o18_uint *)0xC1EE788)->v) = 0x0;
    (((struct o1C_float *)0xC1EE788)->v) = 0.0f;
    (((struct o24_uint *)0xC1EE788)->v) = 0x0;
    (((struct o20_uint *)0xC1EE788)->v) = 0x0;
    (((struct o2C_uint *)0xC1EE788)->v) = 0x0;
    (((struct o28_uint *)0xC1EE788)->v) = 0x0;
    (((struct o30_uint *)0xC1EE788)->v) = 0x0;
    (((struct o34_float *)0xC1EE788)->v) = 0.0f;
    (((struct o38_float *)0xC1EE788)->v) = 0.0f;
    (((struct o3C_uint *)0xC1EE788)->v) = 0x0;
    (((struct o0_uint *)0xC1EE7C8)->v) = 0x1;
    (((struct o4_uint *)0xC1EE7C8)->v) = 0x0;
    (((struct o8_uint *)0xC1EE7C8)->v) = ((((struct o0_int *)0xC08AEA8)->v));
    (((struct oC_uint *)0xC1EE7C8)->v) = ((((struct o30_int *)0xC08AEA8)->v));
    (((struct o14_uint *)0xC1EE7C8)->v) = 0x1;
    (((struct o18_uint *)0xC1EE7C8)->v) = 0x0;
    (((struct o1C_uint *)0xC1EE7C8)->v) = 0x0;
    (((struct o20_uint *)0xC1EE7C8)->v) = 0x384;
    (((struct o2C_uint *)0xC1EE7C8)->v) = 0x0;
    Start_Default_Sprite(0xC1EE794, 0xC1EE798, 0xC1EE7A8, 0xC1EE7AC, 0xC1791EC);
    t55 = (((struct o0_int *)0xC1EE210)->v);
    t56 = (((struct o4_int *)0xC1EE210)->v);
    t57 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    (((struct o0_uint *)0xC2A1B28)->v) = (*(int *)(((((t57 << 1) + t57) << 2) + (*(int *)0xC2A6690))));
    t60 = *(int *)(((((t55 + t56) << 2) + 0xC0C3D04) + 0x0));
    (((struct o4_uint *)0xC2A1B28)->v) = (*(int *)(((*(int *)((((((t60 << 1) + t60) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0)));
    return 0xC2A1B28;
}
