/* Straight-line functions with calls and guards (batch gen_ahy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int Put_GearBox(void);
int Put_Remain_Time(void);
extern int Put_Remain_Time_Mode2();
int Put_TotalDrum_Update(void);
int Put_Default_Sprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int Put_Default_Sprite(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int t2;
    int t7;

    if ((*(int *)0xC1EE210) != 2) {
        if ((GetMenuMode(0x1)) != 0) {
            t2 = ((int (*)(void))(Put_Remain_Time_Mode2))();
        } else {
            Put_Remain_Time();
        }
        Put_TotalDrum_Update();
    } else {
        t7 = ((int (*)(int, int, int, int, float, float, float))(Put_Remain_Time_Mode2))(a4, a5, a6, a7, f4, f5, f6);
    }
    return Put_GearBox();
}
