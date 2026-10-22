/* Straight-line functions with calls and guards (batch gen_pr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_nd_StartWait(void);
int nd_StartWait_MoveCar(void);

int nd_StartWait_MoveCar(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    int t4;
    int t12;
    int t13;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    int t28;
    float u31;
    float u32;
    int t33;
    int t35;
    int t34;
    int t5;
    int t20;

    t0 = *(int *)0xC2A720C;
    u1 = *(float *)0xC2A72CC;
    if (t0 == 0) {
        if (-20.0f > u1) {
            u2 = *(float *)0xC2A72CC;
            *(float *)0xC2A72CC = (u2 + 4.0f);
            u3 = *(float *)0xC2A72E0;
            *(float *)0xC2A72E0 = (u3 + 3.0f);
            t4 = *(short *)0xC2A72C0;
            *(unsigned short *)0xC2A72C0 = (t4 - 0x200);
            t5 = 0xC0505D0;
        } else {
            *(unsigned int *)0xC2A720C = 0x1;
            *(unsigned int *)0xC2A72B8 = 0x0;
            t5 = 0x1;
        }
        return t5;
    }
    t12 = *(int *)0xC2A7208;
    if (t0 == 1) {
        t13 = t0;
        if ((int)t12 >= (int)0x64) {
            *(unsigned int *)0xC2A720C = 0x2;
            t13 = 0x2;
        }
        return t13;
    }
    if (t0 == 2) {
        u15 = *(float *)0xC05069C;
        if (u15 > u1) {
            u16 = *(float *)0xC2A72CC;
            u17 = *(float *)0xC0506A0;
            *(float *)0xC2A72CC = (u16 + u17);
            u18 = *(float *)0xC2A72E0;
            u19 = *(float *)0xC0506A8;
            *(float *)0xC2A72E0 = (u18 + u19);
            t20 = 0xC0506A8;
        } else {
            *(unsigned int *)0xC2A720C = 0x3;
            *(unsigned int *)0xC2A72B8 = 0x0;
            t20 = 0xC05069C;
        }
        return t20;
    }
    if (t0 == 3) {
        t28 = t0;
        if ((int)t12 >= (int)0x104) {
            *(unsigned int *)0xC2A720C = 0x4;
            *(unsigned short *)0xC2A72C0 = 0x0;
            *(unsigned int *)0xC12FFC0 = 0x1E;
            t28 = 0x1E;
        }
        return t28;
    }
    if (t0 == 4) {
        u31 = *(float *)0xC0506B4;
        if (u31 > u1) {
            u32 = *(float *)0xC2A72CC;
            *(float *)0xC2A72CC = (u32 + (1.0f + 1.0f));
            t33 = *(short *)0xC2A72C0;
            t35 = 0xC0506B4;
            if ((int)(unsigned short)t33 < (int)0x4000) {
                t34 = *(short *)0xC2A72C0;
                *(unsigned short *)0xC2A72C0 = (t34 + 0x100);
                t35 = (t34 + 0x100);
            }
            return t35;
        }
        return Init_nd_StartWait();
    }
    return t0;
}
