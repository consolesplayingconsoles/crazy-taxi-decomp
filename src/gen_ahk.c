/* Straight-line functions with calls and guards (batch gen_ahk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetWindow(int);
int Sound_Init(void);
int Voice_Clear(void);
int Voice_Request(int, int, int, int);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int callTryAgain(void);

int callTryAgain(void)
{
    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    SetWindow(0x2);
    *(unsigned int *)0xC0EF550 = 0x275;
    return Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
}
