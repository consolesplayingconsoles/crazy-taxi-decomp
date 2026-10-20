/* Straight-line store functions (batch gen a): each writes constants, or its arguments, to fixed addresses or to its
   pointer argument; generated from the code and checked by tests. */

int ADXAMP_Stop(int a4);
void ADXPD_SetMode(int a4, int a5);
void ADXSJD_SetInSj(int a4, int a5);
void ADXSJD_SetMaxDecSmpl(int a4, int a5);
void ADXSTM_EntryEosFunc(int a4, int a5, int a6);
int ADXSTM_SetReqRdSize(int a4, int a5);
void FUN_0c03b674(int a4);
void FUN_0c041ce2(int a4);
void FUN_0c04bf1a(int a4);
int FUN_0c051bd6(void);
int FUN_0c051c22(void);
int FUN_0c051caa(void);
int FUN_0c051cea(void);
int FUN_0c052574(void);
int FUN_0c0525b4(void);
int FUN_0c0525fc(void);
int FUN_0c052c9e(void);
int FUN_0c052d28(void);
int FUN_0c057930(void);
int FUN_0c057980(void);
int FUN_0c0591ea(void);
int FUN_0c05b7a8(void);
int FUN_0c072fe8(void);
int FUN_0c074ca0(int a4);
void FUN_0c167c24(int a4, int a5);
void FUN_0c1687f6(int a4, int a5);
void FUN_0c168812(int a4, int a5);
int FUN_0c16881a(int a4, int a5);
int FUN_0c168826(int a4, int a5);
int Init_Standard(void);
void SJMEM_EntryErrFunc(int a4, int a5, int a6);
void SJRBF_EntryErrFunc(int a4, int a5, int a6);
void SJUNI_EntryErrFunc(int a4, int a5, int a6);
void kdSetGunCallback(int a4);
int kmRenderDirect(void);

int ADXAMP_Stop(int a4)
{
    *(unsigned char *)((a4 + 0x1)) = 0x0;
    return 0x0;
}

void ADXPD_SetMode(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXSJD_SetInSj(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x8)) = a5;
}

void ADXSJD_SetMaxDecSmpl(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
}

void ADXSTM_EntryEosFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x38)) = a5;
    *(unsigned int *)((a4 + 0x3C)) = a6;
}

int ADXSTM_SetReqRdSize(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x2C)) = a5;
    return 0x1;
}

void FUN_0c03b674(int a4)
{
    *(unsigned int *)0xC2A1218 = a4;
}

void FUN_0c041ce2(int a4)
{
    *(unsigned int *)0xC2A11D8 = a4;
}

void FUN_0c04bf1a(int a4)
{
    *(unsigned int *)0xC0F2B38 = a4;
}

int FUN_0c051bd6(void)
{
    float u0;
    float u1;
    float u2;

    *(unsigned int *)0xC2A7370 = 0x62;
    u0 = *(float *)0xC051DF8;
    *(float *)0xC2A737C = u0;
    *(float *)0xC2A7374 = 0.0f;
    *(float *)0xC2A7378 = 0.0f;
    u1 = *(float *)0xC051DFC;
    *(float *)0xC2A7380 = u1;
    u2 = *(float *)0xC051E00;
    *(float *)0xC2A7384 = u2;
    *(float *)0xC2A7388 = 0.0f;
    *(float *)0xC2A738C = 0.0f;
    *(float *)0xC2A7390 = 1.0f;
    *(float *)0xC2A7394 = 1.0f;
    *(unsigned int *)0xC2A7398 = 0x0;
    *(unsigned int *)0xC2A73A4 = 0x5;
    *(float *)0xC2A739C = 1.0f;
    *(unsigned int *)0xC2A73A0 = 0x2;
    return 0x2C;
}

int FUN_0c051c22(void)
{
    float u0;
    float u1;

    u0 = *(float *)0xC051E08;
    *(float *)0xC2A73C8 = u0;
    u1 = *(float *)0xC051E0C;
    *(float *)0xC2A73CC = u1;
    *(float *)0xC2A73D0 = 1.0f;
    *(float *)0xC2A73D4 = 1.0f;
    *(float *)0xC2A73D8 = 0.0f;
    *(float *)0xC2A73DC = 0.0f;
    *(float *)0xC2A73E0 = 1.0f;
    *(float *)0xC2A73E4 = 1.0f;
    *(unsigned int *)0xC2A73E8 = 0x0;
    *(unsigned int *)0xC2A73F4 = 0xA;
    *(float *)0xC2A73EC = 1.0f;
    *(unsigned int *)0xC2A73F0 = 0x2;
    return 0x2C;
}

int FUN_0c051caa(void)
{
    float u0;

    *(float *)0xC2A7464 = 0.0f;
    *(float *)0xC2A7468 = 0.0f;
    u0 = *(float *)0xC051E1C;
    *(float *)0xC2A746C = u0;
    *(float *)0xC2A7470 = 1.0f;
    *(float *)0xC2A7474 = 1.0f;
    *(float *)0xC2A7478 = 0.0f;
    *(float *)0xC2A747C = 0.0f;
    *(float *)0xC2A7480 = 1.0f;
    *(float *)0xC2A7484 = 1.0f;
    *(unsigned int *)0xC2A7488 = 0x0;
    *(unsigned int *)0xC2A7494 = 0xA;
    *(float *)0xC2A748C = 1.0f;
    *(unsigned int *)0xC2A7490 = 0x2;
    return 0x2C;
}

int FUN_0c051cea(void)
{
    float u0;

    u0 = *(float *)0xC051E24;
    *(float *)0xC2A74BC = u0;
    *(float *)0xC2A74C0 = 1.0f;
    *(float *)0xC2A74C4 = 1.0f;
    *(float *)0xC2A74C8 = 0.0f;
    *(float *)0xC2A74CC = 0.0f;
    *(float *)0xC2A74D0 = 1.0f;
    *(float *)0xC2A74D4 = 1.0f;
    *(unsigned int *)0xC2A74D8 = 0x0;
    *(unsigned int *)0xC2A74E4 = 0xA;
    *(float *)0xC2A74DC = 1.0f;
    *(unsigned int *)0xC2A74E0 = 0x2;
    return 0x2C;
}

int FUN_0c052574(void)
{
    float u0;

    *(float *)0xC2A7F30 = 0.0f;
    *(float *)0xC2A7F34 = 0.0f;
    u0 = *(float *)0xC05266C;
    *(float *)0xC2A7F38 = u0;
    *(float *)0xC2A7F3C = 1.0f;
    *(float *)0xC2A7F40 = 1.0f;
    *(float *)0xC2A7F44 = 0.0f;
    *(float *)0xC2A7F48 = 0.0f;
    *(float *)0xC2A7F4C = 1.0f;
    *(float *)0xC2A7F50 = 1.0f;
    *(unsigned int *)0xC2A7F54 = 0x0;
    *(unsigned int *)0xC2A7F60 = 0xA;
    *(float *)0xC2A7F58 = 1.0f;
    *(unsigned int *)0xC2A7F5C = 0x2;
    return 0x2C;
}

int FUN_0c0525b4(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC052664;
    *(float *)0xC2A88E0 = u0;
    u1 = *(float *)0xC052668;
    *(float *)0xC2A88E4 = u1;
    u2 = *(float *)0xC05266C;
    *(float *)0xC2A88E8 = u2;
    *(float *)0xC2A88EC = 1.0f;
    *(float *)0xC2A88F0 = 1.0f;
    *(float *)0xC2A88F4 = 0.0f;
    *(float *)0xC2A88F8 = 0.0f;
    *(float *)0xC2A88FC = 1.0f;
    *(float *)0xC2A8900 = 1.0f;
    *(unsigned int *)0xC2A8904 = 0x0;
    *(unsigned int *)0xC2A8910 = 0x200A;
    *(float *)0xC2A8908 = 1.0f;
    *(unsigned int *)0xC2A890C = 0x2;
    return 0x2C;
}

int FUN_0c0525fc(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)0xC052678;
    *(float *)0xC2A8C8C = u0;
    *(unsigned int *)0xC2A8C90 = 0x0;
    *(unsigned int *)0xC2A8CB4 = 0x0;
    *(unsigned int *)0xC2A8CB8 = 0x0;
    u1 = *(float *)0xC052690;
    *(float *)0xC2A7F80 = u1;
    u2 = *(float *)0xC052694;
    *(float *)0xC2A7F84 = u2;
    u3 = *(float *)0xC052698;
    *(float *)0xC2A7F88 = u3;
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(float *)0xC2A7F94 = 0.0f;
    *(float *)0xC2A7F98 = 0.0f;
    *(float *)0xC2A7F9C = 1.0f;
    *(float *)0xC2A7FA0 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    *(unsigned int *)0xC2A7FB0 = 0x200A;
    *(float *)0xC2A7FA8 = 1.0f;
    *(unsigned int *)0xC2A7FAC = 0x2;
    *(unsigned int *)0xC2A8CAC = 0x0;
    return 0xC2A8CAC;
}

int FUN_0c052c9e(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC052D10;
    *(float *)0xC2A8930 = u0;
    u1 = *(float *)0xC052D14;
    *(float *)0xC2A8934 = u1;
    u2 = *(float *)0xC052D18;
    *(float *)0xC2A8938 = u2;
    *(float *)0xC2A893C = 1.0f;
    *(float *)0xC2A8940 = 1.0f;
    *(float *)0xC2A8944 = 0.0f;
    *(float *)0xC2A8948 = 0.0f;
    *(float *)0xC2A894C = 1.0f;
    *(float *)0xC2A8950 = 1.0f;
    *(unsigned int *)0xC2A8954 = 0x0;
    *(unsigned int *)0xC2A8960 = 0xA;
    *(float *)0xC2A8958 = 1.0f;
    *(unsigned int *)0xC2A895C = 0x2;
    *(unsigned int *)0xC2A8DE8 = 0x0;
    *(float *)0xC2A8DEC = 0.0f;
    *(unsigned short *)0xC2A8DF0 = 0x0;
    return 0x2C;
}

int FUN_0c052d28(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC052DF0;
    *(float *)0xC2A8980 = u0;
    u1 = *(float *)0xC052DF4;
    *(float *)0xC2A8984 = u1;
    u2 = *(float *)0xC052DF8;
    *(float *)0xC2A8988 = u2;
    *(float *)0xC2A898C = 1.0f;
    *(float *)0xC2A8990 = 1.0f;
    *(float *)0xC2A8994 = 0.0f;
    *(float *)0xC2A8998 = 0.0f;
    *(float *)0xC2A899C = 1.0f;
    *(float *)0xC2A89A0 = 1.0f;
    *(unsigned int *)0xC2A89A4 = 0x0;
    *(unsigned int *)0xC2A89B0 = 0x200A;
    *(unsigned int *)0xC2A89AC = 0x2;
    *(unsigned int *)0xC2A8FC0 = 0xFFFFFE20;
    *(unsigned int *)0xC2A8FC4 = 0x0;
    *(float *)0xC2A89A8 = 1.0f;
    *(unsigned int *)0xC2A8FC8 = 0x0;
    return 0x2C;
}

int FUN_0c057930(void)
{
    float u0;

    *(float *)0xC2A9230 = 0.0f;
    *(float *)0xC2A9234 = 0.0f;
    u0 = *(float *)0xC057A4C;
    *(float *)0xC2A9238 = u0;
    *(float *)0xC2A923C = 1.0f;
    *(float *)0xC2A9240 = 1.0f;
    *(float *)0xC2A9244 = 0.0f;
    *(float *)0xC2A9248 = 0.0f;
    *(float *)0xC2A924C = 1.0f;
    *(float *)0xC2A9250 = 1.0f;
    *(unsigned int *)0xC2A9254 = 0x0;
    *(unsigned int *)0xC2A9260 = 0xA;
    *(float *)0xC2A9258 = 1.0f;
    *(unsigned int *)0xC2A925C = 0x2;
    *(unsigned int *)0xC2A9320 = 0x280;
    *(unsigned int *)0xC2A9324 = 0x0;
    *(unsigned int *)0xC2A9328 = 0xFFFFFFFF;
    return 0xC2A9328;
}

int FUN_0c057980(void)
{
    float u0;

    *(float *)0xC2A92D0 = 0.0f;
    *(float *)0xC2A92D4 = 0.0f;
    u0 = *(float *)0xC057A60;
    *(float *)0xC2A92D8 = u0;
    *(float *)0xC2A92DC = 1.0f;
    *(float *)0xC2A92E0 = 1.0f;
    *(float *)0xC2A92E4 = 0.0f;
    *(float *)0xC2A92E8 = 0.0f;
    *(float *)0xC2A92EC = 1.0f;
    *(float *)0xC2A92F0 = 1.0f;
    *(unsigned int *)0xC2A92F4 = 0x0;
    *(unsigned int *)0xC2A9300 = 0xA;
    *(float *)0xC2A92F8 = 1.0f;
    *(unsigned int *)0xC2A92FC = 0x2;
    return 0x2C;
}

int FUN_0c0591ea(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC059248;
    *(float *)0xC2A96FC = u0;
    u1 = *(float *)0xC05924C;
    *(float *)0xC2A9700 = u1;
    u2 = *(float *)0xC059250;
    *(float *)0xC2A9704 = u2;
    *(float *)0xC2A9708 = 1.0f;
    *(float *)0xC2A970C = 1.0f;
    *(float *)0xC2A9710 = 0.0f;
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A9718 = 1.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    *(unsigned int *)0xC2A972C = 0xA;
    *(float *)0xC2A9724 = 1.0f;
    *(unsigned int *)0xC2A9728 = 0x2;
    return 0x2C;
}

int FUN_0c05b7a8(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC05B8E4;
    *(float *)0xC2A989C = u0;
    u1 = *(float *)0xC05B8E8;
    *(float *)0xC2A98A0 = u1;
    u2 = *(float *)0xC05B8EC;
    *(float *)0xC2A98A4 = u2;
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    *(float *)0xC2A98B0 = 0.0f;
    *(float *)0xC2A98B4 = 0.0f;
    *(float *)0xC2A98B8 = 1.0f;
    *(float *)0xC2A98BC = 1.0f;
    *(unsigned int *)0xC2A98C0 = 0x0;
    *(unsigned int *)0xC2A98CC = 0x200A;
    *(float *)0xC2A98C4 = 1.0f;
    *(unsigned int *)0xC2A98C8 = 0x2;
    return 0x2C;
}

int FUN_0c072fe8(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)0xC073140;
    *(float *)0xC2AEC20 = u0;
    u1 = *(float *)0xC073144;
    *(float *)0xC2AEC24 = u1;
    u2 = *(float *)0xC073148;
    *(float *)0xC2AEC28 = u2;
    *(unsigned int *)0xC2AEC34 = 0x0;
    *(unsigned int *)0xC2AEC30 = 0x0;
    *(unsigned int *)0xC2AEC2C = 0x0;
    *(unsigned int *)0xC2AEC3C = 0x0;
    *(float *)0xC2AEC48 = 0.0f;
    *(float *)0xC2AEC44 = 0.0f;
    *(float *)0xC2AEC40 = 0.0f;
    *(unsigned int *)0xC2AEC54 = 0x0;
    *(unsigned int *)0xC2AEC50 = 0x0;
    *(unsigned int *)0xC2AEC4C = 0x0;
    *(float *)0xC2AEC58 = 0.0f;
    u3 = *(float *)0xC07314C;
    *(float *)0xC2AEC5C = u3;
    *(unsigned int *)0xC2AEC68 = 0x0;
    *(unsigned int *)0xC2AEC64 = 0x0;
    *(unsigned int *)0xC2AEC60 = 0x0;
    *(unsigned int *)0xC2AEC74 = 0x0;
    *(unsigned int *)0xC2AEC70 = 0x0;
    *(unsigned int *)0xC2AEC6C = 0x0;
    *(unsigned int *)0xC2AEC80 = 0x0;
    *(unsigned int *)0xC2AEC7C = 0x0;
    *(unsigned int *)0xC2AEC78 = 0x0;
    return 0x58;
}

int FUN_0c074ca0(int a4)
{
    float u0;
    float u1;
    float u2;

    *(unsigned int *)0xC2AECD0 = 0x60;
    *(unsigned int *)0xC2AECD4 = 0x0;
    *(unsigned int *)0xC2AED30 = 0xC2AED44;
    *(unsigned int *)0xC2AED34 = 0xC2AED6C;
    *(unsigned int *)0xC2AECD8 = 0xC2AED30;
    *(unsigned int *)0xC2AECDC = 0x2;
    *(unsigned int *)0xC2AECE0 = 0x280;
    *(unsigned int *)0xC2AECE4 = 0x0;
    *(unsigned int *)0xC2AECE8 = 0x0;
    *(unsigned int *)0xC2AECEC = a4;
    *(unsigned int *)0xC2AECF0 = 0xC2AF368;
    *(unsigned int *)0xC2AECF4 = 0xACC00000;
    *(unsigned int *)0xC2AECF8 = 0x100000;
    u0 = *(float *)0xC074DB4;
    *(float *)0xC2AECFC = u0;
    u1 = *(float *)0xC074DB8;
    *(float *)0xC2AED00 = u1;
    u2 = *(float *)0xC074DBC;
    *(float *)0xC2AED04 = u2;
    *(float *)0xC2AED08 = 0.0f;
    *(float *)0xC2AED0C = 0.0f;
    *(unsigned int *)0xC2AED2C = 0x0;
    *(unsigned int *)0xC2AED38 = 0x3;
    *(unsigned int *)0xC2AED3C = 0x0;
    return 0x5C;
}

void FUN_0c167c24(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x20)) = a5;
}

void FUN_0c1687f6(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x34)) = a5;
}

void FUN_0c168812(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x3C)) = a5;
}

int FUN_0c16881a(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x40)) = a5;
    return 0x40;
}

int FUN_0c168826(int a4, int a5)
{
    *(unsigned int *)((a4 + 0x44)) = a5;
    return 0x44;
}

int Init_Standard(void)
{
    float u0;
    float u1;
    float u2;

    u0 = *(float *)0xC052664;
    *(float *)0xC2A7EE0 = u0;
    u1 = *(float *)0xC052668;
    *(float *)0xC2A7EE4 = u1;
    u2 = *(float *)0xC05266C;
    *(float *)0xC2A7EE8 = u2;
    *(float *)0xC2A7EEC = 1.0f;
    *(float *)0xC2A7EF0 = 1.0f;
    *(float *)0xC2A7EFC = 1.0f;
    *(float *)0xC2A7F00 = 1.0f;
    *(float *)0xC2A7F08 = 1.0f;
    *(float *)0xC2A7EF4 = 0.0f;
    *(float *)0xC2A7EF8 = 0.0f;
    *(unsigned int *)0xC2A7F04 = 0x0;
    *(unsigned int *)0xC2A7F10 = 0xA;
    *(unsigned int *)0xC2A7F0C = 0x2;
    return 0x1C;
}

void SJMEM_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x1C)) = a5;
    *(unsigned int *)((a4 + 0x20)) = a6;
}

void SJRBF_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void SJUNI_EntryErrFunc(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x28)) = a5;
    *(unsigned int *)((a4 + 0x2C)) = a6;
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0xC2EC290 = a4;
}

int kmRenderDirect(void)
{
    *(unsigned int *)0xC2EA9F4 = 0x1;
    *(unsigned int *)0xC2EA9FC = 0x0;
    *(unsigned int *)0xC178278 = 0x1;
    return 0xC178278;
}

