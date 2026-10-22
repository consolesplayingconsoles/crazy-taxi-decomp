/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int copy_device(void);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_get_gunmode(void);
int trigger(void);
int kdRecvFrame(void);

int kdRecvFrame(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t11;
    int t12;
    int t13;
    int t16;
    int t47;
    int t17;
    int t18;
    int t19;
    int t23;
    int t27;
    int t28;
    int t41;
    int t42;
    int t43;
    int t29;
    int t35;
    int t36;
    int t37;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t80;
    int t81;
    int t82;
    int t48;
    int t50;
    int t52;
    int t25;
    int t21;
    int t45;
    int t39;
    int t75;
    int t76;
    int t78;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = mpdrv_frame_recv_pre();
    if (t1 == -2) {
        t2 = *(int *)0xC2FA538;
        *(unsigned int *)((t2 + 0x10E8)) = 0x1;
    } else {
        if ((int)t1 < 0) {
            t3 = *(int *)0xC2EC28C;
            if (t3 != 0) {
                t4 = *(int *)0xC2EC25C;
                t5 = ((int (*)(int, int, int, int))(t3))(0x2, 0xFFFFFFF8, t4, t1);
            }
        } else {
            mpdrv_frame_recv_main();
            t10 = *(int *)0xC2EC4D8;
            t11 = *(int *)0xA05F810C;
            t12 = *(int *)0xA05F80DC;
            t13 = *(short *)(((0xC2EC288 + (t10 << 1)) + 0x0));
            *(unsigned short *)(((0xC2EC284 + (t10 << 1)) + 0x0)) = ((t11 & 0x3FF) + ((unsigned short)t13 * (unsigned short)(t12 & 0x3FF)));
            copy_device();
            mpdrv_frame_recv_post();
            t16 = mpdrv_get_gunmode();
            t47 = t16;
            if (t16 != 0) {
                t17 = *(int *)0xC2EC290;
                if (t17 != 0) {
                    t18 = ((int (*)(void))(t17))();
                    if (t18 != 0) {
                        t19 = trigger();
                        *(unsigned int *)0xC2EC4E4 = t19;
                        t21 = 0xC2EC4E4;
                    }
                    t25 = t21;
                } else {
                    t23 = trigger();
                    *(unsigned int *)0xC2EC4E4 = t23;
                    t25 = 0xC2EC4E4;
                }
                t27 = *(int *)0xC2FA538;
                t28 = *(int *)((t27 + 0xFBC));
                t41 = 0xFBC;
                t42 = t25;
                t43 = t28;
                if (t28 != 0) {
                    t29 = *(int *)0xC2EC4E4;
                    t35 = 0xFBC;
                    t36 = 0xC2EC4E4;
                    t37 = t29;
                    if (t29 != 0) {
                        t30 = *(int *)0xA05F8040;
                        *(unsigned int *)0xC2EC4DC = t30;
                        t31 = *(int *)0xC2FA538;
                        t32 = *(int *)((0xFBC + t31));
                        *(unsigned int *)0xA05F8040 = t32;
                        t33 = *(int *)0xA05F80E8;
                        *(unsigned int *)0xA05F80E8 = (t33 | 0x8);
                        *(unsigned int *)0xC2EC4E0 = 0x1;
                        t34 = *(int *)0xC2EC500;
                        *(unsigned int *)0xC2EC500 = (t34 + 0x1);
                        t35 = (t33 | 0x8);
                        t36 = 0xC2EC4E0;
                        t37 = 0xC2EC4DC;
                        t39 = 0xC2EC500;
                    }
                    t41 = t35;
                    t42 = t36;
                    t43 = t37;
                    t45 = t39;
                }
                t47 = t41;
                t48 = t42;
                t50 = t43;
                t52 = t45;
            }
            t54 = t47;
            t55 = t48;
            t56 = t50;
            t57 = t52;
            t58 = 0x0;
            t59 = 0xC2EC294;
            for (;;) {
                if ((int)t58 >= (int)0x30) {
                    break;
                }
                t60 = *(int *)((t59 + 0x8));
                if (t60 != 0) {
                    t61 = *(int *)((t59 + 0x4));
                    t62 = *(int *)((t59 + 0x0));
                    t57 = t62;
                    t63 = kdGetStatus(t57, t61);
                    t54 = t63;
                    if (t54 != 0) {
                        t64 = *(int *)((t59 + 0x8));
                        *(unsigned int *)((t59 + 0x8)) = 0x0;
                        t65 = t64;
                        t66 = *(int *)((t59 + 0x0));
                        t57 = t66;
                        t67 = kdGetDeviceInfo(t57);
                        t54 = t67;
                        t68 = t54;
                        t69 = *(int *)((t59 + 0x0));
                        t57 = t69;
                        t70 = kdGetDevice(t57);
                        t54 = t70;
                        t71 = *(int *)((t59 + 0x4));
                        t55 = t65;
                        t72 = *(int *)((t59 + 0x0));
                        t57 = t72;
                        t73 = ((int (*)(int, int, int, int))(t55))(t57, t71, t54, t68);
                        t54 = t73;
                    }
                } else {
                    t75 = t55;
                    t76 = t56;
                    t78 = t57;
                }
                t55 = t75;
                t59 = (t59 + 0xC);
                t56 = t76;
                t57 = t78;
                t58 = (t58 + 0x1);
            }
            t80 = *(int *)0xC2FA538;
            *(unsigned int *)((t80 + 0x10E8)) = 0x0;
            t81 = *(int *)0xC2EC4D8;
            *(unsigned int *)0xC2EC4D8 = (t81 ^ 0x1);
            t82 = *(int *)0xC2EC258;
            *(unsigned int *)0xC2EC258 = (t82 + 0x1);
        }
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t1;
}
