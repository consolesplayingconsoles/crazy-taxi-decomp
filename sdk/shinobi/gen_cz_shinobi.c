/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamSetHdInfo(int, int);
int nlsndStreamClose(int);
int nlsndStreamStart(int);
int nlsndStreamStop(int);
int mwlSbFreeWork(int);
int mwSbSetNumChan(int, int);
int mwSbSetSfreq(int, int);
int mwSbSetBitPerSmpl(int, int);
int mwSbSetVol(int, int);
int mwSbSetPan(int, int, int);
int mwSbSetExPrm(int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, ...);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
int nlsndG2DmaHandleClose(int);
int nlsndStreamGenerateHdInfo(int);
int mwSbClosePort(int a4);
int mwSbPlay(int a4);
int syMalloc_default_malloc(int a4);
float Put_Transporter(int a4);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_short { char p[0x58]; short v; };
struct o5A_short { char p[0x5A]; short v; };
struct o5C_int { char p[0x5C]; int v; };


int syMalloc_default_malloc(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t13;
    int stk[3] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 4));
    t2 = *(int *)0xC2B9358;
    t3 = *(int *)((t2 + 0x0));
    t4 = t3;
    t5 = t2;
    for (;;) {
        t6 = *(int *)((t4 + 0x4));
        if ((unsigned int)t6 >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t4 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t5 = t4;
        t7 = *(int *)((t4 + 0x0));
        t4 = t7;
    }
    t8 = *(int *)((t4 + 0x4));
    if (t8 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        t9 = *(int *)((t4 + 0x0));
        *(unsigned int *)((t5 + 0x0)) = t9;
        t13 = t4;
    } else {
        *(unsigned int *)((t4 + 0x4)) = (t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t4 + ((((t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t13 = (t4 + ((((t8 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC2B9358 = t5;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t13 + 0x20);
}

