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
