extern int Exec_Combo_Entry();
extern int Exec_Time_Spark();
/* Game-side loops: sound channel resets, setup tables, decimal digit strings. */

extern void Set_Balloon(int i);
extern void gdc_StreamVoiceVol(int ch, int vol);
extern void gdc_StreamVoicePan(int ch, int x);
extern void gdc_StopStreamVoiceAll(void);

/* Reset the 20 entries through Set_Balloon, then the view block at 0C2A9C10. */

/* Reset the four voice channels to volume 75, then stop every streamed voice. */

/* Round an ASCII decimal string at digit n: when s[n] > '4' it becomes '0', the digit before it goes
   up by one, and carries ripple left (s[0] last). */

/* a -= b over n bytes, most significant first. Returns -1 when it underflows and sign is 0,
   otherwise 0 for a zero result and 1 for a nonzero one. */

extern void nlSetFogColor(int color);
extern void nlSetFogVertexColor(int color);
extern void thunk_kmSetFogTable(float *table);
extern void kmSetFogDensity(int density);
extern void njSetRenderWidth(int w);

/* The fog set-ups: white fog, then a 129-entry table (fog/0C1EE360) of base / d, where d starts at
   1.1 and grows by a step that starts at 0.005 and, past entry 32, by 0.0015 more each entry. */
#define FOG_TABLE(base, first)                          \
    do {                                                \
        float d = 1.0999999f;                           \
        float step = 0.005f;                            \
        float *t = (float *)0x0C1EE360;                 \
        int i;                                          \
        nlSetFogColor(first);                            \
        nlSetFogVertexColor(0xFFFFFF);                         \
        for (i = 0; i <= 128; i++) {                    \
            t[i] = *(float *)(base) / d;                \
            d += step;                                  \
            if (i > 32) {                               \
                step += 0.0014999999f;                  \
            }                                           \
        }                                               \
        thunk_kmSetFogTable(t);                         \
    } while (0)


/* This one clears its base value first, so its table is all zeros, and passes its own argument as the
   first colour. */


extern void nlSprPut(void *spr);

/* Set up the eight 80-byte view records at 0C2A89CC (their first word from the list at 0C0D0858),
   then clear the three words after them. */

/* Once the counter at 0C2A96F4 passes 88, draw a row of sprite 93: 21 copies 17 apart from x 64,
   at y = 0C2A9748 + 250. */

/* The same row, 13 copies from x 366 at y = 0C2A9748 + 444. */

extern void SetMVObjShadow(void);
extern void Put_Course_Obj_Sound(void);
extern void Put_Transporter(void);
extern void Put_Course_Obj_Fcv(void);
extern void SetWindow(int v);
extern int windowReturn(int, int);

/* Course objects by distance: object shadows and the fixed models near the camera (not in course mode 2),
   then the transporters and the two animated objects (course mode 0 only). */

/* Clamp x to 0..1 into 0C0EE904; when it had to be clamped and the flag at 0C0EE900 is set, the flag
   becomes -1. */

/* A pending request (0C2A1218) is handed to SetWindow and cleared; otherwise the counter at
   0C2A11F4 counts down by 2, and once it is 1 or less windowReturn runs. */

extern int GetMenuMode(int which);
extern void Put_Remain_Time_Mode2(void);
extern void Put_Remain_Time(void);
extern void Put_GearBox(void);
extern void gdc_CourseLoadExec(void);
extern void frameFlip(void);
extern int pdGetPeripheral(int port);
extern void PutRenderTexture(int mode);
extern void nlRenderTextureEnd(void);

/* Game 2, or menu mode 1 set: Put_Remain_Time_Mode2; otherwise Put_Remain_Time; the gear box either way. */

/* Run frames (gdc_CourseLoadExec, then a flip) until the busy flag at 0C26E0F8 drops; at least one. */

/* Read one controller slot's peripheral into the table at 0C1EE12C: slot 1 is port 18 (+4), slot 2
   port 12 (+8), anything else port 0 (+0). */

/* The flag at 0C0EE900 (set by SetMotionBlurStrength on a clamp): -1 resets it, 1 moves it to 2, 2 runs mode
   2; then nlRenderTextureEnd and mode 0. Nothing while it is 0. */

/* Is pos (x at +0, z at +8) inside the convex quad of four (x, z) pairs? Each edge, from the last
   corner round, must turn the same way (cross product not negative). */

/* Queue a voice on channel ch (16-byte slots at 0C2AEBE0) when the slot is free. Outside main mode 1
   only channel 0 plays, and only while 0C1EE220 is set; in mode 1 the ending (EndingFlag) also keeps
   to channel 0. */

extern void nlSetBackColor(int a, int b, int c);
extern void Exec_Bowling_Pins(void);
extern void Exec_Bowling_Arrow(void);
extern void Put_Pin_Count(void);
extern int ReturnBreakPinNum(void);
extern void Start_Excellent(void);
extern void Start_Fault(int on);

/* One of four colours by (*(*0C2A751C)) % 4, the same for all three arguments. */

/* For kinds 3-7, is any of the flags from that kind's word (+12 for 3 ... +28 for 7) up to +28 set?
   Kinds 0-2 always count; any other kind is returned as it is. */

/* Per-frame step: three updates, then until 0C2A991C is set: Start_Excellent while ReturnBreakPinNum gives
   nothing; once it does and 0C1EE794 is clear, switch Start_Fault on, set 0C2A991C and clear
   Car_Data +84. */

extern void nlLineClipPoint(float *a, float *b, float *c);
extern void camSave(void);
extern int nlSpriteFreeTextureOnce_Sub(int *tbl, int x, int i, int one);
extern char *GetCollision2D(float *pos, float h);
extern int Check2DAreaEdge(float *p, float *b, float *a);

/* Against the plane z at 0C2B7BDC (z at +8 of each point): both below it, 0; otherwise 1, after
   nlLineClipPoint with the point that is below (if any) as the third argument. */

/* Start a camera script: save the camera, VR mode 10 (mode 0) or 11, the script and the taxi driver
   as its target, its three counters cleared. */

/* Free each texture of a 16-byte-entry list (ends at word +4 == -1); returns the OR of the results. */

/* Copy the area state (0C2A9FA4) to 0C2A9D60 after checking the ground under the camera: kind 17+
   (except area 21) takes SubwayFlag; below that, a camera above the ground's +24 height clears it. */

/* Point in polygon (n points of 12 bytes): sum the edge tests; a 2 from any edge means on it (1). */

/* Font index to ASCII: 0-25 'A'-'Z', 26-35 '0'-'9', then . & ! ? @ *; anything else a space. */

extern void nd_SprPut(float *spr, int id, float x, float y);

/* Check_Digit_Disp for the table at 0C2A97AC, with entry k of 0C2A982C clear meaning 1 at once. */

/* A sprite that blinks once a second (counter at 0C2A8FB0 over 120 frames, shown for the first 60)
   at (320, 180): sprite 460, or 471 while 0C2A8FBC is set. */

/* The same blink on counter 0C2A8FB8 with sprite 461 (471 while 0C2A8FBC is set). */

typedef struct {
    short x;
    short y;
    short z;
} Short3;

/* Store three shorts at dst (the fifth argument). */

extern void nlRenderTextureBegin(int n);
extern void SetScreenRatio(float scale);
extern void psgFreeIpBuff(void *p);
extern void nlCloseEvent(void *e);
extern void Drv_StartAction(int action, int a, int b);
extern void Chat_PickSomeoneUp(int n);

/* While the clamp flag (0C0EE900) is set, draw with scale 16/15. */

/* Close an event (its sub-object at +28 first). */

/* After 600 frames (0C1EE794), start action 5 and the pick-up chat. */

extern void Start_CrazyBox_Voice(int i);
extern void nlMvSendTriangle(int a, int b, int c);
extern void FcvStoreBuffer(int id, void *buf, float v);
extern void nlObjPutSetFadeColorOffset(float r, float g, float b);

/* Play the voice for the current entry of 0C2A98EC (also entry 0 in mini game 14). */

/* nlMvSendTriangle over the three consecutive pairs of four points (b-c, c-d, d-e). */

/* Store a new driver value (TaxiDriver +252 id, +256 value) and buffer it, unless it is unchanged. */

/* Fade colour offset scaled per channel by the offsets at 0C0EA5C8. */

extern void ADXT_GetTime(int h, int *t, int *f);

/* A stream channel's play time in frames: samples / 735 (44100 Hz at 60 frames a second). */

/* Step the 4-frame cycle at 0C2A8F90 unless both words at 0C2A8F84 are set. */

extern int CheckAreaGrid(void *pos, int grid);
extern void KillColliObj(void *o);
extern void SetObjFly(void *o);
extern void Voice_ShutUp(int ch);
extern void Put_GameOver2(void);
extern void SetMenuClass(int n);
extern void callRecordEntry(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

/* Point the guide arrow at pos: copy it, reset the arrow state (distance 100) and look up its grid. */

/* A flying object piece (at +20 of the event): past height 1800 (+24 of the piece) it is removed,
   otherwise it keeps flying. */

/* Unless the driver is busy (flag 2 at TaxiDriver +0x1DF), stop voice 1 and play the pick-up line of
   the current driver (24-byte entries at 0C0D4298, one per cab driver). */

/* Count frames (0C1EE240) with Put_GameOver2 each; after 120 go to main mode 3. */

extern void Voice_ExecuteChannel(int ch);
extern void gdc_StopStreamVoice(int ch);
extern void Sound_Request(int id, int a);

/* Mark the round counter state (0C2A8EB0 = 3, 0C2A8E98 = 1) and round the counter at *0C2A8C78 up
   to the end of its minute (x % 60 == 59). */

/* Service the voice channels: channel 0 always, the others only in main mode 1; a busy slot
   (0C2AEBE0) gets Voice_ExecuteChannel. */

/* Is p inside customer area k? The area tables (0C0ED974) give the point count under the course mode
   and the points under the game number, both per mini game, 8 bytes per area. */

/* Once (0C2A9934 and 0C2A9930 both clear): flag 16 at 0C2A992C, state 2, 0C2A9904 set if the timer
   has started, and stop voice channel 0. */

/* A customer dropped since last time (kyakuDropCount moved): count down 0C2A98EC, clear gRideOnA,
   catch up the seen count, and play the next voice if any are left. */

/* Start a HUD message (not in game 2): flag 0x400, its value, the counters reset, scale 0.5, and its
   sound. */

extern void pdVmsLcdWrite1(unsigned int port, void *img, int c, int d);
extern void SetWindow(int v);
extern void windowOpenStep(int n);
extern void NextWindow(int n);
extern void PutVM_Message(int a, int b, int c, float x, float y);
extern void windowEnterStep(int n);
extern float nlLog10(float x);
extern int gdFsSearchName(char *name, int dir, int c);
extern void pfCleanString(int x, int y, char *s);
extern float pfLength(char *s);
extern void pfLocate(float x, float y);
extern void pfPuts(char *s);

/* Show picture n on the VMU screen of port p: 6 ports in 3 pairs, 1536-byte images at 0C2A9FF8. */

/* Pause request: with no argument it also arms the pause flag (0C2A121C); when armed, save the main
   and sub mode, switch to main mode 3 and run SetWindow(4). */

/* The VM message screen 20: flag 8 when flag 4 is up and 0C2A11CC has bit 1 or 2, then message 32
   (22) at (149, 240). */

/* A volume step (0-127, capped at 30 in mode 1 of 0C2A11B0) in decibels: 200 * log10(v / 127), and
   -999 for silence. */

/* Look a name up in the current directory (0C177A8C) and copy its 44-byte entry's sector (+150),
   size and flags into info; -8 when it is not there. */
int gdFsGetDirInfoG(char *name, int *info)
{
    char *dir = *(char **)(*(int *)0x0C177A8C + 16);
    int *e;
    int n;

    n = gdFsSearchName(name, (int)dir, 0);
    if (n == 0) {
        return -8;
    }
    e = (int *)(dir + 16 + (n - 1) * 44);
    info[0] = e[0] + 150;
    info[1] = e[1];
    ((char *)info)[8] = ((char *)e)[8];
    return 0;
}

/* Camera angles (+24..+32 of g_camHV3): mode 1 also takes the default eye (0C0965FC) at +12, mode 0
   copies the angles to +0 with scale 1 and roll 0. */

/* Print s centred on (x, y). */

extern float nlFastSin(unsigned int a);
extern void *set_event(int pri, void *func);
extern void Init_Combo_Entry(void *e, int a, int b);
extern float nlFloor(float x);
extern float nlCeil(float x);
extern float nlFraction(float x);
extern void SklIpPlay(int a, int f0, int b, int f1, int c, int d, float t);
extern float nlSin(int a);
extern float nlTan(int a);

/* A decaying wobble: while 0C2A8FA4 is 1 the angle (0C2A8FA0) turns a quarter each frame and the
   amplitude (0C2A8FA8) shrinks by 0.9; the offset (0C2A8FAC) is -amplitude * nlFastSin(angle),
   0 once the amplitude is under 0.1. */

/* The same wobble on 0C2A9940..0C2A994C. */

/* Place the car at the mini game's start (16-byte entries at 0C0D0E10: position, heading): position
   at Car_Data +120 and +140, heading at +134, and a copy at 0C2A9B80. */

/* Show a combo: close the one on screen (keeping its +24 in 0C2A91B8), start a new event and fill it. */

/* Play a skeleton motion at a fractional frame: the two frames around t and the blend between them. */

/* Field of view in degrees to the projection scales: 1 / sin and 1 / tan of the angle in 64K units. */

extern void Drv_Execute(void);
extern void Chat_Execute(void);
extern void LetsPlayTennis(void);
extern void HesLate(void);
extern void Put_Press_Start(void);
extern float nlScalor(float *v);
extern void ChangeColliObj(void *o, int kind);
extern void nlScaleUnitVector(float *dst, float *src, float s);

/* Per-frame driver step: at 600 and 300 frames left (not in game 2, driver not busy) start the
   pick-up action and chat; then the driver, chat, tennis and lateness updates. */

/* In states 2-5 (0C2A8EB0), step the 4-frame cycle (0C2A8E8C) while any of the seven flags at
   0C2A8E6C is clear. */

/* The advertise blink: a reset request (bit 0 of Coin_disp_mode) restarts the counter (0C0E5340); unless
   x is 1, Put_Press_Start runs for the first 50 frames of each second. Counts on; returns 1. */

/* A sleeping object piece: removed past height 1800; a kind-5 piece slowed under 0.02 becomes kind 21;
   otherwise it flies on. */

/* The shadow direction for a ground normal: flat ground (y > 0.999999) gives (1, 0, 0); otherwise
   the normal's x and z with y = -(x*x + z*z) / y, scaled to a unit vector. */

extern float nlFastCos(unsigned int a);
extern void nlObjPutSetLightDirectionV(float *v);
extern void Start_Time_Bonus(void);
extern void Start_Time_Sparks(int n);
extern void pfAddNumber(char *s, int n);
extern void pfAddString(void *p);
extern int GetNowLanguage(int n);
extern void menuPutSprites(int spr, void *pos, int x, int y);

/* Light direction from two angles (64K units, kept at 0C0EA5B0/0C0EA5B4): (nlFastCos(a) *
   nlFastSin(b), nlFastSin(a), nlFastCos(a) * nlFastCos(b)). */

/* Count the clock (0C2A8E30) down half a second per call (29 on the 59th frame of a second), with
   Start_Time_Bonus once at the start (0C2A8F64) and Start_Time_Sparks every third call (0C2A8F60). */

/* Print the string at *0C08D678 centred on (x, y), after pfAddNumber(s, 0) and, when flag is set,
   pfAddString(0C0D303C). */

/* Draw help bar k at (x, y): the sprite for the current language row (0C2A123C) and GetNowLanguage(1). */

extern int nlArcTan2(float y, float x);
extern int CourseSplineNumGet(int n);
extern int CourseSplineGet(int n);
extern void getNearLineIndex(int a, int n, int spline, int *index, float *pos);
extern void CourseObj_Init(void);
extern void nlSubVector3op(float *out, float *a, float *b);
extern void nlGetAverageVector(float *out, float *a, float *b, float wa, float wb);
extern void nlAddVector(float *a, float *b);
extern int volumeToDb(int level);
extern void ADXT_SetOutVol(int h, int db);
extern void nlPushUnitMatrix(void);
extern void nlMultiViewMatrix(void);
extern void nlCalcVector(void *a, void *b);
extern void nlGetPushedMatrix(int n);
extern void nlMvObjPut(int obj, void *m);
extern void nlPopMatrix(int n);

/* Heading (64K units) from b to a on the ground plane; 0 when a is at the origin. */

/* Course start: course x, angle 0, camera area 0, the camera's spline index from its position, then
   the course objects. */

/* Pass the 32-bit fog table colour to the kit split into its parts as well. */

/* Steer a homing object: its velocity (+12) is blended toward the offset from it to its target (+24)
   with the weights at +40 and +36, then added to its position. */

/* A stream channel's volume: level (-128..127) times the master volume (byte at 0C28A4ED) / 8, in
   decibels. */

/* Draw object i (table at 0C0EE7CC) in its own matrix set up from 0C286410 / 0C286404. */

extern void nlGetMatrix(float *m);
extern void nlLoadMatrix(float *m);

/* Driver animation set i (three entries at 0C0D5178): both slots (+464, +468) to 0C0D3080, the new
   value with weight 0, and the blend speed (+248) to 15. */

/* Replace each row's third element of the current matrix with its fourth. */

extern float nlInnerProduct(float *a, float *b);
extern void nlUnitVector(float *v);

typedef struct {
    int w[3];
} Mat12;

/* Switch to matrix slot i (12-byte slots at 0C2B31DC, the current one at slot 0, its index at
   0C2B31D8): save slot 0 back to the old index, take slot i, and load its matrix (+8). */

/* Is p ahead of the box (within about 20 degrees of its facing, +40)? Then set that bit of +36. */

extern void nlRotateAY(unsigned int a);
extern void nlRotateAX(unsigned int a);
extern void nlCalcPoint(Vec3f *v, void *light);
extern void nlObjPutSetGlobalAmbience(float a);
extern void nlSetFontSize(int w, int h);
extern void nlLocate(int x, int y);
extern void nlPrintf(char *fmt, ...);
extern void InitRenderTexture1st(void);
extern void nlScaleVector(float *out, float *v, float s);
extern float nlLength(void *a, float *b);

/* Set a scene's light: the base direction rotated by the light's angles (+18 yaw, +16 pitch) into
   its direction, then its ambience (+12). */
#define SET_LIGHT(base, light)                                      \
    do {                                                            \
        Vec3f v;                                                    \
        char *l = (char *)(light);                                  \
        v = *(Vec3f *)(base);                                       \
        nlPushUnitMatrix();                                         \
        nlRotateAY(*(unsigned short *)(l + 18));                    \
        nlRotateAX(*(unsigned short *)(l + 16));                    \
        nlCalcPoint(&v, l);                                        \
        nlPopMatrix(1);                                             \
        nlObjPutSetLightDirectionV((float *)l);                     \
        nlObjPutSetGlobalAmbience(*(float *)(l + 12));              \
    } while (0)


/* The "loading" screen: a big message (two texts by 0C1EE228), two flips, then back to small type. */

/* Move a walker (+28) by 5/8 of its step (+40) and count it (+24) once it is within 3 of its target
   (12-byte points at 0C131B10, index +20). */

extern int nlRand(void);
extern void Init_Time_Spark(void *e, int i);

/* Spawn 0-3 sparkle events (at most 10) through Init_Time_Spark; the argument is unused. */

extern int ADXT_GetStat(int h);
extern int ADXT_GetNumSmpl(int h);

/* Frames left on a voice stream (samples / 735); 0x58764 while it is not playing yet. */

extern void hudLoadRanking(void);
extern int CheckClipping(float *p, float r);
extern void DrawTennisPlayers(int which);
extern void nlInitEvent(void);
extern void Sound_Init(void);
extern void gdc_StopStreamSongDisk(void);
extern void CheckSecretFlag(void);
extern void callSaveData(int n);

/* Reset the HUD: the second HUD on (0C2A7618) in game 2 or with menu mode 1 off; flags, scroll
   positions (-320, -320, 320) and combo state cleared, combo count 99. */

/* The tennis court voices: each of the two points (0C0D60E0) within 750 of the camera and on screen
   (radius 200) plays its line; counts frames at 0C13F4BC. */

/* Game state 2 (round start): events, sound and voices reset; menu mode 2 goes back to the menu
   (main mode 3), otherwise the next sub mode with the view records set up. */

/* Is this model id one of the special ones (ranges 486-490, 502-504, 630-639, 733-736, 786-788 and
   ids 590, 591, 687, 752)? */

extern void Init_Adv_Title_LOGO(void);
extern void nlRenderTextureFree(int i);
extern int Start_chk(int n);
extern void GotoMenu(void);
extern void TitleWaitSet(int n);
extern void nlObjPutMvSetClosingMode(int n);
extern void nlObjPutMvClosedVolumeUseViewMatrix(int obj);
extern void End_Pass_Judgement2(void);
extern void ResetSpark(void);
extern int IsSeaFog(void);
extern void Start_Fog(int kind);

/* Show an advertise message k (value v): grey fog colour, Init_Adv_Title_LOGO, flag bit 0 of 0C2A9228; k 0
   also plays its voice, k -1 raises the sprite flag. */

/* Free every render texture (count at 0C2B31BC +4). */

/* The advertise screen step: once it is done (1), sub modes 7 and 9 wait 5 frames and leave through
   GotoMenu; any other goes to sub mode 8. 0 while it runs. */

/* Draw the course objects of the current range (0C2A6EE0..0C2A6EE4, table at 0C1188F8) within 3000
   of the camera. */

/* Draw the "combo" sprite for the current level (-1..2, sprites at 0C130B0C) at (320, 430); after 180
   frames, End_Pass_Judgement2. */

/* Underground fog: with the camera below -30 and no subway flag, sparks are reset and, unless the
   system flag is up, fog 3 starts when one of the car's four wheels (132 bytes from +416) is on
   surface 14; above ground the system flag starts fog 0. */

extern void gdc_StopStreamSongAll(void);
extern void nlSetCommonTextureOffset(int off);
extern void nlSpriteFreeTexture(void *tbl, int n);

/* Song fade-out: wait out the delay (0C26A0BC), then step the volume down over 0C26A0C0 of
   0C26A0C4 frames from the master song volume (0C1EE80C); at the end stop every song. */

/* Free the PAL sprite textures: the common set, then the one for the language (2-4 have their own,
   others share the English one). */

extern void Result_Title_Put(void);
extern void Result_Earned_Text_Put(void);
extern void Result_Class_Text_Put(void);
extern void Result_Ranking_Text_Put(void);
extern void Result_Money_Put(void);
extern void Result_Class_Line_Put(void);
extern void Result_Class_Put(void);
extern void Result_Rank_Put(void);
extern void nlRotateV(float *out, float *v);
extern void nlUnitMatrix(void);
extern void menuOpenStep(void);
extern void menuCursor(int a, int n, int c);
extern void menuPutFrame(void);
extern void putLevelCTFontAssist(int id, void *tbl, int n, int v, int e);
extern void menuEnterStep(void);

/* Draw the result screen layers up to its stage (0C2A9788): base, then rows 1, 2 and 3 (the last two
   steps only with the second HUD). */

/* Bounce a car off a wall: its up vector (+236) applied to the velocity (+152), the vertical speed
   (+156) reversed at 30%, and the inverse rotation applied back. */

/* The combo meter sprite (0C2A801C): off, or in mode 1 scaled by the meter (0C2A8C8C) and placed
   under the combo count (0C2A8D78 + 12). */

/* The top menu: open step, cursor over 7 items, frame, title sprite, help bar, the level font hint,
   enter step. */

extern void CarSel_ChangeCar(void);
extern void CarSel_Time_Count(void);
extern void CarSel_IO(void);
extern void hudDraw(void);
extern void selectDrawSprites(void);
extern void CarSel_Select(void);
extern void nlRotateAZ(int a);
extern void nlTranslateNV(Vec3f *v);
extern void nlMakeModelViewMatrix(void);
extern void ADXF_Stop(int h);
extern void ADXF_Close(int h);
void CarSel_Camera(void);

/* The car select screen per frame: light and fog, the timer (until 944 frames), the HUD, the
   car, and the countdown (0C2A757C); keeps the speed readout (STR_ADc) as an int. */

/* Place a scene's camera: position base (0C0CF6B4) plus offset (0C2A72E0), rotated by the angles at
   0C2A72EC (z, x, y, negated), in matrix slot 2. */
#define PLACE_VIEW(base, other, offset, angles)                     \
    do {                                                            \
        Vec3f p;                                                    \
        Vec3f q;                                                    \
        unsigned short *a = (unsigned short *)(angles);             \
        p = *(Vec3f *)(base);                                       \
        q = *(Vec3f *)(other);                                      \
        nlAddVector((float *)&p, (float *)(offset));                \
        nlMatrixMode(2);                                            \
        nlUnitMatrix();                                             \
        nlRotateAZ(-(int)a[2]);                                     \
        nlRotateAX(-(int)a[0]);                                     \
        nlRotateAY(-(int)a[1]);                                     \
        nlTranslateNV(&p);                                           \
        nlMatrixMode(1);                                            \
        nlMakeModelViewMatrix();                                             \
    } while (0)


/* Stop the streamed file: a playing slot (state 3 in its 24-byte record at 0C26C5DC) is stopped and
   closed, then marked 1; the second file (0C26E174) is closed if open. */

/* The result wobble (0C2A9750..0C2A9758), stopped at amplitude 0.5 when the count (0C2A96F4) reaches
   0C2A97A8 + 121 with 0C2A97E0 clear. */

extern void nlObjPutLoadTexture(int tex, void *table);
extern int IsBoyFriend(int a, int b);

/* ASCII to font index: '0'-'9' 26-35, 'A'-'Z' 0-25, then . & ! ? @ * (36-41); anything else 42. */

/* Load the textures of model group k (all six groups for k 6): counts at 0C0D3048, texture lists at
   0C135134, into the texture table (0C141868). */

/* Next idle animation for a pedestrian (+40): the special ones (state 7, 8, 12-15) cycle their own
   counter (0C2A71FC, 4 skips to 12), the others cycle the first n - 6 (0C2A71F8). */

/* Start a walker on route k: lane k % 5 (+20), stopped (+24..+40), heading from the lane table
   (0C131BB8) turned by k / 5 half turns (+54, 0x8000 each), round k / 5 (+64). */

/* Is the stop area of customer k shown? In course mode 2, mini games 10 and 14 always, mini game 8
   for the boyfriend; otherwise only while nobody is boarding. */

extern void req_load(void);
extern void SetScreen(int n);
extern void End_Adv_Title_LOGO(void);

/* Start a vibration (puru puru) effect while playing (main mode 1 or 3, sub mode 1) with vibration on
   (0C28A4EF): mask bit 28, 24 or 16 picks the slot for val (0C131B04/08/0C); in mode 1 of 0C2A11B0
   only mask 1 passes, and a running bit-28 effect blocks the others. */

/* Leave the menu for the chosen game (0C2A11D8 +4: 0 arcade, 1 original, 2 Crazy Box with its mini
   game at +8): main mode 1, the game and course mode set, then the game set-up. */

/* The car select scene for a newly picked car (*0C2A751C): base light, its colour (0C130748, 16
   bytes per car) and the panel layout for the screen mode (0C2A759C). */

extern void SetTotalRecords(void);
extern void CopyBackupBuffer(void);
extern int CompBackupBuffer(void);
extern void nlLineSendVertex(int a, float *v, int d);
extern void InitColliWall(int n);
extern int ReturnBreakBeachFlag(void);
extern void nlObjPutSetFadeColor(float r, float g, float b);
extern void ExecArrow(int on, float dist);
extern void ResetFadeColor(void);
extern int buIsReady(int drive);
extern int padPortAConnected(void);

typedef struct {
    int w[8];
} Block32;

/* Pause into the VM menu (main mode 3, previous modes saved): without a VMU flag go straight to
   CopyBackupBuffer; with one, menu 5, or menu 0 when CompBackupBuffer says the card is not usable. */

/* A thick line from p to q: the four corners offset by (dx, -dy) and (-dx, dy), drawn by
   nlLineSendVertex. */

/* Course collision set-up: the wall table and its 32-byte header for the course (Crazy Box: per mini
   game, and x kept at 0C0ED438), then the walls. */

/* Crazy Box goal step: start the result once time runs out or the goal is met (ReturnBreakBeachFlag), and
   show the green guide arrow within 2000 of the goal (0C1311BC). */

/* Blink the VMU messages 14 and 15 at (138, 414) while a game was paused, unless the card is ready or
   no controller is in port A, outside the title loop. */

/* A square of half side r around p (z kept), drawn by nlLineSendVertex. */

/* An arrow-head quad: the near corners of p shifted by (dy, dx) more than the far ones at q. */

extern void SetColliObj(void *o, int kind);
extern void adxStartAfs2(int ch, int file);
extern int gdc_GetStreamVoiceStat2(int ch);
extern void nlFogTableSet(float *t);

/* Start a flying piece of kind k: its start offset (12-byte entries at 0C0D2988), cleared motion,
   an identity basis, zero spin, then its collision object (kind 17). */

/* Voice channel ch's script (12-byte steps, slot at 0C2AEBE0): at a step's start frame, start its
   stream with its volume and pan; once past it, stop when the stream outlasts the step, or move to
   the next step (ending at a zero entry). Counts frames (+12). */

/* Fog set-up: a linear 128-step table (1 - i/127) at 0C2A9D64, white, distance 850000, density
   0x807F; the fog parameters from 0C1322C0 and the fog state cleared (mode 2). */

/* Which of the 25 grid areas (32-byte quads at 0C08DBA8) holds pos? Searches outward from start in
   both directions; -1 if none. */

/* The same search over the 96 city areas (areaPolyTable, 0C08EAC8). */

extern void breathSteer(float *p, int b);
extern void breathMove(float *p, int b);
extern void breathResetOne(void *a, void *b);

/* The result screen's icon rows: item i appears once the count (0C2A96F4) passes its threshold
   (3 frames apart), 33 pixels apart, at y = 0C2A9748 + 328 with scale 0C2A9758 + 1. */
#define RESULT_ROW(n, sprites, x0, t0)                                      \
    do {                                                                    \
        float *s = (float *)0x0C2A96F8;                                     \
        int i;                                                              \
        for (i = 0; i < (n); i++) {                                         \
            if (*(int *)0x0C2A96F4 > (t0) + i * 3) {                        \
                ((int *)s)[0] = ((int *)(sprites))[i];                      \
                s[1] = (float)((x0) + i * 33);                              \
                s[2] = (float)(*(int *)0x0C2A9748 + 328);                   \
                s[4] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[5] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[7] = 0.0f;                                                \
                s[9] = 1.0f;                                                \
                ((int *)s)[10] = 0;                                         \
                nlSprPut(s);                                                \
            }                                                               \
        }                                                                   \
    } while (0)


/* Reset the three tennis players (40-byte records at 0C2AE710) from their starts (0C0D6134). */

/* Print a time v as "s.cc" centred on (x, y): whole seconds, the dot, a padding zero under ten
   hundredths, the hundredths, and an optional suffix (flag). */

/* Advance the driver's two blend tracks (+464, +468; 8-byte keys, time at +4) past the motion time
   (+36, wrapped to the motion length at *(+32)), then set the motion table's two key frames (+8,
   +20) for the current driver (TaxiDriver +0) from 0C1337CC. */

/* Move a collision object's node (+44) to another kind's list: unlink it from its kind (head
   0C26EBCC, tail 0C26EC24), append it to the new kind's list, clear the object's hit state (+32,
   +36) and move the count (0C26EC7C). */

/* Tidy three-letter initials: SEX and anything made of X and blanks with at least two X become
   "***"; all blank becomes "*CT". */

extern void gdc_CourseTexFree(void);
extern void gdc_SpriteFreeMenu(void);
extern int gdc_FileLoad(int dst, int name, int size);
extern void nlObjPutSetReplaceTextureDirName(void *tbl, void *dir);
extern void Set_StandWaitDist(int mode);
extern void kyakuInitStops(void);
extern void kyakuResetDropCount(void);
extern void SetLandmark(int n);

/* Load the in-game sprite set (state 3 at 0C26E184): free what the menu or state 5 held, load the
   common sprites and the language's own, and point their replacement texture names. */

/* Customer system start: stops, counters, the guide arrow (off for Crazy Box games 4, 10-12, 14,
   original-mode game 15 and when NoArrow_Mode is set), and the spawn / despawn distances (700/750 in
   course mode 1, else 1100/1200). */

extern void nlPushMatrix(int n);
extern void nlTranslateV(float *v);
extern void humanDraw(int model, int a, int frame, int b);
extern int nlMalloc(int size);

/* Draw tennis player pair k (two figures, positions at 0C0D60F8, headings at 0C13F4E4) with the
   current swing (0C13F4C0, models at 0C13F4C4/C8), stepping the swing every 60 frames (0C13F4BC). */

/* Per-course status arrays (8-byte records at 0C2A3A3C, one word per 32 points of each course,
   count at 0C2A6694): allocated on the first call (flag 0), then cleared; a failed allocation is
   reported on screen. */

extern void menuReadPad(int n);
extern void callPause(void);
extern void MotionBlurOff(void);
extern void SetMotionBlurColor(float a, float b, float c);
extern void pfSetAspectRatio(float a);
extern int ExecWindow(void);
extern void SetHelicopter(void);

/* The VMU check screen: while nothing is pending (0C2A11B4) it waits (a card-out note when flag 1 is
   up) and on request 1 opens the dimmed message layer; a pending request is cancelled when the card
   went away at the warning, or runs mode 3. 1 once handed over. */

/* The helicopter: once called for (0C27428C) it follows the car from 1000 ahead and 200 up (each
   frame, until the car reaches state 8), then flies off 2000 above the origin; before that, state 8
   starts it with its sound. */

extern int CheckNumRideon(void);
extern void MultiRot4Vec(float *v);
extern void GetAng4Mat(int *ang);
extern void SetCameraDistance(int a, float b);
extern void camSetTarget(float *pos, int mode);
extern void SetCameraTargetRatio(float a, float b);
extern void SetCameraMode(int mode);
extern int GetAverageAngle(int a, int b, float w);

/* Is customer stop k usable here? Crazy Box games 10/11 only at their current stop (0C2A98FC), game
   14 also needs CheckNumRideon to match 0C2A9900; original-mode game 15 only at stop 7; other games
   always. */

/* The chase camera behind the car: a point 5 up and 10 back turned with the car, its angles, and on a
   reset (0C179974) the camera mode 2 set-up first. */

/* Blend a pose toward another by t: five 12-byte positions, then twelve angle triples (from +60). */

extern void nlSysMetricsInit(void);
extern void nlInitMatrix(void *p, int n);
extern void nlSysUseLatency2V(void);
extern void nlSysSetDirectListTypeLatency2V(int n);
extern void nlSysSetTextureSize(int n);
extern void nlSysSetVertexBufferBaseAddress(int n);
extern void nlCreateVertexBuffer(int a, int b, int c);
extern void nlInitPrint(void);
extern void nlPrnIndentOn(void);
extern void nlPerspective(float a, float b, float c, int d);
extern void nlInitCommonTexture(void *p, int a, int b);
extern void nlInitSprite(void *p, int a, int b);
extern void nlInitPalette(void *p, int n);
extern void paletteSetMode(int m);
extern void nlPaletteDirectMode(int n);
extern void nlObjPutInit(void);
extern void setBorderColor(int c);

/* Which side of the box edge (a, b) a point p is on, per axis: 0 above, 1 equal, 2 below for x and
   for z (3 apiece), combined into a table lookup (0C08DA64); a "3" entry is settled by the slope
   across the edge. */

/* Scene set-up for the game: the 3D engine pieces, text printing, the projection (4/3, 0.3, 300),
   the texture, sprite and palette pools, and white fade. */

/* Enter the course-end menu (except in reverse mode): save the modes, main mode 3 with SetMenuClass,
   menu 6, then step 10. */

/* Print mode: stores the flag (+20) and sets the blend bits of two words: opaque (x != 0) leaves
   word 2 with bit 29; transparent adds bit 25 to word 0 and the 0x94 top byte to word 2. */

/* Reset the result popup: its sprite (0C2A91D8: scale 1, 0.2 start, flags), the 20 x 9 word grid at
   0C2A9404 (and the first five words of 0C2A9690), and the counters and 0.5 scale. */

extern void hudRankPanelSlide(void);
extern void hudScaleRankPanel(void);
extern void hudUpdateRankDrum(void);
extern void hudDrawRankDrum(void);

/* The bonus panel's state machine (state 0C2A9178, timer 0C130CAC): states 1-5 run their updates
   (3 also steps the cycle); 2 lasts 60 frames, then 3 with a sound unless 0C2A9168 is 99; 3 goes to
   4 once both flags are up; 4 lasts 120 frames, then 5. The timer runs in states 2 and 4. */

extern void Init_Standard(void);
extern void Init_Time_Count(void);
extern void Init_Remain_Time(void);
extern void Init_Pass_Fare(void);
extern void Init_Drum_Fare(void);
extern void Init_RankDrum(void);
extern void Init_Shift(void);
extern void Init_TimeUp(void);
extern void Init_sprCombo(void);
void Init_TotalDrum(void);

/* Start a HUD set: the ten pointers (0C2A8C4C..) to the default panel (0C1309F8), the ten flags
   cleared, the three on flags, then each part's own set-up, and the last counters cleared. */

/* The eight-slot gauge: its sprite (0C2A801C) set up, per slot: pointers 0 and the bars (10 from slot
   3 on), the on flags 1; and the gauge's counters. */

/* Draw the four car icons (rows at 0C1304CC, spaced 72 apart from x 376, y 42): the picked car
   (0C2A751C) at half size with its first image, the others full size with the second. */

extern void sysCfgRead(void);
extern void CheckDrive(void);
extern void saveBufferInit(void *buf);
extern void AnnounceSecretFlag(int n);
extern void NextWindow(int n);

/* Set up the 4-slot panel sprites (80-byte records at 0C2A9A6C, wrapped to 256): all four for k 4,
   else just slot k - 1; each at (320, 240) scale 0.2 with its counters cleared. */

/* On the result screen, once the count (0C2A96F4) is within 120 of the start (0C2A97A8) and the
   skip button (TaxiSW +4 bit 3) is pressed: stop the voice, jump the count past the start (+121),
   and fold the eight bonus tallies (0C2A97EC) into the totals (0C2A980C, mod 10). */

/* Reset the VM menu: its state words (0C2A11D8..), counters, the config, the save buffer and the
   first screen, then start the pause (callLoadData(1)). */

/* May customer k be served in this Crazy Box game? Anything but mini games 10 and 8 always; game 8
   needs the boyfriend; game 10 passes at once when not in GSystem mode 1, otherwise when the car is
   nearly still (side speed < 0.15, turn < 16) inside the stop area. */

/* Spin the customer area marker: its phase (0C0ED920) advances 0.05 and wraps, its angle (0C0ED924)
   2048 per frame; the marker offset (0C271D18) = 0.5 + 0.25 * f(angle); in mini game 19 of Crazy Box
   three more markers step round a 15-frame cycle (0C0ED928): the first two from step 0, then up to
   step 3, then the rest. */

/* A thick quad: p's near corners shifted by (dx, dy) and q's far corners by (-dx, -dy), with the two
   edge directions flipped from nlLineSendQuadB; drawn by nlLineSendVertex. */

extern void TOANG(short *a, short *b, float x, float y, float z);
extern void nlScale(float x, float y, float z);
extern void nlObjPut(void *obj);

/* A cubic Bezier through the four 12-byte points p: out = (1-t)^3 p0 + 3 t (1-t)^2 p1
   + 3 t^2 (1-t) p2 + t^3 p3. */

/* Draw the debug marker object at pos, turned along the vector v (angles from TOANG) and scaled by
   s; modes 1, below 0 and above 5 also tilt it a half turn. */

extern float getNearCoursePoint(int a, int i, int *res, float *pos);

/* The course point nearest pos over all the current stage's courses (info at 0C0C3D4C, 12-byte
   entries by Game_No + MiniGame_No: first course +4, count +8): copied into out. */

extern void gdFsMemcpy(char *src, char *dst, int n);
extern int gdFsGetSearchID(char *name);

/* Parse one ISO 9660 directory record (rec) into out: +0 extent, +4 size, +8 flags, +9 the name's
   hash, +10 the name. Records shorter than 34 give 0. A plain file's name loses its ";1" (2 bytes);
   a directory's "." and ".." entries (names 0 and 1) become "." and "..". */
int gdFsGet1DirEnt(unsigned char *rec, char *out)
{
    int n;

    if (rec[0] < 34) {
        return 0;
    }
    gdFsMemcpy((char *)rec + 2, out, 4);
    gdFsMemcpy((char *)rec + 10, out + 4, 4);
    out[8] = rec[25];
    n = rec[32];
    if (!(out[8] & 2)) {
        n -= 2;
    }
    gdFsMemcpy((char *)rec + 33, out + 10, n);
    out[10 + n] = 0;
    if (out[8] & 2) {
        if (out[10] == 0) {
            out[10] = 46;
        } else if (out[10] == 1) {
            out[10] = 46;
            out[11] = 46;
            out[12] = 0;
        }
    }
    out[9] = gdFsGetSearchID(out + 10);
    return rec[0];
}

extern int kmSetCheapShadowMode(int mode);
extern void nlMvInitParam(void);
extern int kmUseAnotherModifier(int m);

/* Lay out the render regions from base: a table of cfg[1] x16-byte entries, cfg[2] x16-byte
   entries and cfg[3] x12-byte entries, one after another (starting 3 x cfg[1]*16 in), the
   boundaries kept in globals; then the cheap shadow mode of cfg[4] and the modifier switched on. */

/* Is the copy finished on every channel (h+3 of them)? Each channel object (h+56) answers through
   its vtable slot +80; both flags must be 1. When so, the pending flag (+92) is cleared. */

/* Draw the four result-screen sprites (ids 413, 414, 412, then the table[idx] one) through the
   sprite state at 0C2A7EDC with an orange fade. */

/* Once-only trigger for the end-of-game cue (flag 0C2A991C): with passengers dropped it runs
   Start_Excellent and zeroes Car_Data+84; with 0C1EE794 clear it switches Start_Fault on (1) and sets
   the flag; in mini-game 6 with Car_Data+124 not above 20, or mini-game 5 with it not above 0, it
   switches mode 2 on, sets the flag and plays sound 0x10FA9. */

extern void lcdFillData(int a, int b);
extern void lcdSetData(int tbl, int a, int b, int c, int d);

/* Ports with a pad in slot 1 or 2 of a group of six whose first button word has bit 2 set: mark it
   in the global mask 0C2A9FA8 (bit 2, or bit 1 when flag is 0), run lcdFillData, start the matching
   table (0C0D2F64 for flag, 0C0D2EA0 otherwise) and finish with lcdSync. 0 for any other port. */

extern float GetCameraDistance(void);
extern void camSetEye(float *pos, int mode);

/* Chase-camera step: target = the car position (Car_Data+120) raised by 5; a pending reset
   (0C179974) first re-seeds the eye, the speed state, the camera mode and the sparks; then the
   target is set and the zoom (0C1798A4) becomes 30 x (1 + (400 - GetCameraDistance()) / 800), the
   fraction kept at 0 or more. */

extern int VSklIpPlay(int a, int b, int c, int d, float t, int e, int f);

/* One step of a blended skeleton-pose play (h): while the blend length (+268) is 0 it only clears the
   top bit of the byte at +329. Otherwise VSklIpPlay is run with t = step (+264) / length, then the
   step grows by 1; when it reaches the length the bit is cleared and the target pose (+272, +276)
   becomes the current one (+52, +56). */

/* A point on the line through p and q (x, y, z each) found for the third coordinate: with a different z
   in q the line is solved for z = t = (dz*px - dx*pz) / (k*dz - dx), x = k*t and y follows the line;
   with the same z, z stays p's, x = k*pz and y follows the line, or is out's own when q has the same
   x too. The result goes to out. (The factor k is the float argument.) */

/* The same with x and y swapped: y = k*t, and x follows the line. */

extern float nlLdexpf(float x, int n);

/* The smoothed value at 0C2A9F70 (copied to 0C0E4E48) for the state at 0C2A9F64: in state 3, or with 0C2A9F68
   at 3, it jumps to the state's limit (a float at tbl + (signed byte)(state * 20)); with 0C2A9F9C set it grows
   by nlLdexpf(1, step) with the step counter at 0C2A9FA0 counting up, and is cut at the limit; otherwise it eases
   toward the limit by the factor at +16 of the state's entry. */

extern void SEGA_LOGO_SetColor(float *p);
/* nlObjPutSetLightDirection(x, y, z): the second entry of nlObjPutSetLightDirectionV (0C07AE00), which loads the vector's components and falls into it */
extern void nlObjPutSetLightDirection(float a, float b, float c);

/* Set up the HUD sprite layer: a perspective for mode 3, ten sprite slots at 0C2A932C (20 bytes each: x 320,
   y 240, z 0 and three zero halfwords), the extra slot at 0C2A93F8 (0, 36, 0), colour 0x00FFFFFF, and the
   light direction (0, 0.6, 0.8). */

extern void hudHidePickUpNag(void);

/* The pick-up nag's sprites, once a frame: a counter (0C2A8FB4) steps; in the first 50 of every 61 frames three
   sprites (ids 462-464, at 280/440/480 across, 240 down) are drawn, or one (470, at 320) while 0C2A8FBC is set.
   Past 180 frames the counter restarts and the nag is hidden; at 105 the passenger is picked up. */
