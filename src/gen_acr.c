/* Straight-line functions with calls and guards (batch gen_acr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseReq(int, int, float);
float nlLength(int, int, float, float);
float gdc_CoursePointLoadReq(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);

float gdc_CoursePointLoadReq(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float u12;
    int t23;
    float u27;
    float u28;
    float u29;
    int t14;
    int t30;
    int t31;
    int t32;
    float u35;
    int t37;
    int t57;
    int t58;
    int t59;
    float u62;
    int t64;
    int t85;
    int t86;
    int t87;
    float u88;
    float u89;
    float u90;
    int t92;
    int t74;
    float u81;
    float u82;
    float u83;
    int t47;
    float u54;
    float u55;
    float u56;
    float u10;
    float u11;
    int t24;
    int t25;
    int t18;
    float u19;
    float u20;
    float u21;
    float u33;
    float u34;
    int t41;
    float u42;
    float u43;
    float u44;
    float u60;
    float u61;
    int t68;
    float u69;
    float u70;
    float u71;
    int t96;
    float u97;
    float u98;
    float u99;
    int stk[25];

    stk[13] = a8;
    stk[14] = a9;
    stk[15] = a10;
    stk[16] = a11;
    t2 = *(int *)0xC1EE800;
    if ((*(int *)0xC1EE234) == 0) {
        t4 = *(int *)0xC1EE20C;
        if (t4 == 1) {
            t5 = t4;
            t6 = 0xC1EE234;
            t7 = 0xC1EE20C;
            t8 = 0x0;
            t9 = t2;
            u12 = f4;
            for (;;) {
                if ((int)t8 >= (int)(*(int *)0xC26E104)) {
                    break;
                }
                t23 = t5;
                u27 = u10;
                u28 = u11;
                u29 = u12;
                if (((int)t8 >= (int)0x9) && (t7 = 0x1C, (int)t8 <= (int)t7)) {
                    t24 = t6;
                    t25 = t7;
                } else {
                    t7 = t9;
                    t6 = ((int)stk + 4);
                    t7 = (t7 + 0x4);
                    t5 = 0xC;
                    t14 = 0;
                    for (; t14 < (int)t5; t14++) *(unsigned char *)(t6 + t14) = *(unsigned char *)(t7 + t14);
                    t5 = 0x4;
                    *(float *)((((int)stk + 4) + t5)) = 0.0f;
                    u10 = (nlLength(((int)stk + 4), (((int)stk + 4) + 0x30), u12, f5));
                    u11 = (*(float *)((t9 + 0x0)));
                    u12 = u10;
                    u11 = (u11 + f4);
                    if (u11 > u12) {
                        t5 = (gdc_CourseReq(t8, 0x0, u12));
                        t18 = t5;
                    } else {
                        u19 = u10;
                        u20 = u11;
                        u21 = u12;
                    }
                    t23 = t18;
                    u27 = u19;
                    u28 = u20;
                    u29 = u21;
                }
                u10 = u27;
                u11 = u28;
                u12 = u29;
                t5 = t23;
                t6 = t24;
                t8 = (t8 + 0x1);
                t7 = t25;
                t9 = (t9 + 0x14);
            }
            t47 = t5;
            u54 = u10;
            u55 = u11;
            u56 = u12;
        } else {
            t30 = t4;
            t31 = 0x0;
            t32 = t2;
            u35 = f4;
            for (;;) {
                if ((int)t31 >= (int)(*(int *)0xC26E104)) {
                    break;
                }
                t30 = 0xC;
                t37 = 0;
                for (; t37 < (int)t30; t37++) *(unsigned char *)(((int)stk + 4) + t37) = *(unsigned char *)((t32 + 0x4) + t37);
                t30 = 0x4;
                *(float *)((((int)stk + 4) + t30)) = 0.0f;
                u33 = (nlLength(((int)stk + 4), (((int)stk + 4) + 0x30), u35, f5));
                u34 = (*(float *)((t32 + 0x0)));
                u35 = u33;
                u34 = (u34 + f4);
                if (u34 > u35) {
                    t30 = (gdc_CourseReq(t31, 0x0, u35));
                    t41 = t30;
                } else {
                    u42 = u33;
                    u43 = u34;
                    u44 = u35;
                }
                u33 = u42;
                u34 = u43;
                u35 = u44;
                t30 = t41;
                t31 = (t31 + 0x1);
                t32 = (t32 + 0x14);
            }
            t47 = t30;
            u54 = u33;
            u55 = u34;
            u56 = u35;
        }
        t74 = t47;
        u81 = u54;
        u82 = u55;
        u83 = u56;
    } else {
        t57 = 0x34;
        t58 = 0x0;
        t59 = t2;
        u62 = f4;
        for (;;) {
            if ((int)t58 >= (int)(*(int *)0xC26E104)) {
                break;
            }
            t57 = 0xC;
            t64 = 0;
            for (; t64 < (int)t57; t64++) *(unsigned char *)(((int)stk + 4) + t64) = *(unsigned char *)((t59 + 0x4) + t64);
            t57 = 0x4;
            *(float *)((((int)stk + 4) + t57)) = 0.0f;
            u60 = (nlLength(((int)stk + 4), (((int)stk + 4) + 0x30), u62, f5));
            u61 = (*(float *)((t59 + 0x0)));
            u62 = u60;
            u61 = (u61 + f4);
            if (u61 > u62) {
                t57 = (gdc_CourseReq(t58, 0x0, u62));
                t68 = t57;
            } else {
                u69 = u60;
                u70 = u61;
                u71 = u62;
            }
            u60 = u69;
            u61 = u70;
            u62 = u71;
            t57 = t68;
            t58 = (t58 + 0x1);
            t59 = (t59 + 0x14);
        }
        t74 = t57;
        u81 = u60;
        u82 = u61;
        u83 = u62;
    }
    t85 = t74;
    t86 = (*(int *)0xC1EE804);
    t87 = 0x0;
    u88 = u81;
    u89 = u82;
    u90 = u83;
    for (;;) {
        if ((int)t87 >= (int)(*(int *)0xC26E108)) {
            break;
        }
        t85 = 0xC;
        t92 = 0;
        for (; t92 < (int)t85; t92++) *(unsigned char *)(((int)stk + 4) + t92) = *(unsigned char *)((t86 + 0x4) + t92);
        t85 = 0x4;
        *(float *)((((int)stk + 4) + t85)) = 0.0f;
        u88 = (nlLength(((int)stk + 4), (((int)stk + 4) + 0x30), u90, f5));
        u89 = (*(float *)((t86 + 0x0)));
        u90 = u88;
        u89 = (u89 + f4);
        if (u89 > u90) {
            t85 = (gdc_CourseReq(t87, 0x1, u90));
            t96 = t85;
        } else {
            u97 = u88;
            u98 = u89;
            u99 = u90;
        }
        u88 = u97;
        u89 = u98;
        u90 = u99;
        t85 = t96;
        t87 = (t87 + 0x1);
        t86 = (t86 + 0x14);
    }
    return u88;
}
