/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
float pfPutc(int a4, int a5, int a6, int a7, float f4);

float pfPutc(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t1;
    int t2;
    float u3;
    int t4;
    float u5;
    float u6;
    float u7;
    float u8;
    float u9;
    int t10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    float u17;
    int t18;
    float u19;
    float u20;
    int t21;
    float u22;
    float u23;
    float u24;
    int t25;
    int t26;
    float u27;
    int t28;
    int t29;
    float u30;
    int t31;
    float u32;
    float u33;
    float u34;
    float u35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    float u110;
    float u90;
    float u72;

    t0 = *(int *)0xC2B8CBC;
    t1 = *(int *)((t0 + 0x8));
    if ((int)(signed char)a4 < (int)0x20) {
    } else {
        if ((int)(signed char)a4 > (int)0x7F) {
        } else {
            t2 = *(int *)0xC26E1E8;
            u3 = *(float *)(((t2 + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
            if (0.0f > u3) {
                t4 = *(int *)0xC26E1E8;
                u5 = *(float *)0xC0ED250;
                u6 = *(float *)(((t4 + (((signed char)(a4 - 32) << 2) << 2)) + 0x4));
                u7 = *(float *)0xC26E1F4;
                u8 = u5;
                u8 = u8 + u7 * (u6 + (-1.0f));
                *(float *)0xC0ED250 = u8;
                u72 = u7;
            } else {
                u9 = *(float *)0xC0ED250;
                *(float *)0xC0ED1F4 = u9;
                *(float *)0xC0ED1E0 = u9;
                t10 = *(int *)0xC26E1E8;
                u11 = *(float *)0xC0ED250;
                u12 = *(float *)0xC26E1F4;
                u13 = *(float *)(((t10 + (((signed char)(a4 - 32) << 2) << 2)) + 0x4));
                u14 = u11;
                u14 = u14 + u12 * u13;
                *(float *)0xC0ED21C = u14;
                *(float *)0xC0ED208 = u14;
                u15 = *(float *)0xC0ED254;
                *(float *)0xC0ED20C = u15;
                *(float *)0xC0ED1E4 = u15;
                u16 = *(float *)0xC0ED254;
                u17 = *(float *)0xC26E204;
                *(float *)0xC0ED220 = (u16 + u17);
                *(float *)0xC0ED1F8 = (u16 + u17);
                t18 = *(int *)0xC26E1E8;
                u19 = *(float *)(((t18 + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                u20 = *(float *)0xC26E20C;
                *(float *)0xC0ED200 = (u19 * u20);
                *(float *)0xC0ED1EC = (u19 * u20);
                t21 = *(int *)0xC26E1E8;
                u22 = *(float *)(((t21 + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                u23 = *(float *)(((t21 + (((signed char)(a4 - 32) << 2) << 2)) + 0x4));
                u24 = *(float *)0xC26E20C;
                *(float *)0xC0ED228 = ((u22 + u23) * u24);
                *(float *)0xC0ED214 = ((u22 + u23) * u24);
                t25 = *(int *)0xC26E1E8;
                t26 = *(int *)(((t25 + (((signed char)(a4 - 32) << 2) << 2)) + 0x8));
                u27 = *(float *)((0xC08D67C + (t26 << 2)));
                *(float *)0xC0ED218 = u27;
                *(float *)0xC0ED1F0 = u27;
                t28 = *(int *)0xC26E1E8;
                t29 = *(int *)(((t28 + (((signed char)(a4 - 32) << 2) << 2)) + 0x8));
                u30 = *(float *)((0xC08D6A8 + (t29 << 2)));
                *(float *)0xC0ED22C = u30;
                *(float *)0xC0ED204 = u30;
                t31 = *(int *)0xC26E1E8;
                u32 = *(float *)0xC0ED250;
                u33 = *(float *)(((t31 + (((signed char)(a4 - 32) << 2) << 2)) + 0x4));
                u34 = *(float *)0xC26E1F4;
                u35 = u32;
                u35 = u35 + u34 * (u33 + (-1.0f));
                *(float *)0xC0ED250 = u35;
                *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
                *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
                t36 = ((unsigned int)((unsigned int)t1 >> 16) >> 8);
                t37 = 0x8;
                t38 = 0xC0ED1C0;
                t39 = ((0x3FFFFFF & t1) | 0xE0000000);
                for (;;) {
                    if (t37 == 0) {
                        break;
                    }
                    t40 = *(int *)((t38 + 0x0));
                    t38 = (t38 + 0x4);
                    t36 = t40;
                    t37 = (t37 - 1);
                    *(unsigned int *)((t39 + 0x0)) = t36;
                    t39 = (t39 + 0x4);
                }
                _builtin_prefetch((void *)((0x3FFFFFF & t1) | 0xE0000000));
                t41 = 0xFF000038;
                t42 = t36;
                t43 = (((0x3FFFFFF & t1) | 0xE0000000) + 0x20);
                t44 = 0xC0ED1E0;
                t45 = 0x4;
                t46 = 0xC0ED240;
                t47 = 0xC0ED230;
                for (;;) {
                    if (t45 == 0) {
                        break;
                    }
                    t41 = t45;
                    if (t41 == 1) {
                        *(unsigned int *)((t43 + 0x0)) = 0xF0000000;
                    } else {
                        *(unsigned int *)((t43 + 0x0)) = 0xE0000000;
                    }
                    t49 = *(int *)((t44 + 0x0));
                    t42 = t49;
                    t44 = (t44 + 0x4);
                    t43 = (t43 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t50 = *(int *)((t44 + 0x0));
                    t42 = t50;
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t51 = *(int *)((t44 + 0x0));
                    t42 = t51;
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t52 = *(int *)((t44 + 0x0));
                    t42 = t52;
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t53 = *(int *)((t44 + 0x0));
                    t42 = t53;
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t54 = *(int *)((t47 + 0x0));
                    t42 = t54;
                    t47 = (t47 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t55 = *(int *)((t46 + 0x0));
                    t42 = t55;
                    t46 = (t46 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    _builtin_prefetch((void *)t43);
                    t45 = (t45 - 1);
                    t43 = (t43 + 0x4);
                }
                t56 = *(int *)0xC2B8CBC;
                t57 = *(int *)(((t56 + 0x8) + 0x0));
                *(unsigned int *)(((t56 + 0x8) + 0x0)) = ((t57 & 0xFC000000) | (t43 & 0x3FFFFFF));
                u72 = u34;
            }
            u90 = u72;
        }
        u110 = u90;
    }
    return u110;
}
