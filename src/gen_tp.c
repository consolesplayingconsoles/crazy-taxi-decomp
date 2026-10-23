/* Straight-line functions with calls and guards (batch gen_tp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float, float);
int nlCalcVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int breathMove(int a4, int a5);

int breathMove(int a4, int a5)
{
    float u9;
    float u10;
    float u17;
    float u18;
    int t25;
    float u26;
    int stk[7];

    nlPushMatrix(0x0);
    nlRotateAY((*(int *)((a4 + 0x10))));
    nlRotateAX((*(int *)((a4 + 0xC))));
    nlCalcVector(0xC0D5578, ((int)stk + 4));
    nlPopMatrix(0x1);
    nlGetAverageVector(a4, ((int)stk + 4), a4, 1.0f, (*(float *)((a4 + 0x18))));
    u9 = *(float *)((a5 + 0x0));
    u10 = *(float *)((a4 + 0x0));
    if ((u10 - u9) > 50.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) + 50.0f);
    } else {
        if (-50.0f > (u10 - u9)) {
            *(float *)((a4 + 0x0)) = ((*(float *)((a5 + 0x0))) + -50.0f);
        }
    }
    u17 = *(float *)((a4 + 0x8));
    u18 = *(float *)((a5 + 0x8));
    if ((u17 - u18) > 50.0f) {
        *(float *)((a4 + 0x8)) = ((*(float *)((a5 + 0x8))) + 50.0f);
    } else {
        if (-50.0f > (u17 - u18)) {
            *(float *)((a4 + 0x8)) = ((*(float *)((a5 + 0x8))) + -50.0f);
        }
    }
    t25 = GetCollision2D(a4, 0.0f, 50.0f);
    u26 = *(float *)0xC0729F4;
    if (((*(float *)((t25 + 0x4))) + u26) > (*(float *)((a4 + 0x4)))) {
        *(float *)((a4 + 0x4)) = ((*(float *)((t25 + 0x4))) + u26);
    }
    if ((*(float *)((a4 + 0x4))) > (*(float *)((a5 + 0x4)))) {
        *(float *)((a4 + 0x4)) = (*(float *)((a5 + 0x4)));
    }
    return 0x4;
}
