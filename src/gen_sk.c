/* Straight-line functions with calls and guards (batch gen_sk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int Put_Remain_Time_Gauge(void);
int Put_Remain_Time_Flash(void);
struct o0_float { float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int Put_Remain_Time_Gauge(void)
{
    int t0;
    int t3;
    int t4;
    float u9;
    float u10;
    float u18;
    int t39;
    int t41;
    int t65;
    int t93;
    int t67;
    int t85;
    int t68;
    int t40;
    int t42;
    int t69;
    int t81;

    t0 = (((struct o30_int *)0xC2A8C8C)->v);
    if (t0 == 0) {
        t3 = (((struct o4_int *)0xC2A8C8C)->v);
        if ((int)t3 < (int)0xA) {
            t4 = (((struct o4_int *)0xC2A8C8C)->v);
            (((struct o4_uint *)0xC2A8C8C)->v) = (t4 + 0x1);
        } else {
            (((struct o4_uint *)0xC2A8C8C)->v) = 0xA;
            (((struct o30_uint *)0xC2A8C8C)->v) = 0x1;
        }
    } else {
        if (t0 == 1) {
            u9 = (((struct o0_float *)0xC2A8C8C)->v);
            if (1.0f > u9) {
                u10 = (((struct o0_float *)0xC2A8C8C)->v);
                (((struct o0_float *)0xC2A8C8C)->v) = (u10 + 0.099999994f);
            } else {
                Sound_Request(0x705A9, 0x0);
                (((struct o30_uint *)0xC2A8C8C)->v) = 0x2;
            }
            u18 = (((struct o0_float *)0xC2A8C8C)->v);
            if (u18 > 1.0f) {
                (((struct o0_float *)0xC2A8C8C)->v) = 1.0f;
            }
        }
    }
    return Put_Remain_Time_Flash();                                  /* 0C0542E4: the original falls through into it after its epilogue */
}
