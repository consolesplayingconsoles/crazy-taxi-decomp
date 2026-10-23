/* Straight-line functions with calls and guards (batch gen_aeh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int Put_Ranking_Header(int a4, int a5, int a6);

int Put_Ranking_Header(int a4, int a5, int a6)
{
    int t12;
    int t14;
    int t16;
    int t18;
    int t21;
    int t5;

    if ((int)(*(int *)0xC2A968C) > 0) {
        *(unsigned int *)0xC2A968C = ((*(int *)0xC2A968C) - 64);
    }
    if (((*(int *)0xC2A96A4) == 0) && (t5 = *(int *)0xC2A968C, t5 == 0)) {
        *(unsigned int *)0xC2A96A4 = 0x1;
    }
    *(unsigned int *)0xC2A91D8 = 0xE3;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0x8);
    *(float *)0xC2A91E0 = (*(float *)0xC05894C);
    *(float *)0xC2A91E4 = (*(float *)0xC058950);
    *(float *)0xC2A91E8 = (*(float *)0xC058954);
    *(float *)0xC2A91EC = 1.0f;
    *(unsigned int *)0xC2A9200 = 0x0;
    *(unsigned int *)0xC2A920C = 0xA;
    t12 = ((int (*)(int, int, int))(nlSprPut))(0xC2A91D8, a5, a6);
    *(unsigned int *)0xC2A91D8 = 0xE8;
    *(float *)0xC2A91E8 = 1.0f;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0x53);
    t14 = ((int (*)(int))(nlSprPut))(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE7;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0xD3);
    t16 = ((int (*)(int))(nlSprPut))(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE9;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0x146);
    t18 = ((int (*)(int))(nlSprPut))(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE3;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0x1CA);
    *(float *)0xC2A91E8 = (*(float *)0xC05895C);
    t21 = ((int (*)(int))(nlSprPut))(0xC2A91D8);
    *(float *)0xC2A91E8 = 1.0f;
    *(unsigned int *)0xC2A91D8 = 0xE4;
    *(float *)0xC2A91DC = (float)((*(int *)0xC2A968C) + 0x24C);
    return (((int (*)(int))(nlSprPut))(0xC2A91D8));
}
