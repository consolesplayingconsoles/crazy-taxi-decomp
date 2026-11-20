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
