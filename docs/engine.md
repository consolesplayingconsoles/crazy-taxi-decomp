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
  `trafficSectionControl` (no new moving traffic); set at a run's start.
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
- A traffic `_car` (the Android build's offsets minus 0x1C): `+0x78` type, `+0x80` its course,
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

- Where the D/R gear box (bottom right while driving) is drawn. Not by a read of `+0x120`
  (`carGearbox`, the camera's reverse view, `ExecArrow`'s caller and unrelated structs are the
  only ones), not in `hudDraw`'s elements or `Put_TotalDrum`'s sprites, not by the sprite or
  model draws two to four calls below `gameStateDrive` (cars, train, humans, `Put_Transporter`,
  `Put_Build_Patch`). The Android build replaced it with a touch button.
- What each camera mode is, and which one the normal chase camera uses.
