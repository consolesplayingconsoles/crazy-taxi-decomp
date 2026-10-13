/* Small game functions: course status bits, fade colours, a volume level in decibels, a customer's ground snap. */

typedef struct { float x, y, z; } Vec3;
typedef struct { unsigned int *bits; int unk4; } CourseStatus;

extern CourseStatus g_courseStatusTbl[];
extern float g_fadeBase[3];
extern float g_fadeOffset[3];

void nlObjPutSetFadeColorBase(float r, float g, float b);
void nlObjPutSetFadeColorOffset(float r, float g, float b);
float nlLog10(float x);
/* the 12-byte struct copy in Psg_SetPosPtr compiles to a call of this runtime helper */
extern void _quick_odd_mvn(void);

void courseStatusEntry(int course, int point)
{
    unsigned int *bits = g_courseStatusTbl[course].bits;

    if (bits)
        bits[point >> 5] |= 1 << (point & 31);
}

void SetFadeColorBaseMulti(float r, float g, float b)
{
    nlObjPutSetFadeColorBase(g_fadeBase[0] * r, g_fadeBase[1] * g, g_fadeBase[2] * b);
}

void ResetFadeColor(void)
{
    nlObjPutSetFadeColorBase(g_fadeBase[0], g_fadeBase[1], g_fadeBase[2]);
    nlObjPutSetFadeColorOffset(g_fadeOffset[0], g_fadeOffset[1], g_fadeOffset[2]);
}

int volumeToDb(signed char level)
{
    if (level == 0)
        return -999;
    return (int)(nlLog10((float)level * 0.007874016f) * 200.0f);
}

/* Psg_SetPosPtr is not counted: equiv.py DIFFERS only on registers the calls leave over, not on their arguments (r4 and fr4 at the _quick_odd_mvn struct copy, fr4-fr11 at the CalcShadow4Normal tail jump); targets, pointer arguments and memory writes agree. */
typedef struct {
    int f00;
    float x, y, z;          /* 0x04 */
    int f10;
    float normal[3];        /* 0x14 */
    int kind;               /* 0x20 */
    int sub;                /* 0x24 */
} Psg;

typedef struct {
    Vec3 pos;               /* 0x00 */
    Vec3 normal;            /* 0x0C */
    int f18;
    int flag;               /* 0x1C: -1 = no ground */
} Ground;

Ground *GetCollision2D(Vec3 *p, float h);
void CalcShadow4Normal(float *dst, float *normal);

void Psg_SetPosPtr(Psg *p, Vec3 *pos)
{
    Ground *g = GetCollision2D(pos, 5.0f);
    int hold = p->kind == 2 || (p->kind == 4 && p->sub == 2);
    float dy;

    if (g->flag != -1) {
        dy = pos->y - g->pos.y;
        if (dy < 0)
            dy = -dy;
        if (hold) {
            if (!(65.0f > dy)) {
                p->x = pos->x;
                p->z = pos->z;
                return;
            }
        } else if (!(20.0f > dy)) {
            return;
        }
        *(Vec3 *)&p->x = g->pos;
        CalcShadow4Normal(p->normal, (float *)&g->normal);
        return;
    }
    if (hold) {
        p->x = pos->x;
        p->z = pos->z;
    }
}
