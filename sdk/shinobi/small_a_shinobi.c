extern int Exec_Balloon_Event();
/* Single functions between proven ones: empty bodies, constants and one-line stores. */

extern int g_0c14a644;

typedef struct {
    int a;
    int b;
    int c;
} Triple;


int gdFsGetGdDcf(void)
{
    return 0x0C1761D4;
}

int syTmrDiffCount(int a, int b)
{
    return b - a;
}


void kdSetHandler(unsigned int index, int handler)
{
    if (index <= 31) {
        ((int *)0xC2EBF94)[index] = handler;
    }
}


int gdc_StopStreamVoice(int a);
int nlSysMetricsCpuPowerGet(void);
int buFbrWakeupFiber(int a, int b);
int nlGetMatrix(int a);


int buFbrKillFiber(int a, int b)
{
    int e;

    e = a + 0x210 + b * 0x124;
    if (*(int *)(e + 12) == 1) {
        buFbrWakeupFiber(a, b);
        *(int *)(e + 12) = 2;
        return 0;
    }
    return -1;
}


int set_event(int a, int b);
int Init_Balloon_Obj(int a, int b);


int ADXT_GetStat(int a);
int ADXT_GetNumSmpl(int a);
int nlArcTan2(float a, float b);


int ADXF_GetFileRange(int a, int b, int *start, int *count);
int syG2FifoIsEmpty(int *r);


int syG2FifoWaitEmpty(void)
{
    int r;

    do {
        syG2FifoIsEmpty(&r);
    } while (r != 1);
    *(int *)(*(int *)0xC178700 + 0x10C) += 1;
    return 0;
}

typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);


int abs(int a);
int nlCommonTextureConvertUVnum(int a);


int search_dir_by_startfat(int disk, int fat)
{
    int base;
    int entry;
    int i;

    base = 0xC2EE990 + disk * 328;
    entry = *(int *)(base + 40);
    for (i = 0; i < *(int *)(*(int *)(base + 28) + 48); i++) {
        if (*(unsigned char *)entry != 0) {
            if ((unsigned short)((int (*)(int, int))((int *)*(int *)0xC2EE98C)[3])(entry, 2) == fat) {
                return entry;
            }
        }
        entry += 32;
    }
    return 0;
}


