/* Straight-line functions with calls and guards (batch gen_ami): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetScreen(int);
int SetWindow(int);
int Sound_Init(void);
int Voice_Clear(void);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int pfSetZ(float);
int callGoBackAdvertise(void);

int callGoBackAdvertise(void)
{
    int t7;

    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x8;
    *(unsigned int *)0xC2A11D8 = 0x0;
    *(unsigned int *)0xC2A11DC = 0x0;
    SetScreen(0x0);
    SetWindow(0x0);
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    t7 = pfSetZ(0.099999994f);
    *(unsigned int *)0xC1EE210 = 0x0;
    *(unsigned int *)0xC1EE214 = 0x0;
    *(unsigned int *)0xC1EE20C = 0x0;
    return t7;
}
