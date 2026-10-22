/* Straight-line functions with calls and guards (batch gen_xf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int Put_Ranking_Header(void);

int Put_Ranking_Header(void)
{
    int t0;
    int t1;
    int t4;
    int t8;
    float u9;
    float u10;
    float u11;
    int t13;
    int t15;
    int t17;
    int t19;
    float u20;
    int t22;
    int t23;
    int t5;

    t0 = *(int *)0xC2A968C;
    if ((int)t0 > 0) {
        t1 = *(int *)0xC2A968C;
        *(unsigned int *)0xC2A968C = (t1 - 64);
    }
    t4 = *(int *)0xC2A96A4;
    if ((t4 == 0) && (t5 = *(int *)0xC2A968C, t5 == 0)) {
        *(unsigned int *)0xC2A96A4 = 0x1;
    }
    *(unsigned int *)0xC2A91D8 = 0xE3;
    t8 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t8 + 0x8);
    u9 = 50.0f;
    *(float *)0xC2A91E0 = u9;
    u10 = 0.099999994f;
    *(float *)0xC2A91E4 = u10;
    u11 = 1.4f;
    *(float *)0xC2A91E8 = u11;
    *(float *)0xC2A91EC = 1.0f;
    *(unsigned int *)0xC2A9200 = 0x0;
    *(unsigned int *)0xC2A920C = 0xA;
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE8;
    *(float *)0xC2A91E8 = 1.0f;
    t13 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t13 + 0x53);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE7;
    t15 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t15 + 0xD3);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE9;
    t17 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t17 + 0x146);
    nlSprPut(0xC2A91D8);
    *(unsigned int *)0xC2A91D8 = 0xE3;
    t19 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t19 + 0x1CA);
    u20 = 8.5f;
    *(float *)0xC2A91E8 = u20;
    nlSprPut(0xC2A91D8);
    *(float *)0xC2A91E8 = 1.0f;
    *(unsigned int *)0xC2A91D8 = 0xE4;
    t22 = *(int *)0xC2A968C;
    *(float *)0xC2A91DC = (float)(t22 + 0x24C);
    t23 = nlSprPut(0xC2A91D8);
    return t23;
}
