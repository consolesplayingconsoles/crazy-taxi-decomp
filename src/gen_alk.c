/* Straight-line functions with calls and guards (batch gen_alk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_ExecServer(void);
int Voice_Execute(void);
int gdFsGetDrvStat(int, int, int, int);
int gdFsReqDrvStat(int);
int nlFogDensityF(float);
int nlFogTableColor(int);
int pdExecPeripheralServer(void);
void TaxiBlankInterrupt(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


void TaxiBlankInterrupt(int a4, int a5, int a6, int a7)
{
    int t0;
    int t8;
    float u16;
    float u32;

    t0 = gdFsGetDrvStat(a4, a5, a6, a7);
    if ((t0 != 6) && (t0 != 0)) {
    } else {
        gdFsReqDrvStat(t0);
    }
    pdExecPeripheralServer();
    Voice_Execute();
    ADXT_ExecServer();
    t8 = (((struct o0_int *)0xC0E4E40)->v);
    if (((((struct o4_int *)0xC0E4E40)->v)) != t8) {
        nlFogTableColor(t8);
        (((struct o4_uint *)0xC0E4E40)->v) = ((((struct o0_int *)0xC0E4E40)->v));
    }
    u16 = (((struct o8_float *)0xC0E4E40)->v);
    if (((((struct oC_float *)0xC0E4E40)->v)) != u16) {
        nlFogDensityF(u16);
        (((struct oC_float *)0xC0E4E40)->v) = ((((struct o8_float *)0xC0E4E40)->v));
    }
    if ((*(int *)0xC1EE228) != 2) {
        *(unsigned int *)0xC1EE33C = ((*(int *)0xC1EE33C) + 0x1);
    } else {
        if ((*(int *)0xC1EE33C) == 0) {
            *(float *)0xC0E4E84 = 0.0f;
        }
        u32 = *(float *)0xC0E4E84;
        *(float *)0xC0E4E84 = (u32 + 1.19999993f);
        *(unsigned int *)0xC1EE33C = (int)(u32 + 1.19999993f);
    }
}
