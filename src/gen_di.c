/* Straight-line functions with calls and guards (batch gen_di): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_Open(int, int);
int ADXF_ReadNw32(int, int, int);
float fcvHermite(int, int, float);
int fcvHermiteAngle(int, int, float);
int nlObjPutMVAsm(int, int, int, int);
int buInit(int, int, int, int);
extern float getNearLineIndex();
int memset(int, int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlMakeModelProjectMatrix_objput(void);
int nlMakeModelViewProjectMatrix_objput(void);
int nlPopMatrix(int);
int saveBufferInit(int);
int nlObjPutMvClosedVolume(int a4);
int nlObjPutMvOpenedVolume(int a4);
int nlDecMatrixPtr(int a4);
int BupInit(void);
int gdc_FileLoad(int a4, int a5, int a6);
int getCoursePointMove(int a4, int a5, int a6);
float navi_GetRouteDataB(int a4, int a5);
int nlSysMetricsGetFrameBufferUser(int a4);
float fcvCalcPosition(int a4, int a5, int a6, float f4);
int fcvCalcAngle(int a4, int a5, int a6, float f4);
int nlObjPutMvClosedVolumeUseViewMatrix(int a4);
float GetStopPosCenter(int a4, int a5, int a6);

int nlObjPutMvClosedVolume(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return ((int (*)(int, int))(0xC07AB60))(a4, 0x0);
}

int nlObjPutMvOpenedVolume(int a4)
{
    nlMakeModelProjectMatrix_objput();
    return ((int (*)(int, int))(0xC07AB60))(a4, 0xFFFFFFFF);
}

int nlDecMatrixPtr(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t6;

    t0 = *(short *)0xC2B31DC;
    t1 = a4;
    if ((int)a4 <= 0) {
        t1 = 0x1;
    }
    t3 = *(short *)0xC2B31DE;
    t4 = (t0 - t1);
    if ((int)t0 < (int)t1) {
        t4 = 0x0;
    }
    t6 = *(int *)0xC2B31E0;
    *(unsigned short *)0xC2B31DC = t4;
    if ((int)t4 < (int)t3) {
        *(unsigned int *)0xC2B31E4 = (t6 + ((unsigned int)(t4 << 8) >> 2));
    }
    return ((((int)t0 >= (int)t1)) ? 1 : 0);
}


int gdc_FileLoad(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t4;
    int t10;
    int t13;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t0 < (int)0xA) {
            for (;;) {
                t2 = ADXF_Open(a5, 0x0);
                t1 = (t1 + 0x1);
                if ((int)t1 <= (int)0x78) {
                    if (t2 != 0) {
                        break;
                    }
                    continue;
                }
                t0 = (t0 + 0x1);
                if ((int)t0 < (int)0xA) continue;
                t3 = *(int *)0xC1EE208;
                *(unsigned int *)0xC1EE208 = (t3 + 0x1);
                return 0x0;
            }
            t6 = ((unsigned int)((unsigned int)((unsigned int)a6 >> 8) >> 2) >> 1);
            if (a6 == 0) {
                t4 = ADXF_GetFsizeSct(t2);
                t6 = t4;
            }
            ADXF_ReadNw32(t2, t6, a4);
            for (;;) {
                t10 = ADXF_GetStat(t2);
                if (t10 == 4) {
                    break;
                }
                if (t10 == 3) {
                    ADXF_Close(t2);
                    return t6;
                }
            }
            ADXF_Close(t2);
            t0 = (t0 + 0x1);
            continue;
        }
        t13 = *(int *)0xC1EE208;
        *(unsigned int *)0xC1EE208 = (t13 + 0x1);
        return 0x0;
    }
}



int nlSysMetricsGetFrameBufferUser(int a4)
{
    int t0;
    int t1;
    int t2;
    int t7;
    int t4;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;

    t0 = *(int *)0xC2AEE08;
    t1 = *(int *)0xC2AEDB8;
    t2 = *(short *)0xC2B3190;
    t7 = (t2 + t2);
    if ((int)t1 > (int)0x3) {
        t4 = ((t2 << 1) + t2);
        if ((int)t1 > (int)0x4) {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t7 = t4;
    }
    t8 = (int)((unsigned int)t7 + (unsigned int)0x0);
    t9 = (int)((unsigned int)t8 + ((((int)0x0 > (int)t7)) ? 1u : 0u));
    t11 = 0x1000;
    t12 = (t0 + 0xA5000000);
    t13 = t1;
    t14 = 0x0;
    t15 = (a4 + 0x1000);
    for (;;) {
        t16 = *(short *)0xC2B3192;
        if ((int)t14 >= (int)t16) {
            break;
        }
        t13 = 0x0;
        if ((int)(t9 >> 1) > 0) {
            for (;;) {
                t17 = *(short *)((t12 + 0x0));
                t11 = t17;
                t13 = (t13 + 0x5);
                t12 = (t12 + 0xA);
                *(unsigned short *)((t15 + 0x0)) = t11;
                t15 = (t15 + 0x2);
                if ((int)t13 >= (int)(t9 >> 1)) {
                    break;
                }
            }
        }
        t14 = (t14 + 0x5);
        t12 = (t12 + 0x1400);
    }
    return t16;
}



int nlObjPutMvClosedVolumeUseViewMatrix(int a4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;

    nlMakeModelViewProjectMatrix_objput();
    t1 = *(int *)((a4 + 0x0));
    t2 = *(int *)((a4 + 0x18));
    if ((int)t1 >= 0) {
        if (t2 != 0) {
            t3 = *(int *)0xC2B8CBC;
            t4 = *(int *)((t3 + 0x4));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
            t5 = *(int *)0xC2B7948;
            *(unsigned int *)0xC2B3150 = (((t2 | t5) & 0x30000) | 0x818C0000);
            *(unsigned int *)0xC2B3154 = 0x0;
            t6 = *(int *)0xC2B356C;
            *(unsigned int *)0xC2B3158 = t6;
            t7 = *(int *)0xC2B3570;
            nlObjPutMVAsm(a4, 0xC2B3150, 0x0, t7);
        }
    }
    return nlPopMatrix(0x1);
}


