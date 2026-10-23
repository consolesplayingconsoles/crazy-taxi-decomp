/* Straight-line functions with calls and guards (batch gen_iz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int nlObjPutFreeTextureOnce(void);
int gdc_CourseBlockReadNext(void);
int nlObjPutLoadTexture(int, int);
int nlSetCommonTextureOffset(int);
int gdc_CourseLoadExec(void);

int gdc_CourseLoadExec(void)
{
    int t2;
    int t3;
    int t4;
    int t16;
    int t22;
    int t30;
    int t31;
    int t32;
    int t34;
    int t51;
    int t45;
    int t46;
    int t58;
    int t65;
    int t82;
    int t76;
    int t77;
    int t0;
    int t1;
    int t14;

    t2 = 0xC26C5DC;
    t3 = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)(*(int *)((t2 + 0x10))) <= 0) {
            t0 = (*(signed char *)((t2 + 0x0)));
            t0 = (unsigned char)t0;
            if (t0 == 4) {
                *(unsigned char *)((t2 + 0x0)) = 0x0;
            }
            t1 = (*(int *)((t2 + 0xC)));
            t1 = (t1 + 0x1);
            *(unsigned int *)((t2 + 0xC)) = t1;
        }
        t0 = (*(signed char *)((t2 + 0x0)));
        t0 = (unsigned char)t0;
        if (t0 == 1) {
            t1 = (*(int *)((t2 + 0xC)));
            t1 = (t1 + 0x1);
            *(unsigned int *)((t2 + 0xC)) = t1;
            t0 = (*(int *)0xC26E0F8);
            if ((t0 != 1) && (t14 = *(int *)((t2 + 0xC)), t1 = t14, (int)t4 < (int)t1)) {
                *(unsigned int *)0xC26E0F4 = t3;
                t4 = (*(int *)((t2 + 0xC)));
            }
        }
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        t16 = *(int *)((t2 + 0x8));
        t3 = (t3 + t16);
        t3 = (t3 + 0x1);
        t2 = (t2 + (((((t16 + 0x1) << 1) + (t16 + 0x1)) << 2) << 1));
        if ((int)t3 >= (int)0x120) {
            break;
        }
    }
    if ((*(int *)0xC26E0F8) != 1) {
        if ((*(int *)0xC26E0F4) != -1) {
            *(unsigned int *)0xC26E0F8 = 0x1;
            t22 = *(int *)0xC26E0F4;
            *(unsigned char *)((((short)((((t22 << 1) + t22) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
        } else {
            *(unsigned int *)0xC26E0F8 = 0x0;
        }
    }
    t30 = *(int *)0xC26E0F8;
    if (t30 == 1) {
        t31 = *(int *)0xC26E0F4;
        t32 = *(signed char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0));
        if ((unsigned char)t32 != 2) {
            if ((unsigned char)t32 != 3) {
                return (unsigned char)t32;
            }
            t34 = ADXF_GetStat((*(int *)0xC26C5D8));
            if (t34 == 3) {
                *(unsigned int *)0xC0EA3DC = 0x0;
                *(unsigned char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x4;
                *(unsigned int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0xC)) = 0x0;
                *(unsigned int *)0xC26E0F8 = 0x2;
                ADXF_Close((*(int *)0xC26C5D8));
                nlSetCommonTextureOffset(0x7D0);
                nlObjPutLoadTexture((*(int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x14))), (*(int *)0xC0EA3D8));
                *(volatile int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x14));
                nlObjPutFreeTextureOnce();
                nlSetCommonTextureOffset(0x0);
                *(unsigned int *)0xC26E0F4 = 0xFFFFFFFF;
                return gdc_CourseBlockReadNext();
            }
            t51 = t34;
            if (t34 == 4) {
                t45 = ADXF_Close((*(int *)0xC26C5D8));
                *(unsigned char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
                t46 = *(int *)0xC0EA3DC;
                *(unsigned int *)0xC0EA3DC = (t46 + 0x1);
                if ((int)(t46 + 0x1) > (int)0xA) {
                    *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
                }
                t51 = t45;
            }
            return t51;
        }
        t58 = ADXF_OpenAfs(0x0, (*(int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x4))));
        *(unsigned int *)0xC26C5D8 = t58;
        if (t58 != 0) {
            ADXF_ReadNw32((*(int *)0xC26C5D8), (ADXF_GetFsizeSct((*(int *)0xC26C5D8))), (*(int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x14))));
            *(unsigned char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x3;
            t65 = ADXF_GetStat((*(int *)0xC26C5D8));
            if (t65 == 3) {
                *(unsigned int *)0xC0EA3DC = 0x0;
                *(unsigned char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x4;
                *(unsigned int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0xC)) = 0x0;
                *(unsigned int *)0xC26E0F8 = 0x2;
                ADXF_Close((*(int *)0xC26C5D8));
                nlSetCommonTextureOffset(0x7D0);
                nlObjPutLoadTexture((*(int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x14))), (*(int *)0xC0EA3D8));
                *(volatile int *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x14));
                nlObjPutFreeTextureOnce();
                nlSetCommonTextureOffset(0x0);
                *(unsigned int *)0xC26E0F4 = 0xFFFFFFFF;
                return gdc_CourseBlockReadNext();
            }
            t82 = t65;
            if (t65 == 4) {
                t76 = ADXF_Close((*(int *)0xC26C5D8));
                *(unsigned char *)((((short)((((t31 << 1) + t31) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
                t77 = *(int *)0xC0EA3DC;
                *(unsigned int *)0xC0EA3DC = (t77 + 0x1);
                if ((int)(t77 + 0x1) > (int)0xA) {
                    *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
                }
                t82 = t76;
            }
            return t82;
        }
        return t58;
    }
    return t30;
}
