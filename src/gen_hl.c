/* Straight-line functions with calls and guards (batch gen_hl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(void);
extern int vmsfb_sleep();
int vmsio_get_media_info(int a4, int a5);

int vmsio_get_media_info(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
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
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t64;
    int t60;
    int stk[13] = {0};

    t0 = *(int *)(((a4 << 2) + 0xC176948));
    t1 = kdGetDevice(t0);
    *(unsigned int *)(((int)stk + 4)) = t1;
    t2 = kdGetDeviceInfo(t0);
    t3 = *(int *)(((int)stk + 4));
    t4 = *(signed char *)((t3 + 0x0));
    if (t4 == 0) {
        t5 = ((int (*)(int))(vmsfb_sleep))(t2);
        t64 = 0xFFFFFF01;
    } else {
        t6 = *(int *)((t2 + 0x0));
        if ((t6 & 2) == 0) {
            t7 = ((int (*)(int))(vmsfb_sleep))(t2);
            t60 = 0xFFFFFF01;
        } else {
            kdRecognizeChanged(t0);
            for (;;) {
                for (;;) {
                    kdGetDevice(t0);
                    t10 = kdSetGetMediaInfo();
                    if ((int)t10 < 0) {
                        t11 = ((int (*)(void))(vmsfb_sleep))();
                        continue;
                    }
                    break;
                }
                for (;;) {
                    t12 = kdGetStatus(t0, t10);
                    if (t12 == 0) {
                        t13 = ((int (*)(void))(vmsfb_sleep))();
                        continue;
                    }
                    break;
                }
                t14 = kdGetDevice(t0);
                t15 = kdIsChanged(t0);
                if (t15 != 0) {
                    break;
                }
                t16 = *(signed char *)((t14 + 0x4));
                t17 = *(int *)((t14 + 0x8));
                if ((unsigned char)t16 != 8) {
                    if ((unsigned char)t16 != 0xFC) {
                        return 0xFFFFFF01;
                    }
                    continue;
                }
                t18 = *(int *)0xC2EE98C;
                t19 = *(int *)((t18 + 0xC));
                t20 = ((int (*)(int, int))(t19))((t17 + 0x8), 0x0);
                *(unsigned int *)((a5 + 0x0)) = (unsigned short)t20;
                t21 = *(int *)0xC2EE98C;
                t22 = *(int *)((t21 + 0xC));
                t23 = ((int (*)(int, int))(t22))((t17 + 0x8), 0x2);
                *(unsigned int *)((a5 + 0x4)) = (unsigned short)t23;
                t24 = *(int *)0xC2EE98C;
                t25 = *(int *)((t24 + 0xC));
                t26 = ((int (*)(int, int))(t25))((t17 + 0x8), 0x4);
                *(unsigned int *)((a5 + 0x8)) = (unsigned short)t26;
                t27 = *(int *)0xC2EE98C;
                t28 = *(int *)((t27 + 0xC));
                t29 = ((int (*)(int, int))(t28))((t17 + 0x8), 0x6);
                *(unsigned int *)((a5 + 0xC)) = (unsigned short)t29;
                t30 = *(int *)0xC2EE98C;
                t31 = *(int *)((t30 + 0xC));
                t32 = ((int (*)(int, int))(t31))((t17 + 0x8), 0x8);
                *(unsigned int *)((a5 + 0x10)) = (unsigned short)t32;
                t33 = *(int *)0xC2EE98C;
                t34 = *(int *)((t33 + 0xC));
                t35 = ((int (*)(int, int))(t34))((t17 + 0x8), 0xA);
                *(unsigned int *)((a5 + 0x14)) = (unsigned short)t35;
                t36 = *(int *)0xC2EE98C;
                t37 = *(int *)((t36 + 0xC));
                t38 = ((int (*)(int, int))(t37))((t17 + 0x8), 0xC);
                *(unsigned int *)((a5 + 0x18)) = (unsigned short)t38;
                t39 = *(int *)0xC2EE98C;
                t40 = *(int *)((t39 + 0xC));
                t41 = ((int (*)(int, int))(t40))((t17 + 0x8), 0x10);
                *(unsigned int *)((a5 + 0x1C)) = (unsigned short)t41;
                t42 = *(int *)0xC2EE98C;
                t43 = *(int *)((t42 + 0xC));
                t44 = ((int (*)(int, int))(t43))((t17 + 0x8), 0x12);
                *(unsigned int *)((a5 + 0x20)) = (unsigned short)t44;
                t45 = *(int *)0xC2EE98C;
                t46 = *(int *)((t45 + 0xC));
                t47 = ((int (*)(int, int))(t46))((t17 + 0x8), 0x14);
                *(unsigned int *)((a5 + 0x34)) = (unsigned short)t47;
                *(unsigned int *)((a5 + 0x38)) = 0x80;
                t48 = *(signed char *)(((t17 + 0x8) + 0xE));
                *(unsigned int *)((a5 + 0x24)) = (unsigned char)t48;
                t49 = *(signed char *)(((t17 + 0x8) + 0xF));
                *(unsigned int *)((a5 + 0x28)) = (unsigned char)t49;
                *(unsigned int *)((a5 + 0x2C)) = 0x1FF;
                t50 = kdGetDeviceInfo(t0);
                t51 = kdDevGetStorageInfo((((int)stk + 4) + 0x4), t50);
                if ((int)t51 >= 0) {
                    t52 = *(short *)(((int)stk + 14));
                    *(unsigned int *)((a5 + 0x3C)) = (unsigned short)t52;
                    t53 = *(short *)(((int)stk + 12));
                    *(unsigned int *)(((0x40 + a5) + 0x0)) = (unsigned short)t53;
                    t54 = *(short *)(((int)stk + 14));
                    t55 = (int)((int)0x200 / (int)(unsigned short)t54);
                    *(unsigned int *)(((0x44 + a5) + 0x0)) = t55;
                    t56 = *(short *)(((int)stk + 12));
                    t57 = (int)((int)0x200 / (int)(unsigned short)t56);
                    *(unsigned int *)(((0x48 + a5) + 0x0)) = t57;
                    return 0x0;
                }
                t58 = ((int (*)(void))(vmsfb_sleep))();
                return 0xFFFFFF01;
            }
            t59 = ((int (*)(void))(vmsfb_sleep))();
            t60 = 0xFFFFFF30;
        }
        t64 = t60;
    }
    return t64;
}
