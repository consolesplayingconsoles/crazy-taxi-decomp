/* Straight-line functions with calls and guards (batch gen_aib): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(int, float);
int CourseSplineGet(int);
int CourseSplineNumGet(int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int PutCourse_Sky(void);
int Put_Build_Patch(void);
int Put_Course_Obj_Dist(void);
int findSplineSection(int, int, int);
int gdc_CoursePut(int, int, float);
extern int getAreaFromPos();
extern int getNearLineIndex();
int getPieceWindow(int, int, int, int, int, int, int, int, float, float, float);
float nlFastSin(int);
float nlLength(int, int);
int nlProjectScreen3D(int, int);
int PutCourse(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

