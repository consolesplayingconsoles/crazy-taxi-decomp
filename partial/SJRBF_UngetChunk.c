/* Draft: generated C that the check did not accept (DIFFERS case 1: calls). Not proven equivalent. */

int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);

int SJRBF_UngetChunk(int a4, int a5, int a6)
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
    int t31;
    int t32;
    int t33;
    int t34;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x14));
        t2 = *(int *)((a4 + 0x20));
        t3 = *(int *)((a6 + 0x4));
        t4 = (int)((int)((t1 + t2) - t3) % (int)t2);
        t5 = *(int *)((a6 + 0x0));
        t6 = *(int *)((a4 + 0x1C));
        t7 = (int)((int)(t5 - t6) % (int)t2);
        if (t4 == t7) {
            *(unsigned int *)((a4 + 0x14)) = t4;
            t8 = *(int *)((a4 + 0x10));
            t9 = *(int *)((a6 + 0x4));
            *(unsigned int *)((a4 + 0x10)) = (t8 + t9);
        } else {
            t10 = *(int *)((a4 + 0x28));
            if (t10 != 0) {
                t11 = *(int *)((a4 + 0x28));
                t12 = *(int *)((a4 + 0x2C));
                t13 = ((int (*)(int, int))(t11))(t12, 0xFFFFFFFD);
            }
        }
    } else {
        if (a5 == 1) {
            t16 = *(int *)((a4 + 0x18));
            t17 = *(int *)((a4 + 0x20));
            t18 = *(int *)((a6 + 0x4));
            t19 = (int)((int)((t16 + t17) - t18) % (int)t17);
            t20 = *(int *)((a6 + 0x0));
            t21 = *(int *)((a4 + 0x1C));
            t22 = (int)((int)(t20 - t21) % (int)t17);
            if (t19 == t22) {
                *(unsigned int *)((a4 + 0x18)) = t19;
                t23 = *(int *)((a4 + 0xC));
                t24 = *(int *)((a6 + 0x4));
                *(unsigned int *)((a4 + 0xC)) = (t23 + t24);
            } else {
                t25 = *(int *)((a4 + 0x28));
                if (t25 != 0) {
                    t26 = *(int *)((a4 + 0x28));
                    t27 = *(int *)((a4 + 0x2C));
                    t28 = ((int (*)(int, int))(t26))(t27, 0xFFFFFFFD);
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t31 = *(int *)((a4 + 0x28));
            if (t31 != 0) {
                t32 = *(int *)((a4 + 0x28));
                t33 = *(int *)((a4 + 0x2C));
                t34 = ((int (*)(int, int))(t32))(t33, 0xFFFFFFFD);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

