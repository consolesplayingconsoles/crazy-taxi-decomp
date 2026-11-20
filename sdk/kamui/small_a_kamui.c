extern int Exec_Balloon_Event();
/* Single functions between proven ones: empty bodies, constants and one-line stores. */

extern int g_0c14a644;

typedef struct {
    int a;
    int b;
    int c;
} Triple;


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


typedef void (*Release)(int);

int ADXSTM_Close(int a);
int ADXF_Ocbi(int a, int b);


void kmytex_FBDeQueueEntry(int *head, int *tail, int *node)
{
    int *prev;
    int *next;

    prev = (int *)node[1];
    next = (int *)node[2];
    if (prev == 0) {
        *head = (int)next;
    } else {
        prev[2] = (int)next;
    }
    if (next == 0) {
        *tail = (int)prev;
    } else {
        next[1] = (int)prev;
    }
}

int abs(int a);
int nlCommonTextureConvertUVnum(int a);


int kmChangeLatencyModel(int a, int b)
{
    *(int *)0xC2EA9F0 = 0;
    if (*(int *)0xC2EA88C != 0) {
        do {
            (*(void (**)(int))0xC2EA8E8)(*(int *)0xC2EA8EC);
            if (*(unsigned int *)0xC2EA9F0 > 10) {
                break;
            }
        } while (*(int *)0xC2EA88C != 0);
    }
    *(int *)0xC2EA9C4 = a;
    *(int *)0xC2EAAA0 = b;
    *(int *)0xC2EAAA4 = b & 15;
    *(int *)0xC2EA9CC = 0;
    *(int *)0xC2EA9D0 = -1;
    *(int *)0xC2EA9D4 = -1;
    *(int *)0xC2EA9D8 = -1;
    *(int *)0xC2EA9DC = 0;
    *(int *)0xC2EA9E0 = 0;
    *(int *)0xC2EA9E4 = 0;
    return 0;
}
