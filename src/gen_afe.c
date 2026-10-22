/* Straight-line functions with calls and guards (batch gen_afe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
float pfPutc(int a4, int a5, int a6, int a7, float f4);

float pfPutc(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    float u7;
    float u8;
    float u9;
    float u14;
    float u15;
    float u16;
    float u17;
    float u19;
    float u20;
    int t21;
    float u22;
    float u23;
    float u24;
    float u27;
    float u30;
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
    int t56;
    float u110;
    float u90;
    float u72;

    t1 = *(int *)(((*(int *)0xC2B8CBC) + 0x8));
    if ((int)(signed char)a4 < (int)0x20) {
    } else {
        if ((int)(signed char)a4 > (int)0x7F) {
        } else {
            if (0.0f > (*(float *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x0)))) {
                u7 = *(float *)0xC26E1F4;
                u8 = (*(float *)0xC0ED250);
                u8 = u8 + u7 * ((*(float *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x4))) + (-1.0f));
                *(float *)0xC0ED250 = u8;
                u72 = u7;
            } else {
                u9 = *(float *)0xC0ED250;
                *(float *)0xC0ED1F4 = u9;
                *(float *)0xC0ED1E0 = u9;
                u14 = (*(float *)0xC0ED250);
                u14 = u14 + (*(float *)0xC26E1F4) * (*(float *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x4)));
                *(float *)0xC0ED21C = u14;
                *(float *)0xC0ED208 = u14;
                u15 = *(float *)0xC0ED254;
                *(float *)0xC0ED20C = u15;
                *(float *)0xC0ED1E4 = u15;
                u16 = *(float *)0xC0ED254;
                u17 = *(float *)0xC26E204;
                *(float *)0xC0ED220 = (u16 + u17);
                *(float *)0xC0ED1F8 = (u16 + u17);
                u19 = *(float *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                u20 = *(float *)0xC26E20C;
                *(float *)0xC0ED200 = (u19 * u20);
                *(float *)0xC0ED1EC = (u19 * u20);
                t21 = *(int *)0xC26E1E8;
                u22 = *(float *)(((t21 + (((signed char)(a4 - 32) << 2) << 2)) + 0x0));
                u23 = *(float *)(((t21 + (((signed char)(a4 - 32) << 2) << 2)) + 0x4));
                u24 = *(float *)0xC26E20C;
                *(float *)0xC0ED228 = ((u22 + u23) * u24);
                *(float *)0xC0ED214 = ((u22 + u23) * u24);
                u27 = *(float *)((0xC08D67C + ((*(int *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x8))) << 2)));
                *(float *)0xC0ED218 = u27;
                *(float *)0xC0ED1F0 = u27;
                u30 = *(float *)((0xC08D6A8 + ((*(int *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x8))) << 2)));
                *(float *)0xC0ED22C = u30;
                *(float *)0xC0ED204 = u30;
                u34 = *(float *)0xC26E1F4;
                u35 = (*(float *)0xC0ED250);
                u35 = u35 + u34 * ((*(float *)((((*(int *)0xC26E1E8) + (((signed char)(a4 - 32) << 2) << 2)) + 0x4))) + (-1.0f));
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
                    t42 = (*(int *)((t44 + 0x0)));
                    t44 = (t44 + 0x4);
                    t43 = (t43 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t44 + 0x0)));
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t44 + 0x0)));
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t44 + 0x0)));
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t44 + 0x0)));
                    t44 = (t44 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t47 + 0x0)));
                    t47 = (t47 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    t43 = (t43 + 0x4);
                    t42 = (*(int *)((t46 + 0x0)));
                    t46 = (t46 + 0x4);
                    *(unsigned int *)((t43 + 0x0)) = t42;
                    _builtin_prefetch((void *)t43);
                    t45 = (t45 - 1);
                    t43 = (t43 + 0x4);
                }
                t56 = *(int *)0xC2B8CBC;
                *(unsigned int *)(((t56 + 0x8) + 0x0)) = (((*(int *)(((t56 + 0x8) + 0x0))) & 0xFC000000) | (t43 & 0x3FFFFFF));
                u72 = u34;
            }
            u90 = u72;
        }
        u110 = u90;
    }
    return u110;
}
