/* Reference C, not built: SHC 5.1 -extra=a=400 -macsave=1 gives every instruction of both functions, but psgEnterState5's first pool lacks seven literals of code the original compiler removed (offsets 0x110, 0x114, 0x10c, 0x248; 0x0C9EF530, FcvStoreBuffer, 0x0C0D5690, 5.0, 10.0, Psg_SetMoveSpeed), so the pool lands after case 1 instead of case 0 (docs/engine.md, "The compiler"). Range 0C06D63E-0C06D9C4, data 0C0D5EEC-0C0D5F64. */
/* Customers (tagPASSENGER): the entries of states 5 and 6. */

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
    void *f110;             /* 0x110 */
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

typedef struct {
    char pad000[0x78];
    NLpoint3 pos;           /* 0x078 */
} CAR;

typedef struct {
    char pad000[0x1e0];
    NLpoint3 v1e0;          /* 0x1e0 */
} TAXIDRIVER;

extern CAR Car_Data[];
extern TAXIDRIVER TaxiDriver;
extern char g_0c0d5720[];
extern char g_0c0d5728[];
extern char mot_0c91e924[];
extern char mot_0c91fd28[];
extern char mot_0c91d170[];
extern char mot_0c92fc64[];
extern char mot_0c934ccc[];
extern char mot_0c93a1a4[];
extern char mot_0c9323f8[];
extern char mot_0c937750[];
extern char mot_0c93cd68[];
extern char mot_0c945094[];
extern char mot_0cab6bbc[];
extern char mot_0ca8bcbc[];
extern char mot_0caa143c[];
extern char mot_0cb32654[];
extern char mot_0cac26f4[];
extern char mot_0ca977f4[];
extern char mot_0caab084[];
extern char mot_0cb38c78[];
extern char mot_0ca75d74[];
extern char mot_0ca7bbdc[];

unsigned int extRand(void);
int rand(void);
void nlSubVector3op(NLpoint3 *out, NLpoint3 *a, NLpoint3 *b);
void nlUnitVector(NLpoint3 *v);
float nlInnerProduct(NLpoint3 *a, NLpoint3 *b);
float nlLength(NLpoint3 *a, NLpoint3 *b);
void FUN_0c061b14(tagPASSENGER *p, int a, int b);
void FUN_0c061da8(tagPASSENGER *p);

void psgEnterState5(tagPASSENGER *p, int arg)
{
    void *mot1[3] = { mot_0c91e924, mot_0c91fd28, mot_0c91d170 };
    void *a1[3] = { g_0c0d5720, g_0c0d5720, g_0c0d5720 };
    void *b1[3] = { g_0c0d5728, g_0c0d5728, g_0c0d5728 };
    void *mot3[3] = { mot_0c92fc64, mot_0c934ccc, mot_0c93a1a4 };
    void *mot2[3] = { mot_0c9323f8, mot_0c937750, mot_0c93cd68 };
    int i;

    switch (arg) {
    case 0:
        p->f034 = mot_0c945094;
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        FUN_0c061b14(p, 1, 0);
        break;
    case 1:
        i = extRand() % 3;
        p->f034 = mot1[i];
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = a1[i];
        p->f128 = b1[i];
        FUN_0c061b14(p, 1, 1);
        break;
    case 2:
        i = extRand() % 3;
        p->f034 = mot2[i];
        p->f038 = 0.0f;
        p->b16 = 0;
        p->f108 = 0.0f;
        p->f10c = 0.0f;
        p->b21 = 0;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        FUN_0c061b14(p, 2, 2);
        break;
    }
}

void psgEnterState6(tagPASSENGER *p, int arg)
{
    void *walkA[4] = { mot_0cab6bbc, mot_0ca8bcbc, mot_0caa143c, mot_0cb32654 };
    void *walkB[4] = { mot_0cac26f4, mot_0ca977f4, mot_0caab084, mot_0cb38c78 };
    float speed[4] = { 20.0f, 20.0f, 20.0f, 20.0f };
    void *runA[1] = { mot_0ca75d74 };
    void *runB[1] = { mot_0ca7bbdc };
    float runSpeed[1] = { 20.0f };
    NLpoint3 d;
    NLpoint3 v;
    unsigned int r;
    int i;

    r = rand();
    switch (arg) {
    case 0:
        nlSubVector3op(&d, &p->pos, &Car_Data[0].pos);
        d.y = 0.0f;
        nlUnitVector(&d);
        v = TaxiDriver.v1e0;
        v.y = 0.0f;
        nlUnitVector(&v);
        if (nlInnerProduct(&d, &v) > 0.0f)
            p->b5 = 0;
        else
            p->b5 = 1;
        if (nlLength(&Car_Data[0].pos, &p->pos) < 75.0f) {
            if (p->b5)
                p->f110 = runA[0];
            else
                p->f110 = runB[0];
            p->f114 = runSpeed[0];
        } else {
            i = r % 4;
            if (p->b5)
                p->f110 = walkA[i];
            else
                p->f110 = walkB[i];
            p->f114 = speed[i];
        }
        p->b16 = 1;
        p->f108 = 0.0f;
        p->f10c = 10.0f;
        p->b21 = 2;
        p->f124 = g_0c0d5720;
        p->f128 = g_0c0d5728;
        FUN_0c061da8(p);
        break;
    case 1:
        break;
    }
}
