/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int PutMVObj(int);
int nlCalcPoint(int, int);
int nlGetMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int nlTranslate(float, float, float);
int putPlayerCarByView(int a4);

int putPlayerCarByView(int a4)
{
    int t15;
    int t29;
    int t80;
    int t85;
    int t86;
    int t87;
    int t88;
    int t109;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t53;
    int t63;
    int t73;
    int t83;
    int t93;

    t15 = 0x0;
    if (((*(int *)0xC179860) == 0) && ((t1 = *(short *)0xC17985A, t2 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86)), (int)(unsigned short)(t1 - t2) > (int)0x6800) && ((t3 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86)), t4 = *(short *)0xC17985A, (int)(unsigned short)(t4 - t3) < (int)0x9800) && (((t5 = *(short *)0xC179858, t6 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84)), (int)(unsigned short)(t5 - t6) < (int)0x380) || (t7 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84)), t8 = *(short *)0xC179858, (int)(unsigned short)(t8 - t7) > (int)0xD000)) && ((t9 = *(short *)0xC17985C, t10 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88)), (int)(unsigned short)(t9 - t10) < (int)0x1800) || (t11 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88)), t12 = *(short *)0xC17985C, (int)(unsigned short)(t12 - t11) > (int)0xE800)))))) {
        t15 = 0x1;
    }
    t29 = 0x0;
    if (((*(int *)0xC179860) == 0) && ((t19 = *(short *)0xC17985A, t20 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86)), (int)(unsigned short)(t19 - t20) > (int)0x6800) && ((t21 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86)), t22 = *(short *)0xC17985A, (int)(unsigned short)(t22 - t21) < (int)0x9800) && ((t23 = *(short *)0xC17985C, t24 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88)), (int)(unsigned short)(t23 - t24) < (int)0x2000) || (t25 = *(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88)), t26 = *(short *)0xC17985C, (int)(unsigned short)(t26 - t25) > (int)0xE000))))) {
        t29 = 0x1;
    }
    nlPushMatrix(0x0);
    nlSetTranslate((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78));
    nlRotateAY((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88))));
    nlPushMatrix(0x0);
    nlRotateAX((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xAC))));
    nlRotateAZ((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xB0))));
    nlTranslate(0.0f, -2.29999995f, 0.0f);
    nlGetMatrix((0xB4 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    if (t15 == 1) {
        t53 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x34)));
    } else {
        t53 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x10)));
    }
    nlObjPutUseViewMatrix(t53);
    if ((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x11C))) == 0.0f) {
        t63 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x14)));
    } else {
        t63 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x18)));
    }
    nlObjPutUseViewMatrix(t63);
    if ((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x58))) == 0) {
        t73 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x20)));
    } else {
        t73 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x1C)));
    }
    nlObjPutUseViewMatrix(t73);
    PutMVObj((*(int *)0xC179488));
    GetRotVec((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x30));
    nlPopMatrix(0x1);
    t80 = *(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x6C));
    if (t29 == 1) {
        t83 = ((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x24);
    } else {
        t83 = (*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74)));
    }
    t85 = t83;
    t86 = t80;
    t87 = 0x0;
    t88 = (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC));
    for (;;) {
        if ((int)t87 < (int)0x2) {
            t93 = ((*(short *)((t88 + 0x82))) + (int)((*(float *)(((0x168 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0))) * 18.2041664f));
        } else {
            t93 = ((*(short *)((t88 + 0x82))) + (int)((*(float *)(((0x16C + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0))) * 18.2041664f));
        }
        *(unsigned short *)((t88 + 0x82)) = t93;
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((t86 + 0x0))), (((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C))) - (*(float *)((t88 + 0x30)))) + -0.699999988f), (*(float *)((t86 + 0x8))));
        nlRotateAY((unsigned short)(*(short *)((t88 + 0x80))));
        nlCalcPoint(((signed char)(((t87 << 1) + t87) << 2) + 0xC08A8A4), (t88 + 0x5C));
        nlRotateAX((unsigned short)(*(short *)((t88 + 0x82))));
        t109 = *(int *)((t85 + 0x0));
        t85 = (t85 + 0x4);
        nlObjPutUseViewMatrix(t109);
        nlPopMatrix(0x1);
        t87 = (t87 + 0x1);
        t88 = (t88 + 0x84);
        t86 = (t86 + 0xC);
        if ((int)t87 >= (int)0x4) {
            break;
        }
    }
    return nlPopMatrix(0x1);
}
