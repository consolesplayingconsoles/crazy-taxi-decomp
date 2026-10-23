/* Straight-line functions with calls and guards (batch gen_ams): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetScreen(int);
int SetWindow(int);
int gdc_CourseStartLoadReq(void);
int gdc_FileLoadInit(void);
int gdc_FileLoadStop(void);
int gdc_StopStreamSongDisk(void);
int windowRetry(void);

int windowRetry(void)
{
    *(unsigned int *)0xC1EE238 = 0x0;
    gdc_FileLoadStop();
    gdc_FileLoadInit();
    gdc_CourseStartLoadReq();
    SetScreen(0x4);
    SetWindow(0x0);
    *(unsigned int *)0xC2A11B0 = 0x0;
    return gdc_StopStreamSongDisk();
}
