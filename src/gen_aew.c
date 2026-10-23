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
    *(unsigned int *)0xC1798A8 = 0x7;
    *(float *)0xC1798A4 = 60.0f;
    *(unsigned int *)0xC179860 = 0x0;
    *(unsigned int *)0xC0E4A14 = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC179840) = *(struct mv3 *)((((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x78)); }
    *(unsigned char *)0xC179858 = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x0)));
    *(unsigned char *)0xC179859 = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x1)));
    *(unsigned char *)0xC17985A = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x2)));
    *(unsigned char *)0xC17985B = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x3)));
    *(unsigned char *)0xC17985C = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x4)));
    *(unsigned char *)0xC17985D = (*(signed char *)(((0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC)) + 0x5)));
    *(unsigned char *)0xC1798AC = (*(signed char *)0xC08ADAC);
    *(unsigned char *)0xC1798AD = (*(signed char *)0xC08ADAD);
    *(unsigned char *)0xC1798AE = (*(signed char *)0xC08ADAE);
    *(unsigned char *)0xC1798AF = (*(signed char *)0xC08ADAF);
    *(unsigned char *)0xC1798B0 = (*(signed char *)0xC08ADB0);
    *(unsigned char *)0xC1798B1 = (*(signed char *)0xC08ADB1);
    *(float *)0xC1798B4 = 0.0f;
    *(float *)0xC179958 = 0.0f;
    *(unsigned short *)0xC17995C = (*(short *)((((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x86)));
    *(unsigned int *)0xC179960 = 0x0;
    *(unsigned int *)0xC179964 = 0x0;
    *(float *)0xC0E49F4 = 1.33333325f;
    *(unsigned int *)0xC1798B8 = 0x1;
    *(float *)0xC0E4A04 = 60.0f;
    *(unsigned int *)0xC0E49F8 = (((short)((short)R4 * (short)0x3BC) + 0xC1790CC) + 0x78);
    *(unsigned int *)0xC0E49FC = (0x84 + ((short)((short)R4 * (short)0x3BC) + 0xC1790CC));
    *(unsigned int *)0xC0E4A00 = 0x0;
    *(float *)0xC1798BC = 0.0f;
    *(float *)0xC1798C0 = 5.0f;
    *(float *)0xC1798C4 = 0.0f;
    *(unsigned short *)0xC1798C8 = 0x0;
    *(unsigned short *)0xC1798CA = 0x0;
    *(unsigned short *)0xC1798CC = 0x0;
    camSnapToCar(R4);
    InitHomingVector(0xC1798D0, 0xC0965F0);
    nlPushUnitMatrix();
    nlTranslateV(0xC179840);
    nlRotateAY((unsigned short)(*(short *)0xC17985A));
    nlRotateAX((unsigned short)(*(short *)0xC179858));
    nlRotateAZ((unsigned short)(*(short *)0xC17985C));
    nlCalcPoint(((int)stk + 4), 0xC1798D0);
    nlInvertMatrix(0x0);
    nlGetMatrix(0xC179864);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1798E8) = *(struct mv3 *)(0xC1798D0); }
}
