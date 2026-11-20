/* Straight-line functions with calls and guards (batch gen_arb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXPD_SetCoef(int, int, int);
int ADX_DecodeInfo(int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoExADPCM2(int, int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int gdFsCreateHnG(int, int, int, int);
int gdFsSetGlobalErrG(int);
int memset(int, int, int);
int nlsndSeqRequest(int);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
int nlsndIcsControl(int a4, int a5, int a6);
int nlsndSystemControl(int a4, int a5, int a6);
int gdFsOpenRangeG(int a4, int a5);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };


int gdFsOpenRangeG(int a4, int a5)
{
    int t1;
    int t3;
    int t4;
    int t11;

    if ((int)a4 < (int)0xB05E) {
        gdFsSetGlobalErrG(0xFFFFFFE0);
        t11 = 0x0;
    } else {
        t1 = *(int *)0xC177A8C;
        t3 = 0x0;
        t4 = (*(int *)((t1 + 0x18)));
        for (;;) {
            if ((int)t3 >= (int)(*(int *)((t1 + 0x0)))) {
                t3 = 0xFFFFFFF7;
                gdFsSetGlobalErrG(t3);
                return 0x0;
            }
            if (((((struct o4C_short *)(t4))->v)) == 0) {
                break;
            }
            t4 = (t4 + 0x54);
            t3 = (t3 + 0x1);
        }
        gdFsCreateHnG(t4, 0x0, a4, (((a5 << 8) << 2) << 1));
        gdFsSetGlobalErrG(0x0);
        t11 = t4;
    }
    return t11;
}
