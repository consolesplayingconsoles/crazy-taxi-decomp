/* Straight-line store functions (batch gen a): each writes constants, or its arguments, to fixed addresses or to its
   pointer argument; generated from the code and checked by tests. */

void ADXAMP_Stop(char *a4)
{
    *(unsigned char *)(a4 + 1) = 0x0;
}

void ADXPD_SetMode(char *a4, int a5)
{
    *(unsigned int *)(a4 + 8) = a5;
}

void ADXSJD_SetInSj(char *a4, int a5)
{
    *(unsigned int *)(a4 + 8) = a5;
}

void ADXSJD_SetMaxDecSmpl(char *a4, int a5)
{
    *(unsigned int *)(a4 + 56) = a5;
}

void ADXSTM_EntryEosFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 56) = a5;
    *(unsigned int *)(a4 + 60) = a6;
}

void ADXSTM_SetReqRdSize(char *a4, int a5)
{
    *(unsigned int *)(a4 + 44) = a5;
}

void FUN_0c03b674(int a4)
{
    *(unsigned int *)0x0C2A1218 = a4;
}

void FUN_0c041ce2(int a4)
{
    *(unsigned int *)0x0C2A11D8 = a4;
}

void FUN_0c04bf1a(int a4)
{
    *(unsigned int *)0x0C0F2B38 = a4;
}

void FUN_0c051bd6(void)
{
    *(unsigned int *)0x0C2A7370 = 0x62;
    *(unsigned int *)0x0C2A737C = 0x43FA8000;
    *(unsigned int *)0x0C2A7374 = 0x0;
    *(unsigned int *)0x0C2A7378 = 0x0;
    *(unsigned int *)0x0C2A7380 = 0x42200000;
    *(unsigned int *)0x0C2A7384 = 0x41080000;
    *(unsigned int *)0x0C2A7388 = 0x0;
    *(unsigned int *)0x0C2A738C = 0x0;
    *(unsigned int *)0x0C2A7390 = 0x3F800000;
    *(unsigned int *)0x0C2A7394 = 0x3F800000;
    *(unsigned int *)0x0C2A7398 = 0x0;
    *(unsigned int *)0x0C2A73A4 = 0x5;
    *(unsigned int *)0x0C2A739C = 0x3F800000;
    *(unsigned int *)0x0C2A73A0 = 0x2;
}

void FUN_0c051c22(void)
{
    *(unsigned int *)0x0C2A73C8 = 0x42900000;
    *(unsigned int *)0x0C2A73CC = 0x43FA7333;
    *(unsigned int *)0x0C2A73D0 = 0x3F800000;
    *(unsigned int *)0x0C2A73D4 = 0x3F800000;
    *(unsigned int *)0x0C2A73D8 = 0x0;
    *(unsigned int *)0x0C2A73DC = 0x0;
    *(unsigned int *)0x0C2A73E0 = 0x3F800000;
    *(unsigned int *)0x0C2A73E4 = 0x3F800000;
    *(unsigned int *)0x0C2A73E8 = 0x0;
    *(unsigned int *)0x0C2A73F4 = 0xA;
    *(unsigned int *)0x0C2A73EC = 0x3F800000;
    *(unsigned int *)0x0C2A73F0 = 0x2;
}

void FUN_0c051caa(void)
{
    *(unsigned int *)0x0C2A7464 = 0x0;
    *(unsigned int *)0x0C2A7468 = 0x0;
    *(unsigned int *)0x0C2A746C = 0x43FA0000;
    *(unsigned int *)0x0C2A7470 = 0x3F800000;
    *(unsigned int *)0x0C2A7474 = 0x3F800000;
    *(unsigned int *)0x0C2A7478 = 0x0;
    *(unsigned int *)0x0C2A747C = 0x0;
    *(unsigned int *)0x0C2A7480 = 0x3F800000;
    *(unsigned int *)0x0C2A7484 = 0x3F800000;
    *(unsigned int *)0x0C2A7488 = 0x0;
    *(unsigned int *)0x0C2A7494 = 0xA;
    *(unsigned int *)0x0C2A748C = 0x3F800000;
    *(unsigned int *)0x0C2A7490 = 0x2;
}

void FUN_0c051cea(void)
{
    *(unsigned int *)0x0C2A74BC = 0x43F9C000;
    *(unsigned int *)0x0C2A74C0 = 0x3F800000;
    *(unsigned int *)0x0C2A74C4 = 0x3F800000;
    *(unsigned int *)0x0C2A74C8 = 0x0;
    *(unsigned int *)0x0C2A74CC = 0x0;
    *(unsigned int *)0x0C2A74D0 = 0x3F800000;
    *(unsigned int *)0x0C2A74D4 = 0x3F800000;
    *(unsigned int *)0x0C2A74D8 = 0x0;
    *(unsigned int *)0x0C2A74E4 = 0xA;
    *(unsigned int *)0x0C2A74DC = 0x3F800000;
    *(unsigned int *)0x0C2A74E0 = 0x2;
}

void FUN_0c052574(void)
{
    *(unsigned int *)0x0C2A7F30 = 0x0;
    *(unsigned int *)0x0C2A7F34 = 0x0;
    *(unsigned int *)0x0C2A7F38 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A7F3C = 0x3F800000;
    *(unsigned int *)0x0C2A7F40 = 0x3F800000;
    *(unsigned int *)0x0C2A7F44 = 0x0;
    *(unsigned int *)0x0C2A7F48 = 0x0;
    *(unsigned int *)0x0C2A7F4C = 0x3F800000;
    *(unsigned int *)0x0C2A7F50 = 0x3F800000;
    *(unsigned int *)0x0C2A7F54 = 0x0;
    *(unsigned int *)0x0C2A7F60 = 0xA;
    *(unsigned int *)0x0C2A7F58 = 0x3F800000;
    *(unsigned int *)0x0C2A7F5C = 0x2;
}

void FUN_0c0525b4(void)
{
    *(unsigned int *)0x0C2A88E0 = 0x43A00000;
    *(unsigned int *)0x0C2A88E4 = 0x43700000;
    *(unsigned int *)0x0C2A88E8 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A88EC = 0x3F800000;
    *(unsigned int *)0x0C2A88F0 = 0x3F800000;
    *(unsigned int *)0x0C2A88F4 = 0x0;
    *(unsigned int *)0x0C2A88F8 = 0x0;
    *(unsigned int *)0x0C2A88FC = 0x3F800000;
    *(unsigned int *)0x0C2A8900 = 0x3F800000;
    *(unsigned int *)0x0C2A8904 = 0x0;
    *(unsigned int *)0x0C2A8910 = 0x200A;
    *(unsigned int *)0x0C2A8908 = 0x3F800000;
    *(unsigned int *)0x0C2A890C = 0x2;
}

void FUN_0c0525fc(void)
{
    *(unsigned int *)0x0C2A8C8C = 0xC0000000;
    *(unsigned int *)0x0C2A8C90 = 0x0;
    *(unsigned int *)0x0C2A8CB4 = 0x0;
    *(unsigned int *)0x0C2A8CB8 = 0x0;
    *(unsigned int *)0x0C2A7F80 = 0x42000000;
    *(unsigned int *)0x0C2A7F84 = 0x42A80000;
    *(unsigned int *)0x0C2A7F88 = 0x3D4CCCCC;
    *(unsigned int *)0x0C2A7F8C = 0x3F800000;
    *(unsigned int *)0x0C2A7F90 = 0x3F800000;
    *(unsigned int *)0x0C2A7F94 = 0x0;
    *(unsigned int *)0x0C2A7F98 = 0x0;
    *(unsigned int *)0x0C2A7F9C = 0x3F800000;
    *(unsigned int *)0x0C2A7FA0 = 0x3F800000;
    *(unsigned int *)0x0C2A7FA4 = 0x0;
    *(unsigned int *)0x0C2A7FB0 = 0x200A;
    *(unsigned int *)0x0C2A7FA8 = 0x3F800000;
    *(unsigned int *)0x0C2A7FAC = 0x2;
    *(unsigned int *)0x0C2A8CAC = 0x0;
}

void FUN_0c052c9e(void)
{
    *(unsigned int *)0x0C2A8930 = 0x44118000;
    *(unsigned int *)0x0C2A8934 = 0x43D20000;
    *(unsigned int *)0x0C2A8938 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A893C = 0x3F800000;
    *(unsigned int *)0x0C2A8940 = 0x3F800000;
    *(unsigned int *)0x0C2A8944 = 0x0;
    *(unsigned int *)0x0C2A8948 = 0x0;
    *(unsigned int *)0x0C2A894C = 0x3F800000;
    *(unsigned int *)0x0C2A8950 = 0x3F800000;
    *(unsigned int *)0x0C2A8954 = 0x0;
    *(unsigned int *)0x0C2A8960 = 0xA;
    *(unsigned int *)0x0C2A8958 = 0x3F800000;
    *(unsigned int *)0x0C2A895C = 0x2;
    *(unsigned int *)0x0C2A8DE8 = 0x0;
    *(unsigned int *)0x0C2A8DEC = 0x0;
    *(unsigned short *)0x0C2A8DF0 = 0x0;
}

void FUN_0c052d28(void)
{
    *(unsigned int *)0x0C2A8980 = 0x43A00000;
    *(unsigned int *)0x0C2A8984 = 0x43700000;
    *(unsigned int *)0x0C2A8988 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A898C = 0x3F800000;
    *(unsigned int *)0x0C2A8990 = 0x3F800000;
    *(unsigned int *)0x0C2A8994 = 0x0;
    *(unsigned int *)0x0C2A8998 = 0x0;
    *(unsigned int *)0x0C2A899C = 0x3F800000;
    *(unsigned int *)0x0C2A89A0 = 0x3F800000;
    *(unsigned int *)0x0C2A89A4 = 0x0;
    *(unsigned int *)0x0C2A89B0 = 0x200A;
    *(unsigned int *)0x0C2A89AC = 0x2;
    *(unsigned int *)0x0C2A8FC0 = 0xFFFFFE20;
    *(unsigned int *)0x0C2A8FC4 = 0x0;
    *(unsigned int *)0x0C2A89A8 = 0x3F800000;
    *(unsigned int *)0x0C2A8FC8 = 0x0;
}

void FUN_0c057930(void)
{
    *(unsigned int *)0x0C2A9230 = 0x0;
    *(unsigned int *)0x0C2A9234 = 0x0;
    *(unsigned int *)0x0C2A9238 = 0x43FA0000;
    *(unsigned int *)0x0C2A923C = 0x3F800000;
    *(unsigned int *)0x0C2A9240 = 0x3F800000;
    *(unsigned int *)0x0C2A9244 = 0x0;
    *(unsigned int *)0x0C2A9248 = 0x0;
    *(unsigned int *)0x0C2A924C = 0x3F800000;
    *(unsigned int *)0x0C2A9250 = 0x3F800000;
    *(unsigned int *)0x0C2A9254 = 0x0;
    *(unsigned int *)0x0C2A9260 = 0xA;
    *(unsigned int *)0x0C2A9258 = 0x3F800000;
    *(unsigned int *)0x0C2A925C = 0x2;
    *(unsigned int *)0x0C2A9320 = 0x280;
    *(unsigned int *)0x0C2A9324 = 0x0;
    *(unsigned int *)0x0C2A9328 = 0xFFFFFFFF;
}

void FUN_0c057980(void)
{
    *(unsigned int *)0x0C2A92D0 = 0x0;
    *(unsigned int *)0x0C2A92D4 = 0x0;
    *(unsigned int *)0x0C2A92D8 = 0x3E199999;
    *(unsigned int *)0x0C2A92DC = 0x3F800000;
    *(unsigned int *)0x0C2A92E0 = 0x3F800000;
    *(unsigned int *)0x0C2A92E4 = 0x0;
    *(unsigned int *)0x0C2A92E8 = 0x0;
    *(unsigned int *)0x0C2A92EC = 0x3F800000;
    *(unsigned int *)0x0C2A92F0 = 0x3F800000;
    *(unsigned int *)0x0C2A92F4 = 0x0;
    *(unsigned int *)0x0C2A9300 = 0xA;
    *(unsigned int *)0x0C2A92F8 = 0x3F800000;
    *(unsigned int *)0x0C2A92FC = 0x2;
}

void FUN_0c0591ea(void)
{
    *(unsigned int *)0x0C2A96FC = 0x43A00000;
    *(unsigned int *)0x0C2A9700 = 0x43700000;
    *(unsigned int *)0x0C2A9704 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A9708 = 0x3F800000;
    *(unsigned int *)0x0C2A970C = 0x3F800000;
    *(unsigned int *)0x0C2A9710 = 0x0;
    *(unsigned int *)0x0C2A9714 = 0x0;
    *(unsigned int *)0x0C2A9718 = 0x3F800000;
    *(unsigned int *)0x0C2A971C = 0x3F800000;
    *(unsigned int *)0x0C2A9720 = 0x0;
    *(unsigned int *)0x0C2A972C = 0xA;
    *(unsigned int *)0x0C2A9724 = 0x3F800000;
    *(unsigned int *)0x0C2A9728 = 0x2;
}

void FUN_0c05b7a8(void)
{
    *(unsigned int *)0x0C2A989C = 0x43A00000;
    *(unsigned int *)0x0C2A98A0 = 0x43700000;
    *(unsigned int *)0x0C2A98A4 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A98A8 = 0x3F800000;
    *(unsigned int *)0x0C2A98AC = 0x3F800000;
    *(unsigned int *)0x0C2A98B0 = 0x0;
    *(unsigned int *)0x0C2A98B4 = 0x0;
    *(unsigned int *)0x0C2A98B8 = 0x3F800000;
    *(unsigned int *)0x0C2A98BC = 0x3F800000;
    *(unsigned int *)0x0C2A98C0 = 0x0;
    *(unsigned int *)0x0C2A98CC = 0x200A;
    *(unsigned int *)0x0C2A98C4 = 0x3F800000;
    *(unsigned int *)0x0C2A98C8 = 0x2;
}

void FUN_0c072fe8(void)
{
    *(unsigned int *)0x0C2AEC20 = 0x4622F800;
    *(unsigned int *)0x0C2AEC24 = 0xC49C6000;
    *(unsigned int *)0x0C2AEC28 = 0x4656B000;
    *(unsigned int *)0x0C2AEC34 = 0x0;
    *(unsigned int *)0x0C2AEC30 = 0x0;
    *(unsigned int *)0x0C2AEC2C = 0x0;
    *(unsigned int *)0x0C2AEC3C = 0x0;
    *(unsigned int *)0x0C2AEC48 = 0x0;
    *(unsigned int *)0x0C2AEC44 = 0x0;
    *(unsigned int *)0x0C2AEC40 = 0x0;
    *(unsigned int *)0x0C2AEC54 = 0x0;
    *(unsigned int *)0x0C2AEC50 = 0x0;
    *(unsigned int *)0x0C2AEC4C = 0x0;
    *(unsigned int *)0x0C2AEC58 = 0x0;
    *(unsigned int *)0x0C2AEC5C = 0x3ECCCCCC;
    *(unsigned int *)0x0C2AEC68 = 0x0;
    *(unsigned int *)0x0C2AEC64 = 0x0;
    *(unsigned int *)0x0C2AEC60 = 0x0;
    *(unsigned int *)0x0C2AEC74 = 0x0;
    *(unsigned int *)0x0C2AEC70 = 0x0;
    *(unsigned int *)0x0C2AEC6C = 0x0;
    *(unsigned int *)0x0C2AEC80 = 0x0;
    *(unsigned int *)0x0C2AEC7C = 0x0;
    *(unsigned int *)0x0C2AEC78 = 0x0;
}

void FUN_0c074ca0(int a4)
{
    *(unsigned int *)0x0C2AECD0 = 0x60;
    *(unsigned int *)0x0C2AECD4 = 0x0;
    *(unsigned int *)0x0C2AED30 = 0xC2AED44;
    *(unsigned int *)0x0C2AED34 = 0xC2AED6C;
    *(unsigned int *)0x0C2AECD8 = 0xC2AED30;
    *(unsigned int *)0x0C2AECDC = 0x2;
    *(unsigned int *)0x0C2AECE0 = 0x280;
    *(unsigned int *)0x0C2AECE4 = 0x0;
    *(unsigned int *)0x0C2AECE8 = 0x0;
    *(unsigned int *)0x0C2AECEC = a4;
    *(unsigned int *)0x0C2AECF0 = 0xC2AF368;
    *(unsigned int *)0x0C2AECF4 = 0xACC00000;
    *(unsigned int *)0x0C2AECF8 = 0x100000;
    *(unsigned int *)0x0C2AECFC = 0x428C0000;
    *(unsigned int *)0x0C2AED00 = 0x40A00000;
    *(unsigned int *)0x0C2AED04 = 0x41C80000;
    *(unsigned int *)0x0C2AED08 = 0x0;
    *(unsigned int *)0x0C2AED0C = 0x0;
    *(unsigned int *)0x0C2AED2C = 0x0;
    *(unsigned int *)0x0C2AED38 = 0x3;
    *(unsigned int *)0x0C2AED3C = 0x0;
}

void FUN_0c167c24(char *a4, int a5)
{
    *(unsigned int *)(a4 + 32) = a5;
}

void FUN_0c1687f6(char *a4, int a5)
{
    *(unsigned int *)(a4 + 52) = a5;
}

void FUN_0c168812(char *a4, int a5)
{
    *(unsigned int *)(a4 + 60) = a5;
}

void FUN_0c16881a(char *a4, int a5)
{
    *(unsigned int *)(a4 + 64) = a5;
}

void FUN_0c168826(char *a4, int a5)
{
    *(unsigned int *)(a4 + 68) = a5;
}

void Init_Standard(void)
{
    *(unsigned int *)0x0C2A7EE0 = 0x43A00000;
    *(unsigned int *)0x0C2A7EE4 = 0x43700000;
    *(unsigned int *)0x0C2A7EE8 = 0x3E4CCCCC;
    *(unsigned int *)0x0C2A7EEC = 0x3F800000;
    *(unsigned int *)0x0C2A7EF0 = 0x3F800000;
    *(unsigned int *)0x0C2A7EFC = 0x3F800000;
    *(unsigned int *)0x0C2A7F00 = 0x3F800000;
    *(unsigned int *)0x0C2A7F08 = 0x3F800000;
    *(unsigned int *)0x0C2A7EF4 = 0x0;
    *(unsigned int *)0x0C2A7EF8 = 0x0;
    *(unsigned int *)0x0C2A7F04 = 0x0;
    *(unsigned int *)0x0C2A7F10 = 0xA;
    *(unsigned int *)0x0C2A7F0C = 0x2;
}

void SJMEM_EntryErrFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 28) = a5;
    *(unsigned int *)(a4 + 32) = a6;
}

void SJRBF_EntryErrFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 40) = a5;
    *(unsigned int *)(a4 + 44) = a6;
}

void SJUNI_EntryErrFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 40) = a5;
    *(unsigned int *)(a4 + 44) = a6;
}

void kdSetGunCallback(int a4)
{
    *(unsigned int *)0x0C2EC290 = a4;
}

void kmRenderDirect(void)
{
    *(unsigned int *)0x0C2EA9F4 = 0x1;
    *(unsigned int *)0x0C2EA9FC = 0x0;
    *(unsigned int *)0x0C178278 = 0x1;
}
