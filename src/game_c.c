/* Small game functions (batch c): HUD flag setters and clears, mode words, init sequences, small table reads.
   Globals are addressed directly where the decomp has no name for them yet. */

void gdc_CourseReq(int a, int b, int c);
void hudStepFareRoll(void);
void hudDrawFareDigits(void);
void hudDrawFareFrame(void);
void Init_Adv_Title_LOGO(void);
void Init_Adv_Global_Parm(void);
void Init_Adv_Standard(void);
void Init_Ranking(void);

#define HUD_FLAGS       (*(unsigned int *)0x0C2A75E0)
#define ADV_FLAGS       (*(unsigned short *)0x0C2A992C)

void InitKyakuStopArea(void)
{
    *(int *)0x0C271D28 = -1;
}

void InitHelicopter(void)
{
    *(int *)0x0C27428C = 0;
    *(int *)0x0C274290 = 0;
}

int ReturnBreakPin(int i)
{
    return ((int *)0x0C275824)[i];
}

void ResetBreakBeachFlag(void)
{
    *(int *)0x0C275944 = 0;
}

void End_Pass_Default2_Sprite(void)
{
    HUD_FLAGS &= ~0x40u;
}

void Pass_Angry(void)
{
    *(int *)0x0C2A8F70 = 1;
}

void Start_Time_Bonus(void)
{
    HUD_FLAGS |= 0x100;
    *(int *)0x0C2A8F68 = 0;
}

void End_Time_Bonus(void)
{
    HUD_FLAGS &= ~0x100u;
}

void End_Pass_Judgement2(void)
{
    HUD_FLAGS &= ~0x800u;
}

void End_Pass_Judgement(void)
{
    HUD_FLAGS &= ~0x400u;
}

void End_Pass_Ranking(void)
{
    HUD_FLAGS &= ~0x1000u;
}

void hudDrawFare(void)
{
    if (*(int *)0x0C2A8EB0 >= 8)
        return;
    hudStepFareRoll();
    hudDrawFareDigits();
    hudDrawFareFrame();
}

void Init_Adv_Sprite(void)
{
    Init_Adv_Title_LOGO();
    Init_Adv_Global_Parm();
    Init_Adv_Standard();
    Init_Ranking();
}

void Start_Ranking(void)
{
    *(short *)0x0C2A9228 = 8;
    Init_Ranking();
}

void End_Ranking(void)
{
    *(short *)0x0C2A9228 = 0;
}

void Reset_JumpDistance(void)
{
    *(int *)0x0C1311B8 = 0;
    ADV_FLAGS &= 0xFFFB;
}

void End_Excellent(void)
{
    ADV_FLAGS &= 0xFFEF;
    *(int *)0x0C1EE238 = 2;
}

void Start_PoleMarriageKiss(void)
{
    ADV_FLAGS |= 0x100;
    *(int *)0x0C2A9B90 = 0;
}

void Start_Record_Window(void)
{
    ADV_FLAGS |= 0x40;
    *(int *)0x0C2A9BAC = 640;
    *(int *)0x0C2A9BB0 = 100;
}

void Start_Bowling_Message(void)
{
    *(int *)0x0C2A9960 = 0;
}

void Reset_Bowling_Timer(void)
{
    *(int *)0x0C2A9964 = 0;
}

int Start_Remain_Icon_Flash(void)
{
    *(int *)0x0C2A9928 = *(int *)0x0C2A98EC;
    *(int *)0x0C2A9A38 = 0;
    return 0;
}

/* Requests every course in a list ending at -1. */
void gdc_CourseAdvLoadSub(int *p, int a)
{
    while (*p != -1)
        gdc_CourseReq(*p++, a, 0);
}
