/* Straight-line functions with calls and guards (batch gen_anw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int getYXZrot(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlTan(int);
int nlTranslate(float, float, float);
int carSteering(int a4);
struct o78_short { char p[0x78]; short v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oCC_float { char p[0xCC]; float v; };


int carSteering(int a4)
{
    float u9;
    float t12;
    float u13;
    float u15;
    int t16;
    int t17;
    float u25;
    int stk[10];
    float s1;

    nlPushUnitMatrix();
    nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(a4))->v)));
    if (((((struct oC0_int *)(a4))->v)) != 0) {
        u9 = *(float *)(((short)((short)((((struct o78_short *)(a4))->v)) * (short)0xA8) + 0xC0A26C0));
        nlTranslate(0.0f, 0.0f, (-u9));
        t12 = nlTan(((((struct oC0_int *)(a4))->v)));
        u13 = (((struct oCC_float *)(a4))->v);
        u15 = (u13 * u13);
        u15 = u15 + (u9 / t12) * (u9 / t12);
        s1 = _builtin_sqrtf(u15);
        t16 = nlArcTan2((((((struct oCC_float *)(a4))->v)) * (1.0f / s1)), (_builtin_fabsf((u9 / t12)) * (1.0f / s1)));
        t17 = t16;
        if (0.0f > (u9 / t12)) {
            t17 = (-t16);
        }
        nlRotateAY(t17);
        nlTranslate(0.0f, 0.0f, u9);
        u25 = (1.0f / s1);
    }
    getYXZrot((0xA4 + a4));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 8)) = ((((struct oC4_float *)(a4))->v));
    nlCalcVector(((int)stk + 0), ((int)stk + 0));
    nlPopMatrix(0x1);
    return (nlAddVector((0x98 + a4), ((int)stk + 0)));
}
