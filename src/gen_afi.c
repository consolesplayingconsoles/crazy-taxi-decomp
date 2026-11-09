/* Straight-line functions with calls and guards (batch gen_afi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Drum_Fare(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int Init_Drum_Fare(void)
{
    int t0;
    int t2;

    (((struct o1C_uint *)0xC2A8E88)->v) = 0x0;
    (((struct o20_uint *)0xC2A8E88)->v) = 0x0;
    (((struct o24_uint *)0xC2A8E88)->v) = 0x0;
    (((struct o2C_uint *)0xC2A8E88)->v) = 0x0;
    (((struct o30_float *)0xC2A8E88)->v) = 36.0f;
    (((struct o10_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o14_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o28_uint *)0xC2A8E88)->v) = 0x1;
    (((struct o0_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o4_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o8_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o24_uint *)0xC2A7E90)->v) = 0x0;
    (((struct o14_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o18_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o1C_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o28_float *)0xC2A7E90)->v) = 0.299999982f;
    (((struct o20_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o30_uint *)0xC2A7E90)->v) = 0x2006;
    (((struct o0_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o4_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o8_float *)0xC2A7E90)->v) = 0.25f;
    (((struct oC_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o10_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A7E90)->v) = 0x2;
    (((struct o0_float *)0xC2A8890)->v) = 0.0f;
    (((struct o4_float *)0xC2A8890)->v) = 0.0f;
    (((struct o8_float *)0xC2A8890)->v) = 0.279999971f;
    (((struct oC_float *)0xC2A8890)->v) = 1.0f;
    (((struct o10_float *)0xC2A8890)->v) = 1.0f;
    (((struct o14_float *)0xC2A8890)->v) = 0.0f;
    (((struct o18_float *)0xC2A8890)->v) = 0.0f;
    (((struct o1C_float *)0xC2A8890)->v) = 1.0f;
    (((struct o20_float *)0xC2A8890)->v) = 1.0f;
    (((struct o24_uint *)0xC2A8890)->v) = 0x0;
    (((struct o30_uint *)0xC2A8890)->v) = 0xA;
    (((struct o28_float *)0xC2A8890)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A8890)->v) = 0x2;
    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2A8E34 + (t0 << 2))) = 0x0;
        if ((int)t0 >= (int)0x3) {
            *(unsigned int *)((0xC2A8E50 + (t0 << 2))) = 0xA;
        } else {
            *(unsigned int *)((0xC2A8E50 + (t0 << 2))) = 0x0;
        }
        t2 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)((0xC2A8E6C + t2)) = 0x1;
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    (((struct o8_uint *)0xC2A8E88)->v) = 0x2;
    (((struct o0_uint *)0xC2A8E88)->v) = 0x7;
    (((struct o4_uint *)0xC2A8E88)->v) = 0x3;
    return t2;
}
