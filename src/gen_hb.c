/* Straight-line functions with calls and guards (batch gen_hb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlPow(float, float);
void hudUpdateFareState(void);

void hudUpdateFareState(void)
{
    int t0;
    int t1;
    float u2;
    int t13;
    int t31;
    int t32;
    int t33;
    int t36;
    int t41;
    float t42;
    int t44;
    int t45;
    float u53;

    t0 = *(int *)0xC2A8EB0;
    if (t0 != 1) {
        if (t0 != 4) {
            if (t0 == 6) {
                t1 = *(int *)0xC2A8E98;
                if (t1 == 0) {
                    *(float *)0xC2A8EA0 = 1.0f;
                    u2 = *(float *)0xC2A8EB8;
                    *(float *)0xC2A8EB8 = (u2 + 4.0f);
                    if (!(36.0f > (u2 + 4.0f))) {
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
                t13 = *(int *)0xC2A8D74;
                *(unsigned int *)0xC2A8D74 = (t13 + 0x1);
                if ((t13 + 0x1) == 6) {
                    *(unsigned int *)0xC2A8D74 = 0xFFFFFFFA;
                    Sound_Request(0x905A9, 0x0);
                    *(unsigned int *)0xC2A8CB8 = 0x0;
                    *(unsigned int *)0xC2A8EB0 = 0x9;
                }
            }
            return;
        }
        t31 = *(int *)0xC2A8EB4;
        if (t31 == 0) {
            t32 = *(int *)0xC130B04;
            *(unsigned int *)0xC130B04 = (t32 + 0x1);
            if ((t32 + 0x1) == 8) {
                t33 = *(int *)0xC2A8EB4;
                *(unsigned int *)0xC2A8EB4 = (t33 + 0x1);
                *(unsigned int *)0xC130B04 = 0x0;
            }
        } else {
            t36 = *(int *)0xC2A8EB4;
            *(unsigned int *)0xC2A8EB4 = (t36 + 0x1);
        }
        t41 = *(int *)0xC2A8EB4;
        t42 = nlPow((float)t41, (1.0f + 1.0f));
        *(float *)0xC2A8EB8 = (t42 * (1.0f + 1.0f));
        if (!(36.0f > (t42 * (1.0f + 1.0f)))) {
            *(unsigned int *)0xC2A8EB4 = 0x0;
            *(float *)0xC2A8EB8 = 36.0f;
            Sound_Request(0x905A9, 0x0);
            *(unsigned int *)0xC2A8EA8 = 0x0;
            *(unsigned int *)0xC2A8EB0 = 0x8;
            t44 = *(int *)0xC2A8E94;
            t45 = *(int *)0xC2A8C5C;
            *(unsigned int *)((t45 + 0x0)) = t44;
        }
        return;
    }
    *(float *)0xC2A8EA0 = 1.0f;
    u53 = *(float *)0xC2A8EB8;
    *(float *)0xC2A8EB8 = (u53 - 4.0f);
    if ((u53 - 4.0f) > 0.0f) {
    } else {
        Sound_Request(0x705A9, 0x0);
        *(float *)0xC2A8EB8 = 0.0f;
        *(unsigned int *)0xC2A8EB0 = 0x2;
        *(unsigned int *)0xC2A8EAC = 0x0;
        *(unsigned int *)0xC2A8CB4 = 0x0;
    }
}
