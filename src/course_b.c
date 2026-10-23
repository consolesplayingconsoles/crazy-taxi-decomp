/* PutCourse: the course pieces to draw this frame, written from the shape of the Android port's function and the Dreamcast code
   (which keeps the window and section searches as functions of their own: getPieceWindow, findSplineSection). */

typedef struct { float x, y, z; } NLpoint3;
typedef struct { float radius; NLpoint3 pos; float pad; } CoursePiece;          /* 20 bytes */

#define COURSE_MODE     (*(int *)0x0C1EE20C)
#define MINIGAME_NO     (*(int *)0x0C1EE214)
#define COURSE_NO       (*(int *)0x0C118670)
#define COURSE_A        (*(CoursePiece **)0x0C1EE800)
#define COURSE_B        (*(CoursePiece **)0x0C1EE804)
#define CAM_POS         ((NLpoint3 *)0x0C179840)
#define CAM_SP_NUM      (*(int *)0x0C2A6EC0)
#define CAR_GRID        (*(int *)(0x0C1790CC + 0x60))
#define SUBWAY_CAMERA   (*(int *)0x0C2A9D60)
#define AREA_LIST       (*(unsigned char **)0x0C2A6EC4)

int PutCourse_Sky(void);
int Put_Course_Obj_Dist(void);
int Put_Build_Patch(void);
int CourseSplineNumGet(int);
int CourseSplineGet(int);
int getNearLineIndex(int, int, int, int, int);
int findSplineSection(int, int, int);
int getPieceWindow(int, int, int, int, int, int, int, int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int getAreaFromPos(float *, int);
int CheckClipping(NLpoint3 *, float);
void nlProjectScreen3D(NLpoint3 *, float *);
float nlLength(NLpoint3 *, NLpoint3 *);
int gdc_CoursePut(int, int, float);
float nlFastSin(int);

/* one piece of a spline course: drawn when it is in the view and PutCourse_CheckPiece agrees */
static void putSplinePiece(int piece, int type)
{
    CoursePiece *p = (type ? COURSE_B : COURSE_A) + piece;
    NLpoint3 pt;
    float proj[3];
    float d;

    pt = p->pos;
    nlProjectScreen3D(&pt, proj);
    d = nlLength(&pt, CAM_POS);
    if (CheckClipping(&pt, p->radius) && PutCourse_CheckPiece(piece, CAM_SP_NUM, type, (int)&pt, d, proj[0], p->radius) == 1)
        gdc_CoursePut(piece, type, d);
}

static void setFov(void)
{
    *(float *)0x0C2A6AC8 = 1.0f / nlFastSin((((int)(*(float *)0x0C1798A4 * 32768.0f / 360.0f + 0.5f)) & 0xFFFF) + 1);
}

/* manual: written by hand from the Android port's shape and the Dreamcast code; tools must not regenerate it */
void PutCourse(void)
{
    NLpoint3 pt;
    float proj[3];
    float d, dist;
    int sec, start, w, count, k, piece, n, type, i, area, *list;
    unsigned char *pieces;

    PutCourse_Sky();
    if (COURSE_MODE == 0) {                                     /* a spline course */
        setFov();
        n = CourseSplineNumGet(0);
        getNearLineIndex(0, CourseSplineGet(0), n, 0x0C2A6EC0, (int)CAM_POS);
        sec = findSplineSection(0x0C124358, 0x0C0C8410, 0x0C2A6EC0);
        if (sec == -1)
            return;
        getPieceWindow((int)&sec, 0x0C1243F8, 0x0C0C8410, 0x0C0C8414, 0xFF, (int)&start, (int)&w, (int)&count);
        Put_Course_Obj_Dist();
        n = CAR_GRID;
        if (n <= 0x32 || (n >= 0x3A && n <= 0x4E) || (n >= 0x75 && n <= 0x7A) || (n >= 0x8A && n <= 0x17B)) {
            list = (int *)(0x0C0F4588 + (unsigned short)(n * 0x88));
            for (k = 0; list[k] != -1; k++)
                putSplinePiece(list[k], 0);
        } else {
            for (k = 0; k < count; k++)
                putSplinePiece((start + k) % 0xFF, 0);
        }
        getPieceWindow((int)&sec, 0x0C124448, 0x0C0C8410, 0x0C0C8418, 0xF0, (int)&start, (int)&w, (int)&count);
        n = CAR_GRID;
        if (n <= 0x34 || (n >= 0x96 && n <= 0x9B) || (n >= 0x9F && n <= 0xAB) || (n >= 0xCD && n <= 0x12C) || (n >= 0x14C && n <= 0x162)) {
            list = (int *)(0x0C100F68 + (unsigned short)(n * 0x88));
            for (k = 0; list[k] != -1; k++)
                putSplinePiece(list[k], 1);
        } else {
            for (k = 0; k < count; k++)
                putSplinePiece((start + k) % 0xF0, 1);
        }
        return;
    }

    if (COURSE_MODE == 1) {                                     /* the city */
        Put_Course_Obj_Dist();
        area = getAreaFromPos((float *)CAM_POS, *(int *)0x0C2A6EBC) < 0 ? 0 : getAreaFromPos((float *)CAM_POS, *(int *)0x0C2A6EBC);
        if (area == 76 || area == 77)
            Put_Build_Patch();
        AREA_LIST = (unsigned char *)0x0C111700 + area * 96;
        dist = area == 20 || area == 24 ? 2200.0f : 2500.0f;
        type = 0;
        for (i = 0; (piece = AREA_LIST[i]) != 0xFE; i++) {
            CoursePiece *p;
            float r, d2;

            if (type == 0 && piece == 0xFF) {                   /* the B pieces follow */
                type = 1;
                continue;
            }
            p = (type ? COURSE_B : COURSE_A) + piece;
            pt = p->pos;
            r = p->radius;
            nlProjectScreen3D(&pt, proj);
            d = nlLength(&pt, CAM_POS);
            d2 = nlLength(&pt, CAM_POS);
            if (dist > d2 && CheckClipping(&pt, r) && r + 1500.0f > _builtin_fabsf(proj[0])) {
                if (SUBWAY_CAMERA >= 1 && type == 0 && piece >= 9 && piece <= 28)
                    gdc_CoursePut(piece, type, d);
                if (type == 0 && piece <= 8)
                    gdc_CoursePut(piece, type, d);
                if (SUBWAY_CAMERA != 2 && (type != 0 || piece >= 29))
                    gdc_CoursePut(piece, type, d);
            }
        }
        if (area == 5 || area == 6 || area == 50 || area == 51 || area == 62 || (area >= 13 && area <= 15) ||
            (area >= 25 && area <= 28) || (area >= 36 && area <= 40)) {
            list = (int *)0x0C118600;                           /* pieces always drawn in these areas */
            for (k = 0; k < *(int *)0x0C0C8358; k++, list++)
                if (!(area >= 37 && area <= 40 && (*list == 109 || *list == 110))) {
                    pt = COURSE_A[*list].pos;
                    gdc_CoursePut(*list, 0, nlLength(&pt, CAM_POS));
                }
        }
        if (area >= 0x43 && area <= 0x46) {
            pt = ((CoursePiece *)((char *)COURSE_B + 0x8AC))->pos;
            if (CheckClipping(&pt, ((CoursePiece *)((char *)COURSE_B + 0x8AC))->radius))
                gdc_CoursePut(0x6F, 1, nlLength(&pt, CAM_POS));
        }
        return;
    }

    if (COURSE_MODE == 2) {                                     /* a mini game's grid */
        setFov();
        n = CourseSplineNumGet(0);
        getNearLineIndex(0, CourseSplineGet(0), n, 0x0C2A6EC0, (int)CAM_POS);
        Put_Course_Obj_Dist();
        n = MINIGAME_NO;
        if (n == 9) {
            for (i = 0x43; i < ((int **)0x0C1244E0)[COURSE_NO][9] + 0x43; i++) {
                pt = COURSE_A[i].pos;
                nlProjectScreen3D(&pt, proj);
                d = nlLength(&pt, CAM_POS);
                if (((float *)0x0C0C8398)[i - 67] > d && CheckClipping(&pt, COURSE_A[i].radius))
                    gdc_CoursePut(i, 0, d);
            }
        } else if (n == 0 || n == 2 || n == 3 || n == 4 || n == 5 || n == 7 || n == 8 || n == 10 || n == 11 || n == 12 || n == 14) {
            for (i = ((int *)0x0C0C835C)[n]; i < ((int **)0x0C1244E0)[COURSE_NO][n] + ((int *)0x0C0C835C)[n]; i++) {
                pt = COURSE_A[i].pos;
                nlProjectScreen3D(&pt, proj);
                d = nlLength(&pt, CAM_POS);
                if (((float *)0x0C118630)[n] > d && CheckClipping(&pt, COURSE_A[i].radius))
                    gdc_CoursePut(i, 0, d);
            }
        } else {
            pt = COURSE_A[COURSE_NO].pos;
            nlProjectScreen3D(&pt, proj);
            gdc_CoursePut(((int *)0x0C0C835C)[n], 0, 1000000.0f);
        }
    }
}
