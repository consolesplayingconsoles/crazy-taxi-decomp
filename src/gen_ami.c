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
struct o0_uint { unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };


int callGoBackAdvertise(void)
{
    int t7;

    (((struct o28_uint *)0xC1EE20C)->v) = 0x0;
    (((struct o2C_uint *)0xC1EE20C)->v) = 0x8;
    (((struct o0_uint *)0xC2A11D8)->v) = 0x0;
    (((struct o4_uint *)0xC2A11D8)->v) = 0x0;
    SetScreen(0x0);
    SetWindow(0x0);
    Voice_Clear();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    t7 = pfSetZ(0.099999994f);
    (((struct o4_uint *)0xC1EE20C)->v) = 0x0;
    (((struct o8_uint *)0xC1EE20C)->v) = 0x0;
    (((struct o0_uint *)0xC1EE20C)->v) = 0x0;
    return t7;
}
