/* Straight-line functions with calls and guards (batch gen_ahq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buAnalyzeBackupFileImage(int, int);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buLoadFile(int, int, int, int);
int buStat(int);
int memmove(int, int, int);
void LoadBackupData(int a4);

void LoadBackupData(int a4)
{
    int t0;
    int t7;
    int t9;
    int t10;
    int stk[34];

    t0 = buGetFileSize(a4, 0xC09DB4C);
    if (t0 != 23) {
    } else {
        if ((buLoadFile(a4, 0xC09DB4C, 0xC28CAA0, t0)) == 0) {
            for (;;) {
                if ((buStat(a4)) != -1) {
                    break;
                }
            }
            if ((buGetLastError(a4)) == 0) {
                if ((buAnalyzeBackupFileImage((((int)stk + 4) + 0x14), 0xC28CAA0)) == 0) {
                    memmove(0xC28F8A0, (*(int *)(((int)stk + 112))), 0x25B0);
                    t7 = 0xC28F8A0;
                    t9 = 0xC28A4E8;
                    for (;;) { t10 = *(int *)t7; t7 = (t7 + 4); if ((unsigned int)((0xC28F8A0 + 9648)) < (unsigned int)t7) break; *(unsigned int *)t9 = t10; t9 = (t9 + 4); }
                    if ((buGetFileInfo(a4, 0xC09DB4C, ((int)stk + 4))) == 0) {
                        memmove(0xC28CA98, (((int)stk + 4) + 0xA), 0x8);
                    }
                }
            }
        }
    }
}
