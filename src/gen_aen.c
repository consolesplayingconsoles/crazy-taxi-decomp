/* Straight-line functions with calls and guards (batch gen_aen): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetFont(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int pfSetFont(int a4)
{
    int t1;
    int t6;
    float u8;
    int t16;

    t1 = 0x0;
    if (((int)a4 >= 0) && ((int)a4 < (int)0x4)) {
        t1 = a4;
    }
    (((struct o4_uint *)0xC26E1E8)->v) = t1;
    t6 = *(int *)(((((((*(int *)(((t1 << 2) + 0xC0ED258))) + (*(int *)0xC2B3184)) << 2) << 1) + (*(int *)0xC2AEC84)) + 0x4));
    (((struct o0_uint *)0xC26E1E8)->v) = (*(int *)(((t1 << 2) + 0xC0ED278)));
    (((struct o24_float *)0xC26E1E8)->v) = (*(float *)(((t1 << 2) + 0xC0ED288)));
    u8 = *(float *)(((t1 << 2) + 0xC0ED298));
    (((struct o20_float *)0xC26E1E8)->v) = u8;
    (((struct o1C_float *)0xC26E1E8)->v) = (((((struct o10_float *)0xC26E1E8)->v)) * u8);
    (((struct o0_uint *)0xC0ED1C8)->v) = (((((struct o0_int *)0xC0ED1C8)->v)) & 0xFFFFFFC0);
    (((struct o0_uint *)0xC0ED1C8)->v) = (((((struct o0_int *)0xC0ED1C8)->v)) | (*(int *)(((t1 << 2) + 0xC0ED268))));
    t16 = 0xC0ED268;
    if (((((struct o8_int *)0xC26E1E8)->v)) != 0) {
        (((struct o1C_float *)0xC26E1E8)->v) = (((((struct o1C_float *)0xC26E1E8)->v)) * 0.5f);
        t16 = 0xC03112C;
    }
    (((struct o4_uint *)0xC0ED1C8)->v) = (*(int *)((((t6 * 0x3C) + (*(int *)0xC2B29C0)) + 0x34)));
    return t16;
}
