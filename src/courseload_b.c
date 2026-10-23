/* gdc_CourseStartLoadReq: ask for the course pieces around the start, by course mode. Written by hand from the Android port's
   signatures (gdc_CourseStartLoadReq(), gdc_CoursePointLoadReq(tagNLpoint3, float)) and the Dreamcast code: the point goes on the
   stack by value. */

typedef struct { float x, y, z; } NLpoint3;

#define COURSE_MODE     (*(int *)0x0C1EE20C)
#define MINIGAME_NO     (*(int *)0x0C1EE214)
#define REVERSE_MODE    (*(int *)0x0C17948C)
#define MG_FIRST        ((int *)0x0C0C835C)
#define MG_COUNT        (*(int **)0x0C1244E8)

int gdc_CoursePointLoadReq(NLpoint3, float);
int gdc_CourseReq(int, int, float);

/* manual: written by hand from the Android port and the Dreamcast code; tools must not regenerate it */
void gdc_CourseStartLoadReq(void)
{
    NLpoint3 at;
    int i;

    if (COURSE_MODE == 0) {                                     /* a spline course */
        at.x = 375.0f;
        at.y = 1504.0f;
        at.z = 1696.0f;
        gdc_CoursePointLoadReq(at, 2000.0f);
    } else if (COURSE_MODE == 1) {                              /* the city, from either end */
        if (REVERSE_MODE != 1) {
            at.x = 288.459991f;
            at.y = 2304.11987f;
            at.z = 4535.48975f;
        } else {
            at.x = -1087.70996f;
            at.y = 102.079994f;
            at.z = -6556.45996f;
        }
        gdc_CoursePointLoadReq(at, 1700.0f);
    } else if (COURSE_MODE == 2) {                              /* a mini game: its own pieces */
        for (i = MG_FIRST[MINIGAME_NO]; i < MG_COUNT[MINIGAME_NO] + MG_FIRST[MINIGAME_NO]; i++)
            gdc_CourseReq(i, 0, 0.0f);
    }
}
