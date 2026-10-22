/* Game functions (batch g): file stream open, texture list loads and frees. Globals are addressed directly where the
   decomp has no name for them yet. */

void nlSetCommonTextureOffset(int ofs);
int nlObjPutLoadTexture(int model, int table);
int nlDispStripLoadTexture(int id, int a);
int nlDispStripFreeTexture(int id);
unsigned int texFreeMem(void);
int ADXF_Close(int h);
int ADXF_OpenAfs(int a, int id);
int ADXF_ReadNw32(int h, int a, int b);
void gdc_FileLoad(int where, int name, int size);
void nlObjPutSetReplaceTextureDirName(int a, int b);
int gdc_CourseTexFreeOnce(int id);

#define TEX_LIST        (*(int **)0x0C0EA3D8)           /* 16-byte entries ending at one whose word 2 is -1 */

/* Opens AFS file id on drive 3 and starts reading its first 16 sectors to 0CE98000; -1 when it will not open. */
int gdc_LandmarkReq(int id)
{
    int h, r;

    if (*(int *)0x0C26E178 == 1)
        ADXF_Close(*(int *)0x0C26E174);
    h = ADXF_OpenAfs(3, id);
    *(int *)0x0C26E174 = h;
    if (!h)
        return -1;
    *(int *)0x0C26E17C = id;
    r = ADXF_ReadNw32(h, 16, 0x0CE98000);
    *(int *)0x0C26E178 = 1;
    return r;
}

/* Loads the textures of a list of models (ending at 0) from texture id 2000 on. */
void gdc_CourseObjTexLoad(int *list)
{
    nlSetCommonTextureOffset(2000);
    while (*list)
        nlObjPutLoadTexture(*list++, (int)TEX_LIST);
}

void gdc_CourseTexLoad(void)
{
    int i;

    nlSetCommonTextureOffset(2000);
    for (i = 0; TEX_LIST[i * 4 + 2] != -1; i++)
        nlDispStripLoadTexture(2000 + i, (int)TEX_LIST + i * 16);
}

/* Frees texture id until the free video memory has grown (1), at most 100 tries (0). */
int gdc_CourseTexFreeOnce(int id)
{
    unsigned int m = texFreeMem();
    int n = 100;

    do {
        nlDispStripFreeTexture(id);
        if (texFreeMem() > m)
            return 1;
        n--;
    } while (n > 0);
    return 0;
}

void gdc_CourseTexFree(void)
{
    int i;

    nlSetCommonTextureOffset(2000);
    if (TEX_LIST) {
        for (i = 0; TEX_LIST[i * 4 + 2] != -1; i++)
            gdc_CourseTexFreeOnce(2000 + i);
    }
}

void gdc_SpriteSetMBox(void)
{
    if (*(int *)0x0C26E184 != 5) {
        nlSetCommonTextureOffset(480);
        gdc_FileLoad(0x0CB40000, 0x0C08D660, 0);
        nlObjPutSetReplaceTextureDirName(0x0C1469C8, 0);
        nlSetCommonTextureOffset(0);
        *(int *)0x0C26E184 = 5;
        *(int *)0x0C0E5318 = 3;
    }
}
