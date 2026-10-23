/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_PickSomeoneUp(void);
int Drv_SetMotion(int, float);
int nlCalcPoint(int, int);
int kmiMemCopy8(int, int, int);
int ResetFadeColor(void);
int SetColliObj(int, int);
extern void _builtin_prefetch(void *);
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlScaleVector(int, int, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int set_event(int, int);
int Drv_StartHorn(void);
int Drv_StartPickUp(void);
int Put_Adv_Rating(void);
void setObjHitShed(int a4);
int nldispstripSub(int a4, int a5, int a6);
int carAngularMotion(int a4);

int Drv_StartHorn(void)
{
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    Drv_SetMotion(0xC8D5798, 14.0f);
    *(float *)0xC2AD0F8 = (1.0f + 1.0f);
    return 0xF8;
}





