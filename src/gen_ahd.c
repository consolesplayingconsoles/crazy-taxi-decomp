/* Straight-line functions with calls and guards (batch gen_ahd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Init_Remain_Time(void);
int Init_Shift(void);
int Start_Default2_Sprite(int a4, int a5, int a6, int a7, int a8);
void End_Here_We_Go(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Start_Default2_Sprite(int a4, int a5, int a6, int a7, int a8)
{
    (((struct o0_uint *)0xC2A8C54)->v) = a4;
    (((struct o4_uint *)0xC2A8C54)->v) = a5;
    (((struct o20_uint *)0xC2A75E0)->v) = a6;
    (((struct o8_uint *)0xC2A8C54)->v) = a7;
    (((struct oC_uint *)0xC2A8C54)->v) = a8;
    (((struct o0_uint *)0xC2A75E0)->v) = (((((struct o0_int *)0xC2A75E0)->v)) | 0x10);
    Init_Remain_Time();
    return Init_Shift();
}

void End_Here_We_Go(void)
{
    *(unsigned int *)0xC2A75E0 = ((*(int *)0xC2A75E0) & 0xFFFFFFFB);
}
