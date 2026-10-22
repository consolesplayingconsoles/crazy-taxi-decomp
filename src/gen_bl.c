/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15887e(int, int, int);
extern void _builtin_prefetch(void *);
int FUN_0c158860(int a4, int a5, int a6);
void FUN_0c077b50(int a4);
void FUN_0c079ed0(int a4);
void nlLoadMatrix(int a4);
int PutRenderTexture(int a4);

int FUN_0c158860(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float u3;
    float u4;

    if ((((a4 | a5) | a6) & 7) == 0) {
        t0 = a4;
        t1 = a5;
        t2 = ((unsigned int)((unsigned int)a6 >> 2) >> 1);
        do {
            u3 = *(float *)((t1 + 0x0));
            u4 = *(float *)(((t1 + 0x0) + 4));
            t1 = (t1 + 0x8);
            t2 = (t2 - 0x1);
            *(float *)((t0 + 0x0)) = u3;
            *(float *)(((t0 + 0x0) + 4)) = u4;
            t0 = (t0 + 0x8);
        } while (t2 != 0);
        return ((a4 | a5) | a6);
    }
    return FUN_0c15887e(a4, a5, a6);
}




int PutRenderTexture(int a4)
{
    int t0;
    float u1;
    int t2;
    float u4;
    int t12;
    int t15;
    int t7;
    int t10;
    int t5;
    int t16;
    int t17;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t19;
    int t22;
    int t23;

    t0 = *(int *)0xC2B8CBC;
    if (a4 != 0) {
        u1 = *(float *)0xC0EE904;
        t2 = *(int *)(((t0 + 0x8) + 0x0));
        u4 = (u1 * 255.0f);
        if (!(2.14748365e+09f > (u1 * 255.0f))) {
            u4 = ((u1 * 255.0f) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)0xC0EE7F8 = 0x949184F6;
        t12 = ((((int)u4 << 16) << 8) | 0xFFFFFF);
        t15 = 0xC0EE860;
        if (a4 != 2) {
            t7 = ((((int)u4 << 16) << 8) | 0xFFFFFF);
            t10 = 0xC0EE810;
            if (a4 == 3) {
                t5 = *(int *)0xC0EE914;
                *(unsigned int *)0xC0EE7F8 = 0x208984F6;
                t7 = (t5 | 0xFF000000);
                t10 = 0xC0EE8B0;
            }
            t12 = t7;
            t15 = t10;
        }
        t19 = t12;
        t22 = t2;
        t23 = t15;
    } else {
        t16 = *(int *)0xC0EE914;
        t17 = *(int *)(((t0 + 0x8) + 0x0));
        *(unsigned int *)0xC0EE7F8 = 0x208984F6;
        t19 = (t16 | 0xFF000000);
        t22 = t17;
        t23 = 0xC0EE810;
    }
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t22 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t22 >> 16) >> 8);
    t24 = ((t22 & 0x3FFFFFF) | 0xE0000000);
    t25 = 0xC0EE7F0;
    t26 = 0xFF000038;
    t27 = 0x8;
    while (t27 != 0) {
        t28 = *(int *)((t25 + 0x0));
        t25 = (t25 + 0x4);
        t26 = t28;
        t27 = (t27 - 1);
        *(unsigned int *)((t24 + 0x0)) = t26;
        t24 = (t24 + 0x4);
    }
    _builtin_prefetch((void *)((t22 & 0x3FFFFFF) | 0xE0000000));
    t29 = t24;
    t30 = t26;
    t31 = (((t22 & 0x3FFFFFF) | 0xE0000000) + 0x20);
    t32 = t23;
    t33 = 0x4;
    while (t33 != 0) {
        t29 = t33;
        if (t29 == 1) {
            *(unsigned int *)((t31 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t31 + 0x0)) = 0xE0000000;
        }
        t34 = *(int *)((t32 + 0x0));
        t30 = t34;
        t32 = (t32 + 0x4);
        t31 = (t31 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t30;
        t31 = (t31 + 0x4);
        t35 = *(int *)((t32 + 0x0));
        t30 = t35;
        t32 = (t32 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t30;
        t31 = (t31 + 0x4);
        t36 = *(int *)((t32 + 0x0));
        t30 = t36;
        t32 = (t32 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t30;
        t31 = (t31 + 0x4);
        t37 = *(int *)((t32 + 0x0));
        t30 = t37;
        t32 = (t32 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t30;
        t31 = (t31 + 0x4);
        t38 = *(int *)((t32 + 0x0));
        t30 = t38;
        t32 = (t32 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t30;
        t31 = (t31 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = t19;
        t31 = (t31 + 0x4);
        *(unsigned int *)((t31 + 0x0)) = 0x0;
        _builtin_prefetch((void *)t31);
        t33 = (t33 - 1);
        t31 = (t31 + 0x4);
    }
    t39 = *(int *)0xC2B8CBC;
    t40 = *(int *)(((t39 + 0x8) + 0x0));
    *(unsigned int *)(((t39 + 0x8) + 0x0)) = ((t40 & 0xFC000000) | (t31 & 0x3FFFFFF));
    return t29;
}

