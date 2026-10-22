/* Straight-line functions with calls and guards (batch gen_rr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07e820(int, int, int);
int FUN_0c07e880(void);
int FUN_0c07f5c0(int);
int FUN_0c07ef40(int a4, int a5, int a6);

int FUN_0c07ef40(int a4, int a5, int a6)
{
    int t0;
    int t114;
    int t10;
    int t8;
    int t13;
    int t14;
    int t16;
    int t17;
    int t19;
    int t22;
    int t57;
    int t40;
    int t41;
    int t43;
    int t44;
    int t46;
    int t49;
    int t75;
    int t101;
    int t104;
    int t93;
    int t65;
    int t30;
    int t24;
    int t51;

    t0 = *(int *)0xC2B76FC;
    t114 = 0xFFFFFFFF;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        t10 = (unsigned char)t0;
                        if ((unsigned char)t0 == 5) {
                            t8 = 0x1;
                            if ((*(int *)0xA08000B4) != 0) {
                            } else {
                                *(unsigned int *)0xA08000B0 = 0x0;
                                *(unsigned int *)0xC2B76FC = 0x0;
                                t8 = 0x0;
                            }
                            t10 = t8;
                        }
                        t30 = t10;
                    } else {
                        t13 = *(int *)0xC2B76FC;
                        if ((t13 & 0xFF00) == 0) {
                            t14 = 0x0;
                            for (;;) {
                                if ((int)t14 >= (int)(*(int *)0xC2B7700)) {
                                    return 0x1;
                                }
                                t16 = *(int *)0xC2B7710;
                                *(unsigned int *)0xC2B7710 = (t16 + 0x4);
                                t17 = *(int *)0xC2B770C;
                                *(unsigned int *)0xC2B770C = (t17 + 0x4);
                                *(unsigned int *)((((t16 + 0x4) - 4) + 0x0)) = (*(int *)((((t17 + 0x4) - 4) + 0x0)));
                                t19 = *(int *)0xC2B7704;
                                *(unsigned int *)0xC2B7704 = (t19 - 4);
                                if ((t19 - 4) == 0) {
                                    break;
                                }
                                t14 = (t14 + 0x1);
                            }
                            *(unsigned int *)0xA08000B0 = 0x1;
                            *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                            t24 = 0x1;
                        } else {
                            t22 = 0x0;
                            if ((t13 & 0xFF00) == 0x100) {
                                *(unsigned int *)0xA08000B0 = 0x1;
                                *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                                t22 = 0x1;
                            }
                            t24 = t22;
                        }
                        t30 = t24;
                    }
                    t65 = t30;
                } else {
                    t57 = 0x1;
                    if ((FUN_0c07e880()) == 0) {
                        *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                        t40 = *(int *)0xC2B76FC;
                        if ((t40 & 0xFF00) == 0) {
                            t41 = 0x0;
                            for (;;) {
                                if ((int)t41 >= (int)(*(int *)0xC2B7700)) {
                                    return 0x1;
                                }
                                t43 = *(int *)0xC2B7710;
                                *(unsigned int *)0xC2B7710 = (t43 + 0x4);
                                t44 = *(int *)0xC2B770C;
                                *(unsigned int *)0xC2B770C = (t44 + 0x4);
                                *(unsigned int *)((((t43 + 0x4) - 4) + 0x0)) = (*(int *)((((t44 + 0x4) - 4) + 0x0)));
                                t46 = *(int *)0xC2B7704;
                                *(unsigned int *)0xC2B7704 = (t46 - 4);
                                if ((t46 - 4) == 0) {
                                    break;
                                }
                                t41 = (t41 + 0x1);
                            }
                            *(unsigned int *)0xA08000B0 = 0x1;
                            *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                            t51 = 0x1;
                        } else {
                            t49 = 0x0;
                            if ((t40 & 0xFF00) == 0x100) {
                                *(unsigned int *)0xA08000B0 = 0x1;
                                *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                                t49 = 0x1;
                            }
                            t51 = t49;
                        }
                        t57 = t51;
                    }
                    t65 = t57;
                }
                t93 = t65;
            } else {
                if ((*(int *)0xA08000B4) != 0) {
                    t75 = *(int *)0xC2B7708;
                    if (t75 != 0) {
                        FUN_0c07e820((*(int *)0xC2B7710), ((*(int *)0xC2B7710) + (*(int *)0xC2B7704)), t75);
                    }
                    *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                }
                t93 = 0x1;
            }
            t104 = t93;
        } else {
            t101 = 0x0;
            for (;;) {
                if ((FUN_0c07f5c0(0x18A0)) != 0) {
                    t101 = (t101 + 0x1);
                    if ((int)t101 >= (int)0x400000) {
                        break;
                    }
                    continue;
                }
                *(unsigned int *)0xC2B76FC = ((*(int *)0xC2B76FC) + 0x1);
                return 0x1;
            }
            t104 = 0x1;
        }
        t114 = t104;
    }
    return t114;
}
