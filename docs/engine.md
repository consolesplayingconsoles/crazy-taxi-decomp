# Engine notes

What is known about the game's own code and data, from reading the executable. Addresses are RAM
(linked at `0x0C010000`). Function names here are the ones in `functions.txt`.

## Game states

- `MainLoop` reads the pads (`getSwitch`) then runs the current game state from the table at
  `0x0C08AE64` (16 entries): `gameState0`-`gameState15`, with `gameStateDrive` (1, driving),
  `FUN_0c02cd46` (5), `Initialize_Replay` (6) and `exec_loop_Replay` (7, replay) named so far.
- `gameStateDrive`'s order each frame: `FUN_0c041c14`, `camUpdate`, per-`CourseMode` work (the
  Crazy Box: `execMiniLight`), the customers (`exec_KyakuMain`), `ExecSetObject`, `ExecKyakuArea`,
  `ExecHelicopter`, `Act_Execute` (the cab driver), `entryCarPut`, `trafficControl`, the crowd
  (`crowdSpawn`, not in the Crazy Box), the tasks, `ExecColliObj`, `PutCourse`, `GoiTool`, and
  last `hudDraw`. Each call goes through the handler's own pool words.

## Game modes

- `CourseMode` (`0x0C1EE20C`): the mode chosen in the menu; 2 is the Crazy Box, whose game is
  `MiniGame_No` (`0x0C1EE214`). `menuSetMode` (`0x0C03F89A`, a callback in the
  menu's handler table at `0x0C09DE08`; static in the Android build) applies the choice at
  `0x0C03F8E2`-`0x0C03F8FA`: `MiniGame_No` = item - 2, then `CourseMode` = the chosen mode (Crazy Box game 15
  gives 0). That store (`0x0C03F8FA`) is the only place `CourseMode` becomes 2: `gameInit`,
  `FUN_0c02bc24`, `FUN_0c03df1a` and `callGoBackAdvertise` (back to the attract demo) only write 0.
- The driving frame (state 1, `0x0C02C9C0`) branches on `CourseMode`: with 2 it calls
  `FUN_0c05dea8` (lighting per mini game, `LightEffect`) and skips the crowd (`crowdSpawn`).
  `Init_DCmini` registers the mini game's tasks; functions reached only from `Init_DCmini` and
  `FUN_0c05dea8` include `Exec_Balloon` and the run `0x0C05EA98`-`0x0C05EEF4`; no code outside
  that run or `Init_DCmini` (`0x0C05B404`-`0x0C05B7A8`) loads from or branches into them.
- Crazy Box code runs behind `CourseMode == 2` checks spread through the game (`Init_DCmini` at
  set-up, `IsBoyFriend`, `GetNumRideon`, `Start_Proposal`, the passenger mini game branches).

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
  (101 frames), `0x0CB32654` (66 frames, 0.60), each with its other-set twin. Walking customers
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
  customer stands near the road's curve points (`HitDetectCurve`, within 15 units; over 15: state
  6), then the state's frame handler runs from a second table of seven (template at `0x0C0D5F64`,
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

## Input

- Every frame `getSwitch` reads the pads: `padReadSlot(0)` stores `pdGetPeripheral(0)` (port A)
  in the table at `0x0C1EE12C`, `ConvertSwitch(0)` turns it into `TaxiSW`, port C (`padReadSlot(2)`)
  goes through `ConvertSwitch2`, then `padToAnalog` makes the car's inputs. The Android build does
  all of it in one `getSwitch()`.
- `TaxiSW` (`0x0C1EE24C`, 0x34 bytes per player): `+0x00` buttons held, `+0x04` pressed, `+0x08`
  released, `+0x0C` last frame's held; `+0x10` stick X (recentred, x256), `+0x12` right trigger
  x256, `+0x14` left trigger x256, `+0x16` stick Y; bytes `+0x18` stick X (0-255), `+0x19` right
  trigger, `+0x1A` left trigger, `+0x1B`-`+0x1E` button flags (`exec_CarMain` reads `+0x1B`,
  `+0x1C`); `+0x2B` device: 0 pad, 1 a device whose name starts with `R` (the racing
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
  (call at `0x0C0643F0`). The driver
  himself is rigid models (body, head, arms in `polDC0`, e.g. `0x0C3BFFE0`, `0x0C3C05A8`,
  `0x0C3C07C8`; one model table per cabbie at `0x0C136BE4`, `0x0C138BF8`, `0x0C13BB20`,
  `0x0C13D404`, chosen by `TaxiDriver + 0x20`), put with `FUN_0c07ad00`, and only while bit 0 of
  the flags byte `TaxiDriver + 0x1DF` is set: that is the bicycle (the "chari" cheat; setting the bit
  in play puts the driver on a pedalling bike above the seat) (bit 1 is the hold flag the customers read, bit 7 is
  tested in `Drv_Execute`). `Drv_Init` and the driver's action functions write that byte;
  `Drv_Execute` only reads it.

- Walls: `CheckColliWall(point, radius)` (`0x0C0341E8`; the point in `r4`, the radius in `fr4`)
  pushes a point out of the walls and poles of its collision grid cell, in place. A wall is a 2D
  line with a height range; it counts only while the point's y is within it (down to `radius`
  below its bottom). Its callers are `ExecAdvCamera`, `SetObjFly` and `FUN_0c0730b4` (an object
  by the taxi, radius 21); the customers' own movement never calls it. A point at ground height
with radius 5 (a person) is held back by building walls and poles.

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
- `execCamera` (the Android build's name; ours is `camUpdate`) moves two smoothed points, the eye
  and the look-at (homing vectors), toward targets the current mode (`VR_mode`, 0-11) computes
  from the player's car, then builds the view with `nlLookAt`, stores the camera matrix and
  rebuilds the model-view matrix. Modes 10 and 11 are scripted cut-scenes (`KyaCamera_Start(p, 0)`
  for getting in, `(p, 1)` for getting out): 5 and 6 shot functions stepped by a frame counter;
  the previous mode, position, target and angle are saved and restored.

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
| System | `randFloat()` | a random float |
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
| `humanDraw` | `SklPlay` |
| `hudDraw` | `execSprite` |
| `vmuExit` | `BupExit` |
| `rand` / `randFloat` | `nlRand` / `nlRandom` |
| (frame handler, state 7, now named) | `exec_loop_Replay`: state 7 is the replay |

## The compiler

- **Game code** (`0x0C020000-0x0C073050`) needs Sega's undocumented SHC option **`-extra=a=400`**,
  listed as mandatory ("provisional workaround, do not remove") in the Katana SDK 1.0B2 compiler
  notes of April 1998 (`katana/shc/read_1st_j.txt`): it puts a `nop` after every `mov Rm,r0` that
  is not in a branch delay slot (863 of 950 in the game code; Tokyo Bus Guide, built without it,
  has 0 of 474). With it, plus `-macsave=1` (the game saves MACL, against Sega's advice), SHC 5.1
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
- Units (the smallest address ranges no literal-pool load or branch crosses): 161 in the game code,
  86 in the Naomi library.

## Still open

- What each camera mode is, and which one the normal chase camera uses.
