/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetVertexRenderState(int a4, int a5, float f4);
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct o98_int { char p[0x98]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int kmSetVertexRenderState(int a4, int a5, float f4)
{
    int t19;
    int t22;
    int t27;
    int t105;

    (((struct o0_uint *)0xC2EAB9C)->v) = ((((struct o90_int *)(a4))->v));
    (((struct o10_uint *)0xC2EAB9C)->v) = ((((struct o94_int *)(a4))->v));
    (((struct o14_uint *)0xC2EAB9C)->v) = ((((struct o98_int *)(a4))->v));
    if ((((unsigned int)((unsigned int)((((struct o0_int *)0xC2EAB9C)->v)) >> 16) >> 8) & 7) == 0) {
        (((struct o14_uint *)0xC2EAB9C)->v) = ((((((struct o14_int *)0xC2EAB9C)->v)) & 0x3FFFFFF) | 0x20000000);
    }
    (((struct o18_uint *)0xC2EAB9C)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o20_float *)0xC2EAB9C)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o24_float *)0xC2EAB9C)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o28_float *)0xC2EAB9C)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o2C_float *)0xC2EAB9C)->v) = ((((struct o7C_float *)(a4))->v));
    (((struct o30_float *)0xC2EAB9C)->v) = ((((struct o80_float *)(a4))->v));
    (((struct o34_float *)0xC2EAB9C)->v) = ((((struct o84_float *)(a4))->v));
    (((struct o38_float *)0xC2EAB9C)->v) = ((((struct o88_float *)(a4))->v));
    (((struct o3C_float *)0xC2EAB9C)->v) = ((((struct o8C_float *)(a4))->v));
    (((struct o0_uint *)0xC2EABDC)->v) = ((((struct oA0_int *)(a4))->v));
    t19 = (((struct o0_int *)0xC2EAB9C)->v);
    (((struct o30_uint *)0xC2EABDC)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC178344)));
    (((struct o0_uint *)0xC178304)->v) = ((((struct o0_int *)0xC2EAB9C)->v));
    t22 = (((struct o0_int *)0xC2EAB9C)->v);
    *(unsigned int *)0xC2B8D1C = ((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC178304)->v) = ((((struct o0_int *)0xC2EABDC)->v));
        t105 = 0xC178324;
    } else {
        (((struct o4_uint *)0xC178304)->v) = ((((struct o10_int *)0xC2EAB9C)->v));
        (((struct o8_uint *)0xC178304)->v) = ((((struct o14_int *)0xC2EAB9C)->v));
        (((struct oC_uint *)0xC178304)->v) = ((((struct o18_int *)0xC2EAB9C)->v));
        t27 = (((struct o30_int *)0xC2EABDC)->v);
        t105 = 0xC178324;
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    if (t27 != 3) {
                        if (t27 != 4) {
                            t105 = 0xC178314;
                            if (t27 == 16) {
                                (((struct o10_uint *)0xC178304)->v) = ((((((int)(((((struct o20_float *)0xC2EAB9C)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)0xC2EAB9C)->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)0xC2EAB9C)->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)0xC2EAB9C)->v)) * 255.0f));
                                (((struct o14_uint *)0xC178304)->v) = ((((((int)(((((struct o30_float *)0xC2EAB9C)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)0xC2EAB9C)->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)0xC2EAB9C)->v)) * 255.0f) << 8)) | (int)(((((struct o3C_float *)0xC2EAB9C)->v)) * 255.0f));
                                t105 = 0xC178324;
                            }
                        } else {
                            (((struct o10_uint *)0xC178304)->v) = ((((struct o4_int *)0xC2EABDC)->v));
                            (((struct o14_uint *)0xC178304)->v) = ((((struct o8_int *)0xC2EABDC)->v));
                            (((struct o20_uint *)0xC178304)->v) = ((((struct o20_int *)0xC2EAB9C)->v));
                            (((struct o24_uint *)0xC178304)->v) = ((((struct o24_int *)0xC2EAB9C)->v));
                            (((struct o28_uint *)0xC178304)->v) = ((((struct o28_int *)0xC2EAB9C)->v));
                            (((struct o2C_uint *)0xC178304)->v) = ((((struct o2C_int *)0xC2EAB9C)->v));
                            (((struct o30_uint *)0xC178304)->v) = ((((struct o10_int *)0xC2EABDC)->v));
                            (((struct o34_uint *)0xC178304)->v) = ((((struct o14_int *)0xC2EABDC)->v));
                            (((struct o38_uint *)0xC178304)->v) = ((((struct o18_int *)0xC2EABDC)->v));
                            (((struct o3C_uint *)0xC178304)->v) = ((((struct o1C_int *)0xC2EABDC)->v));
                            t105 = 0xC178344;
                        }
                    } else {
                        (((struct o10_uint *)0xC178304)->v) = ((((struct o4_int *)0xC2EABDC)->v));
                        (((struct o14_uint *)0xC178304)->v) = ((((struct o8_int *)0xC2EABDC)->v));
                        t105 = 0xC178324;
                    }
                } else {
                    (((struct o20_uint *)0xC178304)->v) = ((((struct o20_int *)0xC2EAB9C)->v));
                    (((struct o24_uint *)0xC178304)->v) = ((((struct o24_int *)0xC2EAB9C)->v));
                    (((struct o28_uint *)0xC178304)->v) = ((((struct o28_int *)0xC2EAB9C)->v));
                    (((struct o2C_uint *)0xC178304)->v) = ((((struct o2C_int *)0xC2EAB9C)->v));
                    (((struct o30_uint *)0xC178304)->v) = ((((struct o30_int *)0xC2EAB9C)->v));
                    (((struct o34_uint *)0xC178304)->v) = ((((struct o34_int *)0xC2EAB9C)->v));
                    (((struct o38_uint *)0xC178304)->v) = ((((struct o38_int *)0xC2EAB9C)->v));
                    (((struct o3C_uint *)0xC178304)->v) = ((((struct o3C_int *)0xC2EAB9C)->v));
                    t105 = 0xC178344;
                }
            } else {
                (((struct o10_uint *)0xC178304)->v) = ((((struct o20_int *)0xC2EAB9C)->v));
                (((struct o14_uint *)0xC178304)->v) = ((((struct o24_int *)0xC2EAB9C)->v));
                (((struct o18_uint *)0xC178304)->v) = ((((struct o28_int *)0xC2EAB9C)->v));
                (((struct o1C_uint *)0xC178304)->v) = ((((struct o2C_int *)0xC2EAB9C)->v));
                t105 = 0xC178324;
            }
        }
    }
    (((struct o0_uint *)0xC2B8CA8)->v) = (*(int *)0xC2B8D1C);
    (((struct o4_uint *)0xC2B8CA8)->v) = (t105 - 0xC178304);
    return 0x0;
}
