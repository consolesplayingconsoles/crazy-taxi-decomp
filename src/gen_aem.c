/* Straight-line functions with calls and guards (batch gen_aem): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetWindow(int);
int Sound_Init(void);
int Voice_Clear(void);
int gdc_StopStreamVoiceAll(void);
int callPause(void);

int callPause(void)
{
    *(unsigned int *)0xC2A1228 = (*(int *)0xC1EE234);
    *(unsigned int *)0xC2A122C = (*(int *)0xC1EE238);
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    Sound_Init();
    return SetWindow(0x1);
}
