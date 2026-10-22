/* Straight-line functions with calls and guards (batch gen_afq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlRoundOff(float);
float pfLength(int);
int pfSetFont(int);
int pfSize(float, float);
void Init_Adv_Global_Parm(void);

void Init_Adv_Global_Parm(void)
{
    *(unsigned short *)0xC2A9228 = 0x0;
    *(unsigned int *)0xC2A931C = 0x0;
    pfSetFont(0x1);
    pfSize(1.0f, 1.0f);
    *(float *)0xC2A96C4 = (nlRoundOff((320.0f - ((pfLength(0xC0D0A10)) * 0.5f))));
    *(float *)0xC2A96C8 = (nlRoundOff((320.0f - ((pfLength(0xC0D0A1C)) * 0.5f))));
    *(float *)0xC2A96CC = (nlRoundOff((320.0f - ((pfLength(0xC0D0A2C)) * 0.5f))));
    *(float *)0xC2A96D0 = (nlRoundOff((320.0f - ((pfLength(0xC0D0A40)) * 0.5f))));
    pfSize(1.0f, 1.0f);
    *(float *)0xC2A96D4 = (nlRoundOff((320.0f - ((pfLength(0xC0D0A54)) * 0.5f))));
    pfSize(1.0f, 1.0f);
    *(float *)0xC2A96D8 = (nlRoundOff((320.0f - ((pfLength(0xC0D0A70)) * 0.5f))));
    pfSize(1.5f, 1.5f);
    *(float *)0xC2A96DC = (nlRoundOff((320.0f - ((pfLength(0xC0D0A88)) * 0.5f))));
}
