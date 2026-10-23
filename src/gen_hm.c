/* Straight-line functions with calls and guards (batch gen_hm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetAverageVector(int, int, int, float, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int colliSphereSphere(int a4, int a5);

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

    u0 = *(float *)0xC26ECE0;
    if (u0 == 0.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + (*(float *)((((short)((short)(*(int *)0xC26ECD8) * (short)0x1C) + 0xC0ED440) + 0x4))));
        *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - (*(float *)((((short)((short)(*(int *)0xC26ECDC) * (short)0x1C) + 0xC0ED440) + 0x4))));
    } else {
        if (!((*(float *)0xC26ECE8) > u0)) {
            if ((*(float *)0xC26ECEC) > u0) {
                t10 = *(int *)0xC26ECDC;
                *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) | (((int)t10 >= 0) ? (0x1 << (t10 & 31)) : ((-(int)t10 & 31) ? ((int)0x1 >> (-(int)t10 & 31)) : ((int)0x1 >> 31))));
            }
            if ((*(float *)0xC26ECF0) > (*(float *)0xC26ECE0)) {
                t17 = *(int *)0xC26ECD8;
                *(unsigned int *)((a5 + 0x24)) = ((*(int *)((a5 + 0x24))) | (((int)t17 >= 0) ? (0x1 << (t17 & 31)) : ((-(int)t17 & 31) ? ((int)0x1 >> (-(int)t17 & 31)) : ((int)0x1 >> 31))));
            }
        } else {
            nlSubVector3op(((int)stk + 4), a5, a4);
            nlUnitVector(((int)stk + 4));
            u25 = *(float *)0xC26ECE0;
            u26 = *(float *)0xC26ECE8;
            u28 = *(float *)0xC26ECF4;
            *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - ((*(float *)(((int)stk + 4))) * ((u28 * (u26 - u25)))));
            *(float *)((a4 + 0x4)) = ((*(float *)((a4 + 0x4))) - ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * ((u28 * (u26 - u25)))));
            *(float *)((a4 + 0x8)) = ((*(float *)((a4 + 0x8))) - ((*(float *)(((((int)stk + 4) + 0x8) + 0x0))) * ((u28 * (u26 - u25)))));
            *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - ((*(float *)(((int)stk + 4))) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            *(float *)((a5 + 0x4)) = ((*(float *)((a5 + 0x4))) - ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            *(float *)((a5 + 0x8)) = ((*(float *)((a5 + 0x8))) - ((*(float *)(((((int)stk + 4) + 0x8) + 0x0))) * (((u28 * (u26 - u25)) - (u26 - u25)))));
            t46 = nlInnerProduct(((int)stk + 4), (a4 + 0xC));
            t47 = nlInnerProduct(((int)stk + 4), (a5 + 0xC));
            if ((t46 - t47) > 0.0f) {
                u50 = *(float *)((((short)((short)(*(int *)0xC26ECD8) * (short)0x1C) + 0xC0ED440) + 0xC));
                u51 = *(float *)((((short)((short)(*(int *)0xC26ECDC) * (short)0x1C) + 0xC0ED440) + 0xC));
                nlGetAverageVector((a4 + 0xC), ((int)stk + 4), (a4 + 0xC), 1.0f, (-((*(float *)0xC26ECF4) * (((t46 - t47) * (u50 + u51))))));
                nlGetAverageVector((a5 + 0xC), ((int)stk + 4), (a5 + 0xC), 1.0f, ((1.0f - (*(float *)0xC26ECF4)) * (((t46 - t47) * (u50 + u51)))));
            }
            t64 = *(int *)0xC26ECDC;
            *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) | (((int)t64 >= 0) ? (0x1 << (t64 & 31)) : ((-(int)t64 & 31) ? ((int)0x1 >> (-(int)t64 & 31)) : ((int)0x1 >> 31))));
            t66 = *(int *)0xC26ECD8;
            *(unsigned int *)((a5 + 0x20)) = ((*(int *)((a5 + 0x20))) | (((int)t66 >= 0) ? (0x1 << (t66 & 31)) : ((-(int)t66 & 31) ? ((int)0x1 >> (-(int)t66 & 31)) : ((int)0x1 >> 31))));
        }
    }
    return 0x1;
}
