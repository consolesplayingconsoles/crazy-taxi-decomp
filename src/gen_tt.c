/* Straight-line functions with calls and guards (batch gen_tt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ShotLandmarkStub(void);
int nlSprPut(int);
int PutShotLandmark(void);

int PutShotLandmark(void)
{
    int stk[22];

    ShotLandmarkStub();
    *(unsigned int *)(((int)stk + 4)) = 0x7A;
    *(float *)(((int)stk + 8)) = 500.0f;
    *(float *)(((int)stk + 12)) = 128.0f;
    *(float *)(((int)stk + 16)) = 0.299999982f;
    *(float *)(((int)stk + 24)) = 1.0f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x725;
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    return (nlSprPut(((int)stk + 4)));
}
