/* Straight-line functions with calls and guards (batch gen_hs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int copy_device(void);
int kdRecvFrame(void);
extern int mpdrv_frame_send();
int kdSendFrame(int a4, int a5);

int kdSendFrame(int a4, int a5)
{
    int t0;
    int t149;
    int t1;
    int t2;
    int t8;
    int t3;
    int t4;
    int t10;
    int t11;
    int t12;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t112;
    int t114;
    int t115;
    int t116;
    int t117;
    int t124;
    int t125;
    int t126;
    int t127;
    int t129;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t145;

    t0 = *(int *)0xC2EC4D4;
    t149 = 0x0;
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC2EC4EC;
        *(unsigned int *)0xC2EC4E8 = (t1 - 1);
        *(unsigned int *)0xC2EC4EC = 0x0;
        t2 = *(int *)0xC2EC4E4;
        t8 = a5;
        if (t2 != 0) {
            t3 = *(int *)0xA05F80C4;
            *(unsigned int *)0xC2EC4F0 = (t3 & 0x3FF);
            t4 = *(int *)0xA05F80C4;
            *(unsigned int *)0xC2EC4F4 = ((short)((unsigned int)t4 >> 16) & 0x3FF);
            t8 = 0xA05F80C4;
        }
        *(unsigned int *)0xC2EC4E4 = 0x0;
        t10 = *(int *)0xC2EC4E0;
        if (t10 != 0) {
            t11 = *(int *)0xC2EC4DC;
            *(unsigned int *)0xA05F8040 = t11;
            t12 = *(int *)0xA05F80E8;
            *(unsigned int *)0xA05F80E8 = (t12 & 0xFFFFFFF7);
            *(unsigned int *)0xC2EC4E0 = 0x0;
        }
        t18 = *(int *)0xA05F6908;
        if ((t18 & 0xF00) != 0) {
            t19 = *(int *)0xA05F6908;
            if ((t19 & 0x800) != 0) {
                t20 = *(int *)0xC2EC270;
                *(unsigned int *)0xC2EC270 = (t20 + 0x1);
                t21 = *(int *)0xC2EC28C;
                if (t21 != 0) {
                    t22 = *(int *)0xC2EC28C;
                    t23 = *(int *)0xA05F6908;
                    t24 = *(int *)0xC2EC25C;
                    t25 = ((int (*)(int, int, int, int))(t22))(0x1, 0xFFFFFFFE, t24, t23);
                }
            }
            t42 = *(int *)0xA05F6908;
            if ((t42 & 0x400) != 0) {
                t43 = *(int *)0xC2EC274;
                *(unsigned int *)0xC2EC274 = (t43 + 0x1);
                t44 = *(int *)0xC2EC28C;
                if (t44 != 0) {
                    t45 = *(int *)0xC2EC28C;
                    t46 = *(int *)0xA05F6908;
                    t47 = *(int *)0xC2EC25C;
                    t48 = ((int (*)(int, int, int, int))(t45))(0x1, 0xFFFFFFFD, t47, t46);
                }
            }
            t65 = *(int *)0xA05F6908;
            if ((t65 & 0x200) != 0) {
                t66 = *(int *)0xC2EC278;
                *(unsigned int *)0xC2EC278 = (t66 + 0x1);
                t67 = *(int *)0xC2EC28C;
                if (t67 != 0) {
                    t68 = *(int *)0xC2EC28C;
                    t69 = *(int *)0xA05F6908;
                    t70 = *(int *)0xC2EC25C;
                    t71 = ((int (*)(int, int, int, int))(t68))(0x1, 0xFFFFFFFC, t70, t69);
                }
            }
            t88 = *(int *)0xA05F6908;
            if ((t88 & 0x100) != 0) {
                t89 = *(int *)0xC2EC27C;
                *(unsigned int *)0xC2EC27C = (t89 + 0x1);
                t90 = *(int *)0xC2EC28C;
                if (t90 != 0) {
                    t91 = *(int *)0xC2EC28C;
                    t92 = *(int *)0xA05F6908;
                    t93 = *(int *)0xC2EC25C;
                    t94 = ((int (*)(int, int, int, int))(t91))(0x1, 0xFFFFFFFB, t93, t92);
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t112 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t112 >= 0) {
                copy_device();
            } else {
                t114 = *(int *)0xC2EC28C;
                if (t114 != 0) {
                    t115 = *(int *)0xC2EC25C;
                    t116 = *(int *)0xC2EC28C;
                    t117 = ((int (*)(int, int, int, int))(t116))(0x1, 0xFFFFFFFA, t115, t112);
                }
            }
            t145 = t112;
        } else {
            t124 = ((int (*)(int, int))(mpdrv_frame_send))(0xC2EC4E0, t8);
            if ((int)t124 >= 0) {
                *(unsigned int *)0xC2EC504 = 0x0;
                t125 = *(int *)0xC2EC4D8;
                *(unsigned short *)((((t125 << 1) + 0xC2EC288) + 0x0)) = 0x0;
                t126 = *(int *)0xC2EC4D8;
                t127 = *(int *)0xA05F810C;
                *(unsigned short *)((((t126 << 1) + 0xC2EC280) + 0x0)) = (t127 & 0x3FF);
                copy_device();
                t129 = *(int *)0xC2EC254;
                *(unsigned int *)0xC2EC254 = (t129 + 0x1);
            } else {
                kdRecvFrame();
                t131 = *(int *)0xC2EC264;
                *(unsigned int *)0xC2EC264 = (t131 + 0x1);
                t132 = *(int *)0xC2EC28C;
                if (t132 != 0) {
                    t133 = *(int *)0xC2EC25C;
                    t134 = *(int *)0xC2EC28C;
                    t135 = ((int (*)(int, int, int, int))(t134))(0x1, 0xFFFFFFF9, t133, t124);
                }
            }
            t145 = t124;
        }
        t149 = t145;
    }
    return t149;
}
