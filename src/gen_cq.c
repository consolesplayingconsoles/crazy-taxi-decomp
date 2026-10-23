/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Pass_Rideoff(void);
int Start_Pass_Judgement(int);
int Result_Check_Digit_Disp(int);
int nlSpriteF2ARGB(int, int, float, float, float, float);
float nlFastSin(int);
int kmiFBFitBlock(int, int);
int kmiFBSearchFree(int, int, int);
int GetMenuMode(int);
int Sound_Request(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int free(void);
float nlCos(int);
int nlGetMatrix(int);
int nlLoadMatrix(int, int);
float nlScalor(int);
float nlSin(int);
int nlSprPutPosSet(float, float, float, float);
int nlSpriteF2C(float);
int nlsndIcsControl(int, int, int);
int GS_GuestOut(void);
int syMalloc_default_realloc(int a4, int a5);
int Init_DramRoll(void);
int kmiFBallocSub(int a4, int a5);
int InitSetObject(float f4);
int Result_Money_Digit_Put(void);
float nlLUDecomp(int a4, int a5, float f4, float f5);
int exec_CarSound(int a4);
int nlSprPut(int a4);


int syMalloc_default_realloc(int a4, int a5)
{
    int t0;
    int t1;
    int t3;
    int t2;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t16;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)(((a4 - 32) + 0x4));
    t3 = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    if ((unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1) > (unsigned int)t1) {
        t2 = *(int *)(((a4 - 32) + 0x4));
        t3 = t2;
    }
    free();
    t5 = *(int *)0xC2B9358;
    t6 = *(int *)((t5 + 0x0));
    t7 = t6;
    t8 = t5;
    for (;;) {
        t9 = *(int *)((t7 + 0x4));
        if ((unsigned int)t9 >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) break;
        if (t7 == t5) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t8 = t7;
        t10 = *(int *)((t7 + 0x0));
        t7 = t10;
    }
    t11 = *(int *)((t7 + 0x4));
    if (t11 == (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        t12 = *(int *)((t7 + 0x0));
        *(unsigned int *)((t8 + 0x0)) = t12;
        t16 = t7;
    } else {
        *(unsigned int *)((t7 + 0x4)) = (t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        t16 = (t7 + ((((t11 - (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    if (a4 != (t16 + 0x20)) {
        if ((unsigned int)a4 < (unsigned int)(t16 + 0x20)) {
            if ((unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20) > (unsigned int)(t16 + 0x20)) {
                t17 = (((((t3 << 2) << 2) << 1) + t16) + 0x20);
                t18 = a4;
                do {
                    t19 = t18;
                    t18 = (t18 - 32);
                    t20 = t17;
                    t17 = (t17 - 32);
                    t21 = *(int *)((t19 + 0x1C));
                    *(unsigned int *)((t20 + 0x1C)) = t21;
                    t22 = *(int *)((t19 + 0x18));
                    *(unsigned int *)((t20 + 0x18)) = t22;
                    t23 = *(int *)((t19 + 0x14));
                    *(unsigned int *)((t20 + 0x14)) = t23;
                    t24 = *(int *)((t19 + 0x10));
                    *(unsigned int *)((t20 + 0x10)) = t24;
                    t25 = *(int *)((t19 + 0xC));
                    *(unsigned int *)((t20 + 0xC)) = t25;
                    t26 = *(int *)((t19 + 0x8));
                    *(unsigned int *)((t20 + 0x8)) = t26;
                    t27 = *(int *)((t19 + 0x4));
                    *(unsigned int *)((t20 + 0x4)) = t27;
                    t28 = *(int *)((t19 + 0x0));
                    *(unsigned int *)((t20 + 0x0)) = t28;
                } while ((unsigned int)t17 > (unsigned int)(t16 + 0x20));
            }
        } else {
            if ((unsigned int)a4 > (unsigned int)(t16 + 0x20)) {
                if ((unsigned int)(t16 + 0x20) < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20)) {
                    t34 = (t16 + 0x20);
                    t35 = a4;
                    do {
                        t36 = t35;
                        t35 = (t35 + 0x20);
                        t37 = t34;
                        t34 = (t34 + 0x20);
                        t38 = *(int *)((t36 + 0x1C));
                        *(unsigned int *)((t37 + 0x1C)) = t38;
                        t39 = *(int *)((t36 + 0x18));
                        *(unsigned int *)((t37 + 0x18)) = t39;
                        t40 = *(int *)((t36 + 0x14));
                        *(unsigned int *)((t37 + 0x14)) = t40;
                        t41 = *(int *)((t36 + 0x10));
                        *(unsigned int *)((t37 + 0x10)) = t41;
                        t42 = *(int *)((t36 + 0xC));
                        *(unsigned int *)((t37 + 0xC)) = t42;
                        t43 = *(int *)((t36 + 0x8));
                        *(unsigned int *)((t37 + 0x8)) = t43;
                        t44 = *(int *)((t36 + 0x4));
                        *(unsigned int *)((t37 + 0x4)) = t44;
                        t45 = *(int *)((t36 + 0x0));
                        *(unsigned int *)((t37 + 0x0)) = t45;
                    } while ((unsigned int)t34 < (unsigned int)(((((t3 << 2) << 2) << 1) + t16) + 0x20));
                }
            }
        }
    }
    *(unsigned int *)((t16 + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a5 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
    *(unsigned int *)0xC2B9358 = t8;
    _builtin_set_imask(((unsigned int)((((unsigned short)t0 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}







