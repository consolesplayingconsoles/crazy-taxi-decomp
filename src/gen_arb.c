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


int ADXB_DecodeHeaderAdx(int a4, int a5, int a6)
{
    int t0;
    int t20;
    int t1;
    int t17;
    int stk[12];

    *(unsigned short *)((a4 + 0x2)) = 0x1;
    t0 = ADX_DecodeInfo(a5, a6, (((int)stk + 4) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    t20 = 0x0;
    if ((int)t0 >= 0) {
        t1 = ADX_DecodeInfoExADPCM2(a5, a6, (a4 + 0x1C));
        t17 = 0x0;
        if ((int)t1 < 0) {
        } else {
            ADXPD_SetCoef((*(int *)((a4 + 0x8))), (*(int *)((a4 + 0x14))), (*(short *)((a4 + 0x1C))));
            ADX_DecodeInfoExLoop(a5, a6, (a4 + 0x20), (a4 + 0x24), (a4 + 0x26), (a4 + 0x28), (a4 + 0x2C), (a4 + 0x30), (a4 + 0x34));
            (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
            (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
            (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
            (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
            (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
            (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
            (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
            (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
            (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
            (((struct o9C_uint *)(a4))->v) = 0x0;
            (((struct oA8_ushort *)(a4))->v) = 0x0;
            memset((a4 + 0x4C), 0x0, 0x4);
            t17 = (*(short *)(((int)stk + 28)));
        }
        t20 = t17;
    }
    return t20;
}

int nlsndIcsControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA5) {
        if (a5 != 0x10A5) {
            if ((a5 != 0x20A5) && ((a5 != 0x30A5) && ((a5 != 0x40A5) && ((a5 != 0xA7) && (a5 != 0x10A7))))) {
                if (a5 != 0x50A5) {
                    if (a5 != 0xA6) {
                        return 0xFFFFFFFE;
                    }
                    return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 & 0x7F) << 16) + ((((a6 & 0x80) << 2) << 2) << 1))));
                }
                return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0x7F) << 16)));
    }
    t0 = nlsndSeqRequest(((((0x7F00 & a6) << 8) + ((a4 & 0xF) << 8)) + 0x70A5));
    if (t0 != 0) {
        return t0;
    }
    return nlsndSeqRequest(((((a4 & 0xF) << 8) + ((a6 & 0x7F) << 16)) + 0xA5));
}

int nlsndSystemControl(int a4, int a5, int a6)
{
    if ((0xFF00 & a5) != 0) {
        if ((a5 != 0x1A0) && ((a5 != 0x4A0) && ((a5 != 0x9A0) && ((a5 != 0xAA0) && (a5 != 0x10A0))))) {
            if ((a5 != 0x5A0) && ((a5 != 0x6A0) && ((a5 != 0x7A0) && (a5 != 0x11A0)))) {
                if (a5 != 0x1BA0) {
                    if ((a5 != 0x30A0) && ((a5 != 0x28A0) && (a5 != 0x29A0))) {
                        if ((a5 != 0x2A0) && (a5 != 0x3A0)) {
                            return 0xFFFFFFFE;
                        }
                        return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
                    }
                    return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 - 1) & 0xF) << 16)));
                }
                return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0xF) << 16)));
            }
            return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
    }
    return nlsndSeqRequest((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
}

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
