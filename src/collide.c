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
