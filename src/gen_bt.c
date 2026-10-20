/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0771b0(int, int);
int FUN_0c077210(int, int);
int FUN_0c078480(int, int);
int FUN_0c078a70(int, int, int);
int SetCameraMode(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int FUN_0c0618da(int a4, int a5);
int FUN_0c061b14(int a4, int a5, int a6);
int Chat_Direction(int a4);
int FUN_0c0650b8(void);

int FUN_0c0618da(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
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
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t85;
    int t86;
    int t87;
    int t88;
    int t90;
    int stk[69] = {0};

    t0 = *(int *)0xC0D4088;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x60)) = t0;
    t1 = *(int *)0xC0D4084;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x5C)) = t1;
    t2 = *(int *)0xC0D4080;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x58)) = t2;
    t3 = *(int *)0xC0D407C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x54)) = t3;
    t4 = *(int *)0xC0D4078;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x50)) = t4;
    t5 = *(int *)0xC0D4074;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x4C)) = t5;
    t6 = *(int *)0xC0D4070;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x48)) = t6;
    t7 = *(int *)0xC0D406C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x44)) = t7;
    t8 = *(int *)0xC0D4068;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x40)) = t8;
    t9 = *(int *)0xC0D4064;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x3C)) = t9;
    t10 = *(int *)0xC0D4060;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x38)) = t10;
    t11 = *(int *)0xC0D405C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x34)) = t11;
    t12 = *(int *)0xC0D4058;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x30)) = t12;
    t13 = *(int *)0xC0D4054;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x2C)) = t13;
    t14 = *(int *)0xC0D4050;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x28)) = t14;
    t15 = *(int *)0xC0D404C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x24)) = t15;
    t16 = *(int *)0xC0D4048;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x20)) = t16;
    t17 = *(int *)0xC0D4044;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x1C)) = t17;
    t18 = *(int *)0xC0D4040;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x18)) = t18;
    t19 = *(int *)0xC0D403C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x14)) = t19;
    t20 = *(int *)0xC0D4038;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x10)) = t20;
    t21 = *(int *)0xC0D4034;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0xC)) = t21;
    t22 = *(int *)0xC0D4030;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x8)) = t22;
    t23 = *(int *)0xC0D402C;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x4)) = t23;
    t24 = *(int *)0xC0D4028;
    *(unsigned int *)(((0xA0 + ((int)stk + 4)) + 0x0)) = t24;
    t25 = *(int *)0xC0D409C;
    *(unsigned int *)(((0x8C + ((int)stk + 4)) + 0x10)) = t25;
    t26 = *(int *)0xC0D4098;
    *(unsigned int *)(((0x8C + ((int)stk + 4)) + 0xC)) = t26;
    t27 = *(int *)0xC0D4094;
    *(unsigned int *)(((0x8C + ((int)stk + 4)) + 0x8)) = t27;
    t28 = *(int *)0xC0D4090;
    *(unsigned int *)(((0x8C + ((int)stk + 4)) + 0x4)) = t28;
    t29 = *(int *)0xC0D408C;
    *(unsigned int *)(((0x8C + ((int)stk + 4)) + 0x0)) = t29;
    t30 = *(int *)0xC0D40D8;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x38)) = t30;
    t31 = *(int *)0xC0D40D4;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x34)) = t31;
    t32 = *(int *)0xC0D40D0;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x30)) = t32;
    t33 = *(int *)0xC0D40CC;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x2C)) = t33;
    t34 = *(int *)0xC0D40C8;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x28)) = t34;
    t35 = *(int *)0xC0D40C4;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x24)) = t35;
    t36 = *(int *)0xC0D40C0;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x20)) = t36;
    t37 = *(int *)0xC0D40BC;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x1C)) = t37;
    t38 = *(int *)0xC0D40B8;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x18)) = t38;
    t39 = *(int *)0xC0D40B4;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x14)) = t39;
    t40 = *(int *)0xC0D40B0;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x10)) = t40;
    t41 = *(int *)0xC0D40AC;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0xC)) = t41;
    t42 = *(int *)0xC0D40A8;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x8)) = t42;
    t43 = *(int *)0xC0D40A4;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x4)) = t43;
    t44 = *(int *)0xC0D40A0;
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = t44;
    t45 = *(int *)0xC0D4100;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x24)) = t45;
    t46 = *(int *)0xC0D40FC;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x20)) = t46;
    t47 = *(int *)0xC0D40F8;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x1C)) = t47;
    t48 = *(int *)0xC0D40F4;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x18)) = t48;
    t49 = *(int *)0xC0D40F0;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x14)) = t49;
    t50 = *(int *)0xC0D40EC;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x10)) = t50;
    t51 = *(int *)0xC0D40E8;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0xC)) = t51;
    t52 = *(int *)0xC0D40E4;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x8)) = t52;
    t53 = *(int *)0xC0D40E0;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x4)) = t53;
    t54 = *(int *)0xC0D40DC;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x0)) = t54;
    t55 = *(int *)0xC0D4128;
    *(unsigned int *)((((int)stk + 4) + 0x24)) = t55;
    t56 = *(int *)0xC0D4124;
    *(unsigned int *)((((int)stk + 4) + 0x20)) = t56;
    t57 = *(int *)0xC0D4120;
    *(unsigned int *)((((int)stk + 4) + 0x1C)) = t57;
    t58 = *(int *)0xC0D411C;
    *(unsigned int *)((((int)stk + 4) + 0x18)) = t58;
    t59 = *(int *)0xC0D4118;
    *(unsigned int *)((((int)stk + 4) + 0x14)) = t59;
    t60 = *(int *)0xC0D4114;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t60;
    t61 = *(int *)0xC0D4110;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t61;
    t62 = *(int *)0xC0D410C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t62;
    t63 = *(int *)0xC0D4108;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t63;
    t64 = *(int *)0xC0D4104;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t64;
    t65 = *(int *)0xC13EB90;
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 == 2) {
                t66 = *(int *)(((0x148 + a4) + 0x0));
                t67 = (int)(((unsigned int)t66 >> 29) & 0x7);
                t68 = *(int *)((((((t67 << 1) + (((0x2 & t65) >> 1) & 0x1)) << 2) + (((int)stk + 4) + 0x28)) + 0x0));
                *(unsigned int *)0xC13EC68 = t68;
                t69 = *(int *)(((0x148 + a4) + 0x0));
                t70 = (int)(((unsigned int)t69 >> 29) & 0x7);
                t71 = *(int *)0xC13EB90;
                t72 = *(int *)((((((t70 << 1) + (t71 & 0x1)) << 2) + ((int)stk + 4)) + 0x0));
                *(unsigned int *)0xC13EC74 = t72;
                Voice_ShutUp(0x2);
            }
        } else {
            t75 = *(int *)(((0x148 + a4) + 0x0));
            t76 = (int)(((unsigned int)t75 >> 29) & 0x7);
            t77 = *(int *)(((0x8C + ((int)stk + 4)) + (t76 << 2)));
            *(unsigned int *)0xC13EC68 = t77;
            t78 = *(int *)(((0x148 + a4) + 0x0));
            t79 = (int)(((unsigned int)t78 >> 29) & 0x7);
            t80 = *(int *)0xC13EB90;
            t81 = (int)((int)t80 % (int)0x3);
            t82 = *(int *)(((((((t79 << 1) + t79) + t81) << 2) + (((int)stk + 4) + 0x50)) + 0x0));
            *(unsigned int *)0xC13EC74 = t82;
            Voice_ShutUp(0x2);
        }
    } else {
        t85 = *(int *)(((0x148 + a4) + 0x0));
        t86 = (int)(((unsigned int)t85 >> 29) & 0x7);
        t87 = (int)((int)t65 % (int)0x5);
        t88 = *(int *)(((((((t86 << 2) + t86) + t87) << 2) + (0xA0 + ((int)stk + 4))) + 0x0));
        *(unsigned int *)0xC13EC68 = t88;
        *(unsigned int *)0xC13EC74 = 0x0;
    }
    t90 = Voice_Request(0xC13EC68, 0x2, 0x73, 0x0);
    return t90;
}

int FUN_0c061b14(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
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
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t77;
    int t78;
    int t82;
    int t83;
    int t87;
    int t93;
    int t109;
    int t94;
    int t95;
    int t96;
    int t97;
    int t101;
    int t102;
    int t103;
    int t108;
    int t112;
    int t110;
    int stk[68] = {0};

    t0 = *(int *)0xC0D41C0;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x1C)) = t0;
    t1 = *(int *)0xC0D41BC;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x18)) = t1;
    t2 = *(int *)0xC0D41B8;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x14)) = t2;
    t3 = *(int *)0xC0D41B4;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x10)) = t3;
    t4 = *(int *)0xC0D41B0;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0xC)) = t4;
    t5 = *(int *)0xC0D41AC;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x8)) = t5;
    t6 = *(int *)0xC0D41A8;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x4)) = t6;
    t7 = *(int *)0xC0D41A4;
    *(unsigned int *)(((0xD4 + ((int)stk + 4)) + 0x0)) = t7;
    t8 = *(int *)0xC0D41D8;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0x14)) = t8;
    t9 = *(int *)0xC0D41D4;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0x10)) = t9;
    t10 = *(int *)0xC0D41D0;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0xC)) = t10;
    t11 = *(int *)0xC0D41CC;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0x8)) = t11;
    t12 = *(int *)0xC0D41C8;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0x4)) = t12;
    t13 = *(int *)0xC0D41C4;
    *(unsigned int *)(((0xBC + ((int)stk + 4)) + 0x0)) = t13;
    t14 = *(int *)0xC0D41F0;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0x14)) = t14;
    t15 = *(int *)0xC0D41EC;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0x10)) = t15;
    t16 = *(int *)0xC0D41E8;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0xC)) = t16;
    t17 = *(int *)0xC0D41E4;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0x8)) = t17;
    t18 = *(int *)0xC0D41E0;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0x4)) = t18;
    t19 = *(int *)0xC0D41DC;
    *(unsigned int *)(((0xA4 + ((int)stk + 4)) + 0x0)) = t19;
    t20 = *(int *)0xC0D420C;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x18)) = t20;
    t21 = *(int *)0xC0D4208;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x14)) = t21;
    t22 = *(int *)0xC0D4204;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x10)) = t22;
    t23 = *(int *)0xC0D4200;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0xC)) = t23;
    t24 = *(int *)0xC0D41FC;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x8)) = t24;
    t25 = *(int *)0xC0D41F8;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x4)) = t25;
    t26 = *(int *)0xC0D41F4;
    *(unsigned int *)(((0x88 + ((int)stk + 4)) + 0x0)) = t26;
    t27 = *(int *)0xC0D421C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0xC)) = t27;
    t28 = *(int *)0xC0D4218;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x8)) = t28;
    t29 = *(int *)0xC0D4214;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x4)) = t29;
    t30 = *(int *)0xC0D4210;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x0)) = t30;
    t31 = *(int *)0xC0D4280;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x60)) = t31;
    t32 = *(int *)0xC0D427C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x5C)) = t32;
    t33 = *(int *)0xC0D4278;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x58)) = t33;
    t34 = *(int *)0xC0D4274;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x54)) = t34;
    t35 = *(int *)0xC0D4270;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x50)) = t35;
    t36 = *(int *)0xC0D426C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4C)) = t36;
    t37 = *(int *)0xC0D4268;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x48)) = t37;
    t38 = *(int *)0xC0D4264;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x44)) = t38;
    t39 = *(int *)0xC0D4260;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x40)) = t39;
    t40 = *(int *)0xC0D425C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x3C)) = t40;
    t41 = *(int *)0xC0D4258;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x38)) = t41;
    t42 = *(int *)0xC0D4254;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x34)) = t42;
    t43 = *(int *)0xC0D4250;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x30)) = t43;
    t44 = *(int *)0xC0D424C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x2C)) = t44;
    t45 = *(int *)0xC0D4248;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x28)) = t45;
    t46 = *(int *)0xC0D4244;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x24)) = t46;
    t47 = *(int *)0xC0D4240;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x20)) = t47;
    t48 = *(int *)0xC0D423C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x1C)) = t48;
    t49 = *(int *)0xC0D4238;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x18)) = t49;
    t50 = *(int *)0xC0D4234;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x14)) = t50;
    t51 = *(int *)0xC0D4230;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x10)) = t51;
    t52 = *(int *)0xC0D422C;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0xC)) = t52;
    t53 = *(int *)0xC0D4228;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t53;
    t54 = *(int *)0xC0D4224;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t54;
    t55 = *(int *)0xC0D4220;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t55;
    t56 = *(int *)0xC0D4294;
    *(unsigned int *)((((int)stk + 4) + 0x10)) = t56;
    t57 = *(int *)0xC0D4290;
    *(unsigned int *)((((int)stk + 4) + 0xC)) = t57;
    t58 = *(int *)0xC0D428C;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t58;
    t59 = *(int *)0xC0D4288;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t59;
    t60 = *(int *)0xC0D4284;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t60;
    if (a6 == 2) {
        t61 = *(int *)(((0x148 + a4) + 0x0));
        t62 = (int)(((unsigned int)t61 >> 29) & 0x7);
        t63 = *(int *)((((int)stk + 4) + (t62 << 2)));
        *(unsigned int *)0xC13ED20 = t63;
        t64 = *(int *)0xC2AD000;
        t65 = *(int *)(((((t64 - 1) << 2) + (((int)stk + 4) + 0x78)) + 0x0));
        *(unsigned int *)0xC13ED38 = t65;
        Voice_ShutUp(0x1);
        Voice_Request(0xC13ED38, 0x1, 0x73, 0x0);
        Voice_ShutUp(0x2);
        t69 = Voice_Request(0xC13ED20, 0x2, 0x73, 0x0);
        t112 = t69;
    } else {
        t70 = *(int *)0xC13EB90;
        if (a5 == 0) {
            t71 = *(int *)0xC2AD000;
            if (t71 != 1) {
                if (t71 != 2) {
                    if (t71 != 3) {
                        if (t71 != 4) {
                            *(unsigned int *)0xC13ED20 = 0x0;
                        } else {
                            t72 = (int)((unsigned int)t70 % (unsigned int)0x7);
                            t73 = *(int *)((((t72 << 2) + (0x88 + ((int)stk + 4))) + 0x0));
                            *(unsigned int *)0xC13ED20 = t73;
                        }
                    } else {
                        t77 = (int)((unsigned int)t70 % (unsigned int)0x6);
                        t78 = *(int *)(((0xA4 + ((int)stk + 4)) + (t77 << 2)));
                        *(unsigned int *)0xC13ED20 = t78;
                    }
                } else {
                    t82 = (int)((unsigned int)t70 % (unsigned int)0x6);
                    t83 = *(int *)(((0xBC + ((int)stk + 4)) + (t82 << 2)));
                    *(unsigned int *)0xC13ED20 = t83;
                }
            } else {
                t87 = *(int *)(((((t70 & 0x7) << 2) + (0xD4 + ((int)stk + 4))) + 0x0));
                *(unsigned int *)0xC13ED20 = t87;
            }
            Voice_ShutUp(0x1);
            t93 = Voice_Request(0xC13ED20, 0x1, 0x73, 0x0);
            t110 = t93;
        } else {
            t109 = a5;
            if (a5 == 1) {
                if (a6 != 0) {
                    if (a6 == 1) {
                        t94 = *(int *)(((0x148 + a4) + 0x0));
                        t95 = (int)(((unsigned int)t94 >> 29) & 0x7);
                        t96 = (int)((int)t70 % (int)0x4);
                        t97 = *(int *)(((((int)stk + 4) + 0x14) + (((t96 + ((t95 << 2) + t95)) + 0x1) << 2)));
                        *(unsigned int *)0xC13ED20 = t97;
                    }
                } else {
                    t101 = *(int *)(((0x148 + a4) + 0x0));
                    t102 = (int)(((unsigned int)t101 >> 29) & 0x7);
                    t103 = *(int *)(((((int)stk + 4) + 0x14) + (((t102 << 2) + t102) << 2)));
                    *(unsigned int *)0xC13ED20 = t103;
                }
                Voice_ShutUp(0x2);
                t108 = Voice_Request(0xC13ED20, 0x2, 0x73, 0x0);
                t109 = t108;
            }
            t110 = t109;
        }
        t112 = t110;
    }
    return t112;
}

int Chat_Direction(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
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
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
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
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t151;
    int t152;
    int t154;
    int t155;
    int t156;
    int t157;
    int t158;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t171;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t229;
    int t230;
    int t231;
    int t232;
    int t233;
    int t234;
    int t235;
    int t236;
    int t237;
    int t238;
    int t239;
    int t240;
    int t241;
    int t242;
    int t243;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t257;
    int t258;
    int t259;
    int t260;
    int t261;
    int t262;
    int t267;
    int t268;
    int t269;
    int t270;
    int t271;
    int t272;
    int t273;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t280;
    int t281;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t289;
    int t290;
    int t291;
    int t292;
    int t293;
    int t295;
    int t296;
    int t297;
    int t298;
    int t299;
    int t300;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t321;
    int t322;
    int t323;
    int t327;
    int t328;
    int t329;
    int t333;
    int t334;
    int t335;
    int t339;
    int t340;
    int t341;
    int t345;
    int t346;
    int t347;
    int t351;
    int t352;
    int t353;
    int t357;
    int t358;
    int t359;
    int t363;
    int t364;
    int t365;
    int t369;
    int t370;
    int t371;
    int t375;
    int t376;
    int t377;
    int t381;
    int t382;
    int t383;
    int t387;
    int t388;
    int t389;
    int t393;
    int t394;
    int t395;
    int t399;
    int t400;
    int t401;
    int t405;
    int t406;
    int t407;
    int t417;
    int stk[247] = {0};

    t0 = 0;
    for (; t0 < (int)0x1B0; t0++) *(unsigned char *)((0x21C + ((int)stk + 4)) + t0) = *(unsigned char *)(0xC0D3C5C + t0);
    t1 = 0;
    for (; t1 < (int)0x21C; t1++) *(unsigned char *)(((int)stk + 4) + t1) = *(unsigned char *)(0xC0D3E0C + t1);
    t2 = *(int *)0xC13EB90;
    t3 = *(int *)((a4 + 0x110));
    if (t3 == 0xC8FE818) {
        t4 = *(int *)(((0x148 + a4) + 0x0));
        t5 = (int)(((unsigned int)t4 >> 29) & 0x7);
        t6 = (int)((int)t2 % (int)0x3);
        t7 = *(int *)((((short)((((((((t5 << 2) << 1) + t5) + t6) + 0x6) << 1) + (((((t5 << 2) << 1) + t5) + t6) + 0x6)) << 2) + ((int)stk + 4)) + 0x8));
        *(unsigned int *)0xC13EC58 = t7;
        t8 = *(int *)((((short)((((((((t5 << 2) << 1) + t5) + t6) + 0x6) << 1) + (((((t5 << 2) << 1) + t5) + t6) + 0x6)) << 2) + ((int)stk + 4)) + 0x4));
        *(unsigned int *)0xC13EC54 = t8;
        t9 = *(int *)((((short)((((((((t5 << 2) << 1) + t5) + t6) + 0x6) << 1) + (((((t5 << 2) << 1) + t5) + t6) + 0x6)) << 2) + ((int)stk + 4)) + 0x0));
        *(unsigned int *)0xC13EC50 = t9;
    } else {
        if (t3 == 0xC900390) {
            t10 = *(int *)(((0x148 + a4) + 0x0));
            t11 = (int)(((unsigned int)t10 >> 29) & 0x7);
            t12 = *(int *)((((short)(((((((t11 << 2) << 1) + t11) + 0x5) << 1) + ((((t11 << 2) << 1) + t11) + 0x5)) << 2) + ((int)stk + 4)) + 0x8));
            *(unsigned int *)0xC13EC58 = t12;
            t13 = *(int *)((((short)(((((((t11 << 2) << 1) + t11) + 0x5) << 1) + ((((t11 << 2) << 1) + t11) + 0x5)) << 2) + ((int)stk + 4)) + 0x4));
            *(unsigned int *)0xC13EC54 = t13;
            t14 = *(int *)((((short)(((((((t11 << 2) << 1) + t11) + 0x5) << 1) + ((((t11 << 2) << 1) + t11) + 0x5)) << 2) + ((int)stk + 4)) + 0x0));
            *(unsigned int *)0xC13EC50 = t14;
        } else {
            if (t3 == 0xC902298) {
                t15 = *(int *)(((0x148 + a4) + 0x0));
                t16 = (int)(((unsigned int)t15 >> 29) & 0x7);
                t17 = *(int *)((((short)(((((((t16 << 2) << 1) + t16) + 0x4) << 1) + ((((t16 << 2) << 1) + t16) + 0x4)) << 2) + ((int)stk + 4)) + 0x8));
                *(unsigned int *)0xC13EC58 = t17;
                t18 = *(int *)((((short)(((((((t16 << 2) << 1) + t16) + 0x4) << 1) + ((((t16 << 2) << 1) + t16) + 0x4)) << 2) + ((int)stk + 4)) + 0x4));
                *(unsigned int *)0xC13EC54 = t18;
                t19 = *(int *)((((short)(((((((t16 << 2) << 1) + t16) + 0x4) << 1) + ((((t16 << 2) << 1) + t16) + 0x4)) << 2) + ((int)stk + 4)) + 0x0));
                *(unsigned int *)0xC13EC50 = t19;
            } else {
                if (t3 != 0xC903E20) {
                    if (t3 != 0xC9057E8) {
                        if (t3 != 0xC907360) {
                            if (t3 == 0xC908CF8) {
                                t20 = *(int *)(((0x148 + a4) + 0x0));
                                t21 = (int)(((unsigned int)t20 >> 29) & 0x7);
                                t22 = *(int *)((((short)(((((((t21 << 2) << 1) + t21) + 0x5) << 1) + ((((t21 << 2) << 1) + t21) + 0x5)) << 2) + ((int)stk + 4)) + 0x8));
                                *(unsigned int *)0xC13EC58 = t22;
                                t23 = *(int *)((((short)(((((((t21 << 2) << 1) + t21) + 0x5) << 1) + ((((t21 << 2) << 1) + t21) + 0x5)) << 2) + ((int)stk + 4)) + 0x4));
                                *(unsigned int *)0xC13EC54 = t23;
                                t24 = *(int *)((((short)(((((((t21 << 2) << 1) + t21) + 0x5) << 1) + ((((t21 << 2) << 1) + t21) + 0x5)) << 2) + ((int)stk + 4)) + 0x0));
                                *(unsigned int *)0xC13EC50 = t24;
                            } else {
                                if (t3 == 0xC90A900) {
                                    t25 = *(int *)(((0x148 + a4) + 0x0));
                                    t26 = (int)(((unsigned int)t25 >> 29) & 0x7);
                                    t27 = *(int *)((((short)(((((((t26 << 2) << 1) + t26) + 0x4) << 1) + ((((t26 << 2) << 1) + t26) + 0x4)) << 2) + ((int)stk + 4)) + 0x8));
                                    *(unsigned int *)0xC13EC58 = t27;
                                    t28 = *(int *)((((short)(((((((t26 << 2) << 1) + t26) + 0x4) << 1) + ((((t26 << 2) << 1) + t26) + 0x4)) << 2) + ((int)stk + 4)) + 0x4));
                                    *(unsigned int *)0xC13EC54 = t28;
                                    t29 = *(int *)((((short)(((((((t26 << 2) << 1) + t26) + 0x4) << 1) + ((((t26 << 2) << 1) + t26) + 0x4)) << 2) + ((int)stk + 4)) + 0x0));
                                    *(unsigned int *)0xC13EC50 = t29;
                                } else {
                                    if (t3 == 0xC90C478) {
                                        t30 = *(int *)(((0x148 + a4) + 0x0));
                                        t31 = (int)(((unsigned int)t30 >> 29) & 0x7);
                                        t32 = (int)((int)t2 % (int)0x3);
                                        t33 = *(int *)((((short)((((((((t31 << 2) << 1) + t31) + t32) + 0x6) << 1) + (((((t31 << 2) << 1) + t31) + t32) + 0x6)) << 2) + ((int)stk + 4)) + 0x8));
                                        *(unsigned int *)0xC13EC58 = t33;
                                        t34 = *(int *)((((short)((((((((t31 << 2) << 1) + t31) + t32) + 0x6) << 1) + (((((t31 << 2) << 1) + t31) + t32) + 0x6)) << 2) + ((int)stk + 4)) + 0x4));
                                        *(unsigned int *)0xC13EC54 = t34;
                                        t35 = *(int *)((((short)((((((((t31 << 2) << 1) + t31) + t32) + 0x6) << 1) + (((((t31 << 2) << 1) + t31) + t32) + 0x6)) << 2) + ((int)stk + 4)) + 0x0));
                                        *(unsigned int *)0xC13EC50 = t35;
                                    } else {
                                        if (t3 == 0xC90E230) {
                                            t36 = *(int *)(((0x148 + a4) + 0x0));
                                            t37 = (int)(((unsigned int)t36 >> 29) & 0x7);
                                            t38 = *(int *)((((short)(((((((t37 << 2) << 1) + t37) + 0x5) << 1) + ((((t37 << 2) << 1) + t37) + 0x5)) << 2) + ((int)stk + 4)) + 0x8));
                                            *(unsigned int *)0xC13EC58 = t38;
                                            t39 = *(int *)((((short)(((((((t37 << 2) << 1) + t37) + 0x5) << 1) + ((((t37 << 2) << 1) + t37) + 0x5)) << 2) + ((int)stk + 4)) + 0x4));
                                            *(unsigned int *)0xC13EC54 = t39;
                                            t40 = *(int *)((((short)(((((((t37 << 2) << 1) + t37) + 0x5) << 1) + ((((t37 << 2) << 1) + t37) + 0x5)) << 2) + ((int)stk + 4)) + 0x0));
                                            *(unsigned int *)0xC13EC50 = t40;
                                        } else {
                                            if (t3 == 0xC9100A8) {
                                                t41 = *(int *)(((0x148 + a4) + 0x0));
                                                t42 = (int)(((unsigned int)t41 >> 29) & 0x7);
                                                t43 = *(int *)((((short)(((((((t42 << 2) << 1) + t42) + 0x4) << 1) + ((((t42 << 2) << 1) + t42) + 0x4)) << 2) + ((int)stk + 4)) + 0x8));
                                                *(unsigned int *)0xC13EC58 = t43;
                                                t44 = *(int *)((((short)(((((((t42 << 2) << 1) + t42) + 0x4) << 1) + ((((t42 << 2) << 1) + t42) + 0x4)) << 2) + ((int)stk + 4)) + 0x4));
                                                *(unsigned int *)0xC13EC54 = t44;
                                                t45 = *(int *)((((short)(((((((t42 << 2) << 1) + t42) + 0x4) << 1) + ((((t42 << 2) << 1) + t42) + 0x4)) << 2) + ((int)stk + 4)) + 0x0));
                                                *(unsigned int *)0xC13EC50 = t45;
                                            } else {
                                                if (t3 != 0xC912130) {
                                                    if (t3 != 0xC913CC8) {
                                                        if (t3 != 0xC916E40) {
                                                            if (t3 != 0xC918988) {
                                                                if (t3 == 0xC91A5C0) {
                                                                    t46 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t47 = (int)(((unsigned int)t46 >> 29) & 0x7);
                                                                    t48 = *(int *)((((short)(((((((t47 << 2) << 1) + t47) + 0x4) << 1) + ((((t47 << 2) << 1) + t47) + 0x4)) << 2) + ((int)stk + 4)) + 0x8));
                                                                    *(unsigned int *)0xC13EC58 = t48;
                                                                    t49 = *(int *)((((short)(((((((t47 << 2) << 1) + t47) + 0x4) << 1) + ((((t47 << 2) << 1) + t47) + 0x4)) << 2) + ((int)stk + 4)) + 0x4));
                                                                    *(unsigned int *)0xC13EC54 = t49;
                                                                    t50 = *(int *)((((short)(((((((t47 << 2) << 1) + t47) + 0x4) << 1) + ((((t47 << 2) << 1) + t47) + 0x4)) << 2) + ((int)stk + 4)) + 0x0));
                                                                    *(unsigned int *)0xC13EC50 = t50;
                                                                }
                                                            } else {
                                                                t54 = *(int *)(((0x148 + a4) + 0x0));
                                                                t55 = (int)(((unsigned int)t54 >> 29) & 0x7);
                                                                t56 = *(int *)((((short)(((((((t55 << 2) << 1) + t55) + 0x5) << 1) + ((((t55 << 2) << 1) + t55) + 0x5)) << 2) + ((int)stk + 4)) + 0x8));
                                                                *(unsigned int *)0xC13EC58 = t56;
                                                                t57 = *(int *)((((short)(((((((t55 << 2) << 1) + t55) + 0x5) << 1) + ((((t55 << 2) << 1) + t55) + 0x5)) << 2) + ((int)stk + 4)) + 0x4));
                                                                *(unsigned int *)0xC13EC54 = t57;
                                                                t58 = *(int *)((((short)(((((((t55 << 2) << 1) + t55) + 0x5) << 1) + ((((t55 << 2) << 1) + t55) + 0x5)) << 2) + ((int)stk + 4)) + 0x0));
                                                                *(unsigned int *)0xC13EC50 = t58;
                                                            }
                                                        } else {
                                                            t62 = *(int *)0xC1EE210;
                                                            if (t62 == 2) {
                                                                t63 = *(int *)0xC1EE214;
                                                                if (t63 != 4) {
                                                                    t64 = *(int *)0xC1EE214;
                                                                    if (t64 != 12) {
                                                                        t65 = *(int *)0xC1EE214;
                                                                        if (t65 == 15) {
                                                                            t66 = *(int *)(((0x148 + a4) + 0x0));
                                                                            t67 = (int)(((unsigned int)t66 >> 29) & 0x7);
                                                                            t68 = *(int *)((((short)(((((((t67 << 2) << 1) + t67) + 0x3) << 1) + ((((t67 << 2) << 1) + t67) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                            *(unsigned int *)0xC13EC58 = t68;
                                                                            t69 = *(int *)((((short)(((((((t67 << 2) << 1) + t67) + 0x3) << 1) + ((((t67 << 2) << 1) + t67) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                            *(unsigned int *)0xC13EC54 = t69;
                                                                            t70 = *(int *)((((short)(((((((t67 << 2) << 1) + t67) + 0x3) << 1) + ((((t67 << 2) << 1) + t67) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                            *(unsigned int *)0xC13EC50 = t70;
                                                                        } else {
                                                                            t71 = *(int *)(((0x148 + a4) + 0x0));
                                                                            t72 = (int)(((unsigned int)t71 >> 29) & 0x7);
                                                                            t73 = (int)((int)t2 % (int)0x4);
                                                                            t74 = *(int *)((((short)(((((((t72 << 2) << 1) + t72) + t73) << 1) + ((((t72 << 2) << 1) + t72) + t73)) << 2) + ((int)stk + 4)) + 0x8));
                                                                            *(unsigned int *)0xC13EC58 = t74;
                                                                            t75 = *(int *)((((short)(((((((t72 << 2) << 1) + t72) + t73) << 1) + ((((t72 << 2) << 1) + t72) + t73)) << 2) + ((int)stk + 4)) + 0x4));
                                                                            *(unsigned int *)0xC13EC54 = t75;
                                                                            t76 = *(int *)((((short)(((((((t72 << 2) << 1) + t72) + t73) << 1) + ((((t72 << 2) << 1) + t72) + t73)) << 2) + ((int)stk + 4)) + 0x0));
                                                                            *(unsigned int *)0xC13EC50 = t76;
                                                                        }
                                                                    } else {
                                                                        t78 = *(int *)(((0x148 + a4) + 0x0));
                                                                        t79 = (int)(((unsigned int)t78 >> 29) & 0x7);
                                                                        t80 = *(int *)((((short)(((((((t79 << 2) << 1) + t79) + 0x3) << 1) + ((((t79 << 2) << 1) + t79) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                        *(unsigned int *)0xC13EC58 = t80;
                                                                        t81 = *(int *)((((short)(((((((t79 << 2) << 1) + t79) + 0x3) << 1) + ((((t79 << 2) << 1) + t79) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                        *(unsigned int *)0xC13EC54 = t81;
                                                                        t82 = *(int *)((((short)(((((((t79 << 2) << 1) + t79) + 0x3) << 1) + ((((t79 << 2) << 1) + t79) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                        *(unsigned int *)0xC13EC50 = t82;
                                                                    }
                                                                } else {
                                                                    t84 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t85 = (int)(((unsigned int)t84 >> 29) & 0x7);
                                                                    t86 = *(int *)((((short)(((((((t85 << 2) << 1) + t85) + 0x3) << 1) + ((((t85 << 2) << 1) + t85) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                    *(unsigned int *)0xC13EC58 = t86;
                                                                    t87 = *(int *)((((short)(((((((t85 << 2) << 1) + t85) + 0x3) << 1) + ((((t85 << 2) << 1) + t85) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                    *(unsigned int *)0xC13EC54 = t87;
                                                                    t88 = *(int *)((((short)(((((((t85 << 2) << 1) + t85) + 0x3) << 1) + ((((t85 << 2) << 1) + t85) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                    *(unsigned int *)0xC13EC50 = t88;
                                                                }
                                                            } else {
                                                                t90 = *(int *)(((0x148 + a4) + 0x0));
                                                                t91 = (int)(((unsigned int)t90 >> 29) & 0x7);
                                                                t92 = (int)((int)t2 % (int)0x4);
                                                                t93 = *(int *)((((short)(((((((t91 << 2) << 1) + t91) + t92) << 1) + ((((t91 << 2) << 1) + t91) + t92)) << 2) + ((int)stk + 4)) + 0x8));
                                                                *(unsigned int *)0xC13EC58 = t93;
                                                                t94 = *(int *)((((short)(((((((t91 << 2) << 1) + t91) + t92) << 1) + ((((t91 << 2) << 1) + t91) + t92)) << 2) + ((int)stk + 4)) + 0x4));
                                                                *(unsigned int *)0xC13EC54 = t94;
                                                                t95 = *(int *)((((short)(((((((t91 << 2) << 1) + t91) + t92) << 1) + ((((t91 << 2) << 1) + t91) + t92)) << 2) + ((int)stk + 4)) + 0x0));
                                                                *(unsigned int *)0xC13EC50 = t95;
                                                            }
                                                        }
                                                    } else {
                                                        t100 = *(int *)0xC1EE210;
                                                        if (t100 == 2) {
                                                            t101 = *(int *)0xC1EE214;
                                                            if (t101 != 4) {
                                                                t102 = *(int *)0xC1EE214;
                                                                if (t102 != 12) {
                                                                    t103 = *(int *)0xC1EE214;
                                                                    if (t103 == 15) {
                                                                        t104 = *(int *)(((0x148 + a4) + 0x0));
                                                                        t105 = (int)(((unsigned int)t104 >> 29) & 0x7);
                                                                        t106 = *(int *)((((short)(((((((t105 << 2) << 1) + t105) + 0x3) << 1) + ((((t105 << 2) << 1) + t105) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                        *(unsigned int *)0xC13EC58 = t106;
                                                                        t107 = *(int *)((((short)(((((((t105 << 2) << 1) + t105) + 0x3) << 1) + ((((t105 << 2) << 1) + t105) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                        *(unsigned int *)0xC13EC54 = t107;
                                                                        t108 = *(int *)((((short)(((((((t105 << 2) << 1) + t105) + 0x3) << 1) + ((((t105 << 2) << 1) + t105) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                        *(unsigned int *)0xC13EC50 = t108;
                                                                    } else {
                                                                        t109 = *(int *)(((0x148 + a4) + 0x0));
                                                                        t110 = (int)(((unsigned int)t109 >> 29) & 0x7);
                                                                        t111 = (int)((int)t2 % (int)0x4);
                                                                        t112 = *(int *)((((short)(((((((t110 << 2) << 1) + t110) + t111) << 1) + ((((t110 << 2) << 1) + t110) + t111)) << 2) + ((int)stk + 4)) + 0x8));
                                                                        *(unsigned int *)0xC13EC58 = t112;
                                                                        t113 = *(int *)((((short)(((((((t110 << 2) << 1) + t110) + t111) << 1) + ((((t110 << 2) << 1) + t110) + t111)) << 2) + ((int)stk + 4)) + 0x4));
                                                                        *(unsigned int *)0xC13EC54 = t113;
                                                                        t114 = *(int *)((((short)(((((((t110 << 2) << 1) + t110) + t111) << 1) + ((((t110 << 2) << 1) + t110) + t111)) << 2) + ((int)stk + 4)) + 0x0));
                                                                        *(unsigned int *)0xC13EC50 = t114;
                                                                    }
                                                                } else {
                                                                    t116 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t117 = (int)(((unsigned int)t116 >> 29) & 0x7);
                                                                    t118 = *(int *)((((short)(((((((t117 << 2) << 1) + t117) + 0x3) << 1) + ((((t117 << 2) << 1) + t117) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                    *(unsigned int *)0xC13EC58 = t118;
                                                                    t119 = *(int *)((((short)(((((((t117 << 2) << 1) + t117) + 0x3) << 1) + ((((t117 << 2) << 1) + t117) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                    *(unsigned int *)0xC13EC54 = t119;
                                                                    t120 = *(int *)((((short)(((((((t117 << 2) << 1) + t117) + 0x3) << 1) + ((((t117 << 2) << 1) + t117) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                    *(unsigned int *)0xC13EC50 = t120;
                                                                }
                                                            } else {
                                                                t122 = *(int *)(((0x148 + a4) + 0x0));
                                                                t123 = (int)(((unsigned int)t122 >> 29) & 0x7);
                                                                t124 = *(int *)((((short)(((((((t123 << 2) << 1) + t123) + 0x3) << 1) + ((((t123 << 2) << 1) + t123) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                *(unsigned int *)0xC13EC58 = t124;
                                                                t125 = *(int *)((((short)(((((((t123 << 2) << 1) + t123) + 0x3) << 1) + ((((t123 << 2) << 1) + t123) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                *(unsigned int *)0xC13EC54 = t125;
                                                                t126 = *(int *)((((short)(((((((t123 << 2) << 1) + t123) + 0x3) << 1) + ((((t123 << 2) << 1) + t123) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                *(unsigned int *)0xC13EC50 = t126;
                                                            }
                                                        } else {
                                                            t128 = *(int *)(((0x148 + a4) + 0x0));
                                                            t129 = (int)(((unsigned int)t128 >> 29) & 0x7);
                                                            t130 = (int)((int)t2 % (int)0x4);
                                                            t131 = *(int *)((((short)(((((((t129 << 2) << 1) + t129) + t130) << 1) + ((((t129 << 2) << 1) + t129) + t130)) << 2) + ((int)stk + 4)) + 0x8));
                                                            *(unsigned int *)0xC13EC58 = t131;
                                                            t132 = *(int *)((((short)(((((((t129 << 2) << 1) + t129) + t130) << 1) + ((((t129 << 2) << 1) + t129) + t130)) << 2) + ((int)stk + 4)) + 0x4));
                                                            *(unsigned int *)0xC13EC54 = t132;
                                                            t133 = *(int *)((((short)(((((((t129 << 2) << 1) + t129) + t130) << 1) + ((((t129 << 2) << 1) + t129) + t130)) << 2) + ((int)stk + 4)) + 0x0));
                                                            *(unsigned int *)0xC13EC50 = t133;
                                                        }
                                                    }
                                                } else {
                                                    t138 = *(int *)0xC1EE210;
                                                    if (t138 == 2) {
                                                        t139 = *(int *)0xC1EE214;
                                                        if (t139 != 4) {
                                                            t140 = *(int *)0xC1EE214;
                                                            if (t140 != 12) {
                                                                t141 = *(int *)0xC1EE214;
                                                                if (t141 == 15) {
                                                                    t142 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t143 = (int)(((unsigned int)t142 >> 29) & 0x7);
                                                                    t144 = *(int *)((((short)(((((((t143 << 2) << 1) + t143) + 0x3) << 1) + ((((t143 << 2) << 1) + t143) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                    *(unsigned int *)0xC13EC58 = t144;
                                                                    t145 = *(int *)((((short)(((((((t143 << 2) << 1) + t143) + 0x3) << 1) + ((((t143 << 2) << 1) + t143) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                    *(unsigned int *)0xC13EC54 = t145;
                                                                    t146 = *(int *)((((short)(((((((t143 << 2) << 1) + t143) + 0x3) << 1) + ((((t143 << 2) << 1) + t143) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                    *(unsigned int *)0xC13EC50 = t146;
                                                                } else {
                                                                    t147 = *(int *)(((0x148 + a4) + 0x0));
                                                                    t148 = (int)(((unsigned int)t147 >> 29) & 0x7);
                                                                    t149 = (int)((int)t2 % (int)0x4);
                                                                    t150 = *(int *)((((short)(((((((t148 << 2) << 1) + t148) + t149) << 1) + ((((t148 << 2) << 1) + t148) + t149)) << 2) + ((int)stk + 4)) + 0x8));
                                                                    *(unsigned int *)0xC13EC58 = t150;
                                                                    t151 = *(int *)((((short)(((((((t148 << 2) << 1) + t148) + t149) << 1) + ((((t148 << 2) << 1) + t148) + t149)) << 2) + ((int)stk + 4)) + 0x4));
                                                                    *(unsigned int *)0xC13EC54 = t151;
                                                                    t152 = *(int *)((((short)(((((((t148 << 2) << 1) + t148) + t149) << 1) + ((((t148 << 2) << 1) + t148) + t149)) << 2) + ((int)stk + 4)) + 0x0));
                                                                    *(unsigned int *)0xC13EC50 = t152;
                                                                }
                                                            } else {
                                                                t154 = *(int *)(((0x148 + a4) + 0x0));
                                                                t155 = (int)(((unsigned int)t154 >> 29) & 0x7);
                                                                t156 = *(int *)((((short)(((((((t155 << 2) << 1) + t155) + 0x3) << 1) + ((((t155 << 2) << 1) + t155) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                                *(unsigned int *)0xC13EC58 = t156;
                                                                t157 = *(int *)((((short)(((((((t155 << 2) << 1) + t155) + 0x3) << 1) + ((((t155 << 2) << 1) + t155) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                                *(unsigned int *)0xC13EC54 = t157;
                                                                t158 = *(int *)((((short)(((((((t155 << 2) << 1) + t155) + 0x3) << 1) + ((((t155 << 2) << 1) + t155) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                                *(unsigned int *)0xC13EC50 = t158;
                                                            }
                                                        } else {
                                                            t160 = *(int *)(((0x148 + a4) + 0x0));
                                                            t161 = (int)(((unsigned int)t160 >> 29) & 0x7);
                                                            t162 = *(int *)((((short)(((((((t161 << 2) << 1) + t161) + 0x3) << 1) + ((((t161 << 2) << 1) + t161) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                                            *(unsigned int *)0xC13EC58 = t162;
                                                            t163 = *(int *)((((short)(((((((t161 << 2) << 1) + t161) + 0x3) << 1) + ((((t161 << 2) << 1) + t161) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                                            *(unsigned int *)0xC13EC54 = t163;
                                                            t164 = *(int *)((((short)(((((((t161 << 2) << 1) + t161) + 0x3) << 1) + ((((t161 << 2) << 1) + t161) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                                            *(unsigned int *)0xC13EC50 = t164;
                                                        }
                                                    } else {
                                                        t166 = *(int *)(((0x148 + a4) + 0x0));
                                                        t167 = (int)(((unsigned int)t166 >> 29) & 0x7);
                                                        t168 = (int)((int)t2 % (int)0x4);
                                                        t169 = *(int *)((((short)(((((((t167 << 2) << 1) + t167) + t168) << 1) + ((((t167 << 2) << 1) + t167) + t168)) << 2) + ((int)stk + 4)) + 0x8));
                                                        *(unsigned int *)0xC13EC58 = t169;
                                                        t170 = *(int *)((((short)(((((((t167 << 2) << 1) + t167) + t168) << 1) + ((((t167 << 2) << 1) + t167) + t168)) << 2) + ((int)stk + 4)) + 0x4));
                                                        *(unsigned int *)0xC13EC54 = t170;
                                                        t171 = *(int *)((((short)(((((((t167 << 2) << 1) + t167) + t168) << 1) + ((((t167 << 2) << 1) + t167) + t168)) << 2) + ((int)stk + 4)) + 0x0));
                                                        *(unsigned int *)0xC13EC50 = t171;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            t191 = *(int *)0xC1EE210;
                            if (t191 == 2) {
                                t192 = *(int *)0xC1EE214;
                                if (t192 != 4) {
                                    t193 = *(int *)0xC1EE214;
                                    if (t193 != 12) {
                                        t194 = *(int *)0xC1EE214;
                                        if (t194 == 15) {
                                            t195 = *(int *)(((0x148 + a4) + 0x0));
                                            t196 = (int)(((unsigned int)t195 >> 29) & 0x7);
                                            t197 = *(int *)((((short)(((((((t196 << 2) << 1) + t196) + 0x3) << 1) + ((((t196 << 2) << 1) + t196) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                            *(unsigned int *)0xC13EC58 = t197;
                                            t198 = *(int *)((((short)(((((((t196 << 2) << 1) + t196) + 0x3) << 1) + ((((t196 << 2) << 1) + t196) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                            *(unsigned int *)0xC13EC54 = t198;
                                            t199 = *(int *)((((short)(((((((t196 << 2) << 1) + t196) + 0x3) << 1) + ((((t196 << 2) << 1) + t196) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                            *(unsigned int *)0xC13EC50 = t199;
                                        } else {
                                            t200 = *(int *)(((0x148 + a4) + 0x0));
                                            t201 = (int)(((unsigned int)t200 >> 29) & 0x7);
                                            t202 = (int)((int)t2 % (int)0x4);
                                            t203 = *(int *)((((short)(((((((t201 << 2) << 1) + t201) + t202) << 1) + ((((t201 << 2) << 1) + t201) + t202)) << 2) + ((int)stk + 4)) + 0x8));
                                            *(unsigned int *)0xC13EC58 = t203;
                                            t204 = *(int *)((((short)(((((((t201 << 2) << 1) + t201) + t202) << 1) + ((((t201 << 2) << 1) + t201) + t202)) << 2) + ((int)stk + 4)) + 0x4));
                                            *(unsigned int *)0xC13EC54 = t204;
                                            t205 = *(int *)((((short)(((((((t201 << 2) << 1) + t201) + t202) << 1) + ((((t201 << 2) << 1) + t201) + t202)) << 2) + ((int)stk + 4)) + 0x0));
                                            *(unsigned int *)0xC13EC50 = t205;
                                        }
                                    } else {
                                        t207 = *(int *)(((0x148 + a4) + 0x0));
                                        t208 = (int)(((unsigned int)t207 >> 29) & 0x7);
                                        t209 = *(int *)((((short)(((((((t208 << 2) << 1) + t208) + 0x3) << 1) + ((((t208 << 2) << 1) + t208) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                        *(unsigned int *)0xC13EC58 = t209;
                                        t210 = *(int *)((((short)(((((((t208 << 2) << 1) + t208) + 0x3) << 1) + ((((t208 << 2) << 1) + t208) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                        *(unsigned int *)0xC13EC54 = t210;
                                        t211 = *(int *)((((short)(((((((t208 << 2) << 1) + t208) + 0x3) << 1) + ((((t208 << 2) << 1) + t208) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                        *(unsigned int *)0xC13EC50 = t211;
                                    }
                                } else {
                                    t213 = *(int *)(((0x148 + a4) + 0x0));
                                    t214 = (int)(((unsigned int)t213 >> 29) & 0x7);
                                    t215 = *(int *)((((short)(((((((t214 << 2) << 1) + t214) + 0x3) << 1) + ((((t214 << 2) << 1) + t214) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                    *(unsigned int *)0xC13EC58 = t215;
                                    t216 = *(int *)((((short)(((((((t214 << 2) << 1) + t214) + 0x3) << 1) + ((((t214 << 2) << 1) + t214) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                    *(unsigned int *)0xC13EC54 = t216;
                                    t217 = *(int *)((((short)(((((((t214 << 2) << 1) + t214) + 0x3) << 1) + ((((t214 << 2) << 1) + t214) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                    *(unsigned int *)0xC13EC50 = t217;
                                }
                            } else {
                                t219 = *(int *)(((0x148 + a4) + 0x0));
                                t220 = (int)(((unsigned int)t219 >> 29) & 0x7);
                                t221 = (int)((int)t2 % (int)0x4);
                                t222 = *(int *)((((short)(((((((t220 << 2) << 1) + t220) + t221) << 1) + ((((t220 << 2) << 1) + t220) + t221)) << 2) + ((int)stk + 4)) + 0x8));
                                *(unsigned int *)0xC13EC58 = t222;
                                t223 = *(int *)((((short)(((((((t220 << 2) << 1) + t220) + t221) << 1) + ((((t220 << 2) << 1) + t220) + t221)) << 2) + ((int)stk + 4)) + 0x4));
                                *(unsigned int *)0xC13EC54 = t223;
                                t224 = *(int *)((((short)(((((((t220 << 2) << 1) + t220) + t221) << 1) + ((((t220 << 2) << 1) + t220) + t221)) << 2) + ((int)stk + 4)) + 0x0));
                                *(unsigned int *)0xC13EC50 = t224;
                            }
                        }
                    } else {
                        t229 = *(int *)0xC1EE210;
                        if (t229 == 2) {
                            t230 = *(int *)0xC1EE214;
                            if (t230 != 4) {
                                t231 = *(int *)0xC1EE214;
                                if (t231 != 12) {
                                    t232 = *(int *)0xC1EE214;
                                    if (t232 == 15) {
                                        t233 = *(int *)(((0x148 + a4) + 0x0));
                                        t234 = (int)(((unsigned int)t233 >> 29) & 0x7);
                                        t235 = *(int *)((((short)(((((((t234 << 2) << 1) + t234) + 0x3) << 1) + ((((t234 << 2) << 1) + t234) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                        *(unsigned int *)0xC13EC58 = t235;
                                        t236 = *(int *)((((short)(((((((t234 << 2) << 1) + t234) + 0x3) << 1) + ((((t234 << 2) << 1) + t234) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                        *(unsigned int *)0xC13EC54 = t236;
                                        t237 = *(int *)((((short)(((((((t234 << 2) << 1) + t234) + 0x3) << 1) + ((((t234 << 2) << 1) + t234) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                        *(unsigned int *)0xC13EC50 = t237;
                                    } else {
                                        t238 = *(int *)(((0x148 + a4) + 0x0));
                                        t239 = (int)(((unsigned int)t238 >> 29) & 0x7);
                                        t240 = (int)((int)t2 % (int)0x4);
                                        t241 = *(int *)((((short)(((((((t239 << 2) << 1) + t239) + t240) << 1) + ((((t239 << 2) << 1) + t239) + t240)) << 2) + ((int)stk + 4)) + 0x8));
                                        *(unsigned int *)0xC13EC58 = t241;
                                        t242 = *(int *)((((short)(((((((t239 << 2) << 1) + t239) + t240) << 1) + ((((t239 << 2) << 1) + t239) + t240)) << 2) + ((int)stk + 4)) + 0x4));
                                        *(unsigned int *)0xC13EC54 = t242;
                                        t243 = *(int *)((((short)(((((((t239 << 2) << 1) + t239) + t240) << 1) + ((((t239 << 2) << 1) + t239) + t240)) << 2) + ((int)stk + 4)) + 0x0));
                                        *(unsigned int *)0xC13EC50 = t243;
                                    }
                                } else {
                                    t245 = *(int *)(((0x148 + a4) + 0x0));
                                    t246 = (int)(((unsigned int)t245 >> 29) & 0x7);
                                    t247 = *(int *)((((short)(((((((t246 << 2) << 1) + t246) + 0x3) << 1) + ((((t246 << 2) << 1) + t246) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                    *(unsigned int *)0xC13EC58 = t247;
                                    t248 = *(int *)((((short)(((((((t246 << 2) << 1) + t246) + 0x3) << 1) + ((((t246 << 2) << 1) + t246) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                    *(unsigned int *)0xC13EC54 = t248;
                                    t249 = *(int *)((((short)(((((((t246 << 2) << 1) + t246) + 0x3) << 1) + ((((t246 << 2) << 1) + t246) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                    *(unsigned int *)0xC13EC50 = t249;
                                }
                            } else {
                                t251 = *(int *)(((0x148 + a4) + 0x0));
                                t252 = (int)(((unsigned int)t251 >> 29) & 0x7);
                                t253 = *(int *)((((short)(((((((t252 << 2) << 1) + t252) + 0x3) << 1) + ((((t252 << 2) << 1) + t252) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                *(unsigned int *)0xC13EC58 = t253;
                                t254 = *(int *)((((short)(((((((t252 << 2) << 1) + t252) + 0x3) << 1) + ((((t252 << 2) << 1) + t252) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                *(unsigned int *)0xC13EC54 = t254;
                                t255 = *(int *)((((short)(((((((t252 << 2) << 1) + t252) + 0x3) << 1) + ((((t252 << 2) << 1) + t252) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                *(unsigned int *)0xC13EC50 = t255;
                            }
                        } else {
                            t257 = *(int *)(((0x148 + a4) + 0x0));
                            t258 = (int)(((unsigned int)t257 >> 29) & 0x7);
                            t259 = (int)((int)t2 % (int)0x4);
                            t260 = *(int *)((((short)(((((((t258 << 2) << 1) + t258) + t259) << 1) + ((((t258 << 2) << 1) + t258) + t259)) << 2) + ((int)stk + 4)) + 0x8));
                            *(unsigned int *)0xC13EC58 = t260;
                            t261 = *(int *)((((short)(((((((t258 << 2) << 1) + t258) + t259) << 1) + ((((t258 << 2) << 1) + t258) + t259)) << 2) + ((int)stk + 4)) + 0x4));
                            *(unsigned int *)0xC13EC54 = t261;
                            t262 = *(int *)((((short)(((((((t258 << 2) << 1) + t258) + t259) << 1) + ((((t258 << 2) << 1) + t258) + t259)) << 2) + ((int)stk + 4)) + 0x0));
                            *(unsigned int *)0xC13EC50 = t262;
                        }
                    }
                } else {
                    t267 = *(int *)0xC1EE210;
                    if (t267 == 2) {
                        t268 = *(int *)0xC1EE214;
                        if (t268 != 4) {
                            t269 = *(int *)0xC1EE214;
                            if (t269 != 12) {
                                t270 = *(int *)0xC1EE214;
                                if (t270 == 15) {
                                    t271 = *(int *)(((0x148 + a4) + 0x0));
                                    t272 = (int)(((unsigned int)t271 >> 29) & 0x7);
                                    t273 = *(int *)((((short)(((((((t272 << 2) << 1) + t272) + 0x3) << 1) + ((((t272 << 2) << 1) + t272) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                    *(unsigned int *)0xC13EC58 = t273;
                                    t274 = *(int *)((((short)(((((((t272 << 2) << 1) + t272) + 0x3) << 1) + ((((t272 << 2) << 1) + t272) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                    *(unsigned int *)0xC13EC54 = t274;
                                    t275 = *(int *)((((short)(((((((t272 << 2) << 1) + t272) + 0x3) << 1) + ((((t272 << 2) << 1) + t272) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                    *(unsigned int *)0xC13EC50 = t275;
                                } else {
                                    t276 = *(int *)(((0x148 + a4) + 0x0));
                                    t277 = (int)(((unsigned int)t276 >> 29) & 0x7);
                                    t278 = (int)((int)t2 % (int)0x4);
                                    t279 = *(int *)((((short)(((((((t277 << 2) << 1) + t277) + t278) << 1) + ((((t277 << 2) << 1) + t277) + t278)) << 2) + ((int)stk + 4)) + 0x8));
                                    *(unsigned int *)0xC13EC58 = t279;
                                    t280 = *(int *)((((short)(((((((t277 << 2) << 1) + t277) + t278) << 1) + ((((t277 << 2) << 1) + t277) + t278)) << 2) + ((int)stk + 4)) + 0x4));
                                    *(unsigned int *)0xC13EC54 = t280;
                                    t281 = *(int *)((((short)(((((((t277 << 2) << 1) + t277) + t278) << 1) + ((((t277 << 2) << 1) + t277) + t278)) << 2) + ((int)stk + 4)) + 0x0));
                                    *(unsigned int *)0xC13EC50 = t281;
                                }
                            } else {
                                t283 = *(int *)(((0x148 + a4) + 0x0));
                                t284 = (int)(((unsigned int)t283 >> 29) & 0x7);
                                t285 = *(int *)((((short)(((((((t284 << 2) << 1) + t284) + 0x3) << 1) + ((((t284 << 2) << 1) + t284) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                                *(unsigned int *)0xC13EC58 = t285;
                                t286 = *(int *)((((short)(((((((t284 << 2) << 1) + t284) + 0x3) << 1) + ((((t284 << 2) << 1) + t284) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                                *(unsigned int *)0xC13EC54 = t286;
                                t287 = *(int *)((((short)(((((((t284 << 2) << 1) + t284) + 0x3) << 1) + ((((t284 << 2) << 1) + t284) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                                *(unsigned int *)0xC13EC50 = t287;
                            }
                        } else {
                            t289 = *(int *)(((0x148 + a4) + 0x0));
                            t290 = (int)(((unsigned int)t289 >> 29) & 0x7);
                            t291 = *(int *)((((short)(((((((t290 << 2) << 1) + t290) + 0x3) << 1) + ((((t290 << 2) << 1) + t290) + 0x3)) << 2) + ((int)stk + 4)) + 0x8));
                            *(unsigned int *)0xC13EC58 = t291;
                            t292 = *(int *)((((short)(((((((t290 << 2) << 1) + t290) + 0x3) << 1) + ((((t290 << 2) << 1) + t290) + 0x3)) << 2) + ((int)stk + 4)) + 0x4));
                            *(unsigned int *)0xC13EC54 = t292;
                            t293 = *(int *)((((short)(((((((t290 << 2) << 1) + t290) + 0x3) << 1) + ((((t290 << 2) << 1) + t290) + 0x3)) << 2) + ((int)stk + 4)) + 0x0));
                            *(unsigned int *)0xC13EC50 = t293;
                        }
                    } else {
                        t295 = *(int *)(((0x148 + a4) + 0x0));
                        t296 = (int)(((unsigned int)t295 >> 29) & 0x7);
                        t297 = (int)((int)t2 % (int)0x4);
                        t298 = *(int *)((((short)(((((((t296 << 2) << 1) + t296) + t297) << 1) + ((((t296 << 2) << 1) + t296) + t297)) << 2) + ((int)stk + 4)) + 0x8));
                        *(unsigned int *)0xC13EC58 = t298;
                        t299 = *(int *)((((short)(((((((t296 << 2) << 1) + t296) + t297) << 1) + ((((t296 << 2) << 1) + t296) + t297)) << 2) + ((int)stk + 4)) + 0x4));
                        *(unsigned int *)0xC13EC54 = t299;
                        t300 = *(int *)((((short)(((((((t296 << 2) << 1) + t296) + t297) << 1) + ((((t296 << 2) << 1) + t296) + t297)) << 2) + ((int)stk + 4)) + 0x0));
                        *(unsigned int *)0xC13EC50 = t300;
                    }
                }
            }
        }
    }
    t314 = *(short *)0xC2AD000;
    t315 = *(int *)0xC13EB94;
    t316 = (int)((int)((t315 >> 1) >> 1) % (int)0x3);
    t317 = *(int *)((a4 + 0x110));
    if (t317 == 0xC8FE818) {
        t318 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
        *(unsigned int *)0xC13EC40 = t318;
        t319 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
        *(unsigned int *)0xC13EC3C = t319;
        t320 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
        *(unsigned int *)0xC13EC38 = t320;
    } else {
        if (t317 != 0xC900390) {
            if (t317 != 0xC902298) {
                if (t317 != 0xC903E20) {
                    if (t317 != 0xC9057E8) {
                        if (t317 != 0xC907360) {
                            if (t317 != 0xC908CF8) {
                                if (t317 != 0xC90A900) {
                                    if (t317 != 0xC90C478) {
                                        if (t317 != 0xC90E230) {
                                            if (t317 != 0xC9100A8) {
                                                if (t317 != 0xC912130) {
                                                    if (t317 != 0xC913CC8) {
                                                        if (t317 != 0xC916E40) {
                                                            if (t317 != 0xC918988) {
                                                                if (t317 == 0xC91A5C0) {
                                                                    t321 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                                    *(unsigned int *)0xC13EC40 = t321;
                                                                    t322 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                                    *(unsigned int *)0xC13EC3C = t322;
                                                                    t323 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                                    *(unsigned int *)0xC13EC38 = t323;
                                                                }
                                                            } else {
                                                                t327 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                                *(unsigned int *)0xC13EC40 = t327;
                                                                t328 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                                *(unsigned int *)0xC13EC3C = t328;
                                                                t329 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                                *(unsigned int *)0xC13EC38 = t329;
                                                            }
                                                        } else {
                                                            t333 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                            *(unsigned int *)0xC13EC40 = t333;
                                                            t334 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                            *(unsigned int *)0xC13EC3C = t334;
                                                            t335 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                            *(unsigned int *)0xC13EC38 = t335;
                                                        }
                                                    } else {
                                                        t339 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                        *(unsigned int *)0xC13EC40 = t339;
                                                        t340 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                        *(unsigned int *)0xC13EC3C = t340;
                                                        t341 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                        *(unsigned int *)0xC13EC38 = t341;
                                                    }
                                                } else {
                                                    t345 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                    *(unsigned int *)0xC13EC40 = t345;
                                                    t346 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                    *(unsigned int *)0xC13EC3C = t346;
                                                    t347 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                    *(unsigned int *)0xC13EC38 = t347;
                                                }
                                            } else {
                                                t351 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                                *(unsigned int *)0xC13EC40 = t351;
                                                t352 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                                *(unsigned int *)0xC13EC3C = t352;
                                                t353 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                                *(unsigned int *)0xC13EC38 = t353;
                                            }
                                        } else {
                                            t357 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                            *(unsigned int *)0xC13EC40 = t357;
                                            t358 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                            *(unsigned int *)0xC13EC3C = t358;
                                            t359 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x3)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                            *(unsigned int *)0xC13EC38 = t359;
                                        }
                                    } else {
                                        t363 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                        *(unsigned int *)0xC13EC40 = t363;
                                        t364 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                        *(unsigned int *)0xC13EC3C = t364;
                                        t365 = *(int *)((((short)(((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6) << 1) + ((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) + 0x6)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                        *(unsigned int *)0xC13EC38 = t365;
                                    }
                                } else {
                                    t369 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                    *(unsigned int *)0xC13EC40 = t369;
                                    t370 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                    *(unsigned int *)0xC13EC3C = t370;
                                    t371 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                    *(unsigned int *)0xC13EC38 = t371;
                                }
                            } else {
                                t375 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                                *(unsigned int *)0xC13EC40 = t375;
                                t376 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                                *(unsigned int *)0xC13EC3C = t376;
                                t377 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                                *(unsigned int *)0xC13EC38 = t377;
                            }
                        } else {
                            t381 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                            *(unsigned int *)0xC13EC40 = t381;
                            t382 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                            *(unsigned int *)0xC13EC3C = t382;
                            t383 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                            *(unsigned int *)0xC13EC38 = t383;
                        }
                    } else {
                        t387 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                        *(unsigned int *)0xC13EC40 = t387;
                        t388 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                        *(unsigned int *)0xC13EC3C = t388;
                        t389 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                        *(unsigned int *)0xC13EC38 = t389;
                    }
                } else {
                    t393 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                    *(unsigned int *)0xC13EC40 = t393;
                    t394 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                    *(unsigned int *)0xC13EC3C = t394;
                    t395 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                    *(unsigned int *)0xC13EC38 = t395;
                }
            } else {
                t399 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
                *(unsigned int *)0xC13EC40 = t399;
                t400 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
                *(unsigned int *)0xC13EC3C = t400;
                t401 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
                *(unsigned int *)0xC13EC38 = t401;
            }
        } else {
            t405 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x8));
            *(unsigned int *)0xC13EC40 = t405;
            t406 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x4));
            *(unsigned int *)0xC13EC3C = t406;
            t407 = *(int *)((((short)((((((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316) << 1) + (((((t314 - 1) << 2) << 1) + (t314 - 1)) + t316)) << 2) + (0x21C + ((int)stk + 4))) + 0x0));
            *(unsigned int *)0xC13EC38 = t407;
        }
    }
    Voice_ShutUp(0x1);
    Voice_Request(0xC13EC38, 0x1, 0x73, 0x0);
    Voice_ShutUp(0x2);
    t417 = Voice_Request(0xC13EC50, 0x2, 0x73, 0x0);
    return t417;
}

int FUN_0c0650b8(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
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
    int t31;
    int t32;
    int t34;
    int t35;
    float u36;
    float u37;
    float u38;
    float u39;
    int t41;
    int t42;
    float u43;
    float u44;
    float u45;
    float u46;
    int t51;
    int t53;
    int t54;
    float u55;
    float u56;
    float u57;
    float u58;
    int t67;
    int t68;
    int t69;
    float t72;
    float u75;
    int t78;
    int t79;
    int t82;
    int t85;
    int t86;
    float u87;
    float u88;
    float u89;
    float u90;
    int t93;
    int t94;
    float u95;
    float u96;
    float u97;
    float u98;
    int t102;
    int t103;
    int t120;
    int t121;
    float u122;
    float u123;
    float u124;
    float u125;
    int t130;
    int t131;
    float u132;
    float u133;
    float u134;
    float u135;
    int t141;
    int t142;
    int t153;
    int t156;
    int t158;
    int t157;
    int stk[56] = {0};

    t0 = *(int *)0xC0D5344;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x38)) = t0;
    t1 = *(int *)0xC0D5340;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x34)) = t1;
    t2 = *(int *)0xC0D533C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x30)) = t2;
    t3 = *(int *)0xC0D5338;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x2C)) = t3;
    t4 = *(int *)0xC0D5334;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x28)) = t4;
    t5 = *(int *)0xC0D5330;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x24)) = t5;
    t6 = *(int *)0xC0D532C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x20)) = t6;
    t7 = *(int *)0xC0D5328;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x1C)) = t7;
    t8 = *(int *)0xC0D5324;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x18)) = t8;
    t9 = *(int *)0xC0D5320;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x14)) = t9;
    t10 = *(int *)0xC0D531C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x10)) = t10;
    t11 = *(int *)0xC0D5318;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0xC)) = t11;
    t12 = *(int *)0xC0D5314;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x8)) = t12;
    t13 = *(int *)0xC0D5310;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x4)) = t13;
    t14 = *(int *)0xC0D530C;
    *(unsigned int *)(((((int)stk + 4) + 0x78) + 0x0)) = t14;
    t15 = *(int *)0xC0D5380;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x38)) = t15;
    t16 = *(int *)0xC0D537C;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x34)) = t16;
    t17 = *(int *)0xC0D5378;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x30)) = t17;
    t18 = *(int *)0xC0D5374;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x2C)) = t18;
    t19 = *(int *)0xC0D5370;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x28)) = t19;
    t20 = *(int *)0xC0D536C;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x24)) = t20;
    t21 = *(int *)0xC0D5368;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x20)) = t21;
    t22 = *(int *)0xC0D5364;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x1C)) = t22;
    t23 = *(int *)0xC0D5360;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x18)) = t23;
    t24 = *(int *)0xC0D535C;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x14)) = t24;
    t25 = *(int *)0xC0D5358;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x10)) = t25;
    t26 = *(int *)0xC0D5354;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0xC)) = t26;
    t27 = *(int *)0xC0D5350;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x8)) = t27;
    t28 = *(int *)0xC0D534C;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x4)) = t28;
    t29 = *(int *)0xC0D5348;
    *(unsigned int *)(((((int)stk + 4) + 0x3C) + 0x0)) = t29;
    SetCameraMode(0x1);
    t31 = *(int *)0xC2AD580;
    t32 = *(int *)0xC2AD578;
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 == 2) {
                nlPushMatrix(0xC179180);
                t34 = *(int *)0xC2AD54C;
                t35 = *(signed char *)((t34 + 0x14B));
                u36 = 1.0f;
                if ((t35 & 4) != 0) {
                    u36 = (-1.0f);
                }
                u37 = *(float *)(((0x90 + ((int)stk + 4)) + 0x0));
                *(float *)(((int)stk + 16)) = (u36 * u37);
                u38 = *(float *)(((0x90 + ((int)stk + 4)) + 0x4));
                *(float *)(((int)stk + 20)) = u38;
                u39 = *(float *)(((0x90 + ((int)stk + 4)) + 0x8));
                *(float *)(((int)stk + 24)) = u39;
                FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                t41 = *(int *)0xC2AD54C;
                t42 = *(signed char *)((t41 + 0x14B));
                u43 = 1.0f;
                if ((t42 & 4) != 0) {
                    u43 = (-1.0f);
                }
                u44 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x0));
                *(float *)(((int)stk + 16)) = (u43 * u44);
                u45 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x4));
                *(float *)(((int)stk + 20)) = u45;
                u46 = *(float *)((((((int)stk + 4) + 0x3C) + 0x18) + 0x8));
                *(float *)(((int)stk + 24)) = u46;
                FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                nlPopMatrix(0x1);
                camSetEye((((int)stk + 4) + 0x30), 0x0);
                camSetTarget((((int)stk + 4) + 0x24), 0x0);
                t51 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t51 + 0x1);
            } else {
                if (t31 == 3) {
                    nlPushMatrix(0xC179180);
                    t53 = *(int *)0xC2AD54C;
                    t54 = *(signed char *)((t53 + 0x14B));
                    u55 = 1.0f;
                    if ((t54 & 4) != 0) {
                        u55 = (-1.0f);
                    }
                    u56 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x0));
                    *(float *)(((int)stk + 16)) = (u55 * u56);
                    u57 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x4));
                    *(float *)(((int)stk + 20)) = u57;
                    u58 = *(float *)((((((int)stk + 4) + 0x3C) + 0x24) + 0x8));
                    *(float *)(((int)stk + 24)) = u58;
                    FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                    nlSubVector3op((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24), 0xC17984C);
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), 0.0349999964f);
                    FUN_0c078a70((((int)stk + 4) + 0x24), 0xC17984C, (((int)stk + 4) + 0x18));
                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                    nlPopMatrix(0x1);
                    nlPushUnitMatrix();
                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC179840, (((int)stk + 4) + 0x24));
                    t67 = *(int *)0xC2AD54C;
                    t68 = *(signed char *)((t67 + 0x14B));
                    t69 = 0x178;
                    if ((t68 & 4) != 0) {
                        t69 = 0xFFFFFE88;
                    }
                    FUN_0c078480(0xC2AD1EC, t69);
                    FUN_0c077210((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
                    t72 = nlUnitVector((((int)stk + 4) + 0xC));
                    nlScaleVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), (t72 + 0.099999994f));
                    FUN_0c078a70((((int)stk + 4) + 0x30), 0xC17984C, (((int)stk + 4) + 0x18));
                    u75 = *(float *)(((int)stk + 56));
                    *(float *)(((int)stk + 56)) = (u75 - 0.222222209f);
                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                    nlPopMatrix(0x1);
                    t78 = *(int *)0xC2AD578;
                    if ((int)t78 >= (int)0x91) {
                        t79 = *(int *)0xC2AD580;
                        *(unsigned int *)0xC2AD580 = (t79 + 0x1);
                    }
                } else {
                    if (t31 == 4) {
                        if ((int)t32 >= (int)0x96) {
                            t82 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t82 + 0x1);
                        }
                    } else {
                        if (t31 == 5) {
                            nlPushMatrix(0xC179180);
                            t85 = *(int *)0xC2AD54C;
                            t86 = *(signed char *)((t85 + 0x14B));
                            u87 = (-1.0f);
                            if ((t86 & 4) != 0) {
                                u87 = 1.0f;
                            }
                            u88 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x0));
                            *(float *)(((int)stk + 16)) = (u87 * u88);
                            u89 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x4));
                            *(float *)(((int)stk + 20)) = u89;
                            u90 = *(float *)(((0xA8 + ((int)stk + 4)) + 0x8));
                            *(float *)(((int)stk + 24)) = u90;
                            FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
                            camSetEye((((int)stk + 4) + 0x30), 0x0);
                            t93 = *(int *)0xC2AD54C;
                            t94 = *(signed char *)((t93 + 0x14B));
                            u95 = (-1.0f);
                            if ((t94 & 4) != 0) {
                                u95 = 1.0f;
                            }
                            u96 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x0));
                            *(float *)(((int)stk + 16)) = (u95 * u96);
                            u97 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x4));
                            *(float *)(((int)stk + 20)) = u97;
                            u98 = *(float *)((((((int)stk + 4) + 0x3C) + 0x30) + 0x8));
                            *(float *)(((int)stk + 24)) = u98;
                            FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                            camSetTarget((((int)stk + 4) + 0x24), 0x0);
                            nlPopMatrix(0x1);
                            t102 = *(int *)0xC2AD580;
                            *(unsigned int *)0xC2AD580 = (t102 + 0x1);
                        } else {
                            if (t31 == 6) {
                                if ((int)t32 >= (int)0x93) {
                                    t103 = *(int *)0xC2AD580;
                                    *(unsigned int *)0xC2AD580 = (t103 + 0x1);
                                }
                            } else {
                                if (t31 == 7) {
                                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD554, 0xC179840);
                                    nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, 0.0799999982f);
                                    camSetEye((((int)stk + 4) + 0x30), 0x0);
                                    nlSubVector3op((((int)stk + 4) + 0x18), 0xC2AD560, 0xC17984C);
                                    nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, 0.0799999982f);
                                    camSetTarget((((int)stk + 4) + 0x24), 0x0);
                                }
                            }
                        }
                    }
                }
            }
        } else {
            nlPushMatrix(0xC179180);
            t120 = *(int *)0xC2AD54C;
            t121 = *(signed char *)((t120 + 0x14B));
            u122 = 1.0f;
            if ((t121 & 4) != 0) {
                u122 = (-1.0f);
            }
            u123 = *(float *)(((0x84 + ((int)stk + 4)) + 0x0));
            *(float *)(((int)stk + 16)) = (u122 * u123);
            u124 = *(float *)(((0x84 + ((int)stk + 4)) + 0x4));
            *(float *)(((int)stk + 20)) = u124;
            u125 = *(float *)(((0x84 + ((int)stk + 4)) + 0x8));
            *(float *)(((int)stk + 24)) = u125;
            FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x30));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 0xC179840);
            nlGetAverageVector(0xC179840, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x30), 1.0f, (((float)t32 * 0.149999991f) / 100.0f));
            camSetEye((((int)stk + 4) + 0x30), 0x0);
            t130 = *(int *)0xC2AD54C;
            t131 = *(signed char *)((t130 + 0x14B));
            u132 = 1.0f;
            if ((t131 & 4) != 0) {
                u132 = (-1.0f);
            }
            u133 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x0));
            *(float *)(((int)stk + 16)) = (u132 * u133);
            u134 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x4));
            *(float *)(((int)stk + 20)) = u134;
            u135 = *(float *)((((((int)stk + 4) + 0x3C) + 0xC) + 0x8));
            *(float *)(((int)stk + 24)) = u135;
            FUN_0c0771b0((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
            nlSubVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 0xC17984C);
            nlGetAverageVector(0xC17984C, (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24), 1.0f, (((float)t32 * 0.149999991f) / 100.0f));
            camSetTarget((((int)stk + 4) + 0x24), 0x0);
            nlPopMatrix(0x1);
            t141 = *(int *)0xC2AD578;
            if ((int)t141 >= (int)0x64) {
                t142 = *(int *)0xC2AD580;
                *(unsigned int *)0xC2AD580 = (t142 + 0x1);
            }
        }
    } else {
        nlPushMatrix(0xC179180);
        FUN_0c0771b0((((int)stk + 4) + 0x78), (((int)stk + 4) + 0x30));
        FUN_0c0771b0((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x24));
        nlPopMatrix(0x1);
        camSetEye((((int)stk + 4) + 0x30), 0x0);
        camSetTarget((((int)stk + 4) + 0x24), 0x0);
        t153 = *(int *)0xC2AD580;
        *(unsigned int *)0xC2AD580 = (t153 + 0x1);
    }
    t156 = *(int *)0xC2AD590;
    t158 = t156;
    if ((t156 & 2) == 0) {
        t157 = camRestore();
        t158 = t157;
    }
    return t158;
}
