extern int Exec_Balloon_Event();
/* Single functions between proven ones: empty bodies, constants and one-line stores. */

extern int g_0c14a644;

typedef struct {
    int a;
    int b;
    int c;
} Triple;


void ADXSTM_EntryErrFunc(void)
{
}


int ADXRNA_GetNumRoom(void)
{
    return 0x7FFFFFFF;
}

int ADXSJD_GetSpsdInfo(int a)
{
    return a + 88;
}


int gdc_StopStreamVoice(int a);
int nlSysMetricsCpuPowerGet(void);
int buFbrWakeupFiber(int a, int b);
int nlGetMatrix(int a);


int set_event(int a, int b);
int Init_Balloon_Obj(int a, int b);


int ADXT_GetStat(int a);
int ADXT_GetNumSmpl(int a);
int nlArcTan2(float a, float b);


int ADXF_GetFileRange(int a, int b, int *start, int *count);
int syG2FifoIsEmpty(int *r);

int adxf_SetAfsFileInfo(int *obj, int a, int b)
{
    int f[2];

    if (ADXF_GetFileRange(a, b, &f[1], &f[0]) < 0) {
        return -3;
    }
    obj[3] = f[1];
    obj[4] = f[0];
    obj[5] = f[0] << 11;
    return 0;
}


typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);

void adxf_CloseSjStm(int *obj)
{
    int t;

    if (obj[1] != 0) {
        ADXSTM_Close(obj[1]);
        obj[1] = 0;
    }
    if (obj[2] != 0 && *(signed char *)((int)obj + 2) == 0) {
        if (*(int *)0xC2BA338 == 1) {
            ADXF_Ocbi(obj[10], obj[11]);
        }
        t = obj[2];
        ((Release)((int *)*(int *)t)[3])(t);
        obj[2] = 0;
    }
}


int abs(int a);
int nlCommonTextureConvertUVnum(int a);


