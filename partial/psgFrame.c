/* Draft: generated C that the check did not accept (DIFFERS case 4: out). Not proven equivalent. */

int psgRoadCheck(int);

int psgFrame(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t12;
    int t13;
    int t14;
    int stk[11];

    t0 = *(int *)0xC0D5F7C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x18)) = t0;
    t1 = *(int *)0xC0D5F78;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t1;
    t2 = *(int *)0xC0D5F74;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = t2;
    t3 = *(int *)0xC0D5F70;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t3;
    t4 = *(int *)0xC0D5F6C;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t4;
    t5 = *(int *)0xC0D5F68;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t5;
    t6 = *(int *)0xC0D5F64;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t6;
    t7 = *(int *)((a4 + 0x20));
    if (t7 != 0) {
        if (t7 == 1) {
            psgRoadCheck(a4);
        }
    } else {
        psgRoadCheck(a4);
    }
    t12 = *(int *)((a4 + 0x20));
    t13 = *(int *)((((t12 << 2) + (((int)stk + 4) + 0x4)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t13;
    t14 = ((int (*)(int))(t13))(a4);
    return t14;
}

