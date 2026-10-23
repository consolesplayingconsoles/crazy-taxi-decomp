/* pcarDrive: one frame of a traffic car following its course line, written from the Dreamcast code (the Android port has no
   function of its own for it). a5-a7 are not parameters of the original: they are the registers it hands on untouched to
   calcCurvePoint, whose fifth argument (on the stack) needs three before it. */

typedef struct { float x, y, z; } NLpoint3;
typedef struct { NLpoint3 *pts; int *num; int *flags; } CourseLine;              /* 12 bytes */

#define LINES           (*(CourseLine **)0x0C2A6690)
#define I(o)            (*(int *)(car + (o)))
#define F(o)            (*(float *)(car + (o)))
#define P(o)            ((NLpoint3 *)(car + (o)))
#define SPEED_TABLE     ((float *)0x0C0C3F04)
#define HORN_TABLE      ((int *)0x0C0A3768)
#define TURN            1.38888907f

int pcarTurnSelect(int);
int pcarLaneChange(int);
int getNearLinkedLine(int, int, int, int, int);
int getCoursePointMove(int *, int *, int);
int getNearLineIndex(int, int, int, int *, int);
int calcCurvePoint(int, int, int, int, int, float);
float nlLength(NLpoint3 *, NLpoint3 *);
int nlGetAverageVector(NLpoint3 *, NLpoint3 *, NLpoint3 *, float, float);
int getSteering(int, int *);
int courseStatusGet(int, int, int, int);
int nlSubVector(NLpoint3 *, NLpoint3 *);
int nlScaleUnitVector(NLpoint3 *, NLpoint3 *, float);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlCalcVector(NLpoint3 *, NLpoint3 *);
int nlAddVector(NLpoint3 *, NLpoint3 *);
int nlPopMatrix(int);
int nlUnitVector(NLpoint3 *);
float nlInnerProduct(NLpoint3 *, NLpoint3 *);
int Sound_Request(int, int);
int nlRand(void);
int abs(int);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
void pcarDrive(int car, int a5, int a6, int a7)
{
    NLpoint3 target, dir, cps[4];
    CourseLine *line;
    int far, lineNo, pt, steer, k, n, lim, s;
    float v, d, t, best;

    pcarTurnSelect(car);
    far = (I(0x84) & 0x200) != 0;
    if (!(I(0x84) & 0x1000))
        pcarLaneChange(car);
    getNearLinkedLine(2, far, car + 0x80, car + 0xD4, car + 0x8C);
    lineNo = I(0x80);
    if (I(0x84) & 0xC00 && 150.0f > (float)I(0x11C))
        pt = (I(0x11C) >> 4) + I(0xD4) + 3;
    else
        pt = I(0xD4) + 3;
    getCoursePointMove(&lineNo, &pt, far);
    line = LINES + lineNo;

    if (I(0xBC) > 0 && I(0x114) >= 0) {
        if (pt < 3) {                                           /* near the start of a line: a curve from the end of the last one */
            CourseLine *last = LINES + I(0x80);
            NLpoint3 *pts = line->pts;

            n = *last->num;
            cps[0] = last->pts[n - 2];
            cps[1] = last->pts[n - 1];
            k = 0;
            if (I(0x80) >= 0x11B) {
                getNearLineIndex(0, (int)pts, *line->num, &k, car + 0x8C);
                k += 2;
            }
            cps[2] = pts[k];
            cps[3] = pts[k + 1];
            best = 10000.0f;
            for (t = 0.049999997f;;) {
                calcCurvePoint((int)cps, n, a6, a7, (int)&target, t);
                d = nlLength(P(0x8C), &target);
                if (!(best > d)) {
                    calcCurvePoint((int)cps, n, a6, a7, (int)&target, t + 0.199999988f);
                    break;
                }
                best = d;
                if ((t += 0.049999997f) > 1.0f)
                    break;
            }
            *P(0xE0) = target;
        } else {
            NLpoint3 *pts = line->pts;                          /* read once, as the original keeps it in a register */

            target = pts[pt];
            if (I(0x84) & 0x8000) {                             /* changing lanes: aim to the side of the line */
                dir = target;
                nlSubVector(&dir, &pts[I(0xD4)]);
                nlScaleUnitVector(&dir, &dir, 30.0f);
                nlPushUnitMatrix();
                nlRotateAY(*LINES[I(0x80)].flags & 0x4000 ? 0x4000 : 0xC000);
                nlCalcVector(&dir, &dir);
                nlAddVector(&target, &dir);
                nlPopMatrix(1);
            }
            nlGetAverageVector(P(0xE0), &target, P(0xE0), 0.599999964f, 0.399999976f);
        }
    } else {
        target = line->pts[pt];
        nlGetAverageVector(P(0xE0), &target, P(0xE0), 0.699999988f, 0.299999982f);
    }

    if (I(0x84) & 0x8000) {
        if (I(0x11C) == 0)
            I(0x84) &= ~0x8000;
        else
            I(0x11C)--;
    }
    I(0xC0) += getSteering(car, &steer);
    I(0x88) = 0;
    I(0x84) &= ~0x100;
    if (!(I(0x84) & 0x8000)) {
        if (I(0x34) & 1 && (F(0x70) > 0.049999997f || -0.099999994f > F(0x70)))
            I(0x118) = 0xB4;
        if (I(0x118) > 0) {                                     /* stopped for a while */
            I(0x118)--;
            F(0xC4) = 0.0f;
            F(0xC8) = 0.0f;
            return;
        }
        if (I(0x38) & 0xE001) {
            I(0x88) = 5;
            I(0x84) |= 0x100;
        } else {
            lim = I(0x78) >= 10 ? 9 : 7;
            s = courseStatusGet(I(0x80), I(0xD4), far, lim) >> 1;
            if (s & ((1 << (lim >> 1)) - 1)) {
                I(0x88) = 4;
                I(0x84) |= 0x100;
            } else if (s) {
                I(0x88) = 3;
                I(0x84) |= 0x100;
            }
        }
    }

    if (I(0x88) == 0) {
        if (I(0xBC) > 0) {
            if (F(0xC4) * 2.0f > _builtin_fabsf(F(0xCC)) || I(0x114) < 0)
                I(0x114)++;
            else if (I(0x114) > 0)
                I(0x114)--;
            if (I(0x114) > 0x78)
                I(0xBC) = -1;
            n = abs(steer);
            if (n > 0x1000)
                I(0x88) = 3;
            else if (n > 0xD00)
                I(0x88) = 2;
            else if (n > 0xA00)
                I(0x88) = 1;
            else {                                              /* how sharp the line turns ahead */
                NLpoint3 *pts;

                k = I(0x80);
                pt = I(0xD4) + 8;
                getCoursePointMove(&k, &pt, 0);
                pts = LINES[k].pts;
                dir = *P(0xE0);
                nlSubVector(&dir, P(0x8C));
                target = pts[pt];
                nlSubVector(&target, P(0xE0));
                target.y = 0.0f;
                dir.y = 0.0f;
                nlUnitVector(&dir);
                nlUnitVector(&target);
                d = _builtin_fabsf(nlInnerProduct(&dir, &target));
                if (0.899999976f > d)
                    I(0x88) = 2;
                else if (0.949999988f > d)
                    I(0x88) = 1;
            }
        } else {
            if (I(0x114) == 0) {
                I(0xBC) = 1;
                I(0x114) = -180;
            }
            I(0x114)--;
            I(0x88) = 6;
        }
    }

    v = SPEED_TABLE[*LINES[I(0x80)].flags & 0xF];               /* the line's speed, then the state's */
    switch (I(0x88)) {
    case 1: if (v > 2.08333349f) v = 2.08333349f; break;
    case 2: if (v > TURN) v = TURN; I(0x114) = 0; break;
    case 3: v = 0.694444537f; I(0x114) = 0; break;
    case 4:
    case 5: v = 0.0f; I(0x114) = 0; break;
    case 6: v = -0.694444537f; break;
    }
    if (I(0x84) & 2) {                                          /* in a hurry */
        if (I(0x84) & 0x8000 || I(0x88) == 0)
            v = v * 1.29999995f > 4.62963009f ? v * 1.29999995f : 4.62963009f;
        else if (I(0x88) <= 2)
            v *= 2.5f;
    }

    F(0xC8) = 0.0f;
    d = _builtin_fabsf(v - F(0xCC));
    if (v == 0.0f) {
        F(0xC4) = 0.0f;
        F(0xC8) = d > TURN ? F(0xD0) * 2.0f : F(0xD0);
    } else if (v > 0.0f) {
        if (F(0xCC) > v) {
            if (0.694444537f > d) {
                F(0xC4) *= 0.5f;
            } else {
                F(0xC4) = 0.0f;
                if (d > TURN)
                    F(0xC8) = F(0xD0) * 0.5f;
            }
        } else if (F(0xD0) * 2.0f > F(0xC4)) {
            F(0xC4) += 0.000999999931f > F(0xD0) * 0.0299999993f ? F(0xD0) * 0.0299999993f : 0.000999999931f;
        }
        if (F(0xC4) > F(0xD0) * 2.0f)
            F(0xC4) = F(0xD0);
    } else if (0.0f > v) {
        if (0.694444537f > d)
            F(0xC4) -= 0.000999999931f > F(0xD0) * 0.0299999993f ? F(0xD0) * 0.0299999993f : 0.000999999931f;
        else
            F(0xC4) = 0.0f;
    }

    if (800.0f > F(0x2C)) {                                     /* close to the player: the horn after a long wait */
        if (v != 0.0f)
            I(0x120) = 0;
        else if (I(0x120)++ == 120)
            Sound_Request(HORN_TABLE[I(0x78) & 3], 2);
        else if (I(0x120) > (nlRand() & 0xF) + 0xF0)
            I(0x120) = 0x78;
    }
}
