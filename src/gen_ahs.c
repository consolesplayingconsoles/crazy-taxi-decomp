/* Straight-line functions with calls and guards (batch gen_ahs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Press_Start(void);

int Put_Press_Start(void)
{
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96D0), 378.0f);
    return pfPuts(0xC0D0A40);
}
