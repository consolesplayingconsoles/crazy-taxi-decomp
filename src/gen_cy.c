/* Straight-line functions with calls and guards (batch gen_cy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ReflectColliWallBox(int, int, int, int);
int nlSingleLineUseViewMatrix(void);
int _fmtout(int, int, int, int, int);
float nlFastSin(int);
float nlFastCos(int);
int motionClearRootZ(int);
int nlLineSetThickness(float);
int nlScaleVector(int, int, float);
int PatchMotion(void);
int vsprintf(int a4, int a5, int a6);
int nlPopMatrix(int a4);
int nlsndPackLoadInit(int a4, int a5, int a6, int a7);
int ColliWallTest(void);
struct o0_int { int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int PatchMotion(void)
{
    motionClearRootZ(0xCA75D74);
    return motionClearRootZ(0xCA7BBDC);
}


