/* Draft: generated C that the check did not accept (DIFFERS case 1: calls). Not proven equivalent. */

int FUN_0c16af38(void);
int SJMEM_Unlock(int, int);

int SJMEM_UngetChunk(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
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
    int t21;
    int t22;
    int t23;
    int t24;

    t0 = FUN_0c16af38();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x1C));
        if (t1 != 0) {
            t2 = *(int *)((a4 + 0x1C));
            t3 = *(int *)((a4 + 0x20));
            t4 = ((int (*)(int, int))(t2))(t3, 0xFFFFFFFD);
        }
    } else {
        if (a5 == 1) {
            t6 = *(int *)((a4 + 0x10));
            t7 = *(int *)((a6 + 0x4));
            t8 = (t6 - t7);
            if ((int)(t6 - t7) <= 0) {
                t8 = 0x0;
            }
            *(unsigned int *)((a4 + 0x10)) = t8;
            t9 = *(int *)((a6 + 0x4));
            t10 = *(int *)((a4 + 0xC));
            t11 = *(int *)((a4 + 0x18));
            t12 = (t10 + t9);
            if ((int)t11 < (int)(t10 + t9)) {
                t12 = t11;
            }
            *(unsigned int *)((a4 + 0xC)) = t12;
            t13 = *(int *)((a6 + 0x0));
            t14 = *(int *)((a4 + 0x14));
            if (t8 != (t13 - t14)) {
                t15 = *(int *)((a4 + 0x1C));
                if (t15 != 0) {
                    t16 = *(int *)((a4 + 0x1C));
                    t17 = *(int *)((a4 + 0x20));
                    t18 = ((int (*)(int, int, int))(t16))(t17, 0xFFFFFFFD, (t10 + t9));
                }
            }
        } else {
            *(unsigned int *)((a6 + 0x4)) = 0x0;
            *(unsigned int *)((a6 + 0x0)) = 0x0;
            t21 = *(int *)((a4 + 0x1C));
            if (t21 != 0) {
                t22 = *(int *)((a4 + 0x1C));
                t23 = *(int *)((a4 + 0x20));
                t24 = ((int (*)(int, int))(t22))(t23, 0xFFFFFFFD);
            }
        }
    }
    return SJMEM_Unlock(a4, t0);
}

