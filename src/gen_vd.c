/* Straight-line functions with calls and guards (batch gen_vd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_DramRoll(void);
int Init_RS_Fog(void);
int Init_RS_Light(void);
int Level_Calc(int, int);
int Money_Array(int, int, int);
int Init_Result_Parm(void);

int Init_Result_Parm(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t8;
    int t9;
    int t16;
    float u17;

    *(unsigned int *)0xC2A978C = 0x0;
    t0 = 0xC2A97AC;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    t2 = *(int *)0xC2A7600;
    t3 = *(int *)((t2 + 0x0));
    Money_Array(0xC2A97AC, t3, 0x8);
    t5 = *(int *)0xC1794D0;
    if ((int)t5 > (int)0x3E7) {
        *(unsigned int *)0xC1794D0 = 0x3E7;
    }
    t7 = *(int *)0xC2A7600;
    t8 = *(int *)((t7 + 0x0));
    t9 = Level_Calc(t8, 0x3E7);
    *(unsigned int *)0xC2A97D8 = t9;
    if ((int)t9 <= (int)0x6) {
        *(unsigned int *)0xC2A97A8 = (((((0x6 - t9) << 2) + (0x6 - t9)) << 1) + 0x109);
    } else {
        *(unsigned int *)0xC2A97A8 = 0x145;
    }
    Init_DramRoll();
    Init_RS_Light();
    Init_RS_Fog();
    *(unsigned int *)0xC2A96F4 = 0x0;
    *(unsigned int *)0xC2A9788 = 0x0;
    *(unsigned int *)0xC2A97E0 = 0x0;
    *(unsigned int *)0xC2A97E4 = 0x0;
    t16 = 0x6;
    for (;;) {
        t16 = (t16 - 0x1);
        if (t16 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC2A97E8 = 0x0;
    *(unsigned int *)0xC2A9850 = 0x0;
    *(unsigned int *)0xC2A9854 = 0x0;
    *(unsigned int *)0xC2A984C = 0x0;
    *(unsigned int *)0xC2A9748 = 0x0;
    *(float *)0xC2A9758 = 0.0f;
    u17 = 0.5f;
    *(float *)0xC2A974C = u17;
    *(unsigned short *)0xC2A9750 = 0x0;
    *(unsigned int *)0xC2A9754 = 0x0;
    return 0xC059390;
}
