/* Straight-line functions with calls and guards (batch gen_aew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitHomingVector(int, int);
int camSnapToCar(int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslateV(int);
void initCamera(int a4, int a5, float f4, float f5);
struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };


void initCamera(int a4, int a5, float f4, float f5)
{
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R13;
    int R14;
    float F3;
    float F4;
    float F5;
    int T_;
    R4 = a4;
    R5 = a5;
    F4 = f4;
    F5 = f5;
    L_C026744:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0xC08AA58); }
    (((struct o4_uint *)0xC1798A4)->v) = 0x7;
    (((struct o0_float *)0xC1798A4)->v) = 60.0f;
    (((struct o8_uint *)0xC179858)->v) = 0x0;
    (((struct o20_uint *)0xC0E49F4)->v) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)((((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x78)); }
    (((struct o0_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x0)));
    (((struct o1_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x1)));
    (((struct o2_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x2)));
    (((struct o3_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x3)));
    (((struct o4_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x4)));
    (((struct o5_uchar *)0xC179858)->v) = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x5)));
    (((struct o8_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADAC);
    (((struct o9_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADAD);
    (((struct oA_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADAE);
    (((struct oB_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADAF);
    (((struct oC_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADB0);
    (((struct oD_uchar *)0xC1798A4)->v) = (*(signed char *)0xC08ADB1);
    (((struct o10_float *)0xC1798A4)->v) = 0.0f;
    (((struct o0_float *)0xC179958)->v) = 0.0f;
    (((struct o4_ushort *)0xC179958)->v) = (*(short *)((((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x86)));
    (((struct o8_uint *)0xC179958)->v) = 0x0;
    (((struct oC_uint *)0xC179958)->v) = 0x0;
    (((struct o0_float *)0xC0E49F4)->v) = 1.33333325f;
    (((struct o14_uint *)0xC1798A4)->v) = 0x1;
    (((struct o10_float *)0xC0E49F4)->v) = 60.0f;
    (((struct o4_uint *)0xC0E49F4)->v) = (((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x78);
    (((struct o8_uint *)0xC0E49F4)->v) = (0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC));
    (((struct oC_uint *)0xC0E49F4)->v) = 0x0;
    (((struct o18_float *)0xC1798A4)->v) = 0.0f;
    (((struct o1C_float *)0xC1798A4)->v) = 5.0f;
    (((struct o20_float *)0xC1798A4)->v) = 0.0f;
    (((struct o24_ushort *)0xC1798A4)->v) = 0x0;
    (((struct o26_ushort *)0xC1798A4)->v) = 0x0;
    (((struct o28_ushort *)0xC1798A4)->v) = 0x0;
    camSnapToCar(R4);
    InitHomingVector(0xC1798D0, 0xC0965F0);
    nlPushUnitMatrix();
    nlTranslateV(0xC179840);
    nlRotateAY((unsigned short)((((struct o2_short *)0xC179858)->v)));
    nlRotateAX((unsigned short)((((struct o0_short *)0xC179858)->v)));
    nlRotateAZ((unsigned short)((((struct o4_short *)0xC179858)->v)));
    nlCalcPoint(((int)stk + 4), 0xC1798D0);
    nlInvertMatrix(0x0);
    nlGetMatrix(0xC179864);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798E8) = *(struct mv3 *)(0xC1798D0); }
}
