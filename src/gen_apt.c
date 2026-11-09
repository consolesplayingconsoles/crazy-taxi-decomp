/* Straight-line functions with calls and guards (batch gen_apt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_tas(char *);
int frame_make(void);
int mpdrv_dpf(int, ...);
int mpdrv_v2p(int);
int mpdrv_frame_send(int a4, int a5, int a6);
struct o10B0_uint { char p[0x10B0]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10B4_uint { char p[0x10B4]; unsigned int v; };
struct o10B8_int { char p[0x10B8]; int v; };
struct o10B8_uint { char p[0x10B8]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10C0_uint { char p[0x10C0]; unsigned int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oFAC_int { char p[0xFAC]; int v; };
struct oFB0_int { char p[0xFB0]; int v; };
struct oFB0_uint { char p[0xFB0]; unsigned int v; };
struct oFC0_int { char p[0xFC0]; int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };


int mpdrv_frame_send(int a4, int a5, int a6)
{
    int t94;
    int t85;
    int t13;
    int t16;
    int t31;
    int t43;
    int t46;
    int t54;
    int t56;
    int t59;
    int t60;
    int t61;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t77;

    t94 = 0xFFFFFFFD;
    if (((((struct oFC0_int *)((*(int *)0xC2FA538)))->v)) != 1) {
    } else {
        t85 = 0xFFFFFFFF;
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)0xC1701BC)) == 0) {
                mpdrv_dpf(0xC1768C4);
                t77 = 0xFFFFFFFE;
            } else {
                t13 = *(int *)0xC2FA538;
                if (((((struct oFB0_int *)(t13))->v)) != ((((struct oFAC_int *)(t13))->v))) {
                    t16 = *(int *)0xC2FA538;
                    (((struct oFB0_uint *)(t16))->v) = ((((struct oFAC_int *)(t16))->v));
                    if (((((struct oFAC_int *)((*(int *)0xC2FA538)))->v)) != 0) {
                        (((struct o10C0_uint *)((*(int *)0xC2FA538)))->v) = (((int)((int)((*(int *)0xC17630C) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        (((struct o10C0_uint *)((*(int *)0xC2FA538)))->v) = 0xC3500000;
                    }
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x14)) = 0x0;
                    t31 = *(int *)0xC2FA538;
                    (((struct o80_uint *)(((((struct o10F4_int *)(t31))->v))))->v) = (((((struct o10C0_int *)(t31))->v)) | ((((struct o10D0_int *)(t31))->v)));
                    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x14)) = 0x1;
                }
                frame_make();
                t43 = *(int *)0xC2FA538;
                (((struct o10B0_uint *)(t43))->v) = (*(int *)((((((((struct o10B8_int *)(t43))->v)) << 2) + (0x10A8 + t43)) + 0x0)));
                t46 = *(int *)0xC2FA538;
                *(unsigned int *)(((((((struct o10F4_int *)(t46))->v)) + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)((((((((struct o10B8_int *)(t46))->v)) << 2) + (0x10A8 + t46)) + 0x0)))));
                *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC2FA538)))->v)) + 0x18)) = 0x1;
                (((struct oFD8_uint *)((*(int *)0xC2FA538)))->v) = 0x0;
                t54 = *(int *)0xC2FA538;
                (((struct o10B8_uint *)(t54))->v) = (((((struct o10B8_int *)(t54))->v)) ^ 0x1);
                t56 = *(int *)0xC2FA538;
                (((struct oFCC_uint *)(t56))->v) = (*(int *)((((((((struct o10B8_int *)(t56))->v)) << 2) + (0x10A8 + t56)) + 0x0)));
                t59 = *(int *)0xC2FA538;
                t60 = (((struct o10B4_int *)(t59))->v);
                (((struct o10B4_uint *)(t59))->v) = (t60 ^ 0x1);
                t61 = *(int *)0xC2FA538;
                (((struct oFDC_uint *)(t61))->v) = 0x0;
                t63 = 0xFDC;
                t64 = (t60 ^ 0x1);
                t65 = t61;
                t66 = ((*(int *)0xC2FA538) + 0x28);
                t67 = 0x0;
                for (;;) {
                    if ((int)t67 >= (int)0x18) {
                        break;
                    }
                    t65 = 0xF90;
                    t63 = (*(int *)0xC2FA538);
                    t65 = (t65 + t63);
                    t65 = (t65 + t67);
                    t64 = (*(signed char *)((t65 + 0x0)));
                    t67 = (t67 + 0x1);
                    if (t64 != 0) {
                        t63 = (*(signed char *)((t66 + 0x6)));
                        *(unsigned char *)((t66 + 0x7)) = t63;
                        t63 = 0x0;
                        *(unsigned char *)((t66 + 0x6)) = t63;
                        t65 = (*(int *)((t66 + 0x18)));
                        *(unsigned int *)((t66 + 0x1C)) = t65;
                        *(unsigned int *)((t66 + 0x18)) = t63;
                    }
                    t66 = (t66 + 0x2C);
                }
                (((struct oFC0_uint *)((*(int *)0xC2FA538)))->v) = 0x0;
                *(unsigned char *)(((*(int *)0xC1701BC) + 0x0)) = 0x0;
                t77 = 0x0;
            }
            t85 = t77;
        }
        t94 = t85;
    }
    return t94;
}
