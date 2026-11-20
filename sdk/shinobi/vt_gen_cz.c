/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmProcessVertexRenderState(void);
int kmSetVertexRenderState(int, int, int);
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int read_dir(int);
int read_fat(int);
int read_sys(int);
int sklDrawNodeOne(int);
int staffShadowFlat(int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
extern int vmsfs_isformat();
int advDrawFigure(int a4);
int nlstripSetVertexContextTex(int a4, int a5);
int check_cache(int a4);


int check_cache(int a4)
{
    int t5;
    int t9;
    int t12;
    int t17;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1EE574:;
    *(unsigned int *)(((int)stk + 4)) = (R4 << 2);
    *(unsigned int *)(((R4 << 2) + 0x0C2EF3D0)) = 0x0;
    R12 = (0x1);
    R13 = (R4);
    R14 = (((R4 * 0x148) + 0x0C2EE990));
    if (((*(signed char *)((((R4 * 0x148) + 0x0C2EE990) + 0xA))) != 0)) goto L_8C1EE5A8;
    goto L_8C1EE59E;
    L_8C1EE59E:;
    t5 = read_sys(R13);
    R4 = (t5);
    if (((int)t5 < 0)) goto L_8C1EE5DE;
    goto L_8C1EE5A8;
    L_8C1EE5A8:;
    t9 = (int)(((int (*)(int))(vmsfs_isformat))(R13)) < 0;
    if (t9) goto L_8C1EE5EA;
    goto L_8C1EE5B0;
    L_8C1EE5B0:;
    if (((*(signed char *)((R14 + 0xB))) != 0)) goto L_8C1EE5C0;
    goto L_8C1EE5B6;
    L_8C1EE5B6:;
    t12 = read_fat(R13);
    R4 = (t12);
    if (((int)t12 < 0)) goto L_8C1EE5D0;
    goto L_8C1EE5C0;
    L_8C1EE5C0:;
    if (((*(signed char *)((R14 + 0xC))) != 0)) goto L_8C1EE5E2;
    goto L_8C1EE5C6;
    L_8C1EE5C6:;
    t17 = read_dir(R13);
    R4 = (t17);
    if (((int)t17 >= 0)) goto L_8C1EE5E2;
    goto L_8C1EE5D0;
    L_8C1EE5D0:;
    if ((R4 != 0xFFFF0000)) goto L_8C1EE5DE;
    goto L_8C1EE5D6;
    L_8C1EE5D6:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0C2EF3D0)) = R12;
    goto L_8C1EE5EA;
    L_8C1EE5EA:;
    R0 = (0x0);
    goto L_8C1EE5EC;
    L_8C1EE5EC:;
    return R0;
    L_8C1EE5DE:;
    R0 = (R4);
    goto L_8C1EE5EC;
    L_8C1EE5E2:;
    *(unsigned char *)((R14 + 0xA)) = R12;
    *(unsigned char *)((R14 + 0xB)) = R12;
    *(unsigned char *)((R14 + 0xC)) = R12;
    goto L_8C1EE5EA;
}
