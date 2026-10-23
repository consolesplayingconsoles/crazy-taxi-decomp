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
    t8 = *(int *)0xC0E4E40;
    if ((*(int *)0xC0E4E44) != t8) {
        nlFogTableColor(t8);
        *(unsigned int *)0xC0E4E44 = (*(int *)0xC0E4E40);
    }
    u16 = *(float *)0xC0E4E48;
    if ((*(float *)0xC0E4E4C) != u16) {
        nlFogDensityF(u16);
        *(float *)0xC0E4E4C = (*(float *)0xC0E4E48);
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
