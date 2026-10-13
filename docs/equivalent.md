# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### KillColliObj (`0C03313A`, 96 bytes, `src/colli.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/colli/KillColliObj.json`
- only node
- head of three
- tail of three
- middle of three
- no node
- head of two, kind 9
- tail of two, kind 0
- middle of three, kind 20
- no node, empty list

### SetColliObj (`0C0330B8`, 130 bytes, `src/colli.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/colli/SetColliObj.json`
- empty list, kind 0
- empty list, kind 3
- one node in the list
- allocation fails
- three nodes in the list, kind 7
- allocation fails, empty list
- empty list, last kind

### camSetEye (`0C02871C`, 68 bytes, `src/camera.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/camera/camSetEye.json`
- mode 0 (homing vector)
- mode 1 (clears +12, copies +24)
- mode 2 (copies +24 only)
- mode 0, other vector
- mode 1, zero vector
- mode 3
- mode -1

### camSetTarget (`0C02877E`, 68 bytes, `src/camera.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/camera/camSetTarget.json`
- mode 0 (homing vector)
- mode 1 (clears +12, copies +24)
- mode 2 (copies +24 only)
- mode 0, other vector
- mode 1, zero vector
- mode 3
- mode -1

### extRand (`0C04981E`, 32 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRand.json`

### extRandom (`0C04983E`, 22 bytes, `src/extrand.c`)
- equivalent on 4 development cases, in `tests/extrand/extRandom.json`

### extRandomSeed (`0C049818`, 6 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRandomSeed.json`

### nlAddVector (`0C078A50`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlAddVector.json`
- small integers
- zeros
- signs and fractions
- large values
- vd and vs the same vector
- 3-4-5
- rounding
- opposite signs
- infinity
- vd and vs the same vector

### nlArcTan2 (`0C075A50`, 164 bytes, `src/trig.c`)
- equivalent on 9 development and 10 holdout cases, in `tests/trig/nlArcTan2.json`
- right region (x >= |y|)
- top region (y > |x|)
- left region (-x > |y|... x < -|y|)
- bottom region (-y > x and y <= x)
- y = 0, x > 0
- x = 0, y > 0
- x = 0, y < 0
- y = 0, x < 0
- both zero
- diagonal up-right (y = x)
- diagonal up-left (y = -x)
- diagonal down-right (y = -x)
- diagonal down-left
- tiny values
- large values
- negative y, negative x
- top region, negative x
- bottom region, negative x
- x = 0, y > 0 no call

### nlCloseEvent (`0C029698`, 106 bytes, `src/nlevent.c`)
- equivalent on 6 development and 4 holdout cases, in `tests/nlevent/nlCloseEvent.json`
- null
- only event
- the head
- the tail
- a middle event
- the event to run next
- head with one extra block
- tail with three extra blocks
- middle with two extra blocks, runs next
- only event, extra block

### nlCos (`0C075B20`, 24 bytes, `src/trig.c`)
- equivalent on 6 development and 6 holdout cases, in `tests/trig/nlCos.json`
- 0
- a quarter turn
- a half turn
- just past a half turn
- three quarters
- 0xFFFF
- 0x10000
- negative angle
- 0x7FFF
- 0x1234
- 0xE000
- 0x00018000

### nlExecuteEvent (`0C029702`, 38 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlExecuteEvent.json`
- empty list
- one event
- three events
- stale next-to-run
- two events
- five events

### nlFree (`0C02948C`, 182 bytes, `src/heap.c`)
- equivalent on 7 development and 7 holdout cases, in `tests/heap/nlFree.json`
- Arcade heap: free a block (previous free, next in use)
- Arcade heap: free a block (previous in use, next in use)
- Arcade heap: free a block (previous in use, next free)
- Arcade heap: free a block (previous free, next free)
- Arcade heap: free a block (previous in use, last)
- Arcade heap: free a block that is already free (it goes in the list twice)
- free(0)
- Original heap: free a block (previous free, next in use)
- Original heap: free a block (previous in use, next in use)
- Original heap: free a block (previous in use, next free)
- Original heap: free a block (previous free, next free)
- Original heap: free a block (previous in use, last)
- Original heap: free a block that is already free (it goes in the list twice)
- free(0)

### nlInitEvent (`0C029542`, 68 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlInitEvent.json`
- empty list
- one event
- three events
- events with extra blocks
- five events
- one event with three blocks

### nlInitHeapMemory (`0C0293C8`, 50 bytes, `src/heap.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/heap/nlInitHeapMemory.json`
- a 0x1000-byte heap
- a 0x30000-byte heap
- a 0x1003-byte heap (size not a multiple of 4)
- a 0x40-byte heap

### nlInnerProduct (`0C078AC0`, 24 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlInnerProduct.json`
- small integers
- zeros
- signs and fractions
- larger values, exact in float (the simulator takes fipr exact)
- 3-4-5
- binary fractions
- opposite signs, exact in float
- infinity

### nlLength (`0C078AE0`, 32 bytes, `src/vecmath.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/vecmath/nlLength.json`
- small integers
- zeros
- signs and fractions
- large values
- 3-4-5
- rounding
- opposite signs
- infinity

### nlMalloc (`0C0293FA`, 146 bytes, `src/heap.c`)
- equivalent on 22 development and 22 holdout cases, in `tests/heap/nlMalloc.json`
- Arcade heap: 0 bytes
- Arcade heap: 1 bytes
- Arcade heap: 7 bytes
- Arcade heap: 8 bytes
- Arcade heap: 9 bytes
- Arcade heap: 12 bytes
- Arcade heap: 100 bytes
- Arcade heap: 4096 bytes
- Arcade heap: 131072 bytes
- Arcade heap: 262144 bytes
- Arcade heap: exactly a free block (128)
- Arcade heap: a free block minus 16: split (112)
- Arcade heap: minus 15: no split (113)
- Arcade heap: one more than a free block (129)
- Arcade heap: exactly a free block (256)
- Arcade heap: a free block minus 16: split (240)
- Arcade heap: minus 15: no split (241)
- Arcade heap: one more than a free block (257)
- Arcade heap: exactly a free block (264)
- Arcade heap: a free block minus 16: split (248)
- Arcade heap: minus 15: no split (249)
- Arcade heap: one more than a free block (265)
- Original heap: 0 bytes
- Original heap: 1 bytes
- Original heap: 7 bytes
- Original heap: 8 bytes
- Original heap: 9 bytes
- Original heap: 12 bytes
- Original heap: 100 bytes
- Original heap: 4096 bytes
- Original heap: 131072 bytes
- Original heap: 262144 bytes
- Original heap: exactly a free block (32)
- Original heap: a free block minus 16: split (16)
- Original heap: minus 15: no split (17)
- Original heap: one more than a free block (33)
- Original heap: exactly a free block (128)
- Original heap: a free block minus 16: split (112)
- Original heap: minus 15: no split (113)
- Original heap: one more than a free block (129)
- Original heap: exactly a free block (140)
- Original heap: a free block minus 16: split (124)
- Original heap: minus 15: no split (125)
- Original heap: one more than a free block (141)

### nlScaleVector (`0C078BC0`, 28 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlScaleVector.json`
- small integers, scale 2
- zeros, scale 0
- signs and fractions, scale -0.5
- large values, scale 3
- vd and vs the same vector
- 3-4-5, scale 2
- rounding, scale 0
- opposite signs, scale -0.5
- infinity, scale 3
- vd and vs the same vector

### nlSetEventBefore (`0C0295E4`, 90 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/nlSetEventBefore.json`
- before the head
- before a middle event
- before the next event to run
- allocation fails
- size below 20, before the tail
- before the head, which runs next
- only event

### nlSetEventNext (`0C02963E`, 90 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/nlSetEventNext.json`
- after the tail
- after a middle event
- after the event unk8 names
- allocation fails
- size below 20, after the head
- after the tail, which unk8 names
- only event

### nlSin (`0C0760A0`, 150 bytes, `src/trig.c`)
- equivalent on 8 development and 24 holdout cases, in `tests/trig/nlSin.json`
- 0
- a quarter turn
- a half turn
- three quarters
- 1
- 0x1000 (22.5 degrees)
- 0x2AAA
- 0x5555
- 0xFFFF
- 0x10000 (a full turn: only the low 16 bits count)
- negative angle
- 0x7FFF
- 0x8001
- 0x3FFF
- 0x4001
- 0xBFFF
- 0xC001
- 0x1234
- 0xABCD
- 0x00010123
- random 0
- random 1
- random 2
- random 3
- random 4
- random 5
- random 6
- random 7
- random 8
- random 9
- random 10
- random 11

### nlSubVector3op (`0C078C30`, 32 bytes, `src/vecmath.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/vecmath/nlSubVector3op.json`
- small integers
- zeros
- signs and fractions
- large values
- vd is vs1
- 3-4-5
- rounding
- opposite signs
- infinity
- vd is vs1

### set_event (`0C029586`, 74 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/set_event.json`
- empty list
- one event
- size below 20
- allocation fails
- three events
- size 19
- size 20, fails, empty list

### vsklRotate (`0C06AF8C`, 38 bytes, `src/camera.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/camera/vsklRotate.json`
- x and y axes
- general vectors
- zero vectors
- negative
- same vector twice
