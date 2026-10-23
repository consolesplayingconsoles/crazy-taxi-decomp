/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSJD_SetInSj(int, int);
int ADXSJD_Start(void);
int ADXT_Stop(void);
int kmiBGPlaneSetPCW(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlanePutColor2(int, int, int, int);
int nlAddVector(int, int);
int nlScaleVector(int, int, float);
int set_event(int, int);
int ADXT_StartSj(int a4, int a5);
int signalInit(int a4, int a5);
int kmiProcessVertex_05(int a4);

int ADXT_StartSj(int a4, int a5)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t10;

    ADXT_Stop();
    ADXCRS_Lock();
    t2 = 0x0;
    for (;;) {
        t3 = *(signed char *)((a4 + 0x3));
        if ((int)t2 >= (int)t3) break;
        t4 = *(int *)((((t2 << 2) + (a4 + 0x18)) + 0x0));
        t5 = *(int *)((t4 + 0x0));
        t6 = *(int *)((t5 + 0x14));
        t7 = ((int (*)(int))(t6))(t4);
        t2 = (t2 + 0x1);
    }
    t8 = *(int *)((a4 + 0x4));
    ADXSJD_SetInSj(t8, a5);
    *(unsigned int *)((a4 + 0x14)) = a5;
    t10 = *(int *)((a4 + 0x4));
    ADXSJD_Start();
    *(unsigned char *)((a4 + 0x1)) = 0x1;
    *(unsigned char *)((a4 + 0x2)) = 0x3;
    *(unsigned int *)((a4 + 0x4C)) = 0x0;
    return ADXCRS_Unlock();
}



