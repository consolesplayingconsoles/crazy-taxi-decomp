/* Straight-line functions with calls and guards (batch gen_qu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Pass_Rideoff(void);
int Start_Pass_Judgement(int);
int GS_GuestOut(int a4);

int GS_GuestOut(int a4)
{
    int t6;
    int t42;
    int t55;
    int t48;
    int t36;

    if ((*(int *)0xC1EE210) != 2) {
        t6 = *(int *)0xC1EE7CC;
        t42 = 0x0;
        if ((int)t6 <= (int)(*(int *)0xC1EE7D4)) {
        } else {
            if ((int)t6 < (int)(*(int *)0xC1EE7D8)) {
                if ((*(int *)0xC1EE210) != 2) {
                    if ((GetMenuMode(0x1)) == 0) {
                        *(unsigned int *)0xC1EE798 = ((*(int *)0xC1EE798) + 0x78);
                    }
                }
                t36 = 0x1;
            } else {
                if ((*(int *)0xC1EE210) != 2) {
                    if ((GetMenuMode(0x1)) == 0) {
                        *(unsigned int *)0xC1EE798 = ((*(int *)0xC1EE798) + 0x12C);
                    }
                }
                t36 = 0x2;
            }
            t42 = t36;
        }
        t48 = t42;
    }
    *(unsigned int *)0xC1EE78C = 0x0;
    *(unsigned int *)0xC1EE79C = ((*(int *)0xC1EE79C) + 0x1);
    *(unsigned int *)0xC1EE7DC = 0x1;
    *(unsigned int *)0xC1EE7E0 = ((*(int *)0xC1EE7E0) + 0x1);
    t55 = *(int *)0xC1EE7CC;
    *(unsigned int *)0xC1EE7B0 = (((t55 << 2) + t55) << 1);
    *(unsigned int *)0xC1EE7A0 = 0x0;
    *(unsigned int *)0xC1EE7CC = 0x0;
    Pass_Rideoff();
    Start_Pass_Judgement(t48);
    *(unsigned int *)0xC1EE7E8 = 0x384;
    *(unsigned int *)0xC1EE7F4 = 0x0;
    return t48;
}
