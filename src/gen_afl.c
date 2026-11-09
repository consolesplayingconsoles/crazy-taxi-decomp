/* Straight-line functions with calls and guards (batch gen_afl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
int PutRenderTexture(int a4);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int PutRenderTexture(int a4)
{
    int t0;
    float u1;
    float u2;
    float u5;
    int t7;
    int t20;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t49;
    int t24;
    int t27;
    int t28;

    t0 = *(int *)0xC2B8CBC;
    if (a4 != 0) {
        u1 = 255.0f;
        u2 = (((struct o0_float *)0xC0EE904)->v);
        t27 = *(int *)(((t0 + 0x8) + 0x0));
        u5 = (u2 * u1);
        if (!(2.14748365e+09f > (u2 * u1))) {
            u5 = ((u2 * u1) - (2.14748365e+09f + 2.14748365e+09f));
        }
        *(unsigned int *)0xC0EE7F8 = 0x949184F6;
        t24 = ((((int)u5 << 16) << 8) | 0xFFFFFF);
        t28 = 0xC0EE860;
        if (a4 == 2) {
        } else {
            t24 = ((((int)u5 << 16) << 8) | 0xFFFFFF);
            t28 = 0xC0EE810;
            if (a4 == 3) {
                t7 = (((struct o10_int *)0xC0EE904)->v);
                *(unsigned int *)0xC0EE7F8 = 0x208984F6;
                t24 = (t7 | 0xFF000000);
                t28 = 0xC0EE8B0;
            }
        }
    } else {
        t20 = (((struct o10_int *)0xC0EE904)->v);
        t27 = *(int *)(((t0 + 0x8) + 0x0));
        *(unsigned int *)0xC0EE7F8 = 0x208984F6;
        t24 = (t20 | 0xFF000000);
        t28 = 0xC0EE810;
    }
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t27 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t27 >> 16) >> 8);
    t33 = ((t27 & 0x3FFFFFF) | 0xE0000000);
    t34 = 0xC0EE7F0;
    t35 = 0xFF000038;
    t36 = 0x8;
    for (;;) {
        if (t36 == 0) {
            break;
        }
        t35 = *(int *)((t34 + 0x0));
        t34 = (t34 + 0x4);
        t36 = (t36 - 1);
        *(unsigned int *)((t33 + 0x0)) = t35;
        t33 = (t33 + 0x4);
    }
    _builtin_prefetch((void *)((t27 & 0x3FFFFFF) | 0xE0000000));
    t38 = t33;
    t39 = t35;
    t40 = (((t27 & 0x3FFFFFF) | 0xE0000000) + 0x20);
    t41 = t28;
    t42 = 0x4;
    for (;;) {
        if (t42 == 0) {
            break;
        }
        t38 = t42;
        if (t38 == 1) {
            *(unsigned int *)((t40 + 0x0)) = 0xF0000000;
        } else {
            *(unsigned int *)((t40 + 0x0)) = 0xE0000000;
        }
        t39 = (*(int *)((t41 + 0x0)));
        t41 = (t41 + 0x4);
        t40 = (t40 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t39;
        t40 = (t40 + 0x4);
        t39 = (*(int *)((t41 + 0x0)));
        t41 = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t39;
        t40 = (t40 + 0x4);
        t39 = (*(int *)((t41 + 0x0)));
        t41 = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t39;
        t40 = (t40 + 0x4);
        t39 = (*(int *)((t41 + 0x0)));
        t41 = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t39;
        t40 = (t40 + 0x4);
        t39 = (*(int *)((t41 + 0x0)));
        t41 = (t41 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t39;
        t40 = (t40 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = t24;
        t40 = (t40 + 0x4);
        *(unsigned int *)((t40 + 0x0)) = 0x0;
        _builtin_prefetch((void *)t40);
        t42 = (t42 - 1);
        t40 = (t40 + 0x4);
    }
    t49 = *(int *)0xC2B8CBC;
    *(unsigned int *)(((t49 + 0x8) + 0x0)) = (((*(int *)(((t49 + 0x8) + 0x0))) & 0xFC000000) | (t40 & 0x3FFFFFF));
    return t38;
}
