/* PutCourse_CheckPiece: whether a course piece is near enough to draw, by the grid the camera is in. Written from the Dreamcast
   code (the Android port inlines it in PutCourse). Each grid range has its own draw distance, with exceptions for pieces seen
   from far away. pt is not read. */

#define CAR(o)          (*(int *)(0x0C1790CC + (o)))
#define CAR_F(o)        (*(float *)(0x0C1790CC + (o)))
#define AREA            (*(int *)0x0C2A6EBC)
#define IN(v, lo, hi)   ((v) >= (lo) && (v) <= (hi))

int CheckAreaGrid(int, int);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
int PutCourse_CheckPiece(int n, int g, int type, int pt, float d, float sx, float r)
{
    int cg, k;

    if (IN(g, 0, 25))
        return 3000.0f > d;
    if (IN(g, 26, 50)) {
        if (type == 1)
            return IN(g, 42, 45) ? 4200.0f > d : 3000.0f > d;
        return IN(g, 43, 49) ? 4000.0f > d : 3000.0f > d;
    }
    if (IN(g, 58, 78)) {
        if (type != 0)
            return 3000.0f > d;
        if (n == 35 && 4500.0f > d)
            return 1;
        if (IN(n, 51, 53) || n == 28)
            return 4000.0f > d;
        return 3000.0f > d;
    }
    if (IN(g, 80, 95))
        return 2500.0f > d;
    if (IN(g, 107, 137))
        return IN(n, 69, 71) && type == 0 ? 3500.0f > d : 2500.0f > d;
    if (IN(g, 138, 159)) {
        if (type == 0)
            return n == 95 || n == 96 || n == 98 || n == 100 || n == 104 || n == 110 || n == 116 ? 7000.0f > d : 4100.0f > d;
        return n == 108 || n == 110 ? 6000.0f > d : 3000.0f > d;
    }
    if (IN(g, 160, 204)) {
        if (type != 0) {
            if (n == 115 && 3000.0f > d)
                return 1;
            return 2500.0f > d;
        }
        if (n == 0x8D || n == 0x8E || n == 0x84)
            return 4500.0f > d;
        if (n == 0x85)
            return 5500.0f > d;
        if (g < 0xB5)
            return 3000.0f > d;
        if (g >= 0xBD && n == 0x97)
            return 3800.0f > d;
        if (n == 0x91 || IN(n, 0x93, 0x95))
            return 3700.0f > d;
        return 3000.0f > d;
    }
    if (IN(g, 0xCD, 0xEE)) {
        if (g == 0xE1 && CAR(0x60) == 0xF4 && type == 1 && 3000.0f > d && -500.0f > CAR_F(0x7C))
            return 1;
        if (type == 1)
            return 0;
        return 4500.0f > d;
    }
    if (IN(g, 0xEF, 0x10B)) {
        if (g == 0xF3 && CAR(0x60) == 0xE1 && type == 1 && -500.0f > CAR_F(0x7C))
            return 1;
        if (type == 0 && g <= 0xF4)
            return IN(g, 0xF0, 0xF1) && n == 0x99 ? 6000.0f > d : 4500.0f > d;
        if (!(3000.0f > d))
            return 0;
        if (g != 0xF4 && CAR(0x60) != 0xF4 || type != 1)
            return 1;
        return -500.0f > CAR_F(0x7C);
    }
    if (IN(g, 0x10C, 0x13A))
        return 3500.0f > d;
    if (IN(g, 0x13B, 0x14E))
        return 3000.0f > d;
    cg = CAR(0x60);
    if (IN(g, 0x14F, 0x162) || cg == 0x147 || cg == 0x148) {
        if (cg == 0x147 || cg == 0x148) {                       /* the camera's grid is the tunnel's: which area it is in */
            k = CheckAreaGrid(0x0C1790CC + 0x78, AREA);
            if (k != -1)
                AREA = k;
            if (AREA == 23 || AREA == 22)
                return 1;
        }
        if (IN(g, 0x156, 0x15B)) {
            if ((IN(n, 0xDC, 0xDE) || n == 0xE0) && type == 0 && 4500.0f > d)
                return 1;
            if (n == 0xCF && type == 1)
                return 1;
        }
        return 2500.0f > d;
    }
    if (IN(g, 0x163, 0x182)) {
        if (IN(g, 0x16E, 0x177) && 2000.0f > d)
            return 1;
        if (type == 0 && n == 0xEB)
            return 3500.0f > d;
        return 800.0f > _builtin_fabsf(sx) - r && 2800.0f > d;
    }
    return 3000.0f > d;
}
