/* Straight-line functions with calls and guards (batch gen_aol): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseObjGroupSet(int);
int gdc_CourseObjTexLoad(int);
int gdc_CourseSet(int);
int gdc_CourseTexFree(void);
int gdc_CourseTexLoad(void);
int gdc_FileLoad(int, int, int);
int gdc_FileLoadSetup(int);
int gdc_FileLoadStop(void);
int nlSetCommonTextureOffset(int);
int nlsndPackFree(int);
int nlsndPackLoad(int, int);
int loadCity(int a4, int a5);

int loadCity(int a4, int a5)
{
    int t34;
    int t57;

    if (a5 != -1) {
        gdc_FileLoadStop();
    }
    nlSetCommonTextureOffset(0x7D0);
    if (a4 != 0) {
        if (a4 != 1) {
            if (a4 == 2) {
                nlsndPackFree(0x5);
                nlsndPackFree(0x4);
                gdc_FileLoad(0xCB40000, 0xC08D564, 0x0);
                nlsndPackLoad(0xCB40000, 0x4);
                if ((int)(*(int *)0xC179488) < (int)0x4) {
                    gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
                } else {
                    gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
                }
                nlsndPackLoad(0xCB40000, 0x5);
                gdc_FileLoad(0xCB40000, 0xC08D570, 0x0);
                gdc_FileLoad(0xC5E0000, 0xC08D57C, 0x0);
                if (a5 != -1) {
                    gdc_CourseTexFree();
                }
                gdc_CourseSet(a4);
                gdc_CourseTexLoad();
                gdc_CourseObjTexLoad(0xC0EA590);
                gdc_FileLoad(0xCB40000, 0xC08D588, 0x0);
                gdc_FileLoad(0xCE90000, 0xC08D594, 0x8000);
                gdc_FileLoad(0xC328000, 0xC08D5A0, 0x0);
            }
        } else {
            nlsndPackFree(0x5);
            nlsndPackFree(0x4);
            gdc_FileLoad(0xCB40000, 0xC08D51C, 0x0);
            nlsndPackLoad(0xCB40000, 0x4);
            if (((*(int *)0xC1EE210) == 2) && (t34 = *(int *)0xC179488, (int)t34 < (int)0x4)) {
                gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
            } else {
                gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
            }
            nlsndPackLoad(0xCB40000, 0x5);
            gdc_FileLoad(0xCB40000, 0xC08D528, 0x0);
            gdc_FileLoad(0xC5E0000, 0xC08D534, 0x0);
            if (a5 != -1) {
                gdc_CourseTexFree();
            }
            gdc_CourseSet(a4);
            gdc_CourseTexLoad();
            gdc_CourseObjTexLoad(0xC0EA478);
            gdc_FileLoad(0xCB40000, 0xC08D540, 0x0);
            gdc_FileLoad(0xCE90000, 0xC08D54C, 0x8000);
            gdc_FileLoad(0xC328000, 0xC08D558, 0x0);
        }
    } else {
        nlsndPackFree(0x5);
        nlsndPackFree(0x4);
        gdc_FileLoad(0xCB40000, 0xC08D4BC, 0x0);
        nlsndPackLoad(0xCB40000, 0x4);
        if (((*(int *)0xC1EE210) == 2) && (t57 = *(int *)0xC179488, (int)t57 < (int)0x4)) {
            gdc_FileLoad(0xCB40000, 0xC08D4C8, 0x0);
        } else {
            gdc_FileLoad(0xCB40000, 0xC08D4D4, 0x0);
        }
        nlsndPackLoad(0xCB40000, 0x5);
        gdc_FileLoad(0xCB40000, 0xC08D4E0, 0x0);
        gdc_FileLoad(0xC5E0000, 0xC08D4EC, 0x0);
        if (a5 != -1) {
            gdc_CourseTexFree();
        }
        gdc_CourseSet(a4);
        gdc_CourseTexLoad();
        gdc_CourseObjTexLoad(0xC0EA3E8);
        gdc_FileLoad(0xCB40000, 0xC08D4F8, 0x0);
        gdc_FileLoad(0xCE90000, 0xC08D504, 0x8000);
        gdc_FileLoad(0xC328000, 0xC08D510, 0x0);
    }
    nlSetCommonTextureOffset(0x5DC);
    gdc_CourseObjGroupSet(a4);
    return gdc_FileLoadSetup(a4);
}
