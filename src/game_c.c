/* Small game functions (batch c): HUD flag setters and clears, mode words, init sequences, small table reads.
   Globals are addressed directly where the decomp has no name for them yet. */

void gdc_CourseReq(int a, int b, int c);
void FUN_0c055310(void);
void FUN_0c055362(void);
void FUN_0c055688(void);
void FUN_0c057930(void);
void Init_Adv_Global_Parm(void);
void FUN_0c057980(void);
void FUN_0c057aac(void);

#define HUD_FLAGS       (*(unsigned int *)0x0C2A75E0)
#define ADV_FLAGS       (*(unsigned short *)0x0C2A992C)

void FUN_0c0357b0(void)
{
    *(int *)0x0C271D28 = -1;
}

void InitHelicopter(void)
{
    *(int *)0x0C27428C = 0;
    *(int *)0x0C274290 = 0;
}

int FUN_0c038eec(int i)
{
    return ((int *)0x0C275824)[i];
}

void FUN_0c038f78(void)
{
    *(int *)0x0C275944 = 0;
}

void FUN_0c05317e(void)
{
    HUD_FLAGS &= ~0x40u;
}

void FUN_0c05328a(void)
{
    *(int *)0x0C2A8F70 = 1;
}

void FUN_0c053292(void)
{
    HUD_FLAGS |= 0x100;
    *(int *)0x0C2A8F68 = 0;
}

void FUN_0c0532a4(void)
{
    HUD_FLAGS &= ~0x100u;
}

void FUN_0c0532de(void)
{
    HUD_FLAGS &= ~0x800u;
}

void FUN_0c05332c(void)
{
    HUD_FLAGS &= ~0x400u;
}

void FUN_0c0533e6(void)
{
    HUD_FLAGS &= ~0x1000u;
}

void FUN_0c0552b0(void)
{
    if (*(int *)0x0C2A8EB0 >= 8)
        return;
    FUN_0c055310();
    FUN_0c055362();
    FUN_0c055688();
}

void FUN_0c0577dc(void)
{
    FUN_0c057930();
    Init_Adv_Global_Parm();
    FUN_0c057980();
    FUN_0c057aac();
}

void FUN_0c057b5c(void)
{
    *(short *)0x0C2A9228 = 8;
    FUN_0c057aac();
}

void FUN_0c057b64(void)
{
    *(short *)0x0C2A9228 = 0;
}

void FUN_0c05bb12(void)
{
    *(int *)0x0C1311B8 = 0;
    ADV_FLAGS &= 0xFFFB;
}

void FUN_0c05bb64(void)
{
    ADV_FLAGS &= 0xFFEF;
    *(int *)0x0C1EE238 = 2;
}

void FUN_0c05d492(void)
{
    ADV_FLAGS |= 0x100;
    *(int *)0x0C2A9B90 = 0;
}

void FUN_0c05df48(void)
{
    ADV_FLAGS |= 0x40;
    *(int *)0x0C2A9BAC = 640;
    *(int *)0x0C2A9BB0 = 100;
}

void FUN_0c05cdb4(void)
{
    *(int *)0x0C2A9960 = 0;
}

void FUN_0c05ce38(void)
{
    *(int *)0x0C2A9964 = 0;
}

int FUN_0c05d852(void)
{
    *(int *)0x0C2A9928 = *(int *)0x0C2A98EC;
    *(int *)0x0C2A9A38 = 0;
    return 0;
}

/* Requests every course in a list ending at -1. */
void FUN_0c04c0dc(int *p, int a)
{
    while (*p != -1)
        gdc_CourseReq(*p++, a, 0);
}
