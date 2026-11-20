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

/* Surface i's TSP bits and control word: worked out from the surface (nlCreateTextureParamA), or the dummy texture's when
   Kamui refused it. A refused texture is drawn with the dummy texture, never left out. */

/* The texture number offset the slot table is read with (nlObjPutLoadTexture adds it to every number). */

/* A free surface index: the first clear bit of the bitmap, now set; -1 when all are in use. */

/* Surface index i free again (an index below 0 is ignored). */

/* Frees every surface Kamui made and in use, then marks them all empty; the texture number offset and the load count go
   back to 0. */
