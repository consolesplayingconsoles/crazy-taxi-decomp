/* replayChangeControl: the attract-mode replay, written from the shape of the Android port's function and the Dreamcast code
   (which adds a debug editor the port does not have). */

typedef struct { float x, y, z; } NLpoint3;

typedef struct {                /* one change point of an attract replay, 32 bytes */
    int frame;                  /* the frame it starts at */
    int camChgOnly;             /* 1: only the camera changes */
    int startCar;               /* recorded car data slot */
    int cam;                    /* camera: 0 default, -1 default in mode 7, else the camera to use */
    int psg;                    /* passenger: 23 and up start one */
    int point;                  /* course point */
    int psgArg;
    unsigned int psgArg2;
} ReplayChange;

typedef struct { int type; char data[956]; } RecCarData;          /* 960 bytes */
typedef struct { int w[239]; } CarDataWords;                       /* the 956 bytes of the car data */
typedef struct { char s[2][32]; } MenuNames;                        /* the debug editor's page names */
typedef struct { int n[2]; } MenuRows;                              /* its rows per page */

#define CAR_TYPE        (*(int *)0x0C179488)
#define SAVED_CAR_TYPE  (*(int *)0x0C0F4568)
#define SAVED_STAGE     (*(int *)0x0C0F456C)
#define STAGE           (*(unsigned char *)0x0C1EE35C)
#define INTR_COUNTER    (*(int *)0x0C1EE33C)
#define LAST_FRAME      (*(int *)0x0C2A62A0)
#define CHANGE_NO       (*(int *)0x0C0F4570)
#define DATA_NO         (*(int *)0x0C0F4574)
#define DBG_PAGE        (*(int *)0x0C0F4578)
#define DBG_ROW         (*(int *)0x0C0F457C)
#define DBG_EDIT        (*(int *)0x0C0F4580)
#define ENDING_FLAG     (*(int *)0x0C2A4E50)
#define CYCLE_ADV_FLAG  (*(int *)0x0C2A4E54)
#define REC_CAR_DATA    (*(RecCarData **)0x0C2A62A8)
#define COURSE_POINTS   (*(NLpoint3 **)0x0C2A62AC)
#define CAR_DATA        (*(CarDataWords *)0x0C1790CC)
#define CAM_POS         0x0C179840
#define PAD_HELD        (*(int *)0x0C1EE280)
#define PAD             (*(int *)0x0C1EE284)
#define FRAME_COUNT     (*(int *)0x0C1EE330)

int gdc_CoursePointLoadReq(NLpoint3, float);
int gdc_CourseAdvLoadReq(int, int, int);
int SetAdvCamera(int, int);
int camSetMode(int);
int camSnapToCar(int);
int Initialize_Replay_Part(void);
int EndPsg_ClearIpBuff(void);
int EndPsg_Start(int, int, int, int);
int nlRand(void);
int replay(int);
int setReplayType(int);
int getGoiToolFlag(int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlSetTranslate(int);
int nlRotateAY(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);

/* the car data of a slot into the car, keeping the five words that belong to the running car */
static void loadCarData(int slot)
{
    int k0 = *(int *)0x0C1790F4, k1 = *(int *)0x0C1790F8, k2 = *(int *)0x0C179138, k3 = *(int *)0x0C17913C, k4 = *(int *)0x0C179140;

    CAR_DATA = *(CarDataWords *)REC_CAR_DATA[slot].data;
    *(int *)0x0C1790F4 = k0;
    *(int *)0x0C1790F8 = k1;
    *(int *)0x0C179138 = k2;
    *(int *)0x0C17913C = k3;
    *(int *)0x0C179140 = k4;
}

/* a value moved by the pad: up adds one below max, down takes one above 0 */
static int step(int v, int up, int down, int max)
{
    return v + (up && v < max) - (down && v > 0);
}

/* manual: written by hand from the Android port's shape and the Dreamcast code; tools must not regenerate it */
int replayChangeControl(int mode)
{
    MenuNames names;
    MenuRows rows;
    ReplayChange *tab, *rec;
    int count, in, i, n;

    names = *(MenuNames *)0x0C0C3364;                           /* "replayADV ", "recCarData" */
    rows = *(MenuRows *)0x0C0C33A4;                             /* 5, 3 */

    if (mode == -2) {
        SAVED_CAR_TYPE = CAR_TYPE;
        STAGE = 1;
        SAVED_STAGE = 1;
        return 0x0C1EE35C;
    }
    if (mode == -1) {
        CAR_TYPE = SAVED_CAR_TYPE;
        STAGE = SAVED_STAGE;
        INTR_COUNTER = 0;
        LAST_FRAME = 0;
        CHANGE_NO = 0;
        return 0x0C1EE33C;
    }
    if (mode == 1)
        tab = (ReplayChange *)0x0C0F2B40;
    else if (mode == 2)
        tab = (ReplayChange *)0x0C0F3040;
    else if (mode == 3)
        tab = (ReplayChange *)(*(int *)0x0C1EE20C ? 0x0C0F3A40 : 0x0C0F3540);
    count = 40;
    *(int *)0x0C0F2B3C = ENDING_FLAG == 1 && CHANGE_NO > 0 && CHANGE_NO <= 11;

    if (getGoiToolFlag(0x2000)) {
        in = *(int *)0x0C2A4E58 >= 30 ? PAD_HELD : PAD;
        DBG_EDIT = step(DBG_EDIT, in & 0x80, in & 0x40, 1);
        if (!DBG_EDIT) {
            DBG_ROW = step(DBG_ROW, in & 0x20, in & 0x10, rows.n[DBG_PAGE] - 1);
        } else if (DBG_PAGE == 0) {
            rec = tab + CHANGE_NO;
            switch (DBG_ROW) {
            case 0: DBG_PAGE = step(DBG_PAGE, in & 0x10, in & 0x20, 1); break;
            case 1: CHANGE_NO = step(CHANGE_NO, in & 0x10, in & 0x20, count - 1); break;
            case 2: rec->camChgOnly = step(rec->camChgOnly, in & 0x10, in & 0x20, 1); break;
            case 3: rec->startCar = step(rec->startCar, in & 0x10, in & 0x20, 59); break;
            case 4: rec->frame = step(rec->frame, in & 0x10, in & 0x20, *(int *)0x0C0F2B2C - 1); break;
            }
        } else if (DBG_PAGE == 1) {
            switch (DBG_ROW) {
            case 0: DBG_PAGE = step(DBG_PAGE, in & 0x10, in & 0x20, 1); break;
            case 1: CAR_TYPE = step(CAR_TYPE, in & 0x10, in & 0x20, 7); break;
            case 2:
                DATA_NO = step(DATA_NO, in & 0x10, in & 0x20, 59);
                if (PAD & 0x10000) {
                    REC_CAR_DATA[DATA_NO].type = CAR_TYPE;
                    *(CarDataWords *)REC_CAR_DATA[DATA_NO].data = CAR_DATA;
                }
                break;
            }
        }

        if (PAD & 0x200 || PAD & 0x20000) {                       /* apply: play from the chosen point */
            if (DBG_PAGE == 0) {
                if (mode == 1)
                    setReplayType(1);
                else if (mode == 2)
                    setReplayType(2);
                rec = tab + CHANGE_NO;
                LAST_FRAME = INTR_COUNTER = rec->frame;
                CAR_TYPE = REC_CAR_DATA[rec->startCar].type;
            } else if (DBG_PAGE == 1) {
                setReplayType(0);
                INTR_COUNTER = 0;
                LAST_FRAME = 0;
            }
            STAGE = 1;
            replay(PAD & 0x200 ? 3 : 2);
            Initialize_Replay_Part();
            if (DBG_PAGE == 0)
                loadCarData(tab[CHANGE_NO].startCar);
            SetAdvCamera(CAM_POS, 0);
            camSetMode(0);
            return 1;
        }

        if (DBG_PAGE == 0)
            for (i = 0, rec = tab; i < count; i++, rec++)
                if (LAST_FRAME == rec->frame - 1 && rec->camChgOnly == 0) {
                    replay(4);
                    camSetMode(7);
                }
        *(int *)0x0C1EE240 -= 1;
        nlLocate(30, 55);
        nlPrintf(0x0C0C33AC, names.s[DBG_PAGE], *(int *)0x0C0F2B28);
        if (DBG_PAGE == 0) {
            rec = tab + CHANGE_NO;
            nlPrintf(0x0C0C33B8, CHANGE_NO);
            nlPrintf(0x0C0C33CC, rec->camChgOnly);
            nlPrintf(0x0C0C33E0, rec->startCar, REC_CAR_DATA[rec->startCar].type);
            nlPrintf(0x0C0C3400, LAST_FRAME, LAST_FRAME - rec->frame, rec->frame,
                     CHANGE_NO + 1 < count ? rec[1].frame : *(int *)0x0C0F2B2C);
        } else if (DBG_PAGE == 1) {
            nlPrintf(0x0C0C3420, CAR_TYPE);
            nlPrintf(0x0C0C3434, DATA_NO, REC_CAR_DATA[DATA_NO].type);
            nlPrintf(0x0C0C3454, 0x3BC);
        }
        if (!DBG_EDIT || FRAME_COUNT & 8) {
            nlLocate(30, DBG_ROW + 55);
            nlPrintf(0x0C0C3228);
        }
        nlPushUnitMatrix();
        nlSetTranslate((int)COURSE_POINTS + 0x84);
        nlRotateAY(FRAME_COUNT << 6);
        nlObjPutUseViewMatrix(0x0C5ACFB0);
        nlPopMatrix(1);
        return 0;
    }

    if (*(int *)0x0C0F2B20 & 1) {                                 /* paused */
        if (LAST_FRAME == 0)
            *(int *)0x0C0F2B24 = 1;
        return 0;
    }
    if (LAST_FRAME == 0)
        INTR_COUNTER = 0;
    if (CHANGE_NO == 0 && ENDING_FLAG == 1 && (*(int *)0x0C2AD010 == 0 || *(int *)0x0C2AD010 == 10))
        *(int *)0x0C179120 = 1;

    rec = tab + CHANGE_NO;
    if (ENDING_FLAG == 1) {
        *(int *)0x0C1790C8 = 3;
        if (INTR_COUNTER >= rec->frame - 200)
            gdc_CoursePointLoadReq(COURSE_POINTS[rec->point], CHANGE_NO == 11 ? 850.0f : 450.0f);
        if (INTR_COUNTER >= rec->frame - 150)
            gdc_CoursePointLoadReq(COURSE_POINTS[rec->point], CHANGE_NO == 11 ? 1700.0f : 900.0f);
    } else {
        gdc_CourseAdvLoadReq((int)REC_CAR_DATA, (int)rec, CHANGE_NO);
    }
    if (INTR_COUNTER < rec->frame)
        return 0;

    CHANGE_NO++;
    if (rec->camChgOnly == 1) {                                    /* only the camera changes */
        if (rec->cam == 0) {
            SetAdvCamera(CAM_POS, 0);
            camSetMode(0);
        } else {
            SetAdvCamera(CAM_POS, rec->cam);
        }
        return 0;
    }

    LAST_FRAME = rec->frame;
    if (ENDING_FLAG == 0)
        CAR_TYPE = REC_CAR_DATA[rec->startCar].type + (CYCLE_ADV_FLAG ? 4 : 0);
    STAGE = 1;
    Initialize_Replay_Part();
    loadCarData(rec->startCar);
    camSnapToCar(0);
    if (rec->cam == 0) {
        SetAdvCamera(CAM_POS, 0);
        camSetMode(0);
    } else if (rec->cam == -1) {
        SetAdvCamera(CAM_POS, 0);
        camSetMode(7);
    } else {
        SetAdvCamera((int)&COURSE_POINTS[rec->point], rec->cam);
    }

    if (rec->psg >= 23) {                                          /* a passenger */
        EndPsg_ClearIpBuff();
        n = rec->psg;
        if (*(int *)0x0C1EE234 == 0) {
            if (CHANGE_NO == 6)
                n += *(unsigned char *)(0x0C1789C4 + 0x12);
            else if (CHANGE_NO == 22)
                n += *(unsigned char *)(0x0C1789C4 + 0x11);
            else
                n += nlRand() % 31;
        }
        EndPsg_Start(n, rec->point, rec->psgArg, rec->psgArg2);
    }
    return 1;
}
