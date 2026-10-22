/* Straight-line functions with calls and guards (batch gen_ago): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_PickSomeoneUp(void);
int Drv_SetMotion(int, float);
int Drv_StartPickUp(void);

int Drv_StartPickUp(void)
{
    int t0;

    t0 = *(int *)0xC2AD018;
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            Drv_SetMotion(0xC8E3D50, 0.0f);
        }
    } else {
        Drv_SetMotion(0xC8D62BC, 0.0f);
    }
    *(float *)0xC2AD0F8 = 10.0f;
    *(unsigned int *)0xC2AD1D0 = 0xC0D44D8;
    *(unsigned int *)0xC2AD1D4 = 0xC0D44E0;
    return Chat_PickSomeoneUp();
}
