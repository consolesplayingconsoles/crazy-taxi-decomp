/* @unit 0C06B200-0C06B724 @data 0C0D5A98-0C0D5B30 -macsave=1 -extra=a=400 */
/* Customers (tagPASSENGER): stand-wait distances, Psg_Init, the state setter and state 0's entry. */

typedef struct tagNLpoint3 { float x, y, z; } NLpoint3;

typedef struct tagPASSENGER {
    int chara;              /* 0x000 */
    NLpoint3 pos;           /* 0x004 */
    int f010;               /* 0x010 */
    NLpoint3 dir;           /* 0x014 */
    int state;              /* 0x020 */
    int substate;           /* 0x024 */
    int f028;               /* 0x028 */
    int f02c;               /* 0x02c */
    int f030;               /* 0x030 */
    void *f034;             /* 0x034 */
    float f038;             /* 0x038 */
    char fcv[0xCC];         /* 0x03c tagFCVIPBUFFER */
    float f108;             /* 0x108 */
    float f10c;             /* 0x10c */
    int f110;               /* 0x110 */
    float f114;             /* 0x114 */
    int f118;               /* 0x118 */
    float walkSpeed;        /* 0x11c */
    float runSpeed;         /* 0x120 */
    void *f124;             /* 0x124 */
    void *f128;             /* 0x128 */
    int f12c;               /* 0x12c */
    int f130;               /* 0x130 */
    NLpoint3 f134;          /* 0x134 */
    int f140;               /* 0x140 */
    int f144;               /* 0x144 */
    unsigned int kind : 3;  /* 0x148, from the most significant bit */
    unsigned int motA : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;
    unsigned int b8 : 1;
    unsigned int b9 : 2;
    unsigned int b11 : 1;
    unsigned int b12 : 2;
    unsigned int b14 : 1;
    unsigned int b15 : 1;
    unsigned int b16 : 1;
    unsigned int b17 : 1;
    unsigned int b18 : 1;
    unsigned int b19 : 1;
    unsigned int b20 : 1;
    unsigned int b21 : 2;
    unsigned int b23 : 1;
    unsigned int b24 : 1;
    unsigned int b25 : 1;
    unsigned int b26 : 6;
    int f14c;               /* 0x14c */
    unsigned int f150 : 32; /* 0x150 */
    int rideon;             /* 0x154 */
} tagPASSENGER;

extern float PsgPeraDistance;
extern float g_0c13eed4;
extern float g_0c13eed8;
extern float g_0c13eedc;
extern float g_0c13eee0;
extern NLpoint3 vecZero;
extern NLpoint3 vecAxisX;
extern char g_0c0d5720[];
extern char g_0c0d5728[];
extern char mot_0ca80184[];
extern char mot_0cad674c[];
extern char mot_0cadacf4[];
extern char mot_0cadb018[];
extern char mot_0cadb33c[];
extern char mot_0cadb660[];
extern char mot_0cadb984[];
extern char mot_0cadbca8[];
extern char mot_0cae3244[];
extern char mot_0cae3568[];
extern char mot_0cae388c[];
extern char mot_0cae7fc0[];
extern char mot_0caebf38[];
extern char mot_0caec25c[];
extern char mot_0caec580[];
extern char mot_0caf04f8[];
extern char mot_0caf081c[];
extern char mot_0caf4794[];
extern char mot_0caf4ab8[];
extern char mot_0cb03914[];
extern char mot_0cb095f0[];
extern char mot_0cb0f2cc[];
extern char mot_0cb0f5f0[];
extern char mot_0cb0f914[];
extern char mot_0cb0fc38[];
extern char mot_0cb17990[];
extern char mot_0cb1d66c[];
extern char mot_0cb24c08[];
extern char mot_0cb24f2c[];
extern char mot_0cb25250[];
extern char mot_0cb2c030[];
extern char mot_0c9726f4[];
extern char mot_0c972e68[];
extern int g_0c2ae340;
typedef struct {
    char pad000[0x10];
    int mode;               /* 0x010 */
    char pad014[0x1df - 0x14];
    unsigned char b1df_0 : 6;  /* 0x1df */
    unsigned char hold : 1;
    unsigned char b1df_7 : 1;
} TAXIDRIVER;
extern TAXIDRIVER TaxiDriver;
int IsBoyFriend(int chara, int a);
void Chat_HeyTaxi(tagPASSENGER *p);
int rand(void);
extern int CourseMode;
extern int MiniGame_No;
extern unsigned char RideonCamFlag;

int FUN_0c070cd0(int chara);
int FUN_0c070bf8(tagPASSENGER *p);
int FUN_0c070c64(tagPASSENGER *p);
void FcvStoreBuffer(void *motion, float t, void *buf);
typedef void (*PsgEntry)(tagPASSENGER *p, int arg);
typedef struct { PsgEntry f[7]; } PsgEntryTable;
void psgEnterState0(tagPASSENGER *p, int arg);
void psgEnterState1(tagPASSENGER *p, int arg);
void psgEnterState2(tagPASSENGER *p, int arg);
void psgEnterState3(tagPASSENGER *p, int arg);
void psgEnterState4(tagPASSENGER *p, int arg);
void psgEnterState5(tagPASSENGER *p, int arg);
void psgEnterState6(tagPASSENGER *p, int arg);
extern int GetNumRideon(void);

void psgSetState(tagPASSENGER *p, int state, int a, int b);
void psgCallEnter(tagPASSENGER *p, int state, int arg);

void Set_StandWaitDist(int mode)
{
    if (mode == 1) {
        PsgPeraDistance = 300.0f;
        g_0c13eed4 = 450.0f;
        g_0c13eed8 = 350.0f;
        g_0c13eedc = 250.0f;
    } else {
        PsgPeraDistance = 500.0f;
        g_0c13eed4 = 1000.0f;
        g_0c13eed8 = 750.0f;
        g_0c13eedc = 500.0f;
    }
    g_0c13eee0 = 150.0f;
}

void Psg_Init(tagPASSENGER *p, int chara, int param)
{
    p->chara = chara;
    p->pos = vecZero;
    p->f010 = 0;
    p->dir = vecAxisX;
    p->state = 0;
    p->substate = 0;
    p->f02c = 0;
    p->f028 = 0;
    p->f030 = 0;
    p->f034 = mot_0cadb018;
    p->f038 = 0.0f;
    p->f108 = 0.0f;
    p->f10c = 0.0f;
    p->f110 = 0;
    p->f114 = 0.0f;
    p->f118 = 0;
    p->walkSpeed = 0.0f;
    p->runSpeed = 0.5f;
    p->f124 = g_0c0d5720;
    p->f128 = g_0c0d5728;
    p->f12c = 0;
    p->f130 = 0;
    p->f134 = vecZero;
    p->f140 = param;
    p->f144 = 0;
    p->kind = FUN_0c070cd0(chara);
    p->motA = FUN_0c070bf8(p) ? 1 : 0;
    if (p->motA)
        FcvStoreBuffer(mot_0c9726f4, 0.0f, p->fcv);
    else
        FcvStoreBuffer(mot_0c972e68, 0.0f, p->fcv);
    p->b4 = FUN_0c070c64(p) ? 1 : 0;
    p->b5 = 0;
    p->b6 = 0;
    p->b7 = 0;
    p->b8 = 0;
    p->b9 = 3;
    p->b11 = 0;
    p->b12 = 0;
    p->b14 = 0;
    p->b15 = 0;
    p->b16 = 0;
    p->b17 = 0;
    p->b18 = 0;
    p->b19 = 0;
    p->b20 = 0;
    p->b21 = 2;
    p->b23 = 0;
    p->b24 = 0;
    p->b25 = 0;
    p->f150 = 0;
    psgSetState(p, 0, 0, 0);
    g_0c2ae340 = 0;
    if (CourseMode == 2) {
        int mg = MiniGame_No;

        if (mg == 8 || mg == 11)
            p->rideon = param;
        else
            p->rideon = 0;
    } else
        p->rideon = 0;
    RideonCamFlag &= ~(1 << p->rideon);
}

void psgSetState(tagPASSENGER *p, int state, int a, int b)
{
    p->state = state;
    p->f028 = a;
    p->f02c = b;
    p->substate = 0;
    p->f108 = 0.0f;
    psgCallEnter(p, state, 0);
    if (CourseMode == 2 && MiniGame_No == 14 && p->state == 2)
        p->rideon = GetNumRideon() - 1;
    p->b16 = p->f10c > 0.0f;
    p->b17 = 0;
}

void psgCallEnter(tagPASSENGER *p, int state, int arg)
{
    PsgEntry tbl[7] = { psgEnterState0, psgEnterState1, psgEnterState2, psgEnterState3, psgEnterState4, psgEnterState5, psgEnterState6 };
    PsgEntry f;

    f = tbl[state];
    f(p, arg);
}

void psgEnterState0(tagPASSENGER *p, int arg)
{
    void *wait10[10] = {
        mot_0cadb018,
        mot_0cadb33c,
        mot_0cadb660,
        mot_0cadb984,
        mot_0cadbca8,
        mot_0cae3244,
        mot_0cae3568,
        mot_0cae388c,
        mot_0cae7fc0,
        mot_0caebf38
    };
    void *wait6[6] = {
        mot_0caec25c,
        mot_0caec580,
        mot_0caf081c,
        mot_0caf4ab8,
        mot_0caf04f8,
        mot_0caf4794
    };
    int n10 = 10;
    int n6 = 6;
    void *call7[7] = {
        mot_0cb03914,
        mot_0cb24f2c,
        mot_0cb0f5f0,
        mot_0cb0f914,
        mot_0cb0fc38,
        mot_0cb17990,
        mot_0cb25250
    };
    int n7 = 7;
    void *hey5[5] = {
        mot_0cb095f0,
        mot_0cb0f2cc,
        mot_0cb1d66c,
        mot_0cb24c08,
        mot_0cb2c030
    };
    int n5 = 5;
    void *bf3[3] = {
        mot_0cad674c,
        mot_0cadacf4,
        mot_0ca80184
    };
    int n3 = 3;
    void **list;
    int n;

    if (CourseMode == 2 && MiniGame_No == 8 && IsBoyFriend(p->chara, 0) == 0) {
        list = bf3;
        n = n3;
    } else if (TaxiDriver.hold || p->f140 < 0) {
        if (p->motA) {
            list = wait10;
            n = n10;
        } else {
            list = wait6;
            n = n6;
        }
    } else {
        switch (arg) {
        case 0:
            if (p->motA) {
                list = wait10;
                n = n10;
            } else {
                list = wait6;
                n = n6;
            }
            break;
        case 1:
            list = call7;
            n = n7;
            break;
        case 2:
            list = hey5;
            n = n5;
            if (p->f140 != -1 && TaxiDriver.mode != 6)
                Chat_HeyTaxi(p);
            break;
        }
    }
    p->f034 = list[rand() % n];
    p->f124 = g_0c0d5720;
    p->f128 = g_0c0d5728;
    p->f038 = 0.0f;
    p->f10c = 0.0f;
    p->b21 = 2;
}
