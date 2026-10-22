/* Straight-line functions with calls and guards (batch gen_agv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07f0b0(void);
int gdc_FileLoad(int, int, int);
int nlsndPackLoad(int, int);
int gdc_CarSoundLoad(void);

int gdc_CarSoundLoad(void)
{
    int t4;

    if ((int)(*(int *)0xC179488) < (int)0x4) {
        FUN_0c07f0b0();
        t4 = 0xC08D4C8;
    } else {
        FUN_0c07f0b0();
        t4 = 0xC08D4D4;
    }
    gdc_FileLoad(0xCB40000, t4, 0x0);
    nlsndPackLoad(0xCB40000, 0x5);
    gdc_FileLoad(0xCB40000, 0xC08D588, 0x0);
    return gdc_FileLoad(0xCE90000, 0xC08D594, 0x8000);
}
