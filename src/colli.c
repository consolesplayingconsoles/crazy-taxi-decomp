/* Collision objects: the per-kind lists of nodes (SetColliObj, KillColliObj). Range 0C0330B8-0C03319A. */

typedef struct ColliNode {
    struct ColliObj *obj;   /* 0x00 */
    int kind;               /* 0x04, -1 when freed */
    struct ColliNode *prev; /* 0x08 */
    struct ColliNode *next; /* 0x0C */
} ColliNode;

typedef struct ColliObj {
    int f00[6];             /* 0x00 */
    float f18;              /* 0x18 */
    int f1c;                /* 0x1C */
    int f20;                /* 0x20 */
    int f24;                /* 0x24 */
    int f28;                /* 0x28 */
    ColliNode *node;        /* 0x2C */
} ColliObj;

extern ColliNode *colliKindHead[];
extern ColliNode *colliKindTail[];
extern int colliKindCount[];
extern int colliObjCount;
ColliNode *colliNodeAlloc(void);

#define FLT_MAX_ 3.4028235e38f

int SetColliObj(ColliObj *o, int kind)
{
    ColliNode *n = colliNodeAlloc();

    if (!n) {
        o->node = 0;
        o->f18 = FLT_MAX_;
        o->f24 = 0;
        o->f20 = 0;
        return 0;
    }
    if (!colliKindTail[kind]) {
        colliKindHead[kind] = n;
        colliKindTail[kind] = n;
        n->next = 0;
        n->prev = 0;
    } else {
        n->prev = colliKindTail[kind];
        n->next = 0;
        colliKindTail[kind]->next = n;
        colliKindTail[kind] = n;
    }
    n->obj = o;
    n->kind = kind;
    o->node = n;
    o->f24 = 0;
    o->f20 = 0;
    colliKindCount[kind]++;
    colliObjCount++;
    return 1;
}

void KillColliObj(ColliObj *o)
{
    ColliNode *n = o->node;
    int kind;

    if (!n)
        return;
    kind = n->kind;
    if (!n->prev)
        colliKindHead[kind] = n->next;
    else
        n->prev->next = n->next;
    if (!n->next)
        colliKindTail[kind] = n->prev;
    else
        n->next->prev = n->prev;
    n->kind = -1;
    o->node = 0;
    o->f18 = FLT_MAX_;
    o->f24 = 0;
    o->f20 = 0;
    colliKindCount[kind]--;
    colliObjCount--;
}
