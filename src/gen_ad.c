/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ExecArrow(int, float);
int pfSetAspectRatio(float);
int pfCleanString(void);
int pfAddString(int);
int pfAddNumber(int, int);
int Init_Remain_Arrow(int);
int Start_CrazyBox_Voice(int);
int Chat_DamnIt(int);
int Chat_DontPass(int);
int fcvCalcPosition(int, int, float);
int fcvCalcAngle(int, int, float);
int IsBoyFriend(int, int);
int ResetFadeColor(void);
float nlExp(int, float, float);
float nlFloor(int, int, float);
float nlLength(int, int);
int nlObjPutSetFadeColor(int, float, float, float);
int nlRand(int, int);
float nlRoundOff(float);
float nlRoundUp(int, int, int, float);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);

void InitProportionalText(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    *(unsigned int *)0xC26E1F0 = a4;
    t0 = *(int *)0xC2B3184;
    t1 = *(int *)0xC2AEC84;
    t2 = *(int *)((((((t0 + 0x3) << 2) << 1) + t1) + 0x4));
    t3 = *(int *)0xC2B29C0;
    t4 = *(int *)((((t2 * 0x3C) + t3) + 0x34));
    *(unsigned int *)0xC0ED1CC = t4;
    *(unsigned int *)0xC26E310 = 0xC26E210;
    *(unsigned char *)0xC26E210 = 0x0;
    pfSetFont(0x0);
    pfSetAspectRatio(1.0f);
    pfSize(1.0f, 1.0f);
}

void Init_Adv_Global_Parm(void)
{
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    float t8;
    float t9;
    float t11;
    float t12;
    float t14;
    float t15;
    float t17;
    float t18;

    *(unsigned short *)0xC2A9228 = 0x0;
    *(unsigned int *)0xC2A931C = 0x0;
    pfSetFont(0x1);
    pfSize(1.0f, 1.0f);
    t2 = pfLength(0xC0D0A10);
    t3 = nlRoundOff((320.0f - (t2 * 0.5f)));
    *(float *)0xC2A96C4 = t3;
    t4 = pfLength(0xC0D0A1C);
    t5 = nlRoundOff((320.0f - (t4 * 0.5f)));
    *(float *)0xC2A96C8 = t5;
    t6 = pfLength(0xC0D0A2C);
    t7 = nlRoundOff((320.0f - (t6 * 0.5f)));
    *(float *)0xC2A96CC = t7;
    t8 = pfLength(0xC0D0A40);
    t9 = nlRoundOff((320.0f - (t8 * 0.5f)));
    *(float *)0xC2A96D0 = t9;
    pfSize(1.0f, 1.0f);
    t11 = pfLength(0xC0D0A54);
    t12 = nlRoundOff((320.0f - (t11 * 0.5f)));
    *(float *)0xC2A96D4 = t12;
    pfSize(1.0f, 1.0f);
    t14 = pfLength(0xC0D0A70);
    t15 = nlRoundOff((320.0f - (t14 * 0.5f)));
    *(float *)0xC2A96D8 = t15;
    pfSize(1.5f, 1.5f);
    t17 = pfLength(0xC0D0A88);
    t18 = nlRoundOff((320.0f - (t17 * 0.5f)));
    *(float *)0xC2A96DC = t18;
}


void pfCrazyBoxRecordTimePut(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    float t3;
    int t4;
    int t16;
    float t17;
    int t19;

    t0 = (int)((int)a6 / (int)0xE10);
    t1 = (int)((int)(a6 - (t0 * 0xE10)) / (int)0x3C);
    t2 = (int)((int)(a6 - (t0 * 0xE10)) % (int)0x3C);
    t3 = nlRoundUp((t0 * 0xE10), a5, (a6 - (t0 * 0xE10)), (((float)t2 / 60.0f) * 100.0f));
    t4 = (int)t3;
    if ((int)(int)t3 < 0) {
        t4 = 0x0;
    }
    pfCleanString();
    if (t0 != 0) {
        pfAddNumber(t0, 0x0);
        pfAddString(0xC0D3028);
    }
    if ((int)t1 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t1, 0x0);
    pfAddString(0xC0D3030);
    if ((int)t4 < (int)0xA) {
        pfAddString(0xC0D302C);
    }
    pfAddNumber(t4, 0x0);
    t16 = *(int *)0xC08D678;
    t17 = pfLength(t16);
    pfLocate(((float)a4 - (t17 * 0.5f)), (float)a5);
    t19 = *(int *)0xC08D678;
    pfPuts(t19);
}

void FcvStoreBuffer(int a4, int a5, float f4)
{
    int t0;
    float t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t23;
    int t25;
    int t27;
    int t29;
    int t31;
    int t33;
    int t35;

    t0 = *(int *)((a4 + 0x0));
    t1 = nlFloor(a4, a5, (f4 / (float)(t0 - 1)));
    t2 = *(int *)((a4 + 0x0));
    t3 = *(int *)((a4 + 0x18));
    fcvCalcPosition(((t3 << 2) + a4), (a5 + 0xC), (f4 - (t1 * (float)(t2 - 1))));
    t5 = *(int *)((a4 + 0x24));
    fcvCalcPosition(((t5 << 2) + a4), (a5 + 0x18), (f4 - (t1 * (float)(t2 - 1))));
    t7 = *(int *)((a4 + 0x34));
    fcvCalcPosition(((t7 << 2) + a4), (a5 + 0x24), (f4 - (t1 * (float)(t2 - 1))));
    t9 = *(int *)((a4 + 0x40));
    fcvCalcPosition(((t9 << 2) + a4), (a5 + 0x30), (f4 - (t1 * (float)(t2 - 1))));
    t11 = *(int *)((a4 + 0x4));
    fcvCalcPosition(((t11 << 2) + a4), a5, (f4 - (t1 * (float)(t2 - 1))));
    t13 = *(int *)((a4 + 0x8));
    fcvCalcAngle(((t13 << 2) + a4), (a5 + 0x3C), (f4 - (t1 * (float)(t2 - 1))));
    t15 = *(int *)((a4 + 0xC));
    fcvCalcAngle(((t15 << 2) + a4), (a5 + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    t17 = *(int *)((a4 + 0x10));
    fcvCalcAngle(((t17 << 2) + a4), (a5 + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    t19 = *(int *)((a4 + 0x14));
    fcvCalcAngle(((t19 << 2) + a4), (a5 + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    t21 = *(int *)((a4 + 0x1C));
    fcvCalcAngle(((t21 << 2) + a4), (a5 + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    t23 = *(int *)((a4 + 0x20));
    fcvCalcAngle(((t23 << 2) + a4), (a5 + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    t25 = *(int *)((a4 + 0x28));
    fcvCalcAngle(((t25 << 2) + a4), ((a5 + 0x3C) + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    t27 = *(int *)((a4 + 0x2C));
    fcvCalcAngle(((t27 << 2) + a4), ((a5 + 0x3C) + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    t29 = *(int *)((a4 + 0x30));
    fcvCalcAngle(((t29 << 2) + a4), ((a5 + 0x3C) + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    t31 = *(int *)((a4 + 0x38));
    fcvCalcAngle(((t31 << 2) + a4), ((a5 + 0x3C) + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    t33 = *(int *)((a4 + 0x3C));
    fcvCalcAngle(((t33 << 2) + a4), ((a5 + 0x3C) + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    t35 = *(int *)((a4 + 0x44));
    fcvCalcAngle(((t35 << 2) + a4), ((a5 + 0x3C) + 0x84), (f4 - (t1 * (float)(t2 - 1))));
}


void nlTanh(int a4)
{
    if ((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) > 0.000999999931f) {
        nlExp((unsigned short)a4, (-((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) * (1.0f + 1.0f))), 0.000999999931f);
    } else {
        if (0.000999999931f > (((float)(unsigned short)a4 * 6.28318501f) / 65536.0f)) {
            nlExp((unsigned short)a4, ((((float)(unsigned short)a4 * 6.28318501f) / 65536.0f) * (1.0f + 1.0f)), 0.000999999931f);
        }
    }
}
