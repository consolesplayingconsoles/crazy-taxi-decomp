/* Straight-line functions with calls and guards (batch gen_aw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_VolStreamSong(int);
int menuChangeValue(int, int, int);
int selectSetDriverFace(void);
int selectPlayPickMotion(void);
int Voice_Init(void);
int kmytex_FBAllocEntry(void);
int kmytex_FBFreeEntry(int);
int kmytex_FBEnQueueTop(int, int, int);
int FBmovedata(int, int, int);
int SetSEvolume(void);
int Sound_Request(int, int);
int humanDraw(int, int, int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int menuPutSprites(int, int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int putString(int, int, float, float, float);

void _lsfts(int a4, int a5, int a6)
{
    int t8;
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    if ((short)(0x8 - a6) != 0) {
        t8 = 0x0;
        if ((int)(a5 - 1) >= 0) {
            t0 = (a4 + (a5 - 1));
            t1 = (a5 - 1);
            t2 = 0x0;
            do {
                t3 = *(signed char *)((t0 + 0x0));
                t4 = *(signed char *)((t0 + 0x0));
                t1 = (t1 - 1);
                *(unsigned char *)((t0 + 0x0)) = ((unsigned int)t3 << (int)(short)a6);
                t5 = *(signed char *)((t0 + 0x0));
                *(unsigned char *)((t0 + 0x0)) = (t5 | t2);
                t2 = (unsigned char)(t4 & ((int)0xFF << (int)(short)(0x8 - a6)));
                t2 = ((unsigned int)t2 << (int)(-(short)(0x8 - a6)));
                t0 = (t0 - 1);
            } while ((int)t1 >= 0);
            t8 = t2;
        }
        if ((unsigned char)t8 != 0) {
            return;
        }
        return;
    }
}



