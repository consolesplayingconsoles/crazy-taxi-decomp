/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutFreeTextureOnce_Sub(int, int, int);
int FUN_0c07a520(int a4);
int FUN_0c170820(int a4, int a5, int a6);
int FUN_0c1677d8(int a4, int a5, int a6);
int FUN_0c167800(int a4, int a5, int a6);
int FUN_0c170834(int a4, int a5, int a6);
int FUN_0c170848(int a4, int a5, int a6);
int FUN_0c17085c(int a4, int a5, int a6);
int FUN_0c1676a8(int a4, int a5);
int FUN_0c167680(int a4, int a5);
int FUN_0c167694(int a4, int a5);
int FUN_0c16766c(int a4, int a5);
int FUN_0c1676bc(int a4, int a5);

int FUN_0c07a520(int a4)
{
    return nlObjPutFreeTextureOnce_Sub(a4, 0x0, 0x0);
}

int FUN_0c170820(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c1677d8(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x0);
}

int FUN_0c167800(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B0;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_0c170834(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x1);
}

int FUN_0c170848(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x2);
}

int FUN_0c17085c(int a4, int a5, int a6)
{
    int t0;

    t0 = *(int *)0x8C0000B8;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, a6, 0x3);
}

int FUN_0c1676a8(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x3);
}

int FUN_0c167680(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x1);
}

int FUN_0c167694(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x2);
}

int FUN_0c16766c(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x0);
}

int FUN_0c1676bc(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x4);
}
