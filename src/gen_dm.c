/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int nlAddVector(int, int);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlSetEventNext(int, int, int);
int TrailerInit(int a4, int a5);

int TrailerInit(int a4, int a5)
{
    int t0;
    int t47;
    int t1;
    int t15;
    int t21;
    int t23;
    int stk[9];

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = nlSetEventNext(0x12C, 0xC0486D4, a4);
    t47 = t0;
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        *(unsigned int *)(((0x78 + t0) + 0x0)) = (((extRand()) & 0x1) + 0xC);
        *(unsigned int *)((t0 + 0x80)) = (*(int *)((a4 + 0x80)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((0x8C + a4)); }
        *(unsigned int *)((t0 + 0xD4)) = (*(int *)((a4 + 0xD4)));
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 16)) = (-((float)(*(int *)(((int)stk + 4))) * 100.0f));
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((a4 + 0xA6))));
        nlCalcVector((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0x4));
        nlPopMatrix(0x1);
        PcarEvInit(t0);
        if ((*(int *)((t0 + 0x80))) == 0) {
            t15 = GetCollision2D((0x8C + t0), 30.0f);
            if ((*(int *)((t15 + 0x1C))) != -1) {
                *(float *)((t0 + 0x90)) = ((*(float *)((t15 + 0x18))) + 1.0f);
            }
        } else {
            t21 = *(int *)((t0 + 0x80));
            t23 = *(int *)((t0 + 0xD4));
            *(float *)((t0 + 0x90)) = ((*(float *)((((*(int *)((((((t21 << 1) + t21) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t23 << 1) + t23) << 2)) + 0x4))) + 1.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
        *(unsigned char *)(((0xA4 + t0) + 0x0)) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        courseStatusEntry((*(int *)((t0 + 0x80))), (*(int *)((t0 + 0xD4))));
        courseStatusEntry((*(int *)((t0 + 0x80))), ((*(int *)((t0 + 0xD4))) + 0x1));
        t47 = (calcCheckExec(t0, (*(int *)((t0 + 0x84)))));
    }
    return t47;
}
