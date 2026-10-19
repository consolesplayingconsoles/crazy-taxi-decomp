# Engine notes

What is known about the game's own code and data, from reading the executable. Addresses are RAM
(linked at `0x0C010000`). Function names here are the ones in `functions.txt`.

## Game states

- `MainLoop` reads the pads (`getSwitch`) then runs the handler of `MainMode` (`0x0C1EE234`) from
  the table at `0x0C08ACEC`; an empty entry moves on to the next `MainMode` and sets `SubMode`
  (`0x0C1EE238`) to 0. The game's handler (the Android build's `Game`) runs state `SubMode`
  (mod 16) from the table at `0x0C08AE64` (16 entries): `gameState0`-`gameState15`, with `gameStateDrive` (1, driving),
  `FUN_0c02cd46` (5), `Initialize_Replay` (6) and `exec_loop_Replay` (7, replay) named so far.
- `gameStateDrive`'s order each frame: `FUN_0c041c14`, `camUpdate`, per-`CourseMode` work (the
  Crazy Box: `execMiniLight`), the customers (`exec_KyakuMain`), `ExecSetObject`, `ExecKyakuArea`,
  `ExecHelicopter`, `Act_Execute` (the cab driver), `entryCarPut`, `trafficControl`, `nlExecuteEvent`
  (every event, so the traffic executors run on the `playerEV` point `trafficControl` has just
  rebuilt; seen live), the crowd
  (`crowdSpawn`, not in the Crazy Box), the tasks, `ExecColliObj`, `PutCourse`, `GoiTool`, and
  last `hudDraw`. Each call goes through the handler's own pool words.

## The run's numbers

- `GSystem` (`0x0C1EE788`, 100 bytes in the Android build): `+0x0C` the game time (frames; the
  game tick counts it down, `Act_Execute` plays "pick someone up" at 600 and 300), `+0x20` the
  cash, `+0x44` the current customer's time (read by `Psg_Execute` and the customer states,
  against `+0x4C`). The cash and customer-time meanings come from the public USA cheat list
  (libretro-database, `cht/Sega - Dreamcast/Crazy Taxi.cht`): the USA build's variables sit
  0x22E0 lower (game time `0x8C1EC4B4`); each was checked against this build's code.
- The two cheat switches `NoEro_Mode` (`0x0C2A7368`, no destination mark) and `NoArrow_Mode`
  (`0x0C2A736C`, no arrows) are read by `hudDraw` (their labels) and the customers' code
  (`exec_KyakuMain`).

## Game modes

- `CourseMode` (`0x0C1EE20C`): the mode chosen in the menu; 2 is the Crazy Box, whose game is
  `MiniGame_No` (`0x0C1EE214`). `menuSetMode` (`0x0C03F89A`, a callback in the
  menu's handler table at `0x0C09DE08`; static in the Android build) applies the choice at
  `0x0C03F8E2`-`0x0C03F8FA`: `MiniGame_No` = item - 2, then `CourseMode` = the chosen mode (Crazy Box game 15
  gives 0). That store (`0x0C03F8FA`) is the only place `CourseMode` becomes 2: `gameInit`,
  `FUN_0c02bc24`, `FUN_0c03df1a` and `callGoBackAdvertise` (back to the attract demo) only write 0.
- The menu state (`0x0C2A11D8`): `+0` the depth, then one selected item per depth (`+4` the mode,
  0 Arcade, 1 Original, 2 Crazy Box; `+8` the item on the next screen). `menuSetMode` reads both:
  `Game_No` = the mode, and for the Crazy Box `MiniGame_No` = `+8` - 2.
- The Crazy Box screen (`0x0C03FD2C`, in the handler table at `0x0C09DE48`) is a 19-item list
  whose items 2-17 are the 16 games (a 4 x 4 grid). Its cursor moves with
  `menuCursorBox(menu, 19, skip)`; `menuCursor(menu, count, skip)` (`0x0C03BB48`) is the plain
  list version the other menus use. Both wrap around and step over every item whose bit is set
  in `skip`. This screen's `skip` is `0x3FFFE` (only item 0) while the byte `0x0C28A4F6` is 0,
  otherwise the locked games (`FUN_0c040cea`) shifted up by 2.
- The driving frame (state 1, `0x0C02C9C0`) branches on `CourseMode`: with 2 it calls
  `FUN_0c05dea8` (lighting per mini game, `LightEffect`) and skips the crowd (`crowdSpawn`).
  `Init_DCmini` registers the mini game's tasks; functions reached only from `Init_DCmini` and
  `FUN_0c05dea8` include `Exec_Balloon` and the run `0x0C05EA98`-`0x0C05EEF4`; no code outside
  that run or `Init_DCmini` (`0x0C05B404`-`0x0C05B7A8`) loads from or branches into them.
- Crazy Box code runs behind `Game_No == 2` (`gameState0`, the set-up: `Init_DCmini` and
  `FUN_0c02f02a`; the driving frame: `execDCmini` (`0x0C05B914`), the mini game's update and 2D
  overlay, by `MiniGame_No`; the six functions at `0x0C05BE5C`-`0x0C05C72E`, `FUN_0c05be5c` to
  `FUN_0c05c614`, are reached only from it) and `CourseMode == 2` checks spread through the game
  (`IsBoyFriend`, `GetNumRideon`, `Start_Proposal`, the passenger mini game branches).

## Boot

- The entry stub (`0x0C010000`) copies `0x0C010100`-`0x0C014000` (the boot code, then `0xFFFD`
  filler from `0x0C011C28`) to `0x0C004000` and runs it there; the boot code sets the stack to
  `0xAC00FC00`, the vector base to `0x8C00F400`, and clears `0x0C010000`-`0x0C011000`. The block
  is reused at run time: bytes placed in the filler do not survive into gameplay, although no
  pointer in the executable points into it.

## Loading

| file | loaded at | by |
|---|---|---|
| `polDC0.BIN` | `0x0C390000` | `gameInit` (models shared by every city: humans, cars) |
| `texDC0.BIN` | | `gameInit` |
| `polDC1-3.BIN` | `0x0C5E0000` | `loadCity(city)`, city 0-2 |
| `objDC1-3.BIN` | `0x0CE90000` | `loadCity` |
| `splDC1-3.bin` | `0x0C328000` | `loadCity` |
| `motDC.BIN` | | animation data; the motion pointers in the tables below point into it |

`polDC*.BIN` hold no absolute pointers; the exe's own tables point into them at their load address.
Models are the NAOMI library's flat format (`nlObjPut`): a record starts with two counts, a bounding
sphere (centre, radius), then PowerVR polygon words (`0x8000002C`, `0x83000000`, TSP, a texture word
with address 0 on disc). After loading, the texture words get their video-memory addresses through
`nlObjPutLoadTexture(model, textures)` (`0x0C07A250`), only for the records the game names.

Textures and the model draw (2026-10-17: read from the code and the disc; the texture sizes accepted and refused were seen in a
running Arcade game):
- The texture table for `polDC0` is in the executable at `0x8C141868`: 438 entries of 16 bytes, `{height << 16 | width,
  data type << 8 | pixel format, data address (in the staging area at 0x0CB40000+), slot}`; a record's texture number indexes
  it. The cabbies' parts use 243-256 (character `0x3B`), 257-267 (`0x3C`), 238-305 (`0x3D`) and 272-283 (`0x3E`), all
  64 x 64 or smaller except one 128 x 128 each; types `0x401` (VQ mipmapped, RGB565), `0x201` (twiddled mipmapped, RGB565),
  `0xD01` (twiddled rectangle, RGB565) and a few 16 x 16 / 32 x 32 `0x202` (twiddled mipmapped, ARGB4444).
- A record is the SDK's `NL_PF_GloblParamType2` (`nlobjtyp.h` of the NAOMI SDK): `+0x00` the parameter control word (polygon list
  in bits 24-26), `+0x04` ISP/TSP instruction, `+0x08` TSP instruction, `+0x0C` texture control word, `+0x10` the sphere
  (`cx, cy, cz, cr`), `+0x20` `tex_pvf_index` (the texture number), `+0x24` specular, `+0x28` `tex_ambient` (float), `+0x2C`
  face colour A, R, G, B, `+0x3C` face offset colour A, R, G, B, `+0x4C` `skip_byte` (the strip data's length), then the strips:
  each a `gflag` (`NL_PF_GloblFlag`: bits 0-1 culling, 2 sprite (quads), 3 triangle, 4 strip, 5 s_index, 6 gouraud, 7 not_gp,
  8 envmap; 0 ends the model), `polygon_num`, then the vertices (`NL_PF_PolygonFormat0`: `x y z`, `nx ny nz`, `u v`) or 2-word
  references back to a vertex of the record. C for `nlObjPutUseViewMatrix`, `nlobjput_sub` and `nlMakeModelViewProjectMatrix_objput`: `src/nlobjput.c`, Equivalent
  (`nlObjPut` is in `src/sdk_a.c`, `nlObjPutLoadTexture` in `src/sdk_c.c`).
- `nlObjPutLoadTexture` walks the model's records with `nlObjPutLoadTextureOnce_Sub` (`0x0C079F80`, 692 bytes; the SDK's
  `nlObjPutLoadTextureOnce` and `nlObjPutLoadTextureOnceGI` share it, the last argument picking GI, where the number is first
  looked up in the texture table's fourth word). Each call loads at most one new texture and returns where it stopped, so
  `nlObjPutLoadTexture` calls it until the model's end. A texture number keeps one surface: the slot table at `*0x0C2AEC84`
  (the SDK's `nl_texture_loadflag`, `NL_TEXTURE_FLAGS` of `nlcmntex.h`: 8 bytes a number, after the offset `*0x0C2B3184`
  that `nlSetCommonTextureOffset` sets: a use count, then a surface index), the surfaces 60 bytes each at `*0x0C2B29C0`. A
  number without a surface gets a free index from `nlCommonTextureGetNextTextureIndex` (a clear bit in the bitmap at
  `*0x0C2AEC88`, `nl_texture_loadbit`), then `nlLoadTextureMem` creates it: `kmCreateTextureSurface` (`0x0C15BBAC`) with the
  entry's width, height and Kamui type (its result kept at surface +40), the load callback at `0x0C14A640`
  (`nlCommonTextureSetLoadCallBack`; it may give another data address), then `kmLoadTexture` (`0x0C15BDFA`); 1 when Kamui
  refused the surface. `nlCreateTextureParam` then works out the surface's TSP size bits (+48) and texture control word (+52)
  (`nlCreateTextureParamA`), or, for a refused surface, copies the dummy texture's: a refused texture is drawn with the dummy
  texture, never left out. A number that already has a surface is counted again and shares it. A 256 x 256 VQ ARGB4444
  texture (18 KB) added at run time in Arcade was refused there; 128 x 128 ones are accepted. How much texture memory is left
  is not known. C for `nlLoadTextureMem`, `nlSetTextureParameter` and `nlCreateTextureParam`: `src/nltex.c`, Equivalent.
- What the load leaves in a record: `nlSetTextureParameter` replaces the TSP's U and V size (bits 0-5) and the whole texture
  control word with the surface's, so a model file's own TCW and size bits are never used; an untextured record (number
  below 0) gets the dummy parameters and its PCW bit 0 and ISP bit 22 set (16-bit UV). Every record's PCW loses bits 16-17
  and gains `*0x0C14A650 << 16` (user clip) and `0x008C0000`. A palette texture (TCW pixel format 5 or 6) also gets its
  palette from the list at `0x0C2B3568` (`nlObjPutSetPaletteHeaderAddress`).
- `nlObjPutUseViewMatrix` (the draw a model at the current matrix that the game's car code uses) tests bit 1 of the model's second
  header word: clear, it first runs `nlInvLightVectorUseViewMatrix` (it sets up the light vectors at `0x0C2B3150` from `0x0C14A918`/`0x0C14A938`);
  then `nlMakeModelViewProjectMatrix_objput` (push, multiply by the matrix at `*0x0C2B31F4 + 8`) and `nlobjput_sub`, which picks a draw routine by
  the model's first header word (0, 1, other): its literal pool (`mova 0x0C07B380`, words at +20 to +32) gives the light data
  `0x0C2B3150`, the draw routine `0x0C081660` for word 0 and for word 1 (one `fldi1 fr4`, then `FUN_0c081662`), and
  `nlPopMatrix`.
- `FUN_0c081662` (896 bytes, hand-written SH-4) draws the records: it skips the 24-byte model header, reads each record's PCW
  (ORed with `*0x0C2B7948`), ISP, TSP (ORed with `*0x0C2B794C`) and TCW, transforms the record's sphere (+16, radius +28)
  with `ftrv` and skips the record when the sphere test fails. The polygon list is `(PCW >> 24) & 7`: it indexes the table of
  word pointers at `**0x0C2B8CBC` (Kamui's per-list vertex buffers), and when the list changes from the last record the top
  byte of that list's pointer goes to the store-queue area registers `QACR0/QACR1` (`0xFF000038/3C`). Then the strip is
  written through the store queue. So every list Kamui has a buffer for is drawn from here; which lists Crazy Taxi gives a
  buffer (its `kmCreateVertexBuffer` call) is still to read.
- After a record's header the loop reads strip after strip: a positive word is a strip's `gflag`, 0 ends the model, a negative
  word is the next record's PCW (bit 31 is always set in a PCW). The strip's culling (`gflag` bits 0-1) becomes the ISP
  culling mode (bits 27-28: 0 none, 1 small, 2 and 3 one winding each), flipped (xor 1) when the word at `0x0C2B7948` is
  negative. Which routine draws the strip depends first on the record's depth test (below): a record wholly on one side
  goes to `FUN_0c081a40` (`gflag` bit 3 clear) or `FUN_0c082440` (bit 3 set); a record across the bound goes to
  `FUN_0c081da0` (bit 4 set) or `FUN_0c082240` (bit 4 clear), with bit 6 (gouraud) passed in `r12`. Bit 6 also becomes the
  PCW's gouraud bit (bit 1) of the parameter sent for the strip.
- The record test, on the sphere transformed with the model-view-projection (`ftrv`, its w in `fr7`) and the radius times
  `|*0x0C2B7BE8|` (the scale `nlSetScaleFactor` sets; the loop puts it back to 1.0 when it starts): the word at `+12` of the
  drawer's second argument (`0x0C2B3150`, read as a float) is a bound; `w - r` above it skips the record, `w + r` above it
  marks it as crossing (the clipping routines above). Then two side tests against `w` times the constants at `0x0C14A82C` and
  `0x0C14A830` skip a record outside the view. A skipped record whose PCW has colour type 2 (intensity, face colour) still
  sends its face colour, since the records after it may use colour type 3 (intensity, the previous face colour).
- The record's light: specular `-1` gives an ambient of 1.0 (no lighting); a value above 0 picks a light set at
  `0x0C2B30A4 + 512 * value`; 0 uses `tex_ambient`; `-2` and `-3` call `FUN_0c085e40` and `FUN_0c0868c0`. The face colour is
  multiplied by the model's alpha (1.0 from `nlObjPut`, the argument of the `Trnsl` entries) and by the fade colours at
  `0x0C14A948` and `0x0C14A958`. After the first strip of a record its PCW (kept at `0x0C2B7960`) switches from colour type 2
  to 3.
- Crazy Taxi's own models (`polDC0`-`polDC3`, 1752 models read off the disc): every record's ISP is `0x83000000` or
  `0x83400000` (depth test "greater", texture, offset); TSP `0x9401A440` (blend source alpha, inverse source alpha) appears in
  415 records, all in polygon list 2 (PCW `0x82......`); 312 records are one 4-vertex `gflag 0x16` strip (culling 2,
  sprite, strip) of 136 bytes, the game's billboards. Of the Kamui texture types in the `polDC0` table, `0x302` (VQ, ARGB4444,
  no mipmaps) is used once.
- The texture module's names come the same way, from where its names fall in the SDK libraries: `libnlobj`'s offsets laid at
  `0x0C070720` put `nlObjPutLoadTexture` on the function already named so, `nlObjPutLoadTextureOnce_Sub` on `0x0C079F80` and
  `nlObjPutFreeTextureOnce_Sub` on `0x0C07A3D0` (it calls `kmFreeTexture`, `nlCommonTextureClearTextureIndex` and
  `nlFreePalette`); `libnaomi`'s, laid so that `nlSetTextureParameter` falls on `0x0C073E00`, also meet `nlCreateTextureParam`,
  `nlCreateTextureParamA`, `nlInitTextureSurface`, `nlLoadDummyTexture`, `nlSetDummyTextureParameter` and
  `nlInitCommonTexture`, and put `nlLoadTextureMem` on `0x0C073940`, `nlCommonTextureGetNextTextureIndex` on `0x0C073C20` and
  `nlCommonTextureClearTextureIndex` on `0x0C073CA0`. The same offsets fall on two functions already named from the Android
  build: `texLoadIndexed` (`0x0C073AD0`, `nlCommonTextureReloadA` there) and `texFreeMem` (`0x0C073BE0`,
  `nlCommonTextureGetFreeMem`); those names were left as they are.
- Names in this block come from the NAOMI SDK's `libnlobj` (its name offsets laid at `0x0C072100` meet the names already
  known here: `nlObjPut`, `nlObjPutSetFadeColor*`, `nlObjPutSetGlobalAmbience`, `nlObjPutSetLightDirectionV`). Translucent
  models have their own entries: `nlObjPutTrnsl` (`0x0C07AD30`) and `nlObjPutUseViewMatrixTrnsl` (`0x0C07AD70`), drawing through
  `nlobjput_sub_trnsl` (`0x0C07B3B0`). The Android build's name `nlObjPutUseViewMatrix` had been put on `0x0C067A28` (22 bytes:
  a vector from `FUN_0c0678a4`, then `nlTranslateV`), which is not it: that function is `FUN_0c067a28` again.
`gdc_FileLoad(where, name, size)` (`0x0C02DEFE`) reads a whole file when `size` is 0 (ADXF, waits
for the read). Memory: `gameInit` loads `polDC0.BIN` at `0x0C390000` (2,358,960 bytes, ending at
`0x0C5CFEB0`), 65,872 bytes below the city models at `0x0C5E0000`; `0x0C5E0000`-`0x0C880000` holds the
city's models and its streamed pieces; `motDC.BIN` from `0x0C880000`; sprites at `0x0CB40000`
(`gdc_SpriteSetAdv`). The game's heap (`nlMalloc`, the events') is 0x30000 bytes (`gameInit`'s
`nlInitHeapMemory` call). Shinobi's `malloc` (`0x0C14F61C`) is never set up: it calls through the
interface word at `0x0C2B9334`, which stays 0, so calling it hangs.

The city streams in pieces around a point: `gdc_CoursePointLoadReq(point, radius)` (`0x0C02EE20`;
the point is a 12-byte struct passed by value on the stack, the radius in `fr4`) requests every
course piece whose centre is within `radius` plus the piece's own size, through
`gdc_CourseReq(piece, set, distance)`. `exec_CarMain` (the end of the player car's update) calls
it every frame from a point ahead of the taxi along its heading, chosen by `CREQ_flag`
(`0x0C1790C8`, just before `Car_Data`): 600 units ahead with radius 1800 in the default case,
220 / 560 and 30 / 50 in two other cases (`0x0C0244BC`-`0x0C02469A`).
`gdc_CourseReq` does not read anything itself: it reserves room in a fixed pool of course memory
(0x480 blocks of 32 bytes, in the Android build). A piece already in the pool gets its request
count raised (and, if idle, a priority from the distance); a new one takes the free run that fits
it best. The pieces requested each frame are the ones kept: moving `exec_CarMain`'s request
point moves the loaded city with it, while a second request elsewhere does not (the pool stays
full of the taxi's pieces).

- `Car_Data + 0x60` is the car's nearest `courseLineTbl` point, set every frame by
  `getNearLineIndex(0, courseLineTbl, courseLineCount, &+0x60, &+0x78)` in `exec_CarMain`. The
  Arcade city (`PutCourse`'s CourseMode 0 branch, and `PutCourse_CheckPiece`) draws the pieces listed
  for that point (`courseVisListA`/`B`, 136 bytes a point); the Original city picks an area from the
  camera (`getAreaFromPos`, `areaPieceList`).

## Tasks

`set_event(size, callback)` (the name is the string it stores in the node) allocates a task node and
appends it to the task list: `+0x04` previous, `+0x08` next, `+0x0C` callback, `+0x10` name.

## Humans

- Table of 63 characters at `0x0C132330`, 0x40 bytes each: 16 pointers to body-part models in
  `polDC0` (slot 0 unused, some slots null on simpler characters). The table of pointers to these
  entries is at `0x0C1331B0`.
- `humanDraw(motion, character, frame, mode)` draws one character with one motion frame. A motion
  frame holds `((bones + 1) * 2 + 1)` vectors of 12 bytes. A switch on the character index adds
  per-character extra parts.
- The four cabbies are characters `0x3B-0x3E` (59-62). `selectDrawDriver(n)` draws them on the
  character-select screen from the table at `0x0C130748` (0x10 bytes per driver: two motion
  pointers, the character index).
- Pedestrians are drawn as character `look + 5`, so characters 0-4 are not used for them.
- Motions (`motDC.BIN`, loaded at `0x0C880000`): a 12-byte header `frames, bones, data` with the
  data right before it, `frames` x 396 bytes (33 vectors of 12 bytes: `(bones + 1) * 2 + 1`,
  bones 15 for every human); vector 0 is the root, so a walk's root moves forward frame by frame.
  Customer motions are listed in a table at `0x0C0D143C` and in `psgEnterState1`'s templates: run
  `0x0CA75D74` / `0x0CA7BBDC` (61 frames, 0.47 units a frame; `FUN_0c06b1cc` picks one of the two
  sets), walks such as `0x0CAB6BBC` (121 frames, 0.38 a frame), `0x0CA8BCBC`, `0x0CAA143C`
  (101 frames), each with its other-set twin. `0x0CB32654` and `0x0CB38C78` (66 frames each) are not
  walks but the pedestrians' sideways leap, mirrored: the root travels 38.7 units along -x in the
  first and +x in the second, at about the same height (10.4 to 10.6). Walking customers
  draw with `humanDraw(..., 1)` and standing ones with mode 0: mode 1 plays the motion in place,
  the movement coming from the root's steps (the Android build reads the same).
  A character's forward is its local -x: a walk's root travels along -x (`0x0CAB6BBC`: 0 to -45.4
  over the loop), and characters are drawn with their heading as the y rotation.
  Customer walks are whole clips (set off, walk, halt): `0x0CAB6BBC` speeds up to 0.6 units a frame
  around frames 30-40 and slows to 0.12 at the end; its steady stride, frames 39-83 (44 frames,
  0.51 a frame), is the closest loop in the clip, but its ends still differ by about a third of
  the stride's own pose swing. Customer standing idles (no root
  travel) include `0x0CAE3244` (76 frames), `0x0CAD21A4`, `0x0CAFC810`, `0x0CB17990` (81 frames);
  `0x0CB17990` and `0x0CB035F0` (71 frames) barely move, the others gesture.
  There is no walk cycle: people stand, wave and jog. The crowd (`pedDraw`) takes its motions from
  the same sets, standing idles from the table at `0x0C0D6158` and the jog clips from `0x0C0D61AC`.
  `0x0CA64554` / `0x0CA6A230` (in place, 60 frames) are the two tennis players `FUN_0c072348`
  draws (character `0x10`, table `0x0C13F4C4`).

## Skeleton and motions

Three motion formats share one skeleton. Names are the Android build's (`libgl2jni.so` keeps
`SklPlay`, `SklIpPlay`, `SklSfPlay`, `VSklPlay`, `VSklIpPlay`, `VSklSfPlay`, `FcvPlayBuffer`; the
Dreamcast functions sit in the same order, and the Android `VSklPlay` reads like `humanDraw`).

| Format | Draw | Interpolated | Float frame | Used by |
|---|---|---|---|---|
| V (`motDC.BIN`): rotation matrices | `VSklPlay` = `humanDraw` (`0x0C069800`) | `VSklIpPlay` (`0x0C06A204`) | `VSklSfPlay` (`0x0C06AF44`) | crowd, customers, tennis players |
| Skl: `s16` Euler angles | `SklPlay` (`0x0C067DE0`) | `SklIpPlay` (`0x0C068730`) | `SklSfPlay` (`0x0C069590`) | nothing: no call or pointer reaches these three |
| Fcv: key curves into a pose buffer | `FcvPlayBuffer` (`0x0C066D98`) | `FcvStoreBuffer` fills the buffer | | cab drivers (`Drv_Execute`); `FcvPlay` (`0x0C065E34`) draws a curve motion directly (the running customer) |

- Skeleton: 16 bones (a motion's `bones` field is 15 = the last index), the same for every
  character. Only the models differ: `mptbl_All` (`0x0C1331B0`, Android name) holds one pointer per
  character to 16 model pointers in `polDC0` (`+4 * bone`; slot 0 unused; null = not drawn: hands
  2/5, feet 9/12 or hips 15 on simpler characters, merged into the neighbouring part). Bind offsets
  are 13 vectors in the executable (`0x0C0D5430`-`0x0C0D54CB`); every bone points along its own +x
  (child offsets are along +x). `FcvPlayBuffer` repeats the same lengths as literals.

| Bone | Parent | Offset (in the parent's axes) | Model slot | Part (side from the stance below) |
|---|---|---|---|---|
| 0 | root (motion vector 0) | none | (none) | root orientation |
| 8 | 0 | none | 8 | torso (chest to neck; +x up) |
| 1 | 8 | `0x0C0D5430` (4.4849, 0, 0) | 1 | head (+x = face, +y = up) |
| 4 | 8 | `0x0C0D543C` (3.6611, 0.056, -1.7876) | 4 | left upper arm |
| 3 | 4 | `0x0C0D5448` (2.508, 0, 0) | 3 | left forearm |
| 2 | 3 | `0x0C0D5454` (2.5145, 0, 0) | 2 | left hand |
| 7 | 8 | `0x0C0D5460` (3.6611, 0.056, 1.7876) | 7 | right upper arm |
| 6 | 7 | `0x0C0D546C` (2.508, 0, 0) | 6 | right forearm |
| 5 | 6 | `0x0C0D5478` (2.5145, 0, 0) | 5 | right hand |
| 15 | 0 | none | 15 | hips (+x down) |
| 11 | 15 | `0x0C0D5484` (1.1603, 0.1486, -1.1764) | 11 | left thigh |
| 10 | 11 | `0x0C0D5490` (4.051, 0, 0) | 10 | left shin |
| 9 | 10 | `0x0C0D549C` (4.2466, 0, 0) | 9 | left foot (+y = toes) |
| 14 | 15 | `0x0C0D54A8` (1.1603, 0.1486, 1.1764) | 14 | right thigh |
| 13 | 14 | `0x0C0D54B4` (4.051, 0, 0) | 13 | right shin |
| 12 | 13 | `0x0C0D54C0` (4.2466, 0, 0) | 12 | right foot |

- Models agree: each part's bounding sphere (record `+0x08`) sits along its bone's +x, about half
  its length out (character `0x3B`: torso centre x 2.35, upper arm 0.76, forearm 1.12, thigh
  1.70, shin 2.05; forearm or shin centres move out to ~2.2 / 2.6 when the hand or foot slot is null).
- Stance and sides: posing a standing record (`0x0CAE3244` record 1) through the tree gives a
  standing person, pelvis at y 10.58, head joint 15.06, ankles 1.25, facing -z (head +x and foot
  +y both point -z), bones 7 and 14 at +x. The world is right-handed (the driver's seat is at car
  +x with the front at +z, the left seat of a left-hand-drive cab), so +x is the person's right:
  4-3-2 and 11-10-9 are the left limbs. The walk `0x0CAB6BBC` turns the body 90 degrees as it sets
  off (bone 0 yaw up to 52 degrees) and faces -x, its travel direction, then turns back.
- Drawing order (`humanDraw`; `push` = `nlPushMatrix(0)`, a copy; every rotation multiplies the
  current matrix on the right): push; root (mode 0: `nlTranslateV(v0)`, mode 1: `nlTranslate(0,
  v0.y, 0)`); R0; push; R8, part 8; push, T, R1, part 1, pop; push, T R4, T R3, T R2 (parts), pop;
  push, T R7, T R6, T R5, pop 2; R15, part 15; push, T R11, T R10, T R9, pop; T R14; push, T R13,
  T R12, pop 2. Balanced (7 pushes, 7 pops). Per-character extra models (hats, bags) are drawn
  after a part by `switch (character)` blocks. When `0x0C13ED9C` is set the head's position
  (`nlGetTranslate`) goes to `0x0C13EDA4`; `0x0C13EDA0` does the same for the hips at `0x0C13EDB0`;
  `0x0C13ED98` gates the extras of characters `0x21`, `0x23`, `0x24`.
- V format record (33 vectors of 12 bytes, 396 bytes): `v0` root position, then per bone `b`
  two unit vectors `a = v[1 + 2b]`, `c = v[2 + 2b]` (offsets `12 + 24b`, `24 + 24b`).
  `vsklRotate(a, c)` (`0x0C06AF8C`) copies them into the matrix `0x0C13EE80` with
  `nlOuterProduct(a, c)` (`0x0C078B00`) as the third column and calls `nlMultiMatrix8`: R has
  columns `a, c, a x c`, i.e. `a` is the bone's +x and `c` its +y in the parent's axes. Motion header
  `{int frames; int bones; v *data}`, data just before it. `VSklPlay` and `VSklIpPlay` play record
  `frame mod (frames - 1) + 1` (unsigned): record 0 is never drawn.
- `VSklIpPlay(a, frame a, b, frame b, w, character, mode)`: per vector `nlGetAverageVector(va, vb,
  out, 1 - w, w)`, then `nlUnitVector` on the two basis vectors (no re-orthogonalisation; the third
  column is their cross product). `VSklSfPlay(motion, float frame, character, mode)` = `VSklIpPlay(motion,
  floor, motion, ceil, fraction, character, mode)`.
- Skl format: header `{u16 frames; int rootOfs @+4; int rotOfs @+8}`, root vector at
  `header - rootOfs + 12 * i`, angles at `header - rotOfs + 96 * i` (16 bones x `s16` x, y, z,
  bone `b` at `+6b`); `SklPlay` plays `i = frame mod frames` (signed), `SklIpPlay` `frame mod
  (frames - 1) + 1`. `sklRotate(s16 v[3])` (`0x0C0696CA`) builds `Rz(v[2]) * Ry(v[1]) * Rx(v[0])`
  (angles `0x10000` = a turn, `nlFastSinCos` = `fsca`, `0x0C089DF0`) in `0x0C13EE3C` and calls
  `nlMultiMatrix`; the tree, offsets and models are `humanDraw`'s. Blends: `GetAverageAngle(x, y,
  t)` returns `y + wrap(x - y) * t`; `SklIpPlay` passes `(a, b, 1 - w)`, so `w` is the weight of `b`
  as in `VSklIpPlay`. The Android build kept `SklPlay` with the same body.
- Fcv pose buffer (`tagFCVIPBUFFER`, 17 vectors, 0xCC bytes; `FcvStoreBuffer` evaluates the curves
  into it): `[0]` root position, `[1]`-`[4]` float target points in the character's axes (hands of
  chains 4-3-2 and 7-6-5, feet of 11-10-9 and 14-13-12), `[5]`-`[16]` `int` angles (`0x10000` = a
  turn) for `fcvRotate` (`0x0C0695D8`, the same `Rz * Ry * Rx`). `FcvPlayBuffer` places root,
  `[5]`, `nlRotateAY(0x4000)`, then `[6]` torso, `[7]` head (after `nlRotateAZ(-0x4000)`), per arm
  a shoulder turn (`[8]`, `[10]`) then upper arm and forearm bent by `nlRotateAZ` angles from the
  two-bone solver `FUN_0c067c14` aimed at the target, the hand `[9]`, `[11]`; `[12]` hips; per leg
  `[13]`, `[15]`, the solver, the foot `[14]`, `[16]`.
- `nlMultiMatrix` (`0x0C077E40`) and `nlMultiMatrix8` (`0x0C077EA0`): current = current * M (16
  floats, column by column); checked against this game's own bytes.

## Pedestrians

- Crowd spots: 20-byte records, `float x, y, z` then `u16` at `+0x0E` (spread radius) and `u16` at
  `+0x10` (number of people). City 0 starts at `0x0C0C8420`, city 1 at `0x0C0CB0D4`; the two lists
  plus a group index run to `0x0C0CF2EC` (1,416 records).
- `crowdSpawn` runs every frame: it picks spots within range and in front of the view and creates
  at most 3 people per frame. A bit field at `0x0C2A7064` marks the spots in use.
- `crowdCreate(spot, index)` creates one crowd: a task (`crowdTask`) plus `count` person records
  of 100 bytes.
- `pedSpawn` places one person, `pedInit` sets their look and motion, `pedUpdate` advances them,
  `pedDraw` draws them (a simple model when far, `humanDraw` when near).
- Person record (100 bytes): `+0x0C` position, `+0x18`/`+0x1A` heading, `+0x20` motion frame,
  `+0x24` look, `+0x28` motion index, `+0x40` dodge position, `+0x50` state (-1 free, 0 gone, 1
  standing, 2 dodging), `+0x54` ground data, `+0x60` customer flag.

- Dodging: `pedDodgeCheck` (`0x0C04FC5A`, from `pedUpdate`) tests only the player car: distance to
  `Car_Data + 0x78` under `|Car_Data + 0x15C| * 15 + 50` and a lateral offset under 20 in the
  car's motion frame (`crowdCarFrame`, `0x0C2A6FE4`, rebuilt by `crowdSpawn` every frame). The start
  writes `+0x20` = 0, `+0x50` = 2, `+0x1A` = `Car_Data + 0xF4`, a jump clip in `+0x28` (even with
  `+0x38` = 0xC000, odd with 0x4000; clips at `0x0C0D61AC`), `+0x3C` = `pedJumpDist[clip]` / frames,
  and plays `pedScreamSound[look]`. People have no collision of their own.

## Passengers (customers)

Customers are not crowd records: each is a `tagPASSENGER` (the Android build's type name), set up by
`Psg_Init(p, character, param)` and run by `Psg_Execute`. Layout (Dreamcast offsets; the Android
build has the same fields, shifted where its pointers are 8 bytes: +0 to +0x24 equal, +8 from
+0x34, +0xC from +0x11C, +0x14 from +0x124, +0x18 from +0x148):

| Offset | Field |
|---|---|
| `+0x00` | character index |
| `+0x04` | position (`x, y, z`) |
| `+0x14` | direction / ground normal (`vecAxisX` at init; `CalcShadow4Normal` writes it) |
| `+0x20` | state; `+0x24` sub-state (state 2, or 4 with sub-state 2: the ground snap is relaxed) |
| `+0x34` | `0x0CADB018` at init (the Android build stores the same Dreamcast address) |
| `+0x3C` | animation player (`tagFCVIPBUFFER`, 0xCC bytes), started by `FcvStoreBuffer(motion, 0.0, p + 0x3C)` |
| `+0x10C` | float; > 0 sets flag bit 16 |
| `+0x11C` | walk speed; `+0x120` run speed (`Psg_SetMoveSpeed`: speed, speed / 0.5) |
| `+0x124`, `+0x128` | pointers (`0x0C0D5720`, `0x0C0D5728` at init) |
| `+0x12C` | counter near the curves of `HitDetectCurve` (`Psg_Continue`) |
| `+0x134` | vector, zero at init |
| `+0x140` | `Psg_Init`'s third argument |
| `+0x148` | flags (bit field): bits 0-2 per character (`FUN_0c070cd0`), bit 3 animation set A |
| `+0x150` | int; `+0x154` ride-on index (mini games) |

- `Psg_SetPosPtr(p, pos)` / `Psg_SetPosVal(p, x, y, z)` / `Psg_SetPosPtrSet(p, pos)` move a
  passenger and snap it to the ground with `GetCollision2D(pos)` (result `+0x1C` = -1: no ground).
- States (`+0x20`): `psgSetState(p, state, a, b)` stores the state and `+0x28`/`+0x2C`, clears the
  sub-state, then `psgCallEnter` runs the state's entry function from a table of seven (template
  at `0x0C0D5A98`; the Android build has the same table at `0x821258`). What each entry does, from
  the customer lines it plays (the Android entries call them by name):

  | State | Entry | Plays / does |
  |---|---|---|
  | 0 | `psgEnterState0` | waiting at the curb: `Chat_HeyTaxi`, a random idle motion; `IsBoyFriend` in mini game 8 |
  | 1 | `psgEnterState1` | the taxi near: `Chat_DontPass`, `Chat_DamnIt`, distance to the car |
  | 2 | `psgEnterState2` | getting in: `Chat_Geton`, moves along the car's matrix, ground probe |
  | 3 | `psgEnterState3` | riding: `Chat_TellDestination`, `Chat_Direction`, `Chat_Iraira`, `Drv_StartAction` |
  | 4 | `psgEnterState4` | getting out: `Chat_Getoff`, the get-off hand tables, `Psg_SetMoveSpeed` |
  | 5 | `psgEnterState5` | `Chat_Iraira` (impatience) with a random choice |
  | 6 | `psgEnterState6` | `Chat_DamnIt`, facing the car; `Psg_Continue` enters it |

  State 2, and state 4 with sub-state 2, relax the ground snap in `Psg_SetPosPtr`: the customer is
  in the air or inside the car.
- Every frame: `Psg_Execute(task, distance)` runs one customer task. The `tagPASSENGER` sits at
  task `+0x1C`; task `+0x14` points to the customer's request (`+0` event, `+8` spot position);
  task `+0x174` is the ride phase, set by the customer manager (the Android build, where the
  passenger sits at `+0x38`, reads the same):

  | Phase | Each frame |
  |---|---|
  | 0 | spawn: `psgSetState(p, 0, 0, 0)`, snap to the spot |
  | 1 | waiting: on screen or not (`nlProjectScreen3D`); the distance to the taxi picks a band (`g_0c13eed4`/`eed8`/`eedc`, set by `Set_StandWaitDist`) and re-enters the state with it; nearer than `g_0c13eee0` (150): state 1. Request event 5 (the taxi stopped for them): state 2, the get-in camera (`KyaCamera_Start`), `Drv_StartAction(2)`, a random get-in variant |
  | 2 | riding: impatience (`Chat_Iraira`), reactions to the car's acceleration (`Chat_Crush` at -2/-4/-6), arrival |
  | 3 | out of time: impatient line, out of the car |
  | 4 | arrived: state 4, `Drv_StartAction(4)`, the drop-off camera (`KyaCamera_Start(p, 1)`) |
  | 5 | nothing |
  | 6 | frees its animation buffer slot |

  Then `psgSetCurrent(p)` and `psgFrame(p)`: in states 0 and 1 `psgRoadCheck` counts how long the
  customer stands in the taxi's path (the 35 points at `0x0C2AD2BC`, TaxiDriver + 0x2BC; over 15:
  state 6, a dodge out of its way, after which they wait again where they stand), then the state's frame handler runs from a second table of seven (template at `0x0C0D5F64`,
  Android `0x821540`): `psgFrameState0`-`psgFrameState6`.
- A customer draws itself in its frame handler (`psgFrameState0` and others): `nlPushMatrix(0)`
  (a copy of the camera's view matrix), place it in the world (`FUN_0c071048`, or `FUN_0c071104`
  for the mini game 8 boyfriend, then `FUN_0c070f04` and `FUN_0c0713d8`), then
  `humanDraw(p->motion, p->chara, (int)p->frame, 0)` with the current motion at `+0x34` and the
  float frame at `+0x38`, then `nlPopMatrix(1)`. `nlPushUnitMatrix` (`0x0C0782E0`) pushes an
  identity matrix instead, which drops the camera: anything drawn under it is placed as if the
  camera sat at the world origin.
- Moving and animating a customer (state 1's frame handler, `psgFrameState1`; the Android build's
  `FUN_0042def4` reads the same): the heading is `+0x10` (16-bit angle; drawn at heading
  `+ 0x8000`), the current motion `+0x34` and its float frame `+0x38`. Sub-state 1 (running to the
  taxi) plays the character's run motion with `FcvPlay`, steps the frame by `+0x120` per tick and
  moves toward a target (the Android build passes `+0x28`), until within 3 units. Sub-state 2
  walks by root motion: the motion's own root position at the previous and current frame gives
  the step, rotated into the heading and averaged with the wanted direction
  (`nlGetAverageVector`), then `Psg_SetPosPtr` puts the customer there on the ground. The heading
  turns toward the wanted direction with `GetAverageAngle(current, target, 0.8)`.
- A motion change can blend: `+0x108` counts frames up to `+0x10C` (> 0 sets flag bit 16), with
  the next motion at `+0x110` and its frame at `+0x114`; `psgPlayBlend` draws the mix
  (`VSklIpPlay`), the plain case draws with `humanDraw` (the Android build's `VSklPlay`).
  `VSklIpPlay(motion a, frame a, motion b, frame b, weight of b, character, mode)` mixes two poses
  (root included), so it can blend two frames of one motion as well as two motions.
- Before each draw: `psgFaceTaxi` (or the mini game 8 boyfriend variant `FUN_0c071104`) turns the
  heading toward the taxi when standing, and `psgPutShadow` moves the matrix to the customer
  (translate `+0x04`, rotate heading `+ 0x8000`) and draws the shadow (`CalcShadow2Matrix` from
  the ground normal `+0x14`, shadow model `0x0C5AA038`).
- `0x0C06AFB2` was named `nlFastSinCos` by the first matcher pass; it is `GetAverageAngle`
  (`current + (target - current, wrapped) * t`).
- `0x0C06B9D0` (state 2's entry) was named `VSklPlay` by the first matcher pass; the table and its
  calls show it is not.
- Animation sets: characters 1-3, 0x18, 0x1A, 0x1F-0x21, 0x23, 0x24, 0x26, 0x29, 0x2A, 0x2C, 0x2E,
  0x30, 0x31, 0x33, 0x34, 0x37 and 0x39 (`FUN_0c070bf8`, a bit mask in the Android build) play the
  motions at `0x0C9726F4`, the others those at `0x0C972E68`. `FUN_0c070c64` is a second character
  list; the Android build replaced it with a table.

- Boarding (`kyakuTaskExec`, `0x0C024878`, phase 1): the request event goes 1 to 3 when the
  horizontal distance from the customer's spot to `Car_Data + 0x78` is under `kyakuDespawnDist`,
  under 500 (`0x0C024FA4`), and under 130 - 60 * `task + 0x194` (`0x0C024FA8`), the car's speed
  `|+0x15C|` is at most 0.15 and its height within 50 of the spot. `exec_KyakuMain` turns 3 into 4
  (sets `kyakuBoarding`, sound 0x2A9) and the task 4 into 5 after `GS_GuestIn`. Only the car's
  position counts; the green circle is drawn only in VR modes 0, 1, 2, 10, 11.

- The ride and the drop-off (`kyakuTaskExec` phase 2, `0x0C02513C`): arrival needs the car
  (`task + 0x18`, never `Car_Data` by name) inside the destination area (`kyakuInDestArea`), within its
  drop radius (`dest + 0x14`), speed `|+0x15C|` at most 0.15 and yaw rate `|(short)+0x198|` under 16;
  then `GS_GuestOut` pays (rating, +120/+300 time bonus) and phase 4 starts the get-out
  (`psgPickExitSide`, the car matrix `+0xB4`, through their own `Car_Data` pool words) and
  `camPlayScript` (VR mode 11). The riding passenger is drawn at `psgSeatMatrix` (`Car_Data + 0xB4`
  times `psgSeatOfsTbl[cabbie]`); its character index is passenger `+0x00`. `drvPassenger`
  (`0x0C2AD1D8`) is the passenger in the cab.

## Input

- Every frame `getSwitch` reads the pads: `padReadSlot(0)` stores `pdGetPeripheral(0)` (port A)
  in the table at `0x0C1EE12C`, `ConvertSwitch(0)` turns it into `TaxiSW`, port C (`padReadSlot(2)`)
  goes through `ConvertSwitch2`, then `padToAnalog` makes the car's inputs. The Android build does
  all of it in one `getSwitch()`.
- `TaxiSW` (`0x0C1EE24C`, 0x34 bytes per player): `+0x00` buttons held, `+0x04` pressed, `+0x08`
  released, `+0x0C` last frame's held; `+0x10` stick X (recentred, x256), `+0x12` right trigger
  x256, `+0x14` left trigger x256, `+0x16` stick Y; bytes `+0x18` stick X (0-255), `+0x19` right
  trigger, `+0x1A` left trigger, `+0x1B`-`+0x1E` button flags (`exec_CarMain` reads `+0x1B`,
  `+0x1C`: the gear buttons, on the pad A and B; `+0x1D`, `+0x1E` probably the controller
  set-up's other two actions, "confirm" and "destination", read only by a menu helper at
  `0x0C04D60C`; `ConvertSwitch` fills all four from the configured buttons); `+0x2B` device: 0 pad, 1 a device whose name starts with `R` (the racing
  controller), 2 one with `F` at its 11th character.
- `padToAnalog` (Android names): steering `STR_ADc` = (stick X - `STR_MID`) / `STR_RBND` (or
  `STR_LBND` to the left), -1 to 1; accelerator `ACC_ADc` = (right trigger - `ACC_MIN`) /
  `ACC_BND`, 0 to 1; brake `BRK_ADc` = (left trigger - `BRK_MIN`) / `BRK_BND`, 0 to 1 (the `_AD`
  globals hold the same values before clamping). These three floats are what the taxi drives on.
- Other readers of `TaxiSW`: `CheckSoftReset` (A+B+X+Y+Start), two cheat code checks (the Android
  build's `DC_Chari_Command_Check` and `DC_Reverse_Command_Check`; `FUN_0c0511a4` is one of them),
  menus, the camera, `technicalCheck`.

## Taxi

- The player's taxi is the struct at `0x0C1790CC` (0x3BC bytes, indexed by player in code that
  takes a car number): `+0x64` (short) the area the crowd spawner reads, `+0x78` position.
- The player's car is drawn by `putPlayerCar(car)` (`0x0C0203E8`, the car index; called once,
  from `exec_CarMain`), not by `putCarModel`: at its
  position and rotation (`+0x86` yaw, `+0x84`, `+0x88`), with the models in the set `+0x74`
  points to (eight models: four wheels, the body at `[4]`, two body variants at `[5]`/`[6]`
  picked by `+0x58`, one more). `init_CarMain` fills `+0x6C`, `+0x70` (wheel positions, x y z
  each) and `+0x74` per cabbie from three five-entry tables (`0x0C0DAFD8`, `0x0C0DAFEC`,
  `0x0C0DAFC4`; entry 4 is a default), so each cabbie has their own cab.
  `putPlayerCar` runs to `0x0C0206DA` (a literal pool sits mid-body): it draws the body `[4]`,
  then `[6]` (or `[5]` while `+0x58` is set) at the same matrix (position, the three angles,
  then `+0xAC`/`+0xB0` and 1.2 down), and places each wheel from the `+0x6C` table (x and z; the
  height comes from the suspension), computing the tyre contact points on the way
  (`FUN_0c0771b0`). A model is drawn by `nlObjPutUseViewMatrix(model)`; its first word picks the mesh
  kind (0 or 1; by the code, any other value only pops the matrix). The player car is drawn in a state that ignores
  the fade colour: with the base fade set to red (`0x0C0EA5BC`, which `ResetFadeColor` copies
  in), the city and the traffic turned red and the player car and the walker did not (seen
  live). Traffic cars, by contrast, wear their colour through it (`+0x7C`, below). The colour
  comes in per strip: the routine all models go through (`FUN_0c081662`) reads it once per model
  and applies it to strips whose flag word (read from the model, XOR-ed with `0x0C14A648`) has
  bit `0x20` set and `0x10` clear.
- Traffic models: `carTbl` (`0x0C0A2628`, 0xA8 bytes per type; `putCarModel` reads the type as a
  short at `+0x78` of the `_car`). An entry, by `putCarModel` (the Android build's has the same
  order with 8-byte pointers): `+0x00`/`+0x04` body (two detail levels), `+0x08`/`+0x0C` shadow,
  `+0x10`/`+0x14` an extra model, `+0x18`-`+0x34` and `+0x38`-`+0x54` two sets of eight light
  variants, `+0x58`/`+0x60`/`+0x68` the wheel model of up to three axles, `+0x70`/`+0x7C`/`+0x88`
  those axles' centres (x y z; type 0 (0, 3.2, +-14.9), type 10 (0, 5.7, +-36.7)), `+0x94` 2000
  for cars, 8000 for type 10 (not yet known), `+0x98` (28, 40), `+0xA4` the type's name:
  0 `E_Taxi`, 1 `P_Compact`, 2 `P_Wagon`, 3 `P_Sedan_A`, 4 `P_Sedan_B`, 5 `P_JEEP`, 6 `P_Picup`, 7 `P_Box`, 8 `P_Sedan_C`, 9 `P_IceBox`, 10 `P_Bus`, 11 `P_Convoy`, 12 `P_Convoy_TLR`, 13 `P_Convoy_TLR2`, 14 `P_Mercury`. The player's model set (above) is
  a different layout: one model per wheel, then the body. Type 14 (`P_Mercury`) uses the same
  body as the cab in the cabbie model set 3 (`0x0C3E1568`), 15 is empty, 16-19 use city models
  (`polDC1`-`3`, the trains).
- Where the car starts: `init_CarMain` writes the start position and heading straight into the
  car (fixed values per `CourseMode`, and per `ReverseMode` in mode 1), then copies them on: a copy
  of the position at `+0x8C` (where traffic cars keep the position they are drawn at), the
  heading's copy `+0xF6`, each wheel's contact point in the tyre records from `+0x1A0` (0x84
  apart) and the car's own collision object at `+0x00` (`SetColliObj(car, 0)`). The car's
  velocity is `+0xFC` (x y z, a copy at `+0x108`) and its speed `+0x15C` (the Android build's
  `getCarSpeed` / `setCarSpeed`, `+0x174` there). The car fields are the Android build's offsets
  minus 0x18 (the DC `init_CarMain` uses `0x86`, `0x8C`, `0xF6`, `0xFC` and `0x1A0`).
- No function moves the player's car once the run has started, except the recovery (inline in
  the Android build's `exec_CarMain`; on the DC in `FUN_0c0231b4`, `0x0C0234E0`-`0x0C023580`):
  when none of the four wheels finds ground (the car is out of the world) it puts the position
  `+0x78` on the nearest course point (`getNearLineIndexAll`, or per mode the nearest of two
  course lines), copies it to `+0x8C`, lifts it by 30 (`+0x7C`), copies `F_ZERO` (`0x0C08AD94`)
  into the velocity `+0xFC` and `+0x108`, and zeroes the speed `+0x15C` and `+0x160` (in Crazy
  Box game 3 it also resets the angles `+0x84` from `I_ZERO`, `0x0C08ADAC`).
- The gear is `+0x120` (the Android build's `getCarGear`, `+0x138` there): 0 reverse, 1-5 the
  automatic gears. `carGearbox` (`0x0C020DE8`, inline in the Android build's `exec_CarMain`)
  sets 0 while `TaxiSW + 0x1C` (A, reverse) is set, 1 on `TaxiSW + 0x1B` (B, drive), and moves
  between 1 and 5 by the engine's revs. `carRumble` (`0x0C0206DC`) reads the same buttons and
  the stick and ends in `ndPuru2Start` (the Jump Pack).

- The driver in the cab: `Drv_Execute` runs one action function per driver mode (`TaxiDriver`
  `+0x10`, from a table, offset by 10 while flag bit `0x80` is set; `Drv_StartAction(action,
  a, b)` stores it with `a`, `b` at `+0x18`/`+0x1C` and runs the action's set-up,
  `FUN_0c062096`). 2 is a customer getting in and 4 one getting out (`Psg_Execute`), 5 the "pick
  someone up" line (`Act_Execute`, when the timer reads 600 or 300 frames); the action changes on
  its own while driving, so it is not a "just driving" signal. The seated driver is drawn by one
  `FcvPlayBuffer(buffer, TaxiDriver + 0)` either way: in driver modes 2 and 4 (and with bit 0 of
  `+0x1DF`) from the animation buffer at `TaxiDriver + 0x28` (call at `0x0C06400E`); otherwise
  `drvJolt` (`0x0C064130`, inline in the Android build) turns the cab's acceleration, in its own
  axes, into a body lean and head turn in the buffer `FcvJoltD` (`0x0C2AD460`) and plays that
  (call at `0x0C0643F0`). Before either, `Drv_Execute` pushes the car's matrix (`Car_Data + 0xB4`)
  and moves to the seat: one x, y, z per cabbie in the car's axes (front is +z), copied every
  frame from `0x0C0D51E8` (4.36, 0, -1.01 / 4.36, 0, -0.12 / 4.36, 0, -1.67 / 4.36, 1.21, 0.73).
  The driver
  himself is rigid models (body, head, arms in `polDC0`, e.g. `0x0C3BFFE0`, `0x0C3C05A8`,
  `0x0C3C07C8`; one model table per cabbie at `0x0C136BE4`, `0x0C138BF8`, `0x0C13BB20`,
  `0x0C13D404`, chosen by `TaxiDriver + 0x20`), put with `nlObjPutUseViewMatrix`, and only while bit 0 of
  the flags byte `TaxiDriver + 0x1DF` is set: that is the bicycle (the "chari" cheat; setting the bit
  in play puts the driver on a pedalling bike above the seat) (bit 1 is the hold flag the customers read, bit 7 is
  tested in `Drv_Execute`). `Drv_Init` and the driver's action functions write that byte;
  `Drv_Execute` only reads it.
- The driver's fields by their original labels: the Dec 3, 1999 prototype (HDR-0053 V0.220) still
  has a debug readout ("Beta Version DEBUG ASCII", at `0x0C0614C0` in that build) printing the
  same struct (`0x0C2A9628` there): `+0x00` `ManType`, `+0x04`/`+0x08`/`+0x0C` `pos.x/y/z`,
  `+0x10` `Act`, `+0x14` `Mode`, `+0x18` `ParamA`, `+0x1C` `ParamB`, `+0x20` `Addr`, `+0x24`
  `Frm` (a float), bit 7 of `+0x1DF` `isIp`. They fit the retail code: `Act` is the action
  `Drv_Execute` runs, `ParamA`/`ParamB` the two arguments `Drv_StartAction` stores, `Addr` the
  model table it picks. Retail and the later prototypes dropped the readout.

- Walls: `CheckColliWall(point, radius)` (`0x0C0341E8`; the point in `r4`, the radius in `fr4`)
  pushes a point out of the walls and poles of its collision grid cell, in place. A wall is a 2D
  line with a height range; it counts only while the point's y is within it (down to `radius`
  below its bottom). Its callers are `ExecAdvCamera`, `SetObjFly` and `FUN_0c0730b4` (an object
  by the taxi, radius 21); the customers' own movement never calls it. A point at ground height
with radius 5 (a person) is held back by building walls and poles.
  The wall grid is laid out like the ground grid: header at `0x0C27045C`, cell pointers behind `0x0C270458`; a cell
  has a halfword count of walls at `+0` and of poles at `+2`, then the pointers (walls first). A wall (`FUN_0c034872`,
  floats): the line `a*x + b*z + d` at `+0`, `+4`, `+16` (the signed distance, so (a, b) is its normal), an end point
  (x, z) at `+8`, `+12`, the top at `+20`, the bottom at `+24` and the length at `+28`. A point at `y` counts only between
  the bottom (less its radius) and the top. Inside the radius of the line and past the end it came for, it is pushed away
  from the end point (type 2); along the wall within its length, along (a, b) (type 1); the push is the radius minus the
  distance. A pole (`FUN_0c0349d8`): centre (x, z) at `+8`, `+12`, its radius at `+16`, top and bottom at `+20`, `+24`; it
  pushes the point away from the centre by the overlap of the two radii. `CheckColliWall` takes the deepest type 1 push, else
  the nearest type 1 beyond the radius (under twice the radius), else the nearest type 2; the first pole it is inside ends the check.

- The ground and the swept move (`src/collide.c`, all Equivalent C): the course's collision data is a grid of cells.
  The grid header is at `0x0C26E3F4` (32 bytes, loaded with the course, not built by code): `+0x00` and `+0x04` the
  first cell's x and z (in cells), `+0x10` the cells per row, `+0x18` the number of cells, `+0x1C` the cell size
  (a float); the pointer at `0x0C26E3F0` is the array of cell pointers (0: an empty cell). A cell: `+0x08` a
  halfword count, then from `+0x0C` that many surface pointers. A surface: `+0x00` the plane normal (a, b, c) and
  `+0x0C` d, so a point's height is `-(a*x + c*z + d) / b`; `+0x10` a radius (only points within it of the first
  corner are tried); four corners (x, y, z) at `+0x14`, `+0x20`, `+0x2C`, `+0x38`; `+0x44` its kind and `+0x48` its
  shape (3: the first edge is not tested).
- `GetCollision2D(pos, tol)` (`0x0C031EF4`) is the ground lookup the walker and the passengers use: it turns x and
  z into a cell, asks every surface of the cell (`FUN_0c032080`: inside the corners, and the height), skips kind 13,
  and takes the highest surface not above `pos.y` (or the lowest when none is below), then any surface within `tol`
  above it. It returns `0x0C26E478`: x, height, z, the surface's normal at `+0x0C`, its kind at `+0x1C` (-1: no
  ground). `GetCollisionFirst(a, b, radius)` (`0x0C031B6A`) gives the first thing the move a to a + b meets (`0x0C26E458`:
  point, normal at `+0x0C`, fraction at `+0x18`, kind at `+0x1C`). `GetCollision(a, b, bounce, radius)`
  (`0x0C0319B2`) slides a point along a move through several surfaces: each hit moves it to the hit and takes the
  normal part off the rest of the vector, scaled by `1 + bounce * table[kind]` (the kinds' first float at
  `0x0C08F748`, 28 bytes each: kinds 2 and 6 are 1.0, the rest 0); it writes the first hit at `0x0C26E414` and the
  last at `0x0C26E434` and the kinds met as a bit mask at `0x0C26E454`. Both search through `FUN_0c031c5a`, which
  walks up to 10 cells along the move (the cell list at `0x0C26E3A0`, their far-side fractions at `0x0C26E3C8`) and
  stops when the hit found is nearer than the next cell. The walls (`CheckColliWall`, above) are a separate list.

## Traffic

- Events: `set_event(size, func)` (the Android build's `nlSetEvent`) allocates an event of
  `size` bytes and links it into the list at `0x0C1799C8`; the event's own header holds the links
  (`+0x04`, `+0x08`) and its function (`+0x0C`), its data follows. `nlExecuteEvent`
  (`0x0C029702`, once per driving frame) calls every event's function with the event;
  `nlCloseEvent(event)` (`0x0C029698`) unlinks and frees one.
- The heap: `nlInitHeapMemory(base, size)` (`0x0C0293C8`) sets up one block of 0x30000 bytes
  at `0x0C1799E8` (descriptor at `0x0C1799D8`: start, end, free list) at every run's start
  (`gameState0`); `nlInitEvent` (`0x0C029542`) then empties the event list. `nlMalloc`
  (`0x0C0293FA`) is first fit (4-byte aligned, 8 at least), splitting from a block's end;
  each block has its size in front (negative while in use) and behind. `nlFree`
  (`0x0C02948C`) merges with free neighbours and has no guard: a block freed twice goes on the
  free list twice. Events (`nlSetEvent` = `set_event`, `nlSetEventBefore` `0x0C0295E4`,
  `nlSetEventNext` `0x0C02963E`) come from this heap, so do the course occupancy grids
  (`courseStatusInit(0)`), pedestrians and set objects; `0x0C1A99EC` counts events. When the heap
  is full, `nlSetEvent` returns 0 and `PcarInit`/`ParkingCarInit` add nothing. `nlExecuteEvent`
  keeps the next event at list `+0x0C` before each call, and `nlCloseEvent` moves it on, so an
  event may close itself (or the next one) while it runs.
- `SubwayFlag` (`0x0C2A6FD8`): at 2 `trafficControl` skips `trafficLevelControl` and
  `trafficSectionControl` (no new moving traffic); set at a run's start. `trafficSectionControl`
  also needs `getGoiToolFlag(2)` (`0x0C049878`: a bit of the GoiTool debug menu's flags at
  `0x0C2A4E68`), on in a normal run.
- Traffic cars (and trains) are events, not an array (`PcarInit`: `nlSetEvent(0x146, ...)`, the
  `_car` is the event); closing a car's event takes it out of traffic. `TrainCarInit`, `CableControlInit`,
  `PcarInit`, `StopingCarInit` and `ParkingCarInit` register an executor per car (seven in all;
  their `carEntry` calls are at `0x0C0467E8`-`0x0C049460`, in code not yet split into functions;
  static in the Android build too) with the car's `_car` record. `trafficControl` decides where cars appear around the
  player: `playerEV` (`0x0C2A1B30`; `+0x00` the player car, `+0x04` a point, `+0x10` its course
  point) holds a point ahead of the player car (by `CarControlArea` - 600 while `MainMode` is 1, the normal game: 500 ahead, seen live),
  which `trafficControl` rebuilds from the car at its end (in the Android build) and reads, the
  next frame, to choose which spawn points are live.
- `CarControlArea` (`0x0C2A1B18`) is the traffic radius: each frame `g_fDrawFactor` x 1100 (900
  on some grids) while `MainMode` (`0x0C1EE234`) is 1, the normal game (1100 seen live in the
  Original game), x 1700 otherwise (the Android build). `trafficControl`
  runs, in order, `trafficLevelControl` (`0x0C042ACC`), `trafficSectionControl` (`0x0C042BB0`),
  `parkingControl` (`0x0C0423B4`) and `RailroadAreaCheck` (the names of the first three are ours;
  inline or static in the Android build).
- Density: `trafficLevelControl` sets `TrafficLevel` (`0x0C2A1B6C`) from a table by mode
  (`0x0C0A2178`, frame steps at `0x0C0A2198` and `0x0C0A21B8`) and raises it by one per step, up
  to 23. With a fare on board (player car `+0x58` == 1) `TrafficPassengerLevel` (`0x0C2A1B70`)
  climbs too and adds to it; without one, the passenger part is taken off again.
  `TrafficLevelChange(delta)` (`0x0C042A5A`) moves it by `delta` between the base level and 23,
  at most once per 180 frames (it sets the step timer to -180); `technicalCheck` calls it, and
  `setTechnicalBonus(kind, count)` (`0x0C0430D4`), which counts tricks in a run (`-1` resets) and
  puts up the bonus display as an event (`technicalBonusExec`, `0x0C043284`, ours) while
  `MainMode` is 1 and `EndingFlag` (`0x0C2A4E50`) is not 1.
- Moving traffic, `trafficSectionControl`: every course is cut into sections of 15 points (up to
  96 per course, a bit each, two buffers swapped every frame). A section is live when its first
  point is within `CarControlArea` of the `playerEV` point. A section live this frame but not
  the last gets cars: one at a time along it, spaced by `CourseJamTable` (`0x0C0C3F20`, by the
  course's jam class) minus `TrafficLevel` (at least 8 points); one time in 16 a short run packed 3 points apart.
  `pcarSpawn` (`0x0C041F3C`) adds each car: nothing at 100 cars (`CarEntryNum`), nothing where
  `courseStatusGet` finds the road taken, nothing within half `CarControlArea` of the
  `playerEV` car's position (`+0x78`, so cars do not appear right beside the player);
  otherwise `PcarInit(type, course, point)`, the type from `courseCarType` (`0x0C041EFC`:
  `CourseCarGroupRateTable` `0x0C0C3E24` picks a group by course class, `CourseCarGroupTable`
  `0x0C0A21F8` gives the group's first type and count). Types 10 and up take 6 more points.
  `EntryNo` (`0x0C2A1B1C`) numbers every car made (`ParkingCarInit` stores it in `+0x74`); on
  courses with flag `0x2000`, when it has bits `0x18`, `stopingCarSpawn` (`0x0C0420B0`) also adds
  a stopping car.
- Removal: every frame `calcCheck` (`0x0C045A2E`) measures a car from the `playerEV` point
  (`+0x04`, at `0x0C2A1B34`): within `CarControlArea` + 30 it sets `+0x84` bits 0, 2 and 3 (alive,
  moving, collision object), beyond it clears them; bit 2 also drops when the car stands still.
  `calcCheckExec` then adds or removes the collision object to match bit 3 and returns bit 0;
  on 0 the executor ends the car. The executors' other ends: `dropOutCheck` (`0x0C045C36`, below
  y -35000) for moving and stopping cars, and for a parked car `pointEventGet(point)`
  (`0x0C042398`: its spawn record no longer active) while it is off screen. Every end goes
  through `pcarEnd` (`0x0C045C00`, ours; inline in the Android build): `KillColliObj`,
  `nlCloseEvent`, `CarEntryNum` minus one, and for the convoy (type 11) its trailer's bit 0
  cleared (the trailer is the next event, made with `nlSetEventNext`), so it ends next. Each
  executor decides this before its `carEntry` call, so every car on the draw list was alive
  that frame. `calcColliCheck` (`0x0C0459A8`) is `calcCheck` without the distance test. So moving traffic lives only near the `playerEV` point, and
  appears only at the edge of that circle, as sections come into it.
- Parked cars, `parkingControl`: the 0x20-byte spawn records (count at `0x0C2A4480`; active
  flag, kind 1-7, how many cars, a position, a radius, a course) come live within
  `CarControlArea` + 30 + the record's radius of the `playerEV` point, and add their cars with
  `ParkingCarInit` (types again from the group tables; kind 5 taxis, kind 6 type 11, kind 7
  alternating, facing set).
- `ParkingCarInit(type, point, course, position, heading)` (`0x0C0463E4`) adds a parked car: an
  event of 0x12C bytes run by `0x0C046B60` (static in the Android build too), the type, the course
  (set to 0 at random half the time), the position (or the course's start when it is 0,
  then put on the ground with `GetCollision2D`), flag `0x10` (parked) and a heading (`heading` if
  0 or more, plus a little noise; random otherwise). Type 11 also gets its trailer. It returns
  the car. A parked car stays while `point` is an active entry of `trafficControl`'s spawn points
  (the Android build's `pointEventGet`: 0x20-byte records, the count at `0x0C2A4480`) or while it
  is on screen; otherwise it removes its collision object, closes its event and lowers
  `CarEntryNum`. Parked cars still react to being hit.
- The executors (static in the Android build; the names here are ours), each the event function
  its set-up registers with `set_event`: `pcarExec` (`0x0C0465A8`, `PcarInit`, moving traffic),
  `stopingCarExec` (`0x0C0468A8`, `StopingCarInit`), `parkingCarExec` (`0x0C046B60`,
  `ParkingCarInit`), `cableCarExec` (`0x0C0483E0`, `TrainCarInit` for type 15), `trainCarExec`
  (`0x0C048C48`, `TrainCarInit` for any other type), `trailerExec` (`0x0C0486D4`, `TrailerInit`,
  the convoy's trailer) and `trainExec` (`0x0C0490E0`, `TrainInit`).
- The cable cars are type 15: the Android build's `CableControlInit` puts two on each of the
  courses 0x120 and 0x121, with a control event of its own.
- Rail vehicles by city (`trafficSectionControl`'s set-up, by `Game_No` + `MiniGame_No`): 0 (Arcade)
  and 17 get the cable cars, `CableControlInit(0)` (`0x0C047698`): on courses 288 and 289 one
  car 10 points before the course's end and one 160 points before, each `TrainCarInit(15, course,
  point)`, plus the control event `cableControlExec` (`0x0C047C84`, ours, 92 bytes). 1 (Original)
  gets the trains, `trainControlInit` (`0x0C0477D4`, ours): `TrainCarInit(16, ...)` on courses
  315 and 316, `TrainCarInit(19, ...)` on 317 and 318 (each with `+0x84` bit 0 cleared), and the
  event `trainControlExec` (`0x0C0482F4`, ours: sound 0xAA9 in five variants, state at
  `0x0C2A4E48`). `TrainInit(lead, n)` adds carriage `n` 6n points behind the lead car, type
  lead + 1 (lead + 2 for `n` 5).
- `TrainCarInit(type, course, point)` (`0x0C047880`): a 300-byte event, `cableCarExec` for type
  15 and `trainCarExec` otherwise; position from the point (or the course's last point when
  `point` is 0), then `PcarEvInit`, `courseStatusEntry` and `calcCheckExec`.
- A cable car is a physical car: `cableCarExec` (`0x0C0483E0`) runs only while the player car's
  `+0x64` is 0-5, and does not end its car (no `calcCheckExec` result). Each frame it calls
  `cableCarDrive`, then `carSteering`, `carResistance`, gravity (0.0735 off `+0x9C`), ground from
  `GetCollision2D`, `carMultiCollision` and `Put_Motion2D`, and `carEntry`.
- `cableCarDrive` (`0x0C046FF8`, ours) follows the course: nearest point (`getNearLineIndex`
  mode 1) into `+0xD4`, an aim 2 points ahead eased in by 0.2 at `+0xE0`, and a speed state in
  `+0x88`: 0 the course's speed (`0x0C0C3F04` by the course's flags & 15), 1-3 slower, 4 and 5
  stop. 3 points before the end it stops (4); when the control word `0x0C2A4E44` reads 6 for that
  line (course 288 its high nibble, 289 its low one) it moves onto the course linked from the
  end (the course's third word, `+0x04` a short) at point 0: the trip back. 8 points before the
  end it slows (2); a taken point within 10 ahead (`courseStatusGet`) stops it (4) or slows it
  (3). Standing almost still, every 128 frames, it rings its bell (`Sound_Request`, table
  `0x0C0A37A8`).
- `cableControlExec` steps each line's state 0-6 in `0x0C2A4E44` (one nibble per line) and turns
  the car round at the ends; only while the player car's `+0x64` is 0-5. Not read in detail yet.
- Courses: `CourseTable` (`0x0C2A6690`) points to 12-byte entries, one per course, the first word
  its points (x y z each). `StageCourseInfoTable` (`0x0C0C3D4C`, 12-byte entries by `Game_No` +
  `MiniGame_No`) gives each game's first course (`+0x04`) and how many (`+0x08`).
  `getNearCoursePoint(mode, course, &point, position)` (`0x0C049ECE`) returns the distance to a
  course's nearest point and stores which; `getNearLineIndexAll(position)` runs it over every
  course of the game and moves the position onto the nearest point.
- How a moving car drives (`pcarDrive`, `0x0C04510E`, called by `pcarExec`; inline in the Android
  build's executor): it follows its course line point by point and asks the course occupancy
  grid about the points ahead, `courseStatusGet(course, point, ...)` (`0x0C0421EC`); a taken point
  makes it brake and stop. The grid (per course, base `0x0C2A3A40`) is rebuilt every frame by
  `entryCarPut`: `courseStatusInit(2)`, then `courseStatusEntry(course, point)` (`0x0C042196`) for
  every car that is not parked. A car stopped within 800 units of the player (its collision
  object's distance, `+0x40` in the Android build) counts frames in `+0x120`; at 120 it honks:
  `Sound_Request(horn[type & 3], 2)`, the horns at `0x0C0A3768` (sound 0x1A9 in four variants:
  0x1A9, 0x101A9, 0x301A9, 0x201A9).
- Every frame each executor calls `carEntry(car)` (`0x0C0448FC`), which appends the car to a list
  of up to 100 pointers (`0x0C2A44CC`, count at `0x0C2A44C8`). `entryCarPut`, in the driving frame
  after `Act_Execute`, draws every car on the list that is on screen (`putCarModel`, or
  `putTrainModel` for types 0x10 and up in the Android build) and then sets the count back to 0 (not in a replay); the
  pointers stay in the array until the next frame overwrites them. The list is the one place
  that holds every live car.
- Drawing, per car on the list (`entryCarPut(1)`): a car not parked (flag `0x10` clear) marks
  its point in the occupancy grid, types 10 and up also the point behind (long vehicles); then
  `nlProjectScreen3D` of its position and `CheckClippingProject3D` with its radius (`+0xB0`); off
  screen, or farther than 1800 in front of the camera, it is not drawn and loses `+0x84` bit
  `0x10000`. On screen it gets the bit and is drawn with `putCarModel` (types below 16) or
  `putTrainModel`, in the detailed model only within 400 of the camera (or with a field of view
  under 40), the simpler one otherwise. `entryCarPut(0)`, at a run's start, empties the list, sets
  `CarEntryNum` and `CameraTargetNo` to 0, allocates the occupancy grids (`courseStatusInit(0)`)
  and builds the collision boxes.
- So traffic lives in a circle of `CarControlArea` (+30) around the `playerEV` point, which in
  the normal game (`MainMode` 1) is `CarControlArea` - 600 ahead of the player car and otherwise the car
  itself; cars are drawn up to 1800 ahead of the camera.
- A traffic `_car` (the Android build's offsets minus 0x1C): `+0x78` type, `+0x7C` its colour (an
  index into 12-byte r g b entries at `0x0C0A3498`, -1 none: `putCarModel` tints the body with
  `SetFadeColorBaseMulti(r, g, b)` (`0x0C030BFA`) and `ResetFadeColor`s after it), `+0x80` its course,
  `+0x84` flags (bit `0x10000` on screen this frame), `+0x8C` position, `+0xA4`/`+0xA6`/`+0xA8`
  rotation x/y/z, `+0xB0` radius (for clipping), `+0xD4` the point on its course. With flag bit
  3 a car is also a collision object: `PcarInit` calls `SetColliObj` (`0x0C0330B8`) on the
  `ColliObj` inside the `_car` (`+0x14`), with its type's collision entry from `carTbl` (`KillColliObj`, `0x0C03313A`, when the bit drops). A traffic executor ends its car with
  `KillColliObj(car + 0x14)`, `nlCloseEvent(car)` and `CarEntryNum` minus one. (`0x0C03313A` was
  first matched as `SetColliObj`; its body is the Android build's `KillColliObj`.) `entryCarPut(0)`
  also builds (in `FUN_0c043b68`) a collision box per shape from `ColliObjBoxSimpleTbl`
  (`0x0C0ED68C`, 15 entries): half-width, height, front, back (z extents, back negative).
  Entries 0-8 are car-sized (about 9-10 half-width, 20-35 long), 9 van-sized, 10 bus-sized
  (16 x 45 x 87), 11-14 longer still (up to 160). 15 entries for 15 named types: by size
  they line up with the types (0 `E_Taxi` car-sized, 10 `P_Bus` bus-sized, 11-13 the convoy and
  its trailers), except 14 (`P_Mercury`, a cab's body but an 80-long box); not yet confirmed.

## Camera

- Current camera at `0x0C179840`: `+0x00` eye, `+0x0C` target, `+0x18` three 16-bit angles.
- Angles are 16-bit (`0x10000` a full turn); `nlArcTan2(y, x)` takes two floats and returns one
  (`nlArcTan2(1, 0)` = `0x4000`).
- Mode at `0x0C179860` (0-11), set by `camSetMode`. `camUpdate(car)` runs every frame and handles
  each mode; the controller-3 debug cameras (Start, then A/B/X/Y) switch the same mode. Debug pad
  state is read from `0x0C1EE2B4`.
- `camSetEye(vec, mode)`, `camSetTarget(vec, mode)` (into `0x0C1798D0` / `0x0C1798FC`, at `+0x18`)
  and `camSetAngles(x, y, z, mode)` (into `0x0C179928`): mode 1 snaps, 0 eases.
- `camSnapToCar(car)` (`car` is an index into `Car_Data`, 956 bytes each) re-inits the eye and
  target homing vectors on the car's position, re-inits the angle from `Cam_Angle` and calls
  `ResetSpark`; the Android `execCamera` does the same on a VR mode change. `camSave` /
  `camRestore` copy the current camera to `0x0C2AD554` and back.
- A homing vector (`InitHomingVector` 0x0C036422, `CalcHomingVector` 0x0C03633C): `+0x0` current
  point, `+0xC` velocity, `+0x18` goal, `+0x24` pull, `+0x28` keep. Each frame
  velocity = velocity * keep + (goal - current) * pull, then current += velocity. Init puts current
  and goal on the point with pull 1, keep 0. The eye is at `0x0C1798D0`, the target at `0x0C1798FC`.
- `initCamera` sets `VR_mode` to 0, the field of view (`0x0C1798A4`, read by the clipping in
  `PutCourse` and `entryCarPut` too) and the chase distance (`0x0C0E4A04`) to 60. The chase
  distance is the eye's offset in camera sub-modes 0 and 2 (`nlTranslate(0, 0, -distance)`);
  sub-mode 1, the normal one, sets it from the eye and target's distance every frame instead.
- `execCamera` (the Android build's name; ours is `camUpdate`) moves two smoothed points, the eye
  and the look-at (homing vectors), toward targets the current mode (`VR_mode`, 0-11) computes
  from the player's car, then builds the view with `nlLookAt`, stores the camera matrix and
  rebuilds the model-view matrix. Modes 10 and 11 are scripted cut-scenes (`KyaCamera_Start(p, 0)`
  for getting in, `(p, 1)` for getting out): 5 and 6 shot functions stepped by a frame counter;
  the previous mode, position, target and angle are saved and restored.
- Mode 0, the chase camera (`camUpdate` from `0x0C026A80`): the field of view is set to 60; the
  target is the car's position plus (0, 5, 17) in the car's axes (yaw and pitch), and the eye
  the car's position plus (0, y, z) with y = 15 plus a third of a smoothed speed term
  (`0x0C1798B4`) and z = -60 minus that term plus the car's speed (`+0x15C`, copied to
  `0x0C0E4DD8`) times a factor; the literals are at `0x0C02704C` (15) and `0x0C027050` (-60),
  or `0x0C026F28` / `0x0C026F30` while `0x0C179960` is set. `GetCollision(target, eye, 0, 5)`
  then pulls the eye in front of any wall between the two (course geometry only, not cars),
  and `camSetEye(eye, 2)` eases it there. The offsets are fixed for every car: the eye sits
  about 60 behind and 15 above the car's centre: 30 behind a cab's collision box (back -30,
  11 high), only 16 behind a bus's (back -44.2, 45 high) and at a third of its height. The projection's near plane is 3 (`nlPerspectiveX`, far
  15000; the Android build's `execCamera`).

## Set objects

Postboxes, signs, crates: sphere collision objects (kinds 16-20), 0x70-byte instances in 32-byte
groups (`setObjGroupTbl`, `0x0C0EDBB8`: group `+0x10` count, `+0x1C` instances). Instance `+0x00`
position, `+0x0C` velocity, `+0x18` distance to the taxi's collision object (`ExecColliObj`), `+0x1C`
impact, `+0x20` hit bits (bit 0 the player car), `+0x68` state (-1 free, 0 resting, 1+ flying).
Groups open within `setObjOpenRange` (1000 or 1800) of `Car_Data + 0x78` and close beyond
`setObjKillRange`. A hit (`colliBoxSphere`, `0x0C033D30`, from `colliHandlerTbl`) pushes the object
out of the car's box and adds `n * 1.8 * closing speed * 2500 / (2500 + mass)` to its velocity;
`SetObjFly` (`0x0C037B40`) then flies it (damping 0.98, gravity 1/6 a frame, bounces). There is no
separate throw function.

## Dead code

Code that cannot run once Crazy Box is unreachable (callers all behind `CourseMode == 2` or
`Game_No == 2`, or no references at all), free for new code: `0x0C05C72E-0x0C05D852`
(the rest of the Crazy Box overlay), `0x0C05D8E8-0x0C05E5CC` (`execMiniLight` and helpers),
`0x0C05F544-0x0C05FD9C`,
`0x0C05E8C8-0x0C05EA98`, `0x0C04DF34-0x0C04E194`, `0x0C060930-0x0C060B84`. Live neighbours to keep:
`FUN_0c05d852` (psgFrame's table) and its pools, `FUN_0c05e5cc` (`PutWindow`), `ndPuru2Reset`'s
pool at `0x0C05F532`. `0x0C067DE0-0x0C0695D8` (`SklIpPlay` and a pose player) has no reference in the exe but is not
used: nothing proves it is never reached through a computed pointer. `FUN_0c02f02a` is not Crazy Box only (also called from `0x0C02CCD0`,
`0x0C02CDAE`, `0x0C03E00C`).

## RAM map

Read from the code and the disc file sizes, then checked against a live menu dump and an Arcade run
(`0C5DB8F0-0C5E0000`, `0CB39000-0CB40000`, `0CE4F000-0CE5E800` and the tail of `0CE5F000-0CE90000` stayed zero;
`0C014000-0C020000` stayed the `0xFFFD` fill; Original's collision data was seen to end at `0CE5E800`). A file read by `gdc_FileLoad` (size 0) fills whole 2048-byte sectors, so
every end below is the file size rounded up to 2048. `CourseMode` 0 is Arcade, 1 Original, 2 Crazy
Box (`loadCity`'s argument).

| Range | Size | Owner |
|---|---|---|
| `0C000000-0C010000` | 64 KB | system area, boot copy at `0C004000`, vector base `8C00F400`, stack `0C00C000-0C00FC00` (the start-up fills it with `SEGA`) |
| `0C010000-0C011C28` | | exe boot block (`0C010100-0C014000` is copied to `0C004000`; the block is reused) |
| `0C011C28-0C020000` | 58,328 | `0xFFFD` filler in the file; `0C014000-0C020000` (49,152) is outside the boot copy |
| `0C020000-0C020080` | | real entry (`0C020000` jumps to `0C14AB60`) |
| `0C020080-0C073050` | | game code |
| `0C073050-0C089F26` | | NAOMI library and C runtime |
| `0C08A9B8-0C14AB88` | ~770 KB | game data: tables, strings, models' pointer tables |
| `0C14AB88-0C1789B0` | | Katana SDK libraries |
| `0C1789C0-0C2B8C40` | 1,311,360 | game BSS (word-cleared by `FUN_0c14ab98`) |
| `0C2B8C40-0C2FD460` | 280,608 | SDK BSS (byte-cleared); the BSS ends at `0C2FD460` |
| `0C2FD460-0C30C000` | 60,320 | past the cleared BSS but not free: `ADX_DecodeSteFloat` uses `0C2FD460`, and `0C2FDE98-0C2FE100` is a live object (the only bytes that change between menu, Arcade and Original); the rest is non-zero but identical in all three dumps (floats, matrices, 16-bit texels; owner not identified). A 23 KB block placed at `0C2FD460` crashed the game 3 s into a run. `0C2FE100-0C30C000` stayed unchanged under a `0xA5` marker fill through an Arcade and an Original run, with no crash or visible corruption (the title/menu path and audio untested) |
| `0C30C000-0C328000` | 114,688 | replay buffer: `RECADV*`/`RECEND*.BIN` (108,000 B each), 20-byte input records read by `replay` (`0C04BC00`); loaded by `FUN_0c02c528`. With those loads skipped it still holds 24,386 non-zero bytes, identical at the menu, in Arcade and in Original. A `0xA5` marker fill stayed unchanged through an Arcade and an Original run, with no crash or visible corruption (the title/menu path and audio untested) |
| `0C328000-0C390000` | | `SPLDCn.BIN`: Arcade ends `0C377800`, Original `0C385000` (`0C390000` follows) |
| `0C390000-0C5D0000` | 2,359,296 | `POLDC0.BIN` (ends `0C5CFEB0` unrounded); `TEXDC0.BIN` is staged then uploaded |
| `0C5D0000-0C5E0000` | 65,536 | not used |
| `0C5E0000-` | | `POLDCn.BIN`: Arcade ends `0C63A800`, Original `0C605800` |
| `0C640000-0C880000` | 2,359,296 | course pool, 288 blocks of 8192 (`FUN_0c02e800`); also the scratch for AFS headers while a city loads; the last 64 KB takes `SNDDC3.BIN` for a moment at a run's start |
| `0C880000-0CB39000` | | `MOTDC.BIN` (`0CB39000-0CB40000` unused) |
| `0CB40000-` | | staging for sound/texture/sprite files (read, uploaded, reused), then `COLDCn.BIN` stays: Arcade ends `0CE4F000`, Original `0CE5E800` |
| `0CE5E800-0CE90000` | 202,752 | unused in both cities (Arcade: from `0CE4F000`, 266,240) |
| `0CE90000-0CE98000` | 32,768 | `OBJDCn.BIN` (first 0x8000 bytes) |
| `0CE98000-0CEA0000` | 32,768 | landscape texture index (16 sectors), set objects |
| `0CEA0000-0CFEA800` | 1,353,728 | Kamui vertex-buffer base given to `kmfSetVertexBufferBaseAddress` (1.25 MB of it non-zero in an Arcade run: in use, not free) |

Game BSS: the nlMalloc heap `0C1799E8-0C1A99E8` (0x30000; peak use polled every 5 s: 22,252 B in Arcade, 40,072 B in Original with a fare aboard, 96 events), peripheral buffers `0C1A99F8` and
`0C1B5A18` (49,184 each), NAOMI library tables `0C1C1E78-0C1EDCE4`, three 67,716-byte buffers from
`0C1EE824` (`FUN_0c02dfbc`), the course pool table at `0C26C5DC`. Katana's `malloc` is never set up (see Loading).

## Small wrappers

Thin game functions around the SDK, named from what they call. Grouped by subsystem.

| Subsystem | Function | What it does |
|---|---|---|
| Input | `padReadSlot(n)` | reads one pad (slot 0 = port A, 1 = port D, 2 = port C) into the table at `0x0C1EE12C` |
| Input | `padPortAConnected()` | 1 if a device is plugged into port A |
| Input | `vibIsReady()` | 1 if the vibration pack is ready |
| Sound | `adxStartAfs1(ch, file)`, `adxStartAfs2(ch, file)` | start ADX stream channel `ch` (handle tables `0x0C1EE820` / `0x0C1EE810`) on file `file` of AFS partition 1 / 2 |
| Files | `fsInit()` | GD-ROM file system init, retried up to 8 times; 1 on success |
| Save | `vmuExit()` | shuts the VMU file system down (retries until done) |
| Save | `saveBufferInit(buf)` | 4-byte header from `0x0C09DB48`, then 0x780 bytes of 0xFF |
| System | `rtcGetSeconds()` | the real-time clock as a seconds count |
| System | `sysCfgRead()` | console sound mode and language into `0x0C2A11BC` / `0x0C2A11C0` |
| System | `nlRandom()` | a random float |
| Camera | `camPlayScript(script, kind)` | saves the camera, switches to mode 10 or 11 and plays a camera script |
| Graphics | `frameFlip()` | renders the frame (`kmRender`) and flips the frame buffer |
| Graphics | `texLoadIndexed(i)`, `texFreeMem()` | load texture `i` from the texture tables; free texture memory |
| Graphics | `paletteUpload()`, `paletteSetMode(m)` | send the palette when it changed; set the palette mode |
| Graphics | `setBorderColor(rgb)`, `getSystemMetrics()`, `discardVertexBuffer()` | Kamui wrappers |

## HUD messages

- Flags word `0x0C2A75E0`: one bit per on-screen message. Each message has a show function (sets
  its bit, plays its voice clip through the table at `0x0C130B48`/`0x0C130B60`, resets its timer)
  and a hide function (clears the bit). `hudDraw` runs every frame and calls one draw routine per
  set bit; it also prints the cheat-mode labels ("another day", "EXPERT", "no arrows",
  "no destination mark"). `hudInit` clears the HUD state for a run.
- `hudDraw` draws one element per bit of the flags word `0x0C2A75E0`: `0x01` `Put_Credits`;
  `0x80` the main game group: `Put_TotalDrum` (the money drum; skipped with bit `0x10000000` or
  in the Crazy Box) then `hudDrawTime` (the clock: its digits at `0x0C2A8C7C`-`0x0C2A8C84`, the
  tick sound `0x4A9` when time runs low); `0x100` `FUN_0c056ed8`; `0x400`, `0x800`, `0x1000`
  (not in the Crazy Box) `FUN_0c055950`, `FUN_0c0558a2`, `FUN_0c055b38`; `0x10`, `0x20`
  `FUN_0c053ac0`, `FUN_0c053b44`; `0x01000000`, `0x02000000`, `0x04000000` `FUN_0c0572de`,
  `FUN_0c057388`, `FUN_0c05741c`; `0x10000000` `Put_ReadySetGo`; then the cheat labels.
- `hudDrawTime` and the functions only it calls fill `0x0C054E80`-`0x0C055688` (2,056 bytes);
  `hudDraw`'s call (`0x0C052E5E`) is their only way in, and no other code loads from them.
- The driving frame handler calls `hudDraw` at its very end, after the scene is drawn; another
  mode's frame (`FUN_0c050f80`) calls it too. No other function loads from `hudDraw`'s bytes
  (`0x0C052E1C`-`0x0C05308C`).
- Bit 25 = "STOP AND PICK UP A CUSTOMER!" (`hudShowPickUpNag` / `hudHidePickUpNag`; voice clip
  188; called every 10 s with an empty cab). Bits 24 and 26 are two more messages with the same
  pattern (show `0x0C05355E` / `0x0C0535FC`, hide `0x0C0535A4` / `0x0C053642`), not identified yet.
- `rankingInsert` inserts the run's result into the 100-entry ranking table; 1 if it got in.

- The top menu (`menuTopHandler`, node `0x0C09DFE8`, labels `0x0C09F8BC`, 44 bytes each): ARCADE,
  ORIGINAL, CRAZY BOX, OPTIONS, RECORDS, SAVE & LOAD, EXIT; `menuCursor(level, count, skip mask)`.
  ARCADE and ORIGINAL lead to the rules screen (`menuRuleHandler`, node `0x0C09DE18`), whose rules
  lead to `menuSetMode` (node `0x0C09DE08`); the rule is read later as `GetMenuMode(1)`.

## Original names (Android build)

Crazy Taxi Classic for Android (`libgl2jni.so`, ARMv7) keeps its symbol table. The names the
[crazytaxi_vita](https://github.com/TheOfficialFloW/crazytaxi_vita) loader patches by symbol
(`loader/main.c`) match Dreamcast functions one to one; where a function is identified, its
original name is used here.

| Original | Dreamcast | Notes |
|---|---|---|
| `Voice_Request(tagVOICEENTRY *, int ch, int vol, int)` | `0x0C072F18` | queues a voice clip on channel `ch` (slots of 16 bytes at `0x0C2AEBE0`) |
| `Voice_ShutUp(int ch)` | `0x0C072F5C` | stops channel `ch` |
| `Chat_TellDestination(void *customer)` | `0x0C0612BC` | the cabbie says the destination: voice picked by `Game_No` and the customer's destination (`+0x140`), from the tables at `0x0C0D3088` / `0x0C0D331C`; plays on channels 1 and 2 at volume 127 |

- `Game_No` (`0x0C1EE210`): 0, 1 or 2, the same three cities `loadCity` loads (noclip.website names them Arcade, Original, Crazy Box). The pick-up nag is skipped when it is 2.
- Matched in bulk (257 names, three passes; the last adds rare int and float constants as shared neighbours): each binary's functions exported from Ghidra with their strings,
  constants and ordered calls; pairs seeded by shared names, strings used only by one function on
  each side, and rare shared constants, then spread through the call graph and through shared
  matched neighbours (with code size as a tie-break). Pairs where the Dreamcast function reads more
  argument registers than the Android signature has parameters were dropped, and only the original
  game's functions were used (not the port's C++ classes). Expect a few wrong names among them.
- Globals (`globals.txt`, 29): matched from the Android data symbols through the functions that
  use them (a Dreamcast address and an Android variable are paired when the same matched
  functions use them). Among them: `Car_Data` (`0x0C1790CC`, the taxi), `Cam_Pos` (`0x0C179840`),
  `VR_mode` (`0x0C179860`, the camera mode), `Game_No` (`0x0C1EE210`), `CourseMode`
  (`0x0C1EE20C`, the city), `MainMode`, `MiniGame_No`, `TaxiSW`, `NowLanguage`, `adxtM`
  (`0x0C1EE810`, the ADX handles), `CarEntryNum`, `CameraTargetNo`, `SndQueue`.
- Functions named earlier in this decomp, and their original names (not renamed yet):

| Here | Original |
|---|---|
| `camUpdate` | `execCamera` |
| `camSetMode` | `SetVRMode` |
| `camSetEye` / `camSetTarget` | `SetCameraPos` / `SetCameraTarget` |
| `camRestore` | `RestoreCamera` |
| `set_event` | `nlSetEvent` |
| `heapAlloc` / `heapFree` (src/event.c) | `nlMalloc` / `nlFree` |
| `crowdSpawn` | `nd_peopleConstruct` |
| `humanDraw` | `VSklPlay` (not `SklPlay`: see Skeleton and motions) |
| `hudDraw` | `execSprite` |
| `vmuExit` | `BupExit` |
| (frame handler, state 7, now named) | `exec_loop_Replay`: state 7 is the replay |

## Prototypes

Three earlier builds of the same game: Dec 3, 1999 (HDR-0053 V0.220, JU), Dec 13, 1999 (MK-51053
V1.001, US) and Jan 14, 2000 (MK-51035 V1.005, E, six days before this disc), all linked at
`0x0C010000`, same compiler and options. Pairing this build's functions with them (allowing for
moved pools, pool addresses and `bsr` offsets): Jan 14 has 2,109 of 2,167 unchanged, 43 changed
(mostly constants: a camera script count 9 to 10 in `camPlayScript`, 7 to 8 in `SetStartCamera`,
a pedestrian case 6 to 7 in `pedDraw`; `gameInit` reworked) and 15 not found as they are
(`exec_CarMain`, `camUpdate`, `InitAdvCamera`, `gdc_CoursePointLoadReq`, `nd_CarSelMain`
rewritten in the last week). Dec 13: 1,841 unchanged; Dec 3: 1,655, with the customers' frame
states, `trainCarExec`, `Drv_Execute` and `getNearCoursePoint` much changed. Only Dec 3 has a
debug readout (the driver's field labels, under Taxi); the discs carry no symbols or maps. The
December builds lack the French, German and Spanish sprite files.

## The compiler

- **Game code** (`0x0C020000-0x0C073050`) needs Sega's undocumented SHC option **`-extra=a=400`**,
  listed as mandatory ("provisional workaround, do not remove") in the Katana SDK 1.0B2 compiler
  notes of April 1998 (`katana/shc/read_1st_j.txt`): it puts a `nop` after every `mov Rm,r0` that
  is not in a branch delay slot (863 of 950 in the game code). With it, plus `-macsave=1` (the game saves MACL, against Sega's advice), SHC 5.1
  Release 11 (SDK R10.1) reproduces game functions: `src/extrand.c` 5 of 6 functions exact (extRand is one register off),
  `src/event.c` 9 of 12. SHC 5.0 Release 28 (SDK 1.0B2, which also accepts `-cpu=sh4`) does
  slightly worse. A game unit's header: `/* @unit <start>-<end> -extra=a=400 -macsave=1 */`.
- **Naomi library** (`nl*`, `0x0C073050-0x0C07C000`): SHC 5.1 with `-align16` matches
  (`src/palette.c`). Most of it is hand-written FPU assembly (vector and matrix routines).
- `src/event.c` and `src/extrand.c` are reference C (no `@unit` header, not built) until all their
  functions match.
- `src/psg.c` (customers: `Set_StandWaitDist`, `Psg_Init`, `psgSetState`, `psgCallEnter`,
  `psgEnterState0`) is the first game unit built: `@data 0C0D5A98-0C0D5B30` places its initialised
  local tables (the state entry table and state 0's motion lists). Idioms that mattered: a whole-word
  bit field at `+0x150` (`unsigned int f150 : 32`, stored through a computed address), the driver's
  hold flag as a one-bit field, `if (hold || f140 < 0) pick; else switch` (block order and stack
  slots follow it), and `x ? 1 : 0` for bit fields set from a call.
- `src/psgenter56.c` (`psgEnterState5`, `psgEnterState6`) is reference C: every instruction
  comes out as in the original, but the original's first literal pool in `psgEnterState5` also
  holds seven constants no remaining instruction loads (the offsets 0x110, 0x114, 0x10C and
  0x248; 0x0C9EF530, `FcvStoreBuffer`, 0x0C0D5690, 5.0, 10.0, `Psg_SetMoveSpeed`): code the
  original compiler removed but whose literals it kept, like a block of `psgEnterState2`. Without
  them the pool fits further on and lands after case 1, not case 0. An `if (0)` block does not
  keep its literals in SHC 5.1. Calling `FUN_0c061b14` in each case (not once after the switch)
  was what gave the hoisted address in `r13`.
- Units (the smallest address ranges no literal-pool load or branch crosses): 161 in the game code,
  86 in the Naomi library.

## Still open

- (Found 2026-10-13, live: a RAM diff between drive and reverse.) The D/R gear box is `Put_GearBox`
  (`0x0C0569E2`, 134 bytes; its literal pool sits mid-body): it reads the gear through the pointer at
  `0x0C2A8C60` (zero = reverse), plays voice/sound `2985` when the state changes (state word
  `0x0C2A8DE8`), sets the sprite record `0x0C2A892C`'s first word to 17 (D) or 18 (R) and tail-jumps to
  `nlSprPut` (`0x0C07DF00`); the record is set up in `hudInit`'s `FUN_0c052c9e` (at 580, 420). It is called,
  by a tail `jmp`, from the end of the HUD elements for flag bits `0x10` (`FUN_0c053ac0`, pool word
  `0x0C053B40`) and `0x20` (`FUN_0c053b44`, pool word `0x0C053BDC`), so it shows while the Arcade HUD does.
  Earlier ruled out: the `D gear` / `R gear` strings are button-hint labels; `carGearbox` has no HUD copy.
- What each camera mode is, and which one the normal chase camera uses.
