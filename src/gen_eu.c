/* Straight-line functions with calls and guards (batch gen_eu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int gdc_CourseAdvLoadSub();
int gdc_CourseAdvLoadReq(int a4, int a5, int a6, float f4);

int gdc_CourseAdvLoadReq(int a4, int a5, int a6, float f4)
{
    int t0;
    int t1;
    int t2;
    int t22;
    int t24;
    int t26;
    int t28;
    int t32;
    int t30;
    int t45;
    int t57;
    int t60;
    int t74;
    int t76;
    int t78;
    int t91;
    int t94;
    int t92;
    int t105;
    int t116;
    int t118;
    int t129;
    int t130;
    int t134;
    int t136;
    int t138;
    int t142;
    int t144;
    int t146;
    int t147;
    int t149;
    int t151;
    int t154;

    *(unsigned int *)0xC1790C8 = 0x1;
    t0 = *(int *)0xC1EE20C;
    t1 = *(int *)0xC1EE33C;
    t2 = *(int *)0xC1EE228;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (a6 != 4) {
            if (a6 != 5) {
                if (a6 != 7) {
                    if (a6 != 8) {
                        if (a6 == 9) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return a6;
                            }
                            t22 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4458, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4468, 0x1);
                        }
                        if (a6 == 10) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 40)) {
                                return a6;
                            }
                            t24 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4478, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4484, 0x1);
                        }
                        if (a6 == 14) {
                            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return a6;
                            }
                            t26 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4490, 0x0, f4);
                            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4498, 0x1);
                        }
                        if (a6 == 18) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t28 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F44A8, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F44B8, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 19) {
                            t32 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
                                t30 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F44E0, 0x0, f4);
                                t32 = (((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F44EC, 0x1));
                            }
                            if ((int)(*(int *)0xC1EE33C) >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4500, 0x0);
                            }
                            return t32;
                        }
                        if (a6 == 20) {
                            t45 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
                                t45 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4500, 0x0, f4));
                            }
                            if ((int)(*(int *)0xC1EE33C) >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4510, 0x1);
                            }
                            return t45;
                        }
                        if (a6 == 21) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                                t57 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F44C8, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F44D4, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 25) {
                            t60 = a6;
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t60 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F453C, 0x0, f4));
                            }
                            if ((int)(*(int *)0xC1EE33C) >= (int)((*(int *)((a5 + 0x0))) - 90)) {
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F452C, 0x0);
                            }
                            return t60;
                        }
                        if (a6 == 30) {
                            if ((int)(*(int *)0xC1EE33C) >= (int)((*(int *)((a5 + 0x0))) - 90)) {
                                return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F452C, 0x0, f4);
                            }
                            return a6;
                        }
                        if (a6 == 31) {
                            if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 60)) {
                                t74 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4548, 0x0, f4);
                                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F455C, 0x1);
                            }
                            return a6;
                        }
                        return a6;
                    }
                    if (t2 != 2) {
                        return t2;
                    }
                    t76 = *(int *)((a5 + 0x0));
                    t78 = (t76 - 60);
                    if ((int)t1 >= (int)(t76 - 60)) {
                        t78 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F443C, 0x0, f4));
                    }
                    if ((int)(*(int *)0xC1EE33C) < (int)((*(int *)((a5 + 0x0))) - 30)) {
                        return t78;
                    }
                    return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4448, 0x1);
                }
                if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                    return a6;
                }
                return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F442C, 0x0, f4);
            }
            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 40)) {
            } else {
                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
            }
            return a6;
        }
        t91 = *(int *)((a5 + 0x0));
        t94 = (t91 - 180);
        if ((int)t1 >= (int)(t91 - 180)) {
            *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
            t92 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F43EC, 0x0, f4);
            t94 = (((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F43F4, 0x1));
        }
        if ((int)(*(int *)0xC1EE33C) < (int)((*(int *)((a5 + 0x0))) - 120)) {
            return t94;
        }
        t105 = ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4404, 0x0);
        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4418, 0x1);
    }
    if (a6 != 6) {
        if (a6 != 8) {
            if (a6 != 9) {
                if (a6 != 10) {
                    if (a6 == 11) {
                        t116 = *(int *)((a5 + 0x0));
                        t118 = (t116 - 160);
                        if ((int)t1 >= (int)(t116 - 160)) {
                            *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                            t118 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F430C, 0x0, f4));
                        }
                        if ((int)(*(int *)0xC1EE33C) < (int)((*(int *)((a5 + 0x0))) - 90)) {
                            return t118;
                        }
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4330, 0x0);
                    }
                    if (a6 == 12) {
                        t129 = *(int *)((a5 + 0x0));
                        t130 = (t129 - 150);
                        if ((int)t1 < (int)(t129 - 150)) {
                            *(unsigned int *)0xC1790C8 = 0x2;
                            t130 = 0x2;
                        }
                        if ((int)(*(int *)0xC1EE33C) < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return t130;
                        }
                        t134 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4340, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4348, 0x1);
                    }
                    if (a6 == 21) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                            return a6;
                        }
                        t136 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4354, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F4368, 0x1);
                    }
                    if (a6 == 22) {
                        if (t2 != 2) {
                            return t2;
                        }
                        t138 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t138 - 60)) {
                            return (t138 - 60);
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4370, 0x0, f4);
                    }
                    if (a6 == 23) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4380, 0x0, f4);
                    }
                    if (a6 == 24) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F438C, 0x0, f4);
                    }
                    if (a6 == 25) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        t142 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F43A0, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F43B4, 0x1);
                    }
                    if (a6 == 27) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 60)) {
                            return a6;
                        }
                        t144 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F43C0, 0x0, f4);
                        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F43D0, 0x1);
                    }
                    if (a6 == 28) {
                        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                            return a6;
                        }
                        return ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F43E0, 0x0, f4);
                    }
                    return a6;
                }
                t146 = *(int *)((a5 + 0x0));
                if ((int)t1 < (int)(t146 - 195)) {
                    return (t146 - 195);
                }
                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                t147 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F42D8, 0x0, f4);
                return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F42F4, 0x1);
            }
            if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 120)) {
                return a6;
            }
            t149 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F42C0, 0x0, f4);
            return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F42CC, 0x1);
        }
        if ((int)t1 < (int)((*(int *)((a5 + 0x0))) - 30)) {
            return a6;
        }
        t151 = ((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F42AC, 0x0, f4);
        return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F42B8, 0x1);
    }
    t154 = a6;
    if ((int)t1 >= (int)((*(int *)((a5 + 0x0))) - 120)) {
        t154 = (((int (*)(int, int, float))(gdc_CourseAdvLoadSub))(0xC0F4280, 0x0, f4));
    }
    if ((int)(*(int *)0xC1EE33C) < (int)((*(int *)((a5 + 0x0))) - 60)) {
        return t154;
    }
    *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
    return ((int (*)(int, int))(gdc_CourseAdvLoadSub))(0xC0F429C, 0x1);
}
