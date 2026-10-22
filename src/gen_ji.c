/* Straight-line functions with calls and guards (batch gen_ji): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Money_Array(int, int, int);
int Put_TotalDrum(int);
int Put_TotalDrum_SetDigits(int, int);
int Sound_Request(int, int);
int Start_Pass_Ranking(void);
int Put_TotalDrum_Update(void);

int Put_TotalDrum_Update(void)
{
    int t4;
    int t1;
    int t2;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t48;
    int t54;
    int stk[22] = {0};

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x20)) = *(struct mv8 *)(0xC0D08B4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)(((int)stk + 4)) = *(struct mv8 *)(0xC0D08D4); }
    if (((*(int *)0xC2A8EB0) == 9) && (t1 = *(int *)0xC2A8C5C, t2 = *(int *)((t1 + 0x0)), t2 != 0)) {
        t4 = *(int *)0xC2A7600;
        *(unsigned int *)((t4 + 0x0)) = ((*(int *)((t4 + 0x0))) + (*(int *)((t1 + 0x0))));
        if ((int)(*(int *)(((*(int *)0xC2A7600) + 0x0))) > (int)0x5F5E0FF) {
            *(unsigned int *)(((*(int *)0xC2A7600) + 0x0)) = 0x5F5E0FF;
        }
        Money_Array(((int)stk + 4), (*(int *)(((*(int *)0xC2A7600) + 0x0))), 0x8);
        Put_TotalDrum_SetDigits((((int)stk + 4) + 0x20), ((int)stk + 4));
        *(unsigned int *)(((*(int *)0xC2A8C5C) + 0x0)) = 0x0;
        Sound_Request(0x604A9, 0x0);
        *(unsigned int *)0xC2A9180 = 0x0;
        if ((*(int *)0xC2A7618) != 0) {
            Start_Pass_Ranking();
        }
    }
    if (((*(int *)0xC2A8DD8) == 1) && ((t30 = *(int *)0xC2A8DD4, t30 == 1) && ((t31 = *(int *)0xC2A8DD0, t31 == 1) && ((t32 = *(int *)0xC2A8DCC, t32 == 1) && ((t33 = *(int *)0xC2A8DC8, t33 == 1) && ((t34 = *(int *)0xC2A8DC4, t34 == 1) && ((t35 = *(int *)0xC2A8DC0, t35 == 1) && ((t36 = *(int *)0xC2A8DBC, t36 == 1) && (t37 = *(int *)0xC2A9180, t37 == 0))))))))) {
        Sound_Request(0x704A9, 0x0);
        *(unsigned int *)0xC2A9180 = 0x1;
    }
    if ((*(int *)0xC2A11B0) == 0) {
        *(unsigned int *)0xC2A91BC = 0x0;
    }
    if (((*(int *)0xC2A11B0) != 0) && (t48 = *(int *)0xC2A91BC, t48 == 0)) {
        Sound_Request(0x704A9, 0x0);
        *(unsigned int *)0xC2A91BC = 0x1;
    } else {
        t54 = 0xC2A11B0;
    }
    return (Put_TotalDrum(t54));
}
