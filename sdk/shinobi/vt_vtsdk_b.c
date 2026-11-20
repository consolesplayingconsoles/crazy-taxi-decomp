/* Library code: C that behaves like this game's own bytes. */
/* Small SDK functions (batch b): nl fraction, sound wait/pan, backup-unit file wrappers, ADX/mw error
   checks, GD filesystem accessors, FAT helpers, mpdrv, kmy/kmi helpers. */

extern char strAdxfPartitionIdRangeError[];
extern char strAdxfFileIdRangeError[];
extern char strMwRnaNullHandleError[];
extern char gMwRnaErrorCallback[];
extern char gMwRnaErrorCallbackArgument[];
extern int gMapleDriverVersionWord0;
extern int gMapleDriverVersionWord1;
extern int *gAdxfPartitionInfoTable[];
extern char gVmsVolumeStates[];
extern int (**gVmsIoInterface)(int a, int b);
extern int gRenderPacketVBlankWaitPending;
extern char gRenderPacketQueues[];
extern char *gMapleDriver;
extern char gMwRnaErrorMessageBuffer[];

extern int nlsndG2Write(int v, int addr);
extern int nlsndG2Read(int addr);
extern int vmsfs_c_getstate(int a);
extern int vmsfs_findnext(int a, int b);
extern int vmsfs_fgetsize(int a, int b);
extern int ADXERR_CallErrFunc(char *fmt);
extern int mwRnaErrCallFunc(int a, ...);
extern int SearchUsed(int a, int *out);
extern int FBfree(int a, int b);
extern void kmWaitVBlank(void);
extern int kmiWriteRegister(int reg, int val);
extern void ADXB_ExecOneWav4(char *o);
extern void ADXB_ExecOneWav8(char *o);
extern void ADXB_ExecOneWav16(char *o);
extern void *memset(void *dst, int val, unsigned int n);


void set_fat(int a, int b)
{
    char *e;

    e = gVmsVolumeStates + a * 328;
    if (b > **(int **)(e + 28))
        return;
    gVmsIoInterface[4](*(int *)(e + 36), b << 1);
}
