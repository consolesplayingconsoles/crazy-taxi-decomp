/* Course collision lookups: GetCollision2D. */

extern float nlFloor(float x);

/* Is pos over the surface e, and at what height? e: the plane (a, b, c, d: a*x + b*y + c*z + d = 0, so y =
   -(a*x + c*z + d) / b), a radius at +16 that the first corner must be within, and four corners (x, y, z at +20, +32,
   +44, +56); the point must be on the inner side of each edge (cross products of the corner offsets, not negative).
   Kind 3 (+72) skips the first edge and takes the second corner for the last one. On a hit the height goes to
   *height and 1 comes back, else 0. */
int FUN_0c032080(float *pos, float *e, float *height)
{
    float x = pos[0];
    float z = pos[2];
    float dx0 = e[5] - x;
    float dz0 = e[7] - z;
    float dx1, dz1, dx2, dz2, dx3, dz3, fx, fz;

    if (dz0 * dz0 + dx0 * dx0 > e[4] * e[4]) {
        return 0;
    }
    dx1 = e[8] - x;
    dz1 = e[10] - z;
    if (((int *)e)[18] == 3) {
        fx = dx1;
        fz = dz1;
    } else {
        if (0.0f > dx0 * dz1 - dz0 * dx1) {
            return 0;
        }
        fx = dx0;
        fz = dz0;
    }
    dx2 = e[11] - x;
    dz2 = e[13] - z;
    if (0.0f > dx1 * dz2 - dz1 * dx2) {
        return 0;
    }
    dx3 = e[14] - x;
    dz3 = e[16] - z;
    if (0.0f > dz3 * dx2 - dx3 * dz2) {
        return 0;
    }
    if (0.0f > fz * dx3 - fx * dz3) {
        return 0;
    }
    *height = (-(e[0] * pos[0]) - e[2] * pos[2] - e[3]) / e[1];
    return 1;
}

/* The ground under pos (x y z; a column of the course's grid, `tol` is how far above the best floor a higher surface
   may still be taken). Looks the grid cell up, asks every surface in it (FUN_0c032080, which gives the height above
   pos; kind 13 is skipped) and picks the highest one not above pos.y, or when none is below, the lowest; a surface
   within `tol` above the pick is taken in turn. Returns the result at 0C26E478: x, height, z, the surface's first
   three words (its normal) at +12 and its kind at +28 (-1: nothing there). */
float *GetCollision2D(float *pos, float tol)
{
    int *g = (int *)0x0C26E3F4;
    float *res = (float *)0x0C26E478;
    float *hts = (float *)0x0C26E4C0;
    int *ents = (int *)0x0C26E498;
    int cx, cz, idx, n, k, best, belowi, j;
    float hbelow, hlow, h;
    int *cell, *lst, *e;

    cx = (int)nlFloor(pos[0] / *(float *)(g + 7));
    cz = (int)nlFloor(pos[2] / *(float *)(g + 7));
    cx -= g[0];
    cz -= g[1];
    idx = cz * g[4] + cx;
    if (idx < 0 || idx >= g[6] || ((int *)*(int *)0x0C26E3F0)[idx] == 0) {
        *(int *)0x0C26E494 = -1;
        return res;
    }
    cell = (int *)((int *)*(int *)0x0C26E3F0)[idx];
    lst = cell + 3;
    n = *(short *)((char *)cell + 10);
    hbelow = -3.4028234663852886e+38f;
    hlow = 3.4028234663852886e+38f;
    best = -1;
    belowi = 0;
    k = 0;
    while (n != 0) {
        e = (int *)*lst;
        lst++;
        if (e[17] != 13) {
            if (FUN_0c032080(pos, (float *)e, &h)) {
                if (h > hbelow) {
                    if (!(h > pos[1])) {
                        hbelow = h;
                        belowi = k;
                    }
                    if (hlow > h) {
                        best = k;
                        hlow = h;
                    }
                    ents[k] = (int)e;
                    hts[k] = h;
                    k++;
                }
            }
        }
        n--;
    }
    if (k == 0) {
        *(int *)0x0C26E494 = -1;
        return res;
    }
    if (hlow > hbelow) {
        belowi = best;
    } else {
        best = belowi;
        hlow = pos[1];
    }
    for (;;) {
        for (j = k - 1; j >= 0; j--) {
            if (hts[j] > hlow && !(hts[j] > tol + hlow)) {
                best = j;
                hlow = hts[j];
            }
        }
        if (best == belowi) {
            break;
        }
        belowi = best;
    }
    res[0] = pos[0];
    res[1] = hts[best];
    *(float *)0x0C26E490 = hts[best];
    res[2] = pos[2];
    *(float *)0x0C26E484 = *(float *)ents[best];
    *(float *)0x0C26E488 = ((float *)ents[best])[1];
    *(float *)0x0C26E48C = ((float *)ents[best])[2];
    *(int *)0x0C26E494 = ((int *)ents[best])[17];
    return res;
}

/* What FUN_0c031c5a fills in: the surface it met, how deep the point is past it, and how much of the move
   (a fraction of the vector) it got before it. t goes in as the fraction still left. */
typedef struct {
    int *e;
    float g;
    float t;
} Hit;

extern int FUN_0c031c5a(float *a, float *b, Hit *hit, float radius);

/* Moves the point a along the vector b through the course's walls, sliding along each surface it meets, with
   `rest` the bounce (a surface kind's first float at 0C08F748 + 28 * kind scales it) and `radius` the point's size.
   Each hit adds its fraction to the point and takes the surface's normal part off the vector. Results at
   0C26E414: the first hit's position (+0), normal (+12), fraction (+24) and kind (+28, -1: none); at 0C26E434: the
   last hit's position, normal (+12), fraction left (+24) and kind (+28); 0C26E454: a bit for each kind met. a
   gets the end point and b the vector left. */
float *GetCollision(float *a, float *b, float rest, float radius)
{
    float mv[3];
    float pos[3];
    Hit hit;
    float remaining = 1.0f;
    float f, g;
    int k = 0;
    int mask = 0;
    int kind;

    mv[0] = b[0];
    mv[1] = b[1];
    mv[2] = b[2];
    pos[0] = a[0];
    pos[1] = a[1];
    pos[2] = a[2];
    hit.t = 1.0f;
    while (FUN_0c031c5a(pos, mv, &hit, radius)) {
        f = hit.t;
        pos[0] = pos[0] + f * mv[0];
        pos[1] = pos[1] + f * mv[1];
        pos[2] = pos[2] + f * mv[2];
        kind = hit.e[17];
        g = hit.g * (1.0f + *(float *)(0x0C08F748 + kind * 28) * rest);
        mv[0] = mv[0] + (-g) * ((float *)hit.e)[0];
        mv[1] = mv[1] + (-g) * ((float *)hit.e)[1];
        mv[2] = mv[2] + (-g) * ((float *)hit.e)[2];
        if (k == 0) {
            *(float *)0x0C26E414 = pos[0];
            *(float *)0x0C26E418 = pos[1];
            *(float *)0x0C26E41C = pos[2];
            *(float *)0x0C26E420 = ((float *)hit.e)[0];
            *(float *)0x0C26E424 = ((float *)hit.e)[1];
            *(float *)0x0C26E428 = ((float *)hit.e)[2];
            *(float *)0x0C26E42C = f;
            *(int *)0x0C26E430 = kind;
        }
        remaining = remaining - f;
        hit.t = remaining;
        mask |= 1 << hit.e[17];
        k++;
    }
    if (k != 0) {
        *(float *)0x0C26E434 = pos[0];
        *(float *)0x0C26E438 = pos[1];
        *(float *)0x0C26E43C = pos[2];
        *(float *)0x0C26E440 = ((float *)hit.e)[0];
        *(float *)0x0C26E444 = ((float *)hit.e)[1];
        *(float *)0x0C26E448 = ((float *)hit.e)[2];
        *(float *)0x0C26E44C = hit.t;
        *(int *)0x0C26E450 = hit.e[17];
        f = hit.t;
    } else {
        *(int *)0x0C26E450 = -1;
        *(int *)0x0C26E430 = -1;
        f = 1.0f;
    }
    pos[0] = pos[0] + f * mv[0];
    pos[1] = pos[1] + f * mv[1];
    pos[2] = pos[2] + f * mv[2];
    a[0] = pos[0];
    a[1] = pos[1];
    a[2] = pos[2];
    b[0] = mv[0];
    b[1] = mv[1];
    b[2] = mv[2];
    *(int *)0x0C26E454 = mask;
    return (float *)0x0C26E414;
}

/* The first thing the move a -> a + b meets (radius): the point where it does at 0C26E458, the surface's normal
   at +12, the fraction of the move at +24 and the surface kind at +28 (-1: nothing met). */
float *GetCollisionFirst(float *a, float *b, float radius)
{
    Hit hit;
    float t;

    hit.t = 1.0f;
    if (!FUN_0c031c5a(a, b, &hit, radius)) {
        *(int *)0x0C26E474 = -1;
        return (float *)0x0C26E458;
    }
    t = hit.t;
    *(float *)0x0C26E458 = a[0] + t * b[0];
    *(float *)0x0C26E45C = a[1] + t * b[1];
    *(float *)0x0C26E460 = a[2] + t * b[2];
    *(float *)0x0C26E464 = ((float *)hit.e)[0];
    *(float *)0x0C26E468 = ((float *)hit.e)[1];
    *(float *)0x0C26E46C = ((float *)hit.e)[2];
    *(float *)0x0C26E470 = t;
    *(int *)0x0C26E474 = hit.e[17];
    return (float *)0x0C26E458;
}

extern float nlScalor(float *v);
extern void nlPushUnitMatrix(void);
extern void FUN_0c078de0(float *v, float *out);
extern void nlRotateV(float *v, float *m);
extern void FUN_0c0789c0(float *p);
extern void FUN_0c032432(float *a, float *b);
extern float nlLength(float *a, float *b);
extern int FUN_0c031d62(float *q, int *entry, Hit *hit);
extern void nlPopMatrix(int n);

/* The query FUN_0c031d62 gets: the move's start, the vector, the point's radius, the vector's length and the radius
   plus the length (how far from the start a surface can still be touched). */
typedef struct {
    float pos[3];
    float mv[3];
    float radius;
    float len;
    float reach;
} Query;

/* Finds what the move a -> a + b (radius) meets: it walks the grid cells on the move's way (up to 10, the list at
   0C26E3A0 with the distances to each cell's far side at 0C26E3C8), tests every surface near enough with
   FUN_0c031d62 (which keeps the earliest hit in *hit) and stops when the hit found is nearer than the next cell.
   0 when the move is zero, else a mask of what was found. */
int FUN_0c031c5a(float *a, float *b, Hit *hit, float radius)
{
    Query q;
    float v[3];
    int **cur = (int **)0x0C26E3A0;
    float *lim = (float *)0x0C26E3C8;
    int *cell;
    int **p;
    int *e;
    float len, t0;
    int k, n, mask;

    len = nlScalor(b);
    if (len == 0.0f) {
        return 0;
    }
    q.pos[0] = a[0];
    q.pos[1] = a[1];
    q.pos[2] = a[2];
    q.mv[0] = b[0];
    q.mv[1] = b[1];
    q.mv[2] = b[2];
    q.len = len;
    q.reach = radius + len;
    q.radius = radius;
    nlPushUnitMatrix();
    FUN_0c078de0(b, v);
    nlRotateV(v, (float *)0x0C08DA58);
    FUN_0c0789c0(a);
    FUN_0c032432(a, b);
    t0 = hit->t;
    mask = 0;
    for (k = 0; k < 10; k++) {
        cell = *cur;
        cur++;
        if (cell == 0) {
            break;
        }
        n = *(short *)((char *)cell + 8);
        for (p = (int **)((char *)cell + 12); n != 0; n--, p++) {
            e = *p;
            if (q.reach + ((float *)e)[4] > nlLength(a, (float *)((char *)e + 20))) {
                mask |= FUN_0c031d62((float *)&q, e, hit);
            }
        }
        if (!(hit->t > *lim * t0)) {
            break;
        }
        lim++;
    }
    nlPopMatrix(1);
    return mask;
}
