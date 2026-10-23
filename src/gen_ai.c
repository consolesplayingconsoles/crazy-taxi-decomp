/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_FogDensity(void);
int Exec_FogColor(void);
int Check_FogArea(void);
int abs(int);
float nlLength(int, int);





int nlArcTan(float f4)
{
    float u0;
    int t1;
    float u2;
    int t3;
    int t4;
    float u5;

    u0 = (1.0f / f4);
    if (!((f4 < 0.0f ? -f4 : f4) > 1.0f)) {
        u0 = f4;
    }
    t1 = 0xD;
    u2 = 0.0f;
    do {
        t3 = (t1 << 1);
        t4 = t1;
        t1 = (t1 - 1);
        u5 = (((float)t3 + u2) + 1.0f);
        u2 = ((((float)t4 * (float)t4) * u0) * u0);
        u2 = (u2 / u5);
    } while ((int)t1 >= (int)0x1);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    if ((-1.0f) > f4) {
        return (unsigned short)(0xC000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    return ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF);
}

float nlFloor(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (0.0f > f4) {
            if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
                return (float)(0xFFFFFFFF - (int)(f4 < 0.0f ? -f4 : f4));
            }
            return f4;
        }
        return (float)(int)(f4 < 0.0f ? -f4 : f4);
    }
    return f4;
}

float nlRoundOff(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                return (float)(int)(f4 < 0.0f ? -f4 : f4);
            }
            return (float)(-(int)(f4 < 0.0f ? -f4 : f4));
        }
        return f4;
    }
    return f4;
}
