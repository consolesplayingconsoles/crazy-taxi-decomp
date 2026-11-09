/* Straight-line functions with calls and guards (batch gen_dx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetBackColor(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int gdc_PlayStreamSong(int);
int gdc_VolStreamSong(int);
int pfColor(int, int, int, int);
int pfOffsetColor(int, int, int, int);
int pfSetFilterMode(int);
int pfSetFont(int);
int pfSize(float, float);
int gameState14(void);
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int gameState14(void)
{
    int t9;

    Voice_ShutUp(0x0);
    Voice_Request(0xC0EEA08, 0x0, 0x7F, 0x0);
    CarSel_SetBackColor();
    gdc_PlayStreamSong(0x1);
    gdc_VolStreamSong(0x7F);
    (((struct oC_uint *)0xC2864A0)->v) = 0x0;
    (((struct o8_uint *)0xC2864A0)->v) = 0x0;
    (((struct o4_uint *)0xC2864A0)->v) = 0x0;
    (((struct o0_uint *)0xC2864A0)->v) = 0x0;
    (((struct o1C_uint *)0xC2864A0)->v) = 0x0;
    (((struct o18_uint *)0xC2864A0)->v) = 0x0;
    (((struct o14_uint *)0xC2864A0)->v) = 0x0;
    (((struct o10_uint *)0xC2864A0)->v) = 0x0;
    (((struct o20_float *)0xC2864A0)->v) = 0.399999976f;
    (((struct o34_float *)0xC2864A0)->v) = 1.0f;
    (((struct o38_uint *)0xC2864A0)->v) = 0x0;
    (((struct o24_uint *)0xC2864A0)->v) = 0x744;
    (((struct o2C_uint *)0xC2864A0)->v) = 0xC039E58;
    (((struct o33_uchar *)0xC2864A0)->v) = 0x0;
    (((struct o32_uchar *)0xC2864A0)->v) = 0x0;
    (((struct o31_uchar *)0xC2864A0)->v) = 0x0;
    (((struct o30_uchar *)0xC2864A0)->v) = 0x0;
    (((struct o28_uint *)0xC2864A0)->v) = 0x0;
    pfSetFont(0x0);
    pfSetFilterMode(0x1);
    pfSize((1.0f + 1.0f), (1.0f + 1.0f));
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    t9 = pfOffsetColor(0x3F3F3F, 0x3F3F3F, 0x3F3F3F, 0x3F3F3F);
    *(unsigned int *)0xC1EE238 = ((*(int *)0xC1EE238) + 0x1);
    return t9;
}
