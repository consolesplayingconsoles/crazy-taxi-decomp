/* Straight-line functions with calls and guards (batch gen_yz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlObjPutSetFadeColor(float, float, float);
extern int nlSprPut();
int Result_Rank_Put(void);
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Result_Rank_Put(void)
{
    int t0;
    int t1;
    int t20;
    int t29;
    int t38;
    int t43;
    int t53;
    int t2;
    int t83;
    int t13;
    int t77;
    int t36;
    int t48;

    t0 = (((struct o0_int *)0xC2A97A8)->v);
    t1 = (((struct o0_int *)0xC2A96F4)->v);
    if (((int)t1 <= (int)(t0 + 0x78)) && (t2 = (((struct o38_int *)0xC2A97A8)->v), t2 != 1)) {
        t83 = t2;
    } else {
        t20 = t0;
        if (((((struct o38_int *)0xC2A97A8)->v)) == 0) {
            if (t1 == (t0 + 0x79)) {
                Sound_Request(0x405A9, 0x0);
                *(unsigned int *)0xC130E08 = ((*(int *)0xC130E08) + 0x1);
                (((struct oC_uint *)0xC2A9748)->v) = 0x1;
            } else {
                t13 = (t0 + 0x79);
            }
            t20 = t13;
        }
        if ((int)((((struct o34_int *)0xC2A97A8)->v)) >= (int)0x64) {
            (((struct o4_uint *)0xC2A96F4)->v) = 0x15A;
            (((struct o8_float *)0xC2A96F4)->v) = 472.0f;
            (((struct oC_float *)0xC2A96F4)->v) = (float)(0x18C + ((((struct o0_int *)0xC2A9748)->v)));
            (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
            (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
            (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
            t77 = t20;
        } else {
            (((struct o4_uint *)0xC2A96F4)->v) = 0x4B;
            (((struct o8_float *)0xC2A96F4)->v) = 472.0f;
            (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18C);
            (((struct o10_float *)0xC2A96F4)->v) = 0.25f;
            (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
            (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
            (((struct o38_uint *)0xC2A96F4)->v) = 0xA;
            (((struct o2C_uint *)0xC2A96F4)->v) = 0x0;
            t29 = ((int (*)(int, int))(nlSprPut))(0xC2A96F8, t20);
            nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
            (((struct o10_float *)0xC2A96F4)->v) = 0.199999988f;
            (((struct o8_float *)0xC2A96F4)->v) = 400.0f;
            (((struct oC_float *)0xC2A96F4)->v) = (float)(0x18C + ((((struct o0_int *)0xC2A9748)->v)));
            (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o20_float *)0xC2A96F4)->v) = 0.0f;
            (((struct o28_float *)0xC2A96F4)->v) = 1.0f;
            (((struct o38_uint *)0xC2A96F4)->v) = 0x300A;
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            if ((((((struct o2C_int *)0xC2A97A8)->v)) == 0) && (t36 = (((struct o28_int *)0xC2A97A8)->v), t36 == 0)) {
            } else {
                (((struct o4_uint *)0xC2A96F4)->v) = (((((struct o28_int *)0xC2A97A8)->v)) + 0x41);
                (((struct o8_float *)0xC2A96F4)->v) = 444.0f;
                t38 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            }
            (((struct o4_uint *)0xC2A96F4)->v) = (((((struct o24_int *)0xC2A97A8)->v)) + 0x41);
            (((struct o8_float *)0xC2A96F4)->v) = 498.0f;
            t43 = ((int (*)(int))(nlSprPut))(0xC2A96F8);
            (((struct o4_uint *)0xC2A96F4)->v) = 0x4F;
            (((struct o14_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct o18_float *)0xC2A96F4)->v) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            (((struct oC_float *)0xC2A96F4)->v) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x19C);
            if ((((((struct o2C_int *)0xC2A97A8)->v)) == 0) && (t48 = (((struct o28_int *)0xC2A97A8)->v), t48 == 1)) {
            } else {
                t53 = (((struct o24_int *)0xC2A97A8)->v);
                if (t53 == 1) {
                    (((struct o4_uint *)0xC2A96F4)->v) = 0x4E;
                } else {
                    if (t53 == 2) {
                        (((struct o4_uint *)0xC2A96F4)->v) = 0x4C;
                    } else {
                        if (((((struct o24_int *)0xC2A97A8)->v)) == 3) {
                            (((struct o4_uint *)0xC2A96F4)->v) = 0x4D;
                        }
                    }
                }
            }
            (((struct o8_float *)0xC2A96F4)->v) = 554.0f;
        }
        t83 = (((int (*)(int, int))(nlSprPut))(0xC2A96F8, t77));
    }
    return t83;
}
