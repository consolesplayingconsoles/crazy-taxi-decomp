/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetAverageVector(int, int, int, float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int colliSphereSphere(int a4, int a5);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o4_int { char p[0x4]; int v; };



int colliSphereSphere(int a4, int a5)
{
    float u0;
    int t10;
    int t17;
    float u25;
    float u26;
    float u28;
    float t46;
    float t47;
    float u50;
    float u51;
    int t64;
    int t66;
    int stk[16];

    u0 = (((struct o8_float *)0xC26ECD8)->v);
    if (u0 == 0.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + ((((struct o4_float *)(((short)((short)((((struct o0_int *)0xC26ECD8)->v)) * (short)0x1C) + 0xC0ED440)))->v)));
        *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - ((((struct o4_float *)(((short)((short)((((struct o4_int *)0xC26ECD8)->v)) * (short)0x1C) + 0xC0ED440)))->v)));
    } else {
        if (!(((((struct o10_float *)0xC26ECD8)->v)) > u0)) {
            if (((((struct o14_float *)0xC26ECD8)->v)) > u0) {
                t10 = (((struct o4_int *)0xC26ECD8)->v);
                *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) | (((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))));
            }
            if (((((struct o18_float *)0xC26ECD8)->v)) > ((((struct o8_float *)0xC26ECD8)->v))) {
                t17 = (((struct o0_int *)0xC26ECD8)->v);
                *(unsigned int *)((a5 + 0x24)) = ((*(int *)((a5 + 0x24))) | (((int)t17 >= 0) ? (0x1 << (t17 & 31)) : ((-(int)t17 & 31) ? ((int)0x1 >> (-(int)t17 & 31)) : ((int)0x1 >> 31))));
            }
        } else {
            nlSubVector3op(((int)stk + 4), a5, a4);
            nlUnitVector(((int)stk + 4));
            u25 = (((struct o8_float *)0xC26ECD8)->v);
            u26 = (((struct o10_float *)0xC26ECD8)->v);
            u28 = (((struct o1C_float *)0xC26ECD8)->v);
            *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - ((*(float *)(((int)stk + 4))) * ((u28 * (u26 - u25)))));
            (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) - (((((struct o4_float *)(((int)stk + 4)))->v)) * ((u28 * (u26 - u25)))));
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - (((((struct o8_float *)(((int)stk + 4)))->v)) * ((u28 * (u26 - u25)))));
            *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - ((*(float *)(((int)stk + 4))) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            (((struct o4_float *)(a5))->v) = (((((struct o4_float *)(a5))->v)) - (((((struct o4_float *)(((int)stk + 4)))->v)) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) - (((((struct o8_float *)(((int)stk + 4)))->v)) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            t46 = nlInnerProduct(((int)stk + 4), (a4 + 0xC));
            t47 = nlInnerProduct(((int)stk + 4), (a5 + 0xC));
            if ((t46 - t47) > 0.0f) {
                u50 = (((struct oC_float *)(((short)((short)((((struct o0_int *)0xC26ECD8)->v)) * (short)0x1C) + 0xC0ED440)))->v);
                u51 = (((struct oC_float *)(((short)((short)((((struct o4_int *)0xC26ECD8)->v)) * (short)0x1C) + 0xC0ED440)))->v);
                nlGetAverageVector((a4 + 0xC), ((int)stk + 4), (a4 + 0xC), 1.0f, (-(((((struct o1C_float *)0xC26ECD8)->v)) * (((t46 - t47) * (u50 + u51))))));
                nlGetAverageVector((a5 + 0xC), ((int)stk + 4), (a5 + 0xC), 1.0f, ((1.0f - ((((struct o1C_float *)0xC26ECD8)->v))) * (((t46 - t47) * (u50 + u51)))));
            }
            t64 = (((struct o4_int *)0xC26ECD8)->v);
            *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) | (((int)t64 >= 0) ? (0x1 << (t64 & 31)) : ((-(int)t64 & 31) ? ((int)0x1 >> (-(int)t64 & 31)) : ((int)0x1 >> 31))));
            t66 = (((struct o0_int *)0xC26ECD8)->v);
            *(unsigned int *)((a5 + 0x20)) = ((*(int *)((a5 + 0x20))) | (((int)t66 >= 0) ? (0x1 << (t66 & 31)) : ((-(int)t66 & 31) ? ((int)0x1 >> (-(int)t66 & 31)) : ((int)0x1 >> 31))));
        }
    }
    return 0x1;
}
