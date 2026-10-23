/* Straight-line functions with calls and guards (batch gen_apv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlPow(float, float);
void hudUpdateFareState(void);

void hudUpdateFareState(void)
{
    int t0;
    float u4;
    int t15;
    int t34;
    float t44;
    float u55;

    t0 = *(int *)0xC2A8EB0;
    if (t0 != 1) {
        if (t0 != 4) {
            if (t0 == 6) {
                if ((*(int *)0xC2A8E98) == 0) {
                    *(float *)0xC2A8EA0 = 1.0f;
                    u4 = *(float *)0xC2A8EB8;
                    *(float *)0xC2A8EB8 = (u4 + 4.0f);
                    if (!(36.0f > (u4 + 4.0f))) {
                        *(float *)0xC2A8EB8 = 36.0f;
                        *(unsigned int *)0xC2A8EA8 = 0x0;
                        *(unsigned int *)0xC2A8CB8 = 0x0;
                        *(unsigned int *)0xC2A8EB0 = 0x9;
                    }
                }
                ((int (*)(int, float, float))(0xC0542E4))(0xC2A8EA0, 4.0f, 1.0f);
    return;
            }
            if (t0 == 8) {
                t15 = *(int *)0xC2A8D74;
                *(unsigned int *)0xC2A8D74 = (t15 + 0x1);
                if ((t15 + 0x1) == 6) {
                    *(unsigned int *)0xC2A8D74 = 0xFFFFFFFA;
                    Sound_Request(0x905A9, 0x0);
                    *(unsigned int *)0xC2A8CB8 = 0x0;
                    *(unsigned int *)0xC2A8EB0 = 0x9;
                }
            }
            return;
        }
        if ((*(int *)0xC2A8EB4) == 0) {
            t34 = *(int *)0xC130B04;
            *(unsigned int *)0xC130B04 = (t34 + 0x1);
            if ((t34 + 0x1) == 8) {
                *(unsigned int *)0xC2A8EB4 = ((*(int *)0xC2A8EB4) + 0x1);
                *(unsigned int *)0xC130B04 = 0x0;
            }
        } else {
            *(unsigned int *)0xC2A8EB4 = ((*(int *)0xC2A8EB4) + 0x1);
        }
        t44 = nlPow((float)(*(int *)0xC2A8EB4), (1.0f + 1.0f));
        *(float *)0xC2A8EB8 = (t44 * (1.0f + 1.0f));
        if (!(36.0f > (t44 * (1.0f + 1.0f)))) {
            *(unsigned int *)0xC2A8EB4 = 0x0;
            *(float *)0xC2A8EB8 = 36.0f;
            Sound_Request(0x905A9, 0x0);
            *(unsigned int *)0xC2A8EA8 = 0x0;
            *(unsigned int *)0xC2A8EB0 = 0x8;
            *(unsigned int *)(((*(int *)0xC2A8C5C) + 0x0)) = (*(int *)0xC2A8E94);
        }
        return;
    }
    *(float *)0xC2A8EA0 = 1.0f;
    u55 = *(float *)0xC2A8EB8;
    *(float *)0xC2A8EB8 = (u55 - 4.0f);
    if ((u55 - 4.0f) > 0.0f) {
    } else {
        Sound_Request(0x705A9, 0x0);
        *(float *)0xC2A8EB8 = 0.0f;
        *(unsigned int *)0xC2A8EB0 = 0x2;
        *(unsigned int *)0xC2A8EAC = 0x0;
        *(unsigned int *)0xC2A8CB4 = 0x0;
    }
}
