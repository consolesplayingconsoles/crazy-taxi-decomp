/* Straight-line functions with calls and guards (batch gen_gd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckSoftReset(void);
int gdc_FileLoadExec(void);
int CheckDrive(void);
int Exec_LCD(void);
int Sound_Execute(void);
int LoadBigOne(int);
int PutVMSMessage(void);
int frameFlip(void);
int InitSys(void);
int gdc_Err(void);
int getSwitch(void);
int getSystemMetrics(void);
int nd_Exec_Puru2(int);
int nlObjPutSetFadeColor(float, float, float);
int paletteUpload(void);
void MainLoop(void);

