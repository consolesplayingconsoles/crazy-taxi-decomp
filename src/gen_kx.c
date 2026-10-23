/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_nd_StartWait(void);
int nd_StartWait_MoveCar(void);

int nd_StartWait_MoveCar(void)
{
    int t0;
    float u1;
    int t15;
    int t18;
    int t36;
    int t44;
    int t43;
    int t8;
    int t27;

    t0 = *(int *)0xC2A720C;
    u1 = *(float *)0xC2A72CC;
    if (t0 == 0) {
        if (-20.0f > u1) {
            *(float *)0xC2A72CC = ((*(float *)0xC2A72CC) + 4.0f);
            *(float *)0xC2A72E0 = ((*(float *)0xC2A72E0) + 3.0f);
            *(unsigned short *)0xC2A72C0 = ((*(short *)0xC2A72C0) - 0x200);
            t8 = 0xC0505D0;
        } else {
            *(unsigned int *)0xC2A720C = 0x1;
            *(unsigned int *)0xC2A72B8 = 0x0;
            t8 = 0x1;
        }
        return t8;
    }
    t15 = *(int *)0xC2A7208;
    if (t0 == 1) {
        t18 = t0;
        if ((int)t15 >= (int)0x64) {
            *(unsigned int *)0xC2A720C = 0x2;
            t18 = 0x2;
        }
        return t18;
    }
    if (t0 == 2) {
        if ((*(float *)0xC05069C) > u1) {
            *(float *)0xC2A72CC = ((*(float *)0xC2A72CC) + (*(float *)0xC0506A0));
            *(float *)0xC2A72E0 = ((*(float *)0xC2A72E0) + (*(float *)0xC0506A8));
            t27 = 0xC0506A8;
        } else {
            *(unsigned int *)0xC2A720C = 0x3;
            *(unsigned int *)0xC2A72B8 = 0x0;
            t27 = 0xC05069C;
        }
        return t27;
    }
    if (t0 == 3) {
        t36 = t0;
        if ((int)t15 >= (int)0x104) {
            *(unsigned int *)0xC2A720C = 0x4;
            *(unsigned short *)0xC2A72C0 = 0x0;
            *(unsigned int *)0xC12FFC0 = 0x1E;
            t36 = 0x1E;
        }
        return t36;
    }
    if (t0 == 4) {
        if ((*(float *)0xC0506B4) > u1) {
            *(float *)0xC2A72CC = ((*(float *)0xC2A72CC) + (1.0f + 1.0f));
            t44 = 0xC0506B4;
            if ((int)(unsigned short)(*(short *)0xC2A72C0) < (int)0x4000) {
                t43 = *(short *)0xC2A72C0;
                *(unsigned short *)0xC2A72C0 = (t43 + 0x100);
                t44 = (t43 + 0x100);
            }
            return t44;
        }
        return Init_nd_StartWait();
    }
    return t0;
}
