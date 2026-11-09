/* Straight-line functions with calls and guards (batch gen_of): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int carSteerWheels(int a4, int a5, int a6, int a7, float f4, float f5);
struct o114_short { char p[0x114]; short v; };
struct o220_ushort { char p[0x220]; unsigned short v; };
struct o2A4_ushort { char p[0x2A4]; unsigned short v; };
struct o328_ushort { char p[0x328]; unsigned short v; };
struct o3AC_ushort { char p[0x3AC]; unsigned short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o80_ushort { char p[0x80]; unsigned short v; };


int carSteerWheels(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t3;
    float u8;
    float u11;
    float u13;
    float u15;
    float u30;
    int t35;
    int t18;
    float u20;

    if (((((struct o5C_int *)(a4))->v)) != 3) {
        (((struct o80_ushort *)((0x1A0 + a4)))->v) = ((((struct o114_short *)(a4))->v));
        (((struct o80_ushort *)(((0x1A0 + a4) + 0x84)))->v) = ((((struct o114_short *)(a4))->v));
        t3 = (((struct o114_short *)(a4))->v);
        if (((int)t3 < (int)0x600) && ((int)t3 > (int)0xFFFFFA00)) {
            u8 = 0.36999997f;
            (((struct o80_ushort *)((((0x1A0 + a4) + 0x84) + 0x84)))->v) = (int)((float)((((struct o114_short *)(a4))->v)) * u8);
            (((struct o80_ushort *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x84)))->v) = (int)((float)((((struct o114_short *)(a4))->v)) * u8);
        } else {
            u11 = 0.16f;
            if ((int)((((struct o114_short *)(a4))->v)) > 0) {
                u13 = 568.31995f;
                (((struct o80_ushort *)((((0x1A0 + a4) + 0x84) + 0x84)))->v) = (int)((-((float)(((((struct o114_short *)(a4))->v)) - 1536) * u11)) + u13);
                t18 = 0xFFFFFA00;
                u20 = u13;
            } else {
                u15 = -568.31995f;
                (((struct o80_ushort *)((((0x1A0 + a4) + 0x84) + 0x84)))->v) = (int)((-((float)(((((struct o114_short *)(a4))->v)) + 0x600) * u11)) + u15);
                t18 = 0x600;
                u20 = u15;
            }
            (((struct o80_ushort *)(((((0x1A0 + a4) + 0x84) + 0x84) + 0x84)))->v) = (int)((-((float)(((((struct o114_short *)(a4))->v)) + t18) * u11)) + u20);
        }
        t35 = 0x80;
    } else {
        u30 = 0.099999994f;
        (((struct o2A4_ushort *)(a4))->v) = (int)((float)((((struct o114_short *)(a4))->v)) * u30);
        (((struct o220_ushort *)(a4))->v) = (int)((float)((((struct o114_short *)(a4))->v)) * u30);
        (((struct o3AC_ushort *)(a4))->v) = (-((((struct o114_short *)(a4))->v)));
        (((struct o328_ushort *)(a4))->v) = (-((((struct o114_short *)(a4))->v)));
        t35 = 0x328;
    }
    return t35;
}
