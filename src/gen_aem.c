/* Straight-line functions with calls and guards (batch gen_aem): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int SetWindow(int);
int Sound_Init(void);
int Voice_Clear(void);
int gdc_StopStreamVoiceAll(void);
int callPause(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int callPause(void)
{
    (((struct o0_uint *)0xC2A1228)->v) = ((((struct o0_int *)0xC1EE234)->v));
    (((struct o4_uint *)0xC2A1228)->v) = ((((struct o4_int *)0xC1EE234)->v));
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    Sound_Init();
    return SetWindow(0x1);
}
