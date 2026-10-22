/* Straight-line functions with calls and guards (batch gen_pl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int rtcGetSeconds(void);
int Result_Insert_Rank(int a4, int a5, int a6, int a7);

int Result_Insert_Rank(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t4;
    int t5;
    int t56;
    int t2;
    int t3;
    int t6;
    int t7;
    int t11;
    int t12;

    t0 = rtcGetSeconds();
    t1 = t0;
    t4 = 0x63;
    t5 = a7;
    for (;;) {
        if ((int)t4 >= (int)((*(int *)0xC2A97DC) - 1)) {
            t7 = t4;
            t6 = (*(int *)0xC1EE210);
            t7 = (t7 - 20);
            t3 = 0x1E30;
            t7 = (t7 << 2);
            t3 = (t3 + 0xC28A4E8);
            t7 = (t7 << 1);
            t6 = ((short)t6 * (short)0x3C0);
            t6 = (short)t6;
            t6 = (t6 + t3);
            t1 = t4;
            if ((t1 == 99) && (t2 = 0xC2A97DC, t11 = *(int *)((t2 + 0x0)), t12 = (t1 == 99), t1 = t11, t1 == 100)) {
                t3 = (*(int *)0xC2A7600);
                t2 = (*(int *)((t3 + 0x0)));
                t3 = 0x3C0;
                t1 = 0x140;
                *(unsigned int *)((((0x140 + t6) + t7) + 0x0)) = t2;
                t2 = 0x1E30;
                t2 = (t2 + 0xC28A4E8);
                t1 = (t1 + ((short)((short)(*(int *)0xC1EE210) * (short)t3) + t2));
                t1 = (t1 + t7);
                *(unsigned int *)((t1 + 0x4)) = t0;
            } else {
                t3 = 0x14;
                if ((int)t4 >= (int)t3) {
                    t1 = t4;
                    if (t1 != 99) {
                        t5 = 0x140;
                        t2 = 0x1E30;
                        t5 = (t5 + t6);
                        t1 = 0x140;
                        t5 = (t5 + t7);
                        t2 = (t2 + 0xC28A4E8);
                        *(unsigned int *)((t5 + 0x8)) = (*(int *)((t5 + 0x0)));
                        t5 = (*(int *)0xC1EE210);
                        t5 = ((short)t5 * (short)0x3C0);
                        t5 = (short)t5;
                        t5 = (t5 + t2);
                        t5 = (t5 + t1);
                        t5 = (t5 + t7);
                        t3 = (*(int *)((t5 + 0x4)));
                        *(unsigned int *)((t5 + 0xC)) = t3;
                    }
                    if (t4 == ((*(int *)0xC2A97DC) - 1)) {
                        t3 = 0x3C0;
                        t2 = 0x1E30;
                        t1 = 0x140;
                        t2 = (t2 + 0xC28A4E8);
                        t1 = (t1 + ((short)((short)(*(int *)0xC1EE210) * (short)t3) + t2));
                        t1 = (t1 + t7);
                        t2 = (*(int *)(((*(int *)0xC2A7600) + 0x0)));
                        *(unsigned int *)((t1 + 0x0)) = t2;
                        t2 = 0x1E30;
                        t1 = 0x140;
                        t2 = (t2 + 0xC28A4E8);
                        t1 = (t1 + ((short)((short)(*(int *)0xC1EE210) * (short)t3) + t2));
                        t1 = (t1 + t7);
                        *(unsigned int *)((t1 + 0x4)) = t0;
                    }
                } else {
                    t7 = t4;
                    t7 = (t7 << 2);
                    t1 = t4;
                    t7 = (t7 << 2);
                    if (t1 == 19) {
                        t2 = (*(int *)(((t6 + t7) + 0x0)));
                        t3 = 0x1E30;
                        t1 = 0x140;
                        t3 = (t3 + 0xC28A4E8);
                        *(unsigned int *)((t6 + t1)) = t2;
                        t1 = (t1 + 0x4);
                        t5 = (*(int *)0xC1EE210);
                        t5 = ((short)t5 * (short)0x3C0);
                        t5 = (short)t5;
                        t5 = (t5 + t3);
                        t2 = t5;
                        t2 = (t2 + t7);
                        t3 = (*(int *)((t2 + 0xC)));
                        *(unsigned int *)((t5 + t1)) = t3;
                    } else {
                        t5 = t6;
                        t5 = (t5 + t7);
                        t2 = 0x1E30;
                        *(unsigned int *)((t5 + 0x10)) = (*(int *)((t5 + 0x0)));
                        t2 = (t2 + 0xC28A4E8);
                        t5 = (*(int *)0xC1EE210);
                        t5 = ((short)t5 * (short)0x3C0);
                        t5 = (short)t5;
                        t5 = (t5 + t2);
                        t2 = 0x14;
                        t5 = (t5 + t7);
                        t2 = (t2 + t5);
                        t1 = (*(signed char *)((t5 + 0x4)));
                        *(unsigned char *)((t2 + 0x0)) = t1;
                        t5 = (*(int *)0xC1EE210);
                        t2 = 0x1E30;
                        t2 = (t2 + 0xC28A4E8);
                        t5 = ((short)t5 * (short)0x3C0);
                        t5 = (short)t5;
                        t5 = (t5 + t2);
                        t2 = 0x15;
                        t5 = (t5 + t7);
                        t2 = (t2 + t5);
                        t1 = (*(signed char *)((t5 + 0x5)));
                        *(unsigned char *)((t2 + 0x0)) = t1;
                        t5 = (*(int *)0xC1EE210);
                        t5 = ((short)t5 * (short)0x3C0);
                        t2 = 0x1E30;
                        t5 = (short)t5;
                        t2 = (t2 + 0xC28A4E8);
                        t5 = (t5 + t2);
                        t5 = (t5 + t7);
                        t1 = (*(int *)((t5 + 0xC)));
                        *(unsigned int *)((t5 + 0x1C)) = t1;
                        t5 = 0x0;
                        for (;;) {
                            t6 = (*(int *)0xC1EE210);
                            t3 = 0x1E30;
                            t3 = (t3 + 0xC28A4E8);
                            t6 = ((short)t6 * (short)0x3C0);
                            t6 = (short)t6;
                            t6 = (t6 + t3);
                            t6 = (t6 + t7);
                            t3 = t6;
                            t2 = t6;
                            t3 = (t3 + 0x6);
                            t2 = (t2 + 0x16);
                            t3 = (t3 + t5);
                            t2 = (t2 + t5);
                            t1 = (*(signed char *)((t3 + 0x0)));
                            t5 = (t5 + 0x1);
                            *(unsigned char *)((t2 + 0x0)) = t1;
                            if ((int)t5 >= (int)0x3) {
                                break;
                            }
                        }
                    }
                    if (t4 != ((*(int *)0xC2A97DC) - 1)) {
                    } else {
                        t3 = 0x3C0;
                        t2 = 0x1E30;
                        t2 = (t2 + 0xC28A4E8);
                        t1 = ((short)((short)(*(int *)0xC1EE210) * (short)t3) + t2);
                        t1 = (t1 + t7);
                        t2 = (*(int *)(((*(int *)0xC2A7600) + 0x0)));
                        *(unsigned int *)((t1 + 0x0)) = t2;
                        t2 = 0x1E30;
                        t2 = (t2 + 0xC28A4E8);
                        t1 = ((short)((short)(*(int *)0xC1EE210) * (short)t3) + t2);
                        t2 = 0xC1794D0;
                        t1 = (t1 + t7);
                        t56 = *(signed char *)((t2 + 0x0));
                        t2 = 0x4;
                        t2 = (t2 + t1);
                        *(unsigned char *)((t2 + 0x0)) = t56;
                        t1 = (*(int *)0xC1EE210);
                        t1 = ((short)t1 * (short)t3);
                        t1 = (short)t1;
                        t1 = (t1 + 0xC28C318);
                        t2 = t1;
                        t2 = (t2 + t7);
                        t1 = (*(signed char *)0xC2A96F0);
                        *(unsigned char *)((t2 + 0x5)) = t1;
                        t2 = (*(int *)0xC1EE210);
                        t2 = ((short)t2 * (short)t3);
                        t2 = (short)t2;
                        t2 = (t2 + 0xC28C318);
                        t1 = t2;
                        t1 = (t1 + t7);
                        t5 = 0x0;
                        *(unsigned int *)((t1 + 0xC)) = t0;
                        for (;;) {
                            t2 = 0x2A;
                            t1 = (*(int *)0xC1EE210);
                            t3 = 0x1E30;
                            t3 = (t3 + 0xC28A4E8);
                            t1 = ((short)t1 * (short)0x3C0);
                            t1 = (short)t1;
                            t1 = (t1 + t3);
                            t1 = (t1 + t7);
                            t3 = t1;
                            t3 = (t3 + 0x6);
                            t3 = (t3 + t5);
                            t5 = (t5 + 0x1);
                            *(unsigned char *)((t3 + 0x0)) = t2;
                            if ((int)t5 >= (int)0x3) {
                                break;
                            }
                        }
                    }
                }
            }
            t4 = (t4 - 1);
            continue;
        }
        break;
    }
    *(unsigned int *)0xC1789C0 = ((*(int *)0xC1789C0) + 0x1);
    return t1;
}
