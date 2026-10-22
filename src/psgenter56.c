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
int nlRand(void);
void nlSubVector3op(NLpoint3 *out, NLpoint3 *a, NLpoint3 *b);
void nlUnitVector(NLpoint3 *v);
float nlInnerProduct(NLpoint3 *a, NLpoint3 *b);
float nlLength(NLpoint3 *a, NLpoint3 *b);
void Chat_Iraira(tagPASSENGER *p, int a, int b);
void Chat_DamnIt(tagPASSENGER *p);


