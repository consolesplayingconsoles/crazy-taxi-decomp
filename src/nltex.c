/* The NAOMI library's common textures (libnaomi: nlLoadTextureMem, nlSetTextureParameter, nlCreateTextureParam), the layer
   under nlObjPutLoadTexture. Names from the SDK's libnaomi (its name offsets, laid so that nlSetTextureParameter falls at
   0C073E00, meet the names already known here). A surface is 60 bytes (15 words) in the table at *g_0c2b29c0: Kamui's surface
   at +0 (filled by kmCreateTextureSurface), +40 kmCreateTextureSurface's result (not 0: the surface failed), +48 the TSP bits
   (the texture's U and V size) and +52 the texture control word that nlCreateTextureParam works out for it. */

extern int *g_0c2b29c0;
extern int g_0c2b317c;
extern int g_0c2aec8c[];
extern int (*g_0c14a640)(short *thd);
extern int g_0c2b29c4;
extern int g_0c2b3184;
#define LOAD_BITS       (*(unsigned int **)0x0C2AEC88)   /* nl_texture_loadbit: a set bit, a surface index in use */
#define LOAD_WORDS      (*(int *)0x0C14A63C)             /* its length in words */

int kmCreateTextureSurface(int *s, int w, int h, int type);
void kmLoadTexture(int *s, int data, int a, int b);
void nlCreateTextureParamA(int *s);
void kmFreeTexture(int *s);

/* Creates surface i for the texture header thd (width, height, then the Kamui texture type) and loads its data. The load
   callback (nlCommonTextureSetLoadCallBack), when set, may give another data address. 1 when Kamui refused the surface. */
int nlLoadTextureMem(short *thd, int i, int data)
{
    int *s = g_0c2b29c0 + i * 15;
    int r;

    g_0c2b317c++;
    r = kmCreateTextureSurface(s, thd[0], thd[1], *(int *)(thd + 2));
    s[10] = r;
    if (r)
        return 1;
    if (g_0c14a640) {
        r = g_0c14a640(thd);
        if (r)
            data = r;
    }
    kmLoadTexture(g_0c2b29c0 + i * 15, data, 0, 0);
    return 0;
}

/* A record's TSP and texture control word (p[2], p[3]) from surface i: the TSP keeps all but its U and V size. */
void nlSetTextureParameter(int *p, int i)
{
    int *s = g_0c2b29c0 + i * 15;

    p[2] = (p[2] & -64) | s[12];
    p[3] = s[13];
}

/* Surface i's TSP bits and control word: worked out from the surface (nlCreateTextureParamA), or the dummy texture's when
   Kamui refused it. A refused texture is drawn with the dummy texture, never left out. */
void nlCreateTextureParam(int i)
{
    int *s = g_0c2b29c0 + i * 15;

    if (!s[10]) {
        nlCreateTextureParamA(s);
        return;
    }
    s[12] = g_0c2aec8c[12];
    s[13] = g_0c2aec8c[13];
}

/* The texture number offset the slot table is read with (nlObjPutLoadTexture adds it to every number). */
void nlSetCommonTextureOffset(int ofs)
{
    g_0c2b3184 = ofs;
}

/* A free surface index: the first clear bit of the bitmap, now set; -1 when all are in use. */
int nlCommonTextureGetNextTextureIndex(void)
{
    int w, b;
    unsigned int m;

    for (w = 0; w < LOAD_WORDS; w++) {
        if (LOAD_BITS[w] != 0xFFFFFFFF) {
            for (b = 0, m = 1; LOAD_BITS[w] & m; b++, m <<= 1)
                ;
            LOAD_BITS[w] |= m;
            return w * 32 + b;
        }
    }
    return -1;
}

/* Surface index i free again (an index below 0 is ignored). */
void nlCommonTextureClearTextureIndex(int i)
{
    if (i >= 0)
        LOAD_BITS[i >> 5] &= ~(1 << (i & 31));
}

/* Frees every surface Kamui made and in use, then marks them all empty; the texture number offset and the load count go
   back to 0. */
void nlFreeTextureAll(void)
{
    int *s = g_0c2b29c0;
    int i;

    for (i = 0; i < g_0c2b29c4; i++, s += 15)
        if (s[11] && !s[10])
            kmFreeTexture(s);
    for (i = 0, s = g_0c2b29c0; i < g_0c2b29c4; i++, s += 15) {
        s[10] = -1;
        s[11] = 0;
        s[14] = -1;
    }
    g_0c2b3184 = 0;
    g_0c2b317c = 0;
}
