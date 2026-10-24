/* Straight-line functions with calls and guards (batch gen_vt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int hudDrawFareFrame(int a4, int a5, int a6);

int hudDrawFareFrame(int a4, int a5, int a6)
{
    int t0;
    int t4;
    int t6;
    int t9;
    int t10;
    int t16;
    int t18;
    int t23;
    int t27;

    t0 = *(int *)0xC2A8EB0;
    if ((t0 != 1) && (t0 != 6)) {
        *(float *)0xC2A7EA8 = 0.0f;
    } else {
        *(float *)0xC2A7EA8 = (1.0f - (*(float *)0xC2A8EA0));
    }
    *(float *)0xC2A7EB0 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x128;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    *(float *)0xC2A7E94 = 96.0f;
    *(float *)0xC2A7E98 = 0.049999997f;
    *(float *)0xC2A7E9C = 9.0f;
    *(float *)0xC2A7EA0 = (1.0f + 1.0f);
    *(float *)0xC2A7EB8 = 0.699999988f;
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    t4 = ((int (*)(int, int, int))(nlSprPut))(0xC2A7E8C, a5, a6);
    *(float *)0xC2A7E94 = (96.0f - (*(float *)0xC2A8EB8));
    *(unsigned int *)0xC2A7EB4 = 0x0;
    t6 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB8 = 1.0f;
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 458.0f;
    *(float *)0xC2A7E94 = (79.0f - (*(float *)0xC2A8EB8));
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = (*(float *)0xC2A8EA0);
    t9 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(float *)0xC2A7E98 = 0.279999971f;
    *(unsigned int *)0xC2A7E8C = 0x10E;
    *(float *)0xC2A7E90 = 468.0f;
    t10 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    if ((*(int *)0xC2A8E64) != 10) {
        *(unsigned int *)0xC2A7E8C = 0x10D;
    } else {
        *(unsigned int *)0xC2A7E8C = 0xFE;
    }
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 512.0f;
    t16 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x10F;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7E90 = 568.0f;
    t18 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7E8C = 0x102;
    *(unsigned int *)0xC2A7EC0 = 0x200E;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 606.0f;
    *(float *)0xC2A7E94 = (79.0f - (*(float *)0xC2A8EB8));
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = (*(float *)0xC2A8EA0);
    *(unsigned int *)0xC2A7EB4 = 0x8000;
    t23 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(unsigned int *)0xC2A7EC0 = 0x2006;
    *(unsigned int *)0xC2A7EB4 = 0x0;
    *(unsigned int *)0xC2A7E8C = 0x1A2;
    *(float *)0xC2A7EA4 = 0.0f;
    *(float *)0xC2A7EAC = 1.0f;
    *(float *)0xC2A7E90 = 532.0f;
    *(float *)0xC2A7E94 = (111.0f - (*(float *)0xC2A8EB8));
    *(float *)0xC2A7E98 = 0.289999992f;
    *(float *)0xC2A7E9C = 1.0f;
    *(float *)0xC2A7EA0 = (*(float *)0xC2A8EA0);
    t27 = ((int (*)(int))(nlSprPut))(0xC2A7E8C);
    *(float *)0xC2A7EA0 = 1.0f;
    *(float *)0xC2A7EB0 = 1.0f;
    return 0x24;
}
