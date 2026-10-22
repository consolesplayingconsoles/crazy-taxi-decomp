/* Straight-line functions with calls and guards (batch gen_qd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int FUN_0c078980(void);
int FUN_0c079da0(void);
int FUN_0c07c830(void);
int FUN_0c07c870(int, int);
int kmSetCheapShadowMode(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSqrt(int, int);
int FUN_0c07c740(int a4, int a5);

int FUN_0c07c740(int a4, int a5)
{
    float u20;
    int t28;
    int t30;

    nlPushMatrix(0x0);
    kmSetCheapShadowMode((*(int *)((a5 + 0x10))));
    *(float *)0xC2B7678 = (*(float *)((a5 + 0x18)));
    *(float *)0xC2B767C = (*(float *)((a5 + 0x1C)));
    *(float *)0xC2B7680 = (*(float *)((a5 + 0x20)));
    FUN_0c078980();
    FUN_0c077210(0xC2B7678, 0xC2B7678);
    FUN_0c078980();
    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        nlSqrt((a5 + 0x18), 0xC2B7688);
        nlPopMatrix(0x1);
    }
    FUN_0c079da0();
    FUN_0c07c830();
    if (((*(int *)((a5 + 0x0))) & 1) == 0) {
        u20 = *(float *)((a5 + 0x14));
        *(float *)0xC2B7698 = ((*(float *)0xC2B7678) * (-u20));
        *(float *)0xC2B769C = ((*(float *)0xC2B767C) * (-u20));
        *(float *)0xC2B76A0 = ((*(float *)0xC2B7680) * (-u20));
        FUN_0c077210(0xC2B7698, 0xC2B7698);
    }
    t28 = a4;
    for (;;) {
        if ((*(int *)((t28 + 0x0))) == 0) {
            break;
        }
        *(unsigned int *)0xC2B7684 = 0x0;
        t30 = *(int *)((t28 + 0x0));
        t28 = (t28 + 0x4);
        FUN_0c07c870(t30, a5);
    }
    return nlPopMatrix(0x1);
}
