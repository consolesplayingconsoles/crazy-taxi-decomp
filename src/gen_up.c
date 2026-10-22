/* Straight-line functions with calls and guards (batch gen_up): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Result(int);
int Sound_Init(void);
int gdc_FileLoadInit(void);
int gdc_FileLoadStop(void);
int gdc_StopStreamSongAll(void);
int nlInitEvent(void);
int gameState8(void);

int gameState8(void)
{
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    *(unsigned int *)0xC1EE240 = 0x0;
    nlInitEvent();
    Sound_Init();
    gdc_StopStreamSongAll();
    Init_Result((*(int *)0xC179488));
    gdc_FileLoadStop();
    return gdc_FileLoadInit();
}
