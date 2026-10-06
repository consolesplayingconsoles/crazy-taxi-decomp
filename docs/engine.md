# Engine notes

What is known about the game's own code and data, from reading the executable. Addresses are RAM
(linked at `0x0C010000`). Function names here are the ones in `functions.txt`.

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
  Android `0x821540`): `psgFrameState0`-`psgFrameState6`. Taking a customer over means replacing
  these handlers.
- `0x0C06B9D0` (state 2's entry) was named `VSklPlay` by the first matcher pass; the table and its
  calls show it is not.
- Animation sets: characters 1-3, 0x18, 0x1A, 0x1F-0x21, 0x23, 0x24, 0x26, 0x29, 0x2A, 0x2C, 0x2E,
  0x30, 0x31, 0x33, 0x34, 0x37 and 0x39 (`FUN_0c070bf8`, a bit mask in the Android build) play the
  motions at `0x0C9726F4`, the others those at `0x0C972E68`. `FUN_0c070c64` is a second character
  list; the Android build replaced it with a table.

## Taxi

- The player's taxi is the struct at `0x0C1790CC` (0x3BC bytes, indexed by player in code that
  takes a car number): `+0x64` (short) the area the crowd spawner reads, `+0x78` position.

## Camera

- Current camera at `0x0C179840`: `+0x00` eye, `+0x0C` target, `+0x18` three 16-bit angles.
- Mode at `0x0C179860` (0-11), set by `camSetMode`. `camUpdate(car)` runs every frame and handles
  each mode; the controller-3 debug cameras (Start, then A/B/X/Y) switch the same mode. Debug pad
  state is read from `0x0C1EE2B4`.
- `camSetEye(vec, mode)`, `camSetTarget(vec, mode)` (into `0x0C1798D0` / `0x0C1798FC`, at `+0x18`)
  and `camSetAngles(x, y, z, mode)` (into `0x0C179928`): mode 1 snaps, 0 eases.
- `camSnapToCar(car)` puts eye and target on the car's position. `camSave` / `camRestore` copy the
  current camera to `0x0C2AD554` and back.

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
- Units (the smallest address ranges no literal-pool load or branch crosses): 161 in the game code,
  86 in the Naomi library.

## Still open

- What each camera mode is, and which one the normal chase camera uses.
