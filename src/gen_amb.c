/* Straight-line functions with calls and guards (batch gen_amb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int pfSetAspectRatio(float);
int pfSetFont(int);
int pfSize(float, float);
void InitProportionalText(int a4);

void InitProportionalText(int a4)
{
    *(unsigned int *)0xC26E1F0 = a4;
    *(unsigned int *)0xC0ED1CC = (*(int *)(((((*(int *)(((((((*(int *)0xC2B3184) + 0x3) << 2) << 1) + (*(int *)0xC2AEC84)) + 0x4))) * 0x3C) + (*(int *)0xC2B29C0)) + 0x34)));
    *(unsigned int *)0xC26E310 = 0xC26E210;
    *(unsigned char *)0xC26E210 = 0x0;
    pfSetFont(0x0);
    pfSetAspectRatio(1.0f);
    pfSize(1.0f, 1.0f);
}
