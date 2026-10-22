/* Straight-line functions with calls and guards (batch gen_sv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int End_Time_Bonus(void);
int GetMenuMode(int);
int Put_Time_Bonus_Sprite(int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Put_Time_Bonus(void);

int Put_Time_Bonus(void)
{
    int t0;
    int t3;
    int t22;
    int t4;
    int t18;
    int t12;
    int t14;
    int t29;
    int t32;
    int t51;
    int t33;
    int t47;
    int t41;
    int t43;
    int t58;

    t0 = *(int *)0xC2A760C;
    if (t0 == 2) {
        *(unsigned int *)0xC2A7F04 = 0x0;
        if ((int)(*(int *)0xC2A760C) >= (int)0x1) {
            t3 = *(int *)0xC1EE210;
            t22 = t3;
            if (t3 != 2) {
                t4 = GetMenuMode(0x1);
                t18 = t4;
                if (t4 == 0) {
                    if ((*(int *)0xC2A8F68) == 1) {
                        Voice_ShutUp(0x0);
                        Voice_Request(0xC130B30, 0x0, 0x7F, 0x0);
                    }
                    t12 = (int)((int)(*(int *)0xC2A8F68) % (int)0x3C);
                    t14 = t12;
                    if ((int)t12 < (int)0x1E) {
                        *(float *)0xC2A7EEC = 1.0f;
                        *(float *)0xC2A7EF0 = 1.0f;
                        *(unsigned int *)0xC2A7F10 = 0xA;
                        t14 = (Put_Time_Bonus_Sprite(0x5));
                    }
                    t18 = t14;
                }
                t22 = t18;
            }
            t29 = *(int *)0xC2A8F68;
            *(unsigned int *)0xC2A8F68 = (t29 + 0x1);
            if ((int)(t29 + 0x1) >= (int)0xB4) {
                return End_Time_Bonus();
            }
            return t22;
        }
        return t0;
    }
    if (t0 == 1) {
        *(unsigned int *)0xC2A7F04 = 0x0;
        if ((int)(*(int *)0xC2A760C) >= (int)0x1) {
            t32 = *(int *)0xC1EE210;
            t51 = t32;
            if (t32 != 2) {
                t33 = GetMenuMode(0x1);
                t47 = t33;
                if (t33 == 0) {
                    if ((*(int *)0xC2A8F68) == 1) {
                        Voice_ShutUp(0x0);
                        Voice_Request(0xC130B30, 0x0, 0x7F, 0x0);
                    }
                    t41 = (int)((int)(*(int *)0xC2A8F68) % (int)0x3C);
                    t43 = t41;
                    if ((int)t41 < (int)0x1E) {
                        *(float *)0xC2A7EEC = 1.0f;
                        *(float *)0xC2A7EF0 = 1.0f;
                        *(unsigned int *)0xC2A7F10 = 0xA;
                        t43 = (Put_Time_Bonus_Sprite(0x2));
                    }
                    t47 = t43;
                }
                t51 = t47;
            }
            t58 = *(int *)0xC2A8F68;
            *(unsigned int *)0xC2A8F68 = (t58 + 0x1);
            if ((int)(t58 + 0x1) >= (int)0xB4) {
                return End_Time_Bonus();
            }
            return t51;
        }
        return t0;
    }
    return End_Time_Bonus();
}
