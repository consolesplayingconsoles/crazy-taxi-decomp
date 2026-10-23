/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int nd_SprPut(int, int, float, float);
int gdFsStrncmpi(int, int, int);
int gdFsGetTokenSize(int, int);
int ResetFadeColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdFsGetLE4(int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
float nlInnerProduct(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlOuterProduct(int, int, int);
float nlUnitVector(int);
int nlObjPutSetSpecularEyeDirectionV(int a4);
int gdFsStrcmp_tail_0c15fa1c(int a4, int a5);
int kmChangeContextSuperSample(int a4);
int _add(int a4, int a5, int a6);
void nlRotateV(int a4, int a5);
int _rnd(int a4, int a5);
int gdFsSearchPath_dds(int a4, int a5, int a6, int a7, int a8);
void Put_ReadySetGo(int a4);

int nlObjPutSetSpecularEyeDirectionV(int a4)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)((a4 + 0x8));
    u1 = *(float *)((a4 + 0x0));
    u2 = *(float *)((a4 + 0x4));
    return ((int (*)(int, float, float, float))(0xC07ADB0))(a4, u1, u2, u0);
}

int gdFsStrcmp_tail_0c15fa1c(int a4, int a5)
{
    int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x0));
    if (t0 == 0) {
        t1 = *(signed char *)((a5 + 0x0));
        if (t1 != 0) {
            return 0x0;
        }
        return 0x1;
    }
    return ((int (*)(int))(0xC15FA14))(a4);
}

int kmChangeContextSuperSample(int a4)
{
    int t0;

    if (a4 != 0) {
        t0 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC2EABB0 = (t0 | 0x1000);
        return ((int (*)(int, int))(0xC15E4C8))(a4, 0xC2EAB9C);
    }
    return ((int (*)(int, int))(0xC15E4C0))(a4, 0xC2EAB9C);
}

int _add(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;

    if ((int)(a6 - 1) >= 0) {
        t0 = (a4 + (a6 - 1));
        t1 = (a5 + (a6 - 1));
        t2 = (a6 - 1);
        t3 = 0x0;
        for (;;) {
            t4 = *(signed char *)((t1 + 0x0));
            t5 = *(signed char *)((t0 + 0x0));
            *(unsigned char *)((t0 + 0x0)) = (((unsigned char)t5 + (unsigned char)t4) + t3);
            t6 = (int)((int)(((unsigned char)t5 + (unsigned char)t4) + t3) / (int)0x100);
            t2 = (t2 - 1);
            t3 = t6;
            t1 = (t1 - 1);
            t0 = (t0 - 1);
            if ((int)t2 < 0) {
                break;
            }
        }
        t8 = t6;
    }
    return t8;
}

void nlRotateV(int a4, int a5)
{
    float t1;
    int t2;
    float t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    float u14;
    float u10;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlOuterProduct(a4, a5, (((int)stk + 4) + 0x4));
    t1 = nlUnitVector((((int)stk + 4) + 0x4));
    t2 = *(int *)(((int)stk + 4));
    t3 = nlInnerProduct(a4, t2);
    if (t1 != 0.0f) {
        t4 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), t1, t3);
    } else {
        if (0.0f > t3) {
            u5 = *(float *)((a4 + 0x4));
            *(float *)(((int)stk + 8)) = u5;
            u6 = *(float *)((a4 + 0x8));
            *(float *)(((int)stk + 12)) = u6;
            u7 = *(float *)((a4 + 0x0));
            *(float *)(((int)stk + 16)) = u7;
            t8 = ((int (*)(int, float, float))(0xC0784A0))((((int)stk + 4) + 0x4), 0.0f, (-1.0f));
        } else {
            u10 = t3;
        }
        u14 = u10;
    }
    return;
}

int _rnd(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t22;
    int t6;
    int t7;
    int t17;
    int t8;
    int t9;
    int t12;
    int t10;
    int t11;
    int t35;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t33;
    int t32;
    int stk[7] = {0};

    t0 = (int)((int)a5 / (int)0x8);
    t1 = (int)((int)a5 % (int)0x8);
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31)));
    *(unsigned int *)(((int)stk + 12)) = (unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1);
    *(unsigned char *)(((int)stk + 8)) = ((unsigned char)((unsigned char)(((int)(-t1) >= 0) ? (0x80 << ((-t1) & 31)) : ((-(int)(-t1) & 31) ? ((int)0x80 >> (-(int)(-t1) & 31)) : ((int)0x80 >> 31))) >> 1) >> 1);
    t2 = (int)((int)(a5 - 1) / (int)0x8);
    t3 = (int)((int)(a5 - 1) % (int)0x8);
    t4 = *(signed char *)(((t0 + a4) + 0x0));
    t5 = *(int *)(((int)stk + 4));
    t22 = 0x0;
    if (((unsigned char)t4 & t5) != 0) {
        t6 = *(signed char *)(((t0 + a4) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (unsigned char)t6;
        t7 = *(int *)(((int)stk + 12));
        t17 = 0x1;
        if (((unsigned char)t6 & t7) == 0) {
            t8 = *(signed char *)(((int)stk + 8));
            t9 = *(int *)(((int)stk + 4));
            t12 = 0x1;
            if (((unsigned char)t8 & t9) == 0) {
                t10 = *(signed char *)(((t2 + a4) + 0x0));
                t11 = 0x0;
                if (((unsigned char)t10 & (unsigned char)(((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)))) != 0) {
                    t11 = 0x1;
                }
                t12 = t11;
            }
            t17 = t12;
        }
        t22 = t17;
    }
    t35 = 0x0;
    if (t22 == 1) {
        t25 = (t2 + a4);
        t26 = (((int)(-t3) >= 0) ? (0x80 << ((-t3) & 31)) : ((-(int)(-t3) & 31) ? ((int)0x80 >> (-(int)(-t3) & 31)) : ((int)0x80 >> 31)));
        for (;;) {
            t27 = *(signed char *)((t25 + 0x0));
            if (((unsigned char)t27 & (unsigned char)t26) != 0) {
                if ((unsigned int)t25 < (unsigned int)a4) {
                    break;
                }
                t28 = *(signed char *)((t25 + 0x0));
                t29 = (~t26);
                t26 = (t26 << 1);
                *(unsigned char *)((t25 + 0x0)) = (t28 & t29);
                if ((unsigned char)t26 == 0) {
                    t26 = 0x1;
                    t25 = (t25 - 1);
                }
                continue;
            }
            break;
        }
        t33 = 0x1;
        if ((unsigned int)t25 >= (unsigned int)a4) {
            t32 = *(signed char *)((t25 + 0x0));
            *(unsigned char *)((t25 + 0x0)) = (t32 | t26);
            t33 = 0x0;
        }
        t35 = t33;
    }
    return t35;
}


