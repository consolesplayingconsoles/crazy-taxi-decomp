# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### ADXB_ExecOneWav (`0C17435C`, 40 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vt_vtsdk_b/ADXB_ExecOneWav.json`
- mode 2
- mode 1
- mode 0
- mode 3
- mode -1
- mode 0x102
- mode 0x8000
- mode 0x100

### ADXB_Start (`0C1713CE`, 14 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/ADXB_Start.json`
- zero
- one
- two
- minus
- high

### ADXB_Stop (`0C1713DC`, 26 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_a/ADXB_Stop.json`
- normal
- f8 zero
- other
- f4 already zero
- again

### ADXPD_Destroy (`0C17442E`, 20 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_b/ADXPD_Destroy.json`
- null
- object
- object offset
- another

### ADXSJD_Destroy (`0C168300`, 52 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_c/ADXSJD_Destroy.json`
- null
- no buffer
- with buffer
- other buffer
- other r0

### ADXSTM_GetBufSize (`0C168E48`, 12 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/ADXSTM_GetBufSize.json`
- basic
- zero
- minus
- big
- swapped

### ADXSTM_GetGdfsStat (`0C168E6E`, 28 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/ADXSTM_GetGdfsStat.json`
- basic
- zero
- minus
- big
- other

### ADXT_SetOutPan (`0C152238`, 50 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_d/ADXT_SetOutPan.json`
- in range
- equal -> error
- above -> error
- ch 0 count 0
- signed count
- rna handle

### BCDtoDEC (`0C166C80`, 24 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vt_vtsdk_b/BCDtoDEC.json`
- 59
- zero
- 99
- 0xff
- 0x12345678
- top bit
- 0x0a
- 0x7f
- all ones

### DECtoBCD (`0C166C5C`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vt_vtsdk_a/DECtoBCD.json`
- 0
- 9
- 10
- 59
- 99
- 100
- 12
- 255
- big

### GetMenuMode (`0C041CD8`, 10 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/GetMenuMode.json`
- level 0
- level 1
- level 4
- level 2
- level 3

### GetNumRideon (`0C05DB62`, 16 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/GetNumRideon.json`
- count 0
- count 41
- count -1
- count 0x7FFFFFFF
- count 1000

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

### Psg_SetMoveSpeed (`0C070BE8`, 16 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/Psg_SetMoveSpeed.json`
- 1.0
- 0.25
- zero
- negative
- large
- 0.1

### Psg_SetPosPtr (`0C070AA6`, 170 bytes, `src/misc.c`)
- equivalent on 8 development and 9 holdout cases, in `tests/misc/Psg_SetPosPtr.json`
- ground, kind 2, close: snaps
- ground, kind 2, far: x and z only
- ground, kind 4 sub 2, close
- ground, kind 4 sub 3, close: other branch snaps
- ground, kind 4 sub 3, far: returns
- ground, kind 0, between 20 and 65: returns
- no ground, kind 2: x and z
- no ground, kind 0: nothing
- kind 2, dy exactly 65
- kind 0, dy exactly 20
- kind 0, dy 19.9
- kind 4 sub 2, no ground
- kind 4 sub 1, no ground: nothing
- kind 2, pos below ground by 30
- kind 0, pos below ground by 10
- flag 1 (ground), kind 5, same height
- kind 2, dy 64.9

### ResetFadeColor (`0C030C52`, 36 bytes, `src/misc.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/misc/ResetFadeColor.json`
- white, no offset
- tinted
- negative offset
- zeros

### ResetSpark (`0C037B0A`, 8 bytes, `src/leaf.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/leaf/ResetSpark.json`
- flag clear
- flag set
- other value

### SetCameraMode (`0C028716`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetCameraMode.json`
- value 0
- value 1
- value 9
- value 4294967295
- value 2147483647

### SetCameraPosRatio (`0C028772`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetCameraPosRatio.json`
- 1, 2
- zeros
- fractions
- negative
- large

### SetColliObj (`0C0330B8`, 130 bytes, `src/colli.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/colli/SetColliObj.json`
- empty list, kind 0
- empty list, kind 3
- one node in the list
- allocation fails
- three nodes in the list, kind 7
- allocation fails, empty list
- empty list, last kind

### SetFadeColorBase (`0C030B9C`, 14 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetFadeColorBase.json`
- white
- channels
- zero
- negative
- large

### SetFadeColorBaseMulti (`0C030BFA`, 44 bytes, `src/misc.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/misc/SetFadeColorBaseMulti.json`
- base 1, factors 0.5
- different channels
- zero base
- zero factor
- negative
- large
- fractions

### SetFadeColorOffset (`0C030BAA`, 14 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetFadeColorOffset.json`
- white
- channels
- zero
- negative
- large

### SetLandmarkDist (`0C0318EA`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetLandmarkDist.json`
- value 0.0
- value 1.5
- value 100.0
- value -2.0
- value 1e+30

### Sound_Request (`0C072168`, 176 bytes, `src/sound.c`)
- equivalent on 8 development and 8 holdout cases, in `tests/sound/Sound_Request.json`
- free slot, channel 0
- free slot, channel 2
- slot occupied
- not in a run (MainMode 0)
- MainMode 3
- ending flag set
- last slot wraps to the start
- second to last slot
- channel 5, free
- channel 4 wraps
- sound 0
- large sound id
- count already large
- channel 1 occupied, ending set
- channel 5 last slot
- channel 2 first slot

### acSystemGetSystemFlag (`0C060396`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/acSystemGetSystemFlag.json`
- flag 3
- flag 0
- flag 2
- flag 4
- flag -3
- flag 0x103

### adxf_ChkPrmGfr (`0C15337C`, 62 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 7 development and 6 holdout cases, in `tests/vt_vtsdk_b/adxf_ChkPrmGfr.json`
- ok
- b = last valid
- b = limit
- b negative
- a negative
- a = 256
- b = 0
- a=255 ok
- a huge
- b huge
- limit 1 b 0
- limit 0 b 0
- a=0 ok

### buCalcBackupFileSize (`0C1510C8`, 64 bytes, `src/sg_bup.c`)
- equivalent on 9 development and 9 holdout cases, in `tests/sg_bup/buCalcBackupFileSize.json`
- a=0 b=0 c=0
- a=4 b=0 c=0
- a=1 b=4 c=0
- a=1 b=1 c=0
- a=2 b=2 c=0
- a=3 b=3 c=0
- a=1 b=0 c=180
- a=ffffffff b=0 c=0
- a=1 b=ffffffff c=0
- a=3 b=3 c=-64
- a=2 b=1 c=-3e8
- a=1 b=2 c=7fff0000
- a=1 b=1 c=80000000
- a=1 b=1 c=0
- a=1 b=1 c=0
- a=1 b=1 c=0
- a=0 b=3 c=0
- a=3 b=5 c=0

### buCalcCRC (`0C151268`, 68 bytes, `src/sg_bup.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/sg_bup/buCalcCRC.json`
- crc  n=None
- crc 41 n=None
- crc 313233343536 n=None
- crc 8000ff n=None
- crc 616263 n=0
- crc 7f01 n=1
- crc ffffffffff n=None
- crc 00000000 n=None
- crc 707172737475 n=None
- crc 818001fe55 n=None
- crc 7a7a n=1

### buFbrExit (`0C1729AC`, 44 bytes, `src/sg_bup.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sg_bup/buFbrExit.json`
- created=0,0
- created=1,0
- created=0,1
- created=1,1
- created=0xffffffff,0x0
- created=0x0,0x80000000
- created=0x7,0x9
- created=0x100,0x0

### buFbrWakeupFiber (`0C172AC2`, 28 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_c/buFbrWakeupFiber.json`
- idx0 set
- idx0 clear
- idx2 set
- idx3 clear
- idx1 set other
- idx4 set

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

### camSnapToCar (`0C02890E`, 90 bytes, `src/camera.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/camera/camSnapToCar.json`
- car 0
- car 1
- car 3
- car 5
- car 2, angles max
- car 0, other angles

### carEntry (`0C0448FC`, 30 bytes, `src/leaf.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/leaf/carEntry.json`
- empty list
- some cars
- one slot left
- full
- over full (stale count)
- second car
- car 0
- count 0xFFFFFFFF

### courseStatusEntry (`0C042196`, 44 bytes, `src/misc.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/misc/courseStatusEntry.json`
- point 0
- point 31
- point 32 (next word)
- no table for the course
- point 5, bits already set
- point 63
- point 100
- point 255
- bit already set
- course 7, no table

### direntry (`0C166B40`, 24 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_b/direntry.json`
- unit 1 entry 3
- entry 0
- unit 0
- entry negative
- unit 7 big entry
- unit 3 entry 1

### discardVertexBuffer (`0C0755F0`, 8 bytes, `src/sdk_e.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_e/discardVertexBuffer.json`
- plain
- other result

### dropOutCheck (`0C045C36`, 16 bytes, `src/leaf.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/leaf/dropOutCheck.json`
- well above
- well below
- exactly -35000
- just below the line
- just above
- very low
- very high

### extRand (`0C04981E`, 32 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRand.json`

### extRandom (`0C04983E`, 22 bytes, `src/extrand.c`)
- equivalent on 4 development cases, in `tests/extrand/extRandom.json`

### extRandomSeed (`0C049818`, 6 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRandomSeed.json`

### fmMngRead (`0C170E58`, 60 bytes, `src/sg_fm.c`)
- equivalent on 7 development and 8 holdout cases, in `tests/sg_fm/fmMngRead.json`
- null state
- busy
- ok
- neg index
- index==count
- index 0
- index count-1
- busy neg
- count 0
- count neg
- big index
- min index
- index>count
- busy and bad idx
- arg ffffffff

### frameFlip (`0C074370`, 24 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/frameFlip.json`
- flag clear
- flag set
- other
- big

### gdFsCheckEof (`0C1600D4`, 40 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vt_vtsdk_e/gdFsCheckEof.json`
- null
- flag zero
- pos past
- pos before
- equal
- negative pos
- negative size
- flag high byte
- big

### gdFsClose (`0C15FFEC`, 56 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 7 development and 3 holdout cases, in `tests/vt_vtsdk_d/gdFsClose.json`
- null
- flag zero
- state 2
- state 3
- state 4
- state 1
- state 5
- state 0
- state 0x10002
- state 2 again

### gdFsCreateHnG (`0C14DA60`, 112 bytes, `src/sg_gd.c`)
- equivalent on 8 development and 9 holdout cases, in `tests/sg_gd/gdFsCreateHnG.json`
- active
- free size 0
- size 1
- size 2048
- size 2049
- size 4096
- negative size
- neg tag
- active -1
- active 0x100 (short)
- active 0x7fff
- size max
- size min
- size -2048
- size -2049
- size 2047
- tag min

### gdFsGetDrvStat (`0C14E4A4`, 24 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_d/gdFsGetDrvStat.json`
- table set
- null table
- other args
- other target

### gdFsGetLE4 (`0C14CFBC`, 38 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vt_vtsdk_c/gdFsGetLE4.json`
- 1234
- high bytes
- zero
- top bit
- ff
- low

### gdFsGetTransStat (`0C1604F0`, 26 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_b/gdFsGetTransStat.json`
- null
- zero state
- ok
- negative short
- zero value
- ffff
- 7fff

### gdFsLoadDirFast (`0C14E3AC`, 22 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/gdFsLoadDirFast.json`
- null
- object
- other object
- arg zero
- arg minus

### gdFsOpen (`0C14E3EE`, 22 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_d/gdFsOpen.json`
- table set
- null table
- other args
- other target

### gdFsOpenRange (`0C14E41C`, 24 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_d/gdFsOpenRange.json`
- table set
- null table
- other args
- other target

### gdFsReadWG (`0C14D294`, 62 bytes, `src/sg_gd.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/sg_gd/gdFsReadWG.json`
- reopen fails
- ok
- b zero
- b big shift
- b negative
- a neg
- fail c neg
- b 0x200000 shifts out
- b 0x7fffffff
- other handle

### gdFsSetGlobalErrG (`0C14D004`, 10 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_c/gdFsSetGlobalErrG.json`
- one
- zero
- neg
- big
- other

### gdFsSetTmode (`0C1600FC`, 26 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_b/gdFsSetTmode.json`
- null
- zero state
- ok
- ok negative
- ok wide value
- state negative short
- null again

### getGoiToolFlag (`0C049878`, 18 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/getGoiToolFlag.json`
- bit set
- bit clear
- mask 0
- several, one set
- high bit
- flags 0

### getSystemMetrics (`0C0751C0`, 8 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/getSystemMetrics.json`
- returns 0
- returns 12345678
- returns FFFFFFFF
- returns 1
- returns 80000000

### hudHidePickUpNag (`0C0535F0`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/hudHidePickUpNag.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above

### hwInit (`0C150014`, 40 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/hwInit.json`
- empty table
- one entry
- three entries
- same addr twice
- four
- one other

### initPlayer (`0C02DD56`, 4 bytes, `src/leaf.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/leaf/initPlayer.json`
- nothing happens
- with a register set

### initPlayerADV (`0C02DD4A`, 8 bytes, `src/leaf.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/leaf/initPlayerADV.json`
- word clear
- word set
- other value

### kdExecGun (`0C1618D8`, 114 bytes, `src/kaede.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/kaede/kdExecGun.json`
- count0
- count1
- count2
- count5
- count -1
- count 65536
- count 32768
- high buf
- max

### kdGetDevice (`0C162094`, 18 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/kdGetDevice.json`
- 0
- 1
- 3
- 7
- negative
- 100

### kmyConvertAddress64to32 (`0C157F1E`, 34 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/vt_vtsdk_c/kmyConvertAddress64to32.json`
- zero
- bit 2
- low bits
- upper half
- both
- mid
- below
- max
- big

### kmytex_FBEnQueueEntry (`0C157416`, 28 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_a/kmytex_FBEnQueueEntry.json`
- empty queue
- nonempty queue
- empty, other layout
- nonempty, other layout
- empty, third layout

### kyakuClearVoiceBit24 (`0C0535A4`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/kyakuClearVoiceBit24.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above

### kyakuClearVoiceBit26 (`0C053642`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/kyakuClearVoiceBit26.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above

### kyakuCountDest (`0C0200B6`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/kyakuCountDest.json`
- index 0
- index 3
- index 7
- wraps at 32767
- negative
- index 5

### memset (`0C081458`, 24 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_b/memset.json`
- n=0
- n=1
- n=13
- value over a byte
- n=32
- negative val
- n=3 odd start

### mpdrv_frame_recv_post (`0C16EBBC`, 22 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vt_vtsdk_d/mpdrv_frame_recv_post.json`
- basic
- flag was set
- other

### mpdrv_get_device (`0C16ED60`, 16 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/mpdrv_get_device.json`
- zero
- three
- minus
- big
- other base

### mpdrv_insertnop (`0C16F194`, 68 bytes, `src/kaede.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/kaede/mpdrv_insertnop.json`
- n=0
- n=1
- n=3 count=2
- n negative
- n=5
- n=32 limit wraps
- n=min
- n=2 count16
- n=32767
- count negative

### mpdrv_set_ft4ctrl_ns (`0C1700A4`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mpdrv_set_ft4ctrl_ns.json`
- 1,2
- zero
- negative
- big
- other
- port 2

### mpdrv_set_getcond_ns (`0C16FD16`, 30 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vt_vtsdk_d/mpdrv_set_getcond_ns.json`
- a b
- ret 7
- ret neg

### mpdrv_set_getminfo_ns (`0C16FE88`, 38 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_d/mpdrv_set_getminfo_ns.json`
- shift
- big c
- zero c
- c ff

### mpdrv_set_setcond_ns (`0C170104`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mpdrv_set_setcond_ns.json`
- 1..4
- zero
- negative
- big
- other
- port 2

### mwRnaGetAutoSw (`0C16A8DA`, 42 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_c/mwRnaGetAutoSw.json`
- null
- bit set
- bit clear
- all
- zero
- bit 3 only
- bits 2,0

### mwRnaGetSfreq (`0C16AC76`, 30 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mwRnaGetSfreq.json`
- null
- 44100
- zero
- negative
- 48000
- big

### mwRnaGetTime (`0C16A82C`, 64 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mwRnaGetTime.json`
- null
- normal
- negative diff
- equal
- big
- zero start

### mwRnaGetTransSw (`0C16A88C`, 38 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_d/mwRnaGetTransSw.json`
- null
- bit set
- bit clear
- all ones
- zero byte
- only bit 7

### mwRnaSetSfreq (`0C16AA42`, 58 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_b/mwRnaSetSfreq.json`
- null object
- ok
- zero freq
- negative
- other freq
- null other freq

### njSetRenderWidth (`0C076B30`, 8 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/njSetRenderWidth.json`
- 640
- 320
- zero
- negative

### nlAbsSqrt (`0C075990`, 24 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_a/nlAbsSqrt.json`
- positive 16
- negative -16
- zero
- 2.25
- neg 0.25
- 100
- -81

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

### nlCeil (`0C075B00`, 18 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_b/nlCeil.json`
- 1.5 floor 1
- -1.5 floor -2 (ceil -1)
- zero
- 2.25
- -7

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

### nlCosec (`0C075B40`, 48 bytes, `src/sdk_c.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_c/nlCosec.json`
- zero
- half turn
- quarter
- generic
- wraps to zero
- wraps to half
- upper bits ignored
- three quarters

### nlCosf (`0C075B70`, 22 bytes, `src/sdk_d.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_d/nlCosf.json`
- zero
- positive
- negative
- pi
- large
- negative large
- tiny
- neg zero

### nlCosh (`0C075B90`, 48 bytes, `src/sdk_f.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_f/nlCosh.json`
- x=0
- x=0x4000
- x=0xFFFF
- high bits ignored
- x=1 exp 1e-3
- x=0x8000

### nlDispStrip (`0C080770`, 32 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_a/nlDispStrip.json`
- args
- zero
- other
- large

### nlDispStripFreePalette (`0C080740`, 32 bytes, `src/sdk_d.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_d/nlDispStripFreePalette.json`
- free
- flag set
- index at limit
- index over limit
- negative index
- negative limit
- limit 0, index 0
- flag big, in range

### nlDispStripSetPalette (`0C080760`, 16 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_e/nlDispStripSetPalette.json`
- zero
- ptr
- minus
- other

### nlDispStripTex (`0C080840`, 48 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlDispStripTex.json`
- first call 0
- first call nonzero
- first call -1
- zero, ptrs
- big nonzero

### nlDispStripTexOfs (`0C0808A0`, 48 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_a/nlDispStripTexOfs.json`
- ret 0 chains
- ret 1 stops
- ret -1 stops
- ret 0 other args
- ret 256

### nlDispStripTexTrnsl (`0C080870`, 48 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlDispStripTexTrnsl.json`
- first returns zero
- first returns 1
- first minus one
- zero then nonzero
- first 0x1000

### nlDispStripTrnsl (`0C080800`, 32 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlDispStripTrnsl.json`
- small
- pointers
- zero
- neg

### nlDispStripTrnslX (`0C080820`, 32 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlDispStripTrnslX.json`
- plain
- pointers
- zeros
- negative
- mixed

### nlExecuteEvent (`0C029702`, 38 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlExecuteEvent.json`
- empty list
- one event
- three events
- stale next-to-run
- two events
- five events

### nlFogTableOff (`0C076AC0`, 48 bytes, `src/sdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_a/nlFogTableOff.json`
- call
- call with r4
- another

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

### nlFreePaletteAll (`0C074060`, 16 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_a/nlFreePaletteAll.json`
- normal
- zero
- negative short
- big
- sign bit

### nlGetAverageVector (`0C078A90`, 44 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlGetAverageVector.json`
- halves
- zero w2
- mixed
- negative
- zeros

### nlGetIntrFunction (`0C07B790`, 48 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_a/nlGetIntrFunction.json`
- 0
- 12
- 13
- 5
- 100
- negative
- 1

### nlGetIntrPriority (`0C07B8C0`, 64 bytes, `src/sdk_c.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/sdk_c/nlGetIntrPriority.json`
- n 0 (IPRC nibble 0)
- n 3
- n 7
- n 13 out of range
- n 12
- n 1
- n 10
- n 5 other
- n 100
- n 8

### nlGetPaletteID (`0C0740E0`, 16 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_b/nlGetPaletteID.json`
- id 0
- id 1
- id 3 (negative short)
- id 7
- id 5

### nlGetPushedMatrix (`0C077540`, 40 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlGetPushedMatrix.json`
- zero
- three
- minus one
- one
- big

### nlInitEvent (`0C029542`, 68 bytes, `src/nlevent.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/nlevent/nlInitEvent.json`
- empty list
- one event
- three events
- events with extra blocks
- five events
- one event with three blocks

### nlInitFont (`0C076490`, 16 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlInitFont.json`
- value 0
- value 5
- value 209715200
- value 4294967295
- value 2147483648

### nlInitHeapMemory (`0C0293C8`, 50 bytes, `src/heap.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/heap/nlInitHeapMemory.json`
- a 0x1000-byte heap
- a 0x30000-byte heap
- a 0x1003-byte heap (size not a multiple of 4)
- a 0x40-byte heap

### nlInitPalette (`0C074020`, 58 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_e/nlInitPalette.json`
- zero entries
- one entry
- five entries
- ten entries
- other table
- count 2 high bits

### nlInitTextureSurface (`0C073E30`, 44 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_b/nlInitTextureSurface.json`
- n=0
- n=1
- n=3
- n negative
- n=4 elsewhere
- n=2

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

### nlIntrClearEvent (`0C07B830`, 48 bytes, `src/sdk_b.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/sdk_b/nlIntrClearEvent.json`
- event 0
- event 3
- event 5
- event 6 ignored
- event 100 ignored
- event 1
- event 4
- event 7 ignored

### nlInvertAbsSqrt (`0C075D30`, 32 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_e/nlInvertAbsSqrt.json`
- zero
- four
- negative
- one
- callee zero
- neg zero
- quarter

### nlInvertSqrt (`0C075D50`, 22 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_a/nlInvertSqrt.json`
- zero
- 4
- 0.25
- 64
- 1
- 256
- negative 0

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

### nlLineBlendFunc (`0C07BA10`, 46 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_d/nlLineBlendFunc.json`
- basic
- all set
- keeps low bits
- args above 7
- src 4 dst 2
- big args

### nlLoadDummyTexture (`0C073FA0`, 40 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlLoadDummyTexture.json`
- 8x8
- 64x32
- negative short
- 256x256
- zero

### nlLog10 (`0C075EA0`, 16 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_b/nlLog10.json`
- ln10
- ln1
- ln 0.5
- ln 1e3
- negative log
- big

### nlLog2 (`0C075EB0`, 16 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_c/nlLog2.json`
- log 2
- log 1
- negative
- big
- arbitrary
- zero

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

### nlObjPut (`0C07ACD0`, 44 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlObjPut.json`
- flag 2 clear
- flag 2 set
- flags 0xFD
- flags all
- flag 1
- flag 3

### nlObjPutLoadTexture (`0C07A250`, 54 bytes, `src/sdk_c.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_c/nlObjPutLoadTexture.json`
- callee 0
- callee 1
- callee 5
- the callee asks for two more rounds (it fills the cursor slot)
- callee -1
- callee 0x80

### nlObjPutMvInit (`0C07AA70`, 18 bytes, `src/sdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_c/nlObjPutMvInit.json`
- three calls
- with r4 zero
- r4 set

### nlObjPutMvSetIntensity (`0C07AA90`, 16 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlObjPutMvSetIntensity.json`
- zero
- one
- negative
- large
- five

### nlObjPutMvSetMode (`0C07AAA0`, 18 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_e/nlObjPutMvSetMode.json`
- zero
- one
- two
- three
- minus
- big

### nlObjPutSetFadeColor (`0C07AEA0`, 30 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlObjPutSetFadeColor.json`
- white
- channels
- zero
- negative
- large

### nlObjPutSetFadeColorBase (`0C07AEC0`, 14 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlObjPutSetFadeColorBase.json`
- white
- channels
- zero
- negative
- large

### nlObjPutSetFadeColorOffset (`0C07AED0`, 14 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlObjPutSetFadeColorOffset.json`
- white
- channels
- zero
- negative
- large

### nlObjPutSetGlobalAmbience (`0C07ADA0`, 10 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlObjPutSetGlobalAmbience.json`
- 1.0
- zero
- 0.25
- negative

### nlObjPutSetReplaceTextureDirName (`0C07DAF0`, 70 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_e/nlObjPutSetReplaceTextureDirName.json`
- no entries
- one entry
- three entries
- results or together
- all zero
- four

### nlOuterProduct (`0C078B00`, 52 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlOuterProduct.json`
- x cross y
- y cross z
- general ints
- parallel
- fractions
- negatives

### nlPrintMonitorMode (`0C076560`, 16 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlPrintMonitorMode.json`
- 0
- 2
- -1
- large

### nlPrintSetZ (`0C0764A0`, 16 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_e/nlPrintSetZ.json`
- two
- half
- four
- negative
- one
- zero

### nlPrintTileClipMode (`0C0764B0`, 32 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlPrintTileClipMode.json`
- all set mode 0
- zero mode 3
- mode 1
- mode 2
- mode 5 overflows field
- mode ffff

### nlPrnIndentOn (`0C076810`, 10 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlPrnIndentOn.json`
- clear
- set
- other bits
- all
- bit 1

### nlProjectScreen3D (`0C079960`, 32 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlProjectScreen3D.json`
- small
- pointers
- zeros
- neg

### nlPushUnitMatrix (`0C0782E0`, 26 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlPushUnitMatrix.json`
- matrix ptr
- null
- other
- big

### nlReloadPalette (`0C0740F0`, 64 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_c/nlReloadPalette.json`
- idx 0 active
- idx 1 flag zero (no call)
- idx 2 negative a
- idx 3 big
- idx 0 other table
- idx 0 zero flag only

### nlReloadPalette8888 (`0C074130`, 16 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlReloadPalette8888.json`
- index 0
- index 7
- index 255
- index -1
- index 1000

### nlRenderTextureInit (`0C076BB0`, 48 bytes, `src/sdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_c/nlRenderTextureInit.json`
- 3 entries
- unaligned size
- zero count
- negative count
- aligned-1
- one
- eight

### nlRenderTextureSet (`0C076BE0`, 16 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlRenderTextureSet.json`
- small
- zeros
- pointers
- negatives
- mixed

### nlRotate (`0C0783E0`, 54 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlRotate.json`
- x axis
- mixed
- negative
- zero vec
- large

### nlScaleUnitVector (`0C078B80`, 60 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_b/nlScaleUnitVector.json`
- unit x
- scaled
- negative comps
- zero vec
- negative scale

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

### nlScalor (`0C078BE0`, 20 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_c/nlScalor.json`
- 3 4 12
- zero
- 1 2 2
- negative
- 0.5s
- axis

### nlSetDummyTextureParameter (`0C073FD0`, 28 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlSetDummyTextureParameter.json`
- mixed
- zero dest
- zero src
- low bits overlap
- pattern

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

### nlSetFontSize (`0C076830`, 10 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlSetFontSize.json`
- 1,2
- zero
- 640x480
- negative
- big

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

### nlSpriteClearSpriteIndex (`0C07E7B0`, 30 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_d/nlSpriteClearSpriteIndex.json`
- index 0
- index 33
- index 31
- index 255 pattern
- already clear
- index 100

### nlSpriteFreeTexture (`0C07DE30`, 64 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlSpriteFreeTexture.json`
- empty
- one
- three or
- zeros
- four
- minus one first entry only

### nlSpriteGetImaginaryScreenSize (`0C07DEF0`, 16 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlSpriteGetImaginaryScreenSize.json`
- 640x480
- square
- zero
- negative
- wide

### nlSpriteSetImaginaryScreenSize (`0C07DED0`, 24 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_b/nlSpriteSetImaginaryScreenSize.json`
- 640x480
- 2x4
- 1x1
- wide
- fractions

### nlSubVector (`0C078C10`, 32 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlSubVector.json`
- simple
- zero
- negative result
- fractions
- large

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

### nlTranslateV (`0C0789E0`, 20 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlTranslateV.json`
- 1 2 3
- zero
- fractions
- large
- negative

### nlTriPutSetAttribAmbient (`0C07A970`, 16 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlTriPutSetAttribAmbient.json`
- one
- half
- zero
- negative
- large

### nlTriPutSetAttribBiliner (`0C07A860`, 32 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_b/nlTriPutSetAttribBiliner.json`
- off, all set
- on, all clear
- on, all set
- off, clear
- on, 0x6000 only
- off, other
- on, nonzero 7

### nlTriPutSetAttribBlendingMode (`0C07A7E0`, 48 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlTriPutSetAttribBlendingMode.json`
- zero
- src 5 dst 3
- old bits cleared
- masks
- src 7
- dst 7 old

### nlTriPutSetAttribFaceColor (`0C07A8D0`, 22 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlTriPutSetAttribFaceColor.json`
- white
- channels
- zero
- negative
- large

### nlTriPutSetAttribOffsetColor (`0C07A8B0`, 32 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlTriPutSetAttribOffsetColor.json`
- white
- channels
- zero
- negative
- large

### nlTriPutSetAttribSetTexAlpha (`0C07A900`, 48 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlTriPutSetAttribSetTexAlpha.json`
- off
- on
- on dirty
- off dirty
- on 0xff
- on zero fields

### nlTriPutSetAttribShading (`0C07A9C0`, 16 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_a/nlTriPutSetAttribShading.json`
- 0
- 1
- 2
- neg
- big

### nlTriPutSetAttribTranslucent (`0C07A930`, 64 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_b/nlTriPutSetAttribTranslucent.json`
- opaque 1.0
- half
- zero
- above 1
- negative
- just below 1
- NaN

### nlTriPutSetAttribUV (`0C07A880`, 48 bytes, `src/sdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_c/nlTriPutSetAttribUV.json`
- none
- u only
- v only
- both
- u nonzero big
- v big
- keeps other bits

### nlTriPutSetClipping (`0C07A9D0`, 38 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlTriPutSetClipping.json`
- screen
- distinct
- negative
- fractions

### nlTriPutSetPaletteIndex (`0C07A600`, 16 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlTriPutSetPaletteIndex.json`
- zero
- seven
- minus
- big
- one

### nlTriPutTextureInit (`0C07A5D0`, 42 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlTriPutTextureInit.json`
- basic
- zero args
- pointer tex
- other seed
- v 5

### nlsndCheckPackFreeError (`0C07EA20`, 70 bytes, `src/sdk_e.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/sdk_e/nlsndCheckPackFreeError.json`
- negative
- too big
- free slot
- ok
- busy
- slot 0
- slot 7 free
- slot 7 busy
- very negative
- huge

### nlsndG2DmaHandleClose (`0C080450`, 20 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlsndG2DmaHandleClose.json`
- open
- closed
- other
- minus one
- big

### nlsndG2DmaHandleOpen (`0C080420`, 34 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_b/nlsndG2DmaHandleOpen.json`
- all free
- first two used
- last free
- all used
- gap
- only last used

### nlsndStreamGenerateHdInfo (`0C07FE90`, 22 bytes, `src/sdk_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_b/nlsndStreamGenerateHdInfo.json`
- as loaded
- pattern 1
- pattern 2

### nlsndStreamGetHdInfo (`0C07FA90`, 14 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlsndStreamGetHdInfo.json`
- 0
- 1
- 0xff
- 0x80
- 0x7f
- 0x10

### nlsndStreamSetHdBitSize (`0C07FF40`, 72 bytes, `src/sdk_d.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_d/nlsndStreamSetHdBitSize.json`
- 4 bit
- 8 bit
- 16 bit
- other value
- upper r5 bits ignored (4)
- negative
- upper bits with 16
- zero

### nlsndStreamSetHdChs (`0C07FEC0`, 76 bytes, `src/sdk_c.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/sdk_c/nlsndStreamSetHdChs.json`
- mono
- stereo
- quad
- other
- zero count
- upper half ignored (1)
- upper half ignored (4)
- negative
- mono flag clear

### nlsndStreamSetHdFx (`0C07FF90`, 26 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlsndStreamSetHdFx.json`
- zero
- small
- both
- negative
- high bits

### nlsndStreamSetHdGain (`0C07FFB0`, 18 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_a/nlsndStreamSetHdGain.json`
- 0
- 0x7f
- 0x1ff truncated
- neg
- 0x80

### nlsndStreamSetHdPan (`0C07FF30`, 12 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_b/nlsndStreamSetHdPan.json`
- i=0
- i=3
- i=-1
- v wider than a byte
- i high bits set
- i=15 v negative
- i=-8

### ovLibClose (`0C14CDCC`, 56 bytes, `src/sg_ov.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/sg_ov/ovLibClose.json`
- idx0
- idx1
- idx2
- not found -3
- refs zero goes negative
- -1
- idx1 big refs
- idx2 min refs
- idx0 refs 1

### ovSearchLib (`0C14CCD6`, 64 bytes, `src/sg_ov.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/sg_ov/ovSearchLib.json`
- empty
- first
- last
- middle
- absent
- count beyond match not searched
- neg count
- big key
- neg key last
- zero key
- dup

### paletteSetMode (`0C0742A0`, 22 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_a/paletteSetMode.json`
- 0
- 1
- 3
- 2
- 0x101 byte write

### paletteUpload (`0C074270`, 36 bytes, `src/sdk_e.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_e/paletteUpload.json`
- clean
- dirty
- dirty 5
- flag in byte 1 only

### pdExecPeripheralServer (`0C14E982`, 12 bytes, `src/sg_pad.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/sg_pad/pdExecPeripheralServer.json`
- zero
- one
- -1
- min
- 256

### pdExitPeripheral (`0C14EAAC`, 72 bytes, `src/sg_pad.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sg_pad/pdExitPeripheral.json`
- active=0
- active=1
- active=0
- active=ffffffff
- active=100
- active=80000000
- active=2

### pdGetPeripheralInfo (`0C14EAFE`, 10 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/pdGetPeripheralInfo.json`
- zero
- two
- minus
- big
- ret minus

### pdGunSetTrigger (`0C14EC0C`, 52 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vt_vtsdk_a/pdGunSetTrigger.json`
- 0
- 6
- 12
- 18
- other 5
- 24
- negative
- 7

### pdVibGetInfo (`0C151720`, 60 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vt_vtsdk_e/pdVibGetInfo.json`
- ok
- positive
- negative
- zero ret
- ret min
- other dev

### pdVmsLcdWrite (`0C15008C`, 102 bytes, `src/sg_lcd.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sg_lcd/pdVmsLcdWrite.json`
- not ready
- ready ok
- ready idx1 neg kd
- kd positive
- idx 255
- kd min
- kd max
- not ready ret neg

### pdVmsLcdWrite1 (`0C1500F2`, 74 bytes, `src/sg_lcd.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/sg_lcd/pdVmsLcdWrite1.json`
- ready=0 ret=0
- ready=1 ret=0
- ready=1 ret=-1
- ready=1 ret=5
- ready=1 ret=2147483648
- ready=1 ret=2147483647
- ready=5 ret=-100
- ready=0 ret=2147483647
- ready=1 ret=1

### psgSetCurrent (`0C06E246`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/psgSetCurrent.json`
- value 0
- value 209715200
- value 202519632
- value 4294967295
- value 7

### rinRandomSeed (`0C06B0C8`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/rinRandomSeed.json`
- value 0
- value 1
- value 305419896
- value 4294967295
- value 2147483648

### setBorderColor (`0C074A10`, 26 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/setBorderColor.json`
- rgb
- already opaque
- zero
- half alpha
- all ones

### set_event (`0C029586`, 74 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/set_event.json`
- empty list
- one event
- size below 20
- allocation fails
- three events
- size 19
- size 20, fails, empty list

### str_len (`0C16652E`, 26 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/vt_vtsdk_c/str_len.json`
- empty
- five
- twelve
- long
- negative byte
- eleven
- one
- thirteen

### strcmp (`0C087E90`, 14 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/strcmp.json`
- equal
- less
- greater
- big
- other ptrs

### strlen (`0C081484`, 16 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_c/strlen.json`
- empty
- one
- word
- long
- high bytes
- two

### strncpy (`0C087EA4`, 46 bytes, `src/sdk_e.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_e/strncpy.json`
- short src, pads
- exact fit
- truncated
- zero n
- empty src
- long
- n one
- big pad

### syBtExit (`0C1514FC`, 48 bytes, `src/sg_sybt.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/sg_sybt/syBtExit.json`
- a1 b1
- a1 b0
- a0
- a0 b1
- a1 b2
- a2 b1
- a255 b255
- a1 b255
- a0x101? 

### syCblCheck (`0C150226`, 70 bytes, `src/sg_sycbl.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/sg_sycbl/syCblCheck.json`
- cable0
- c1 b0
- c1 b1
- c1 b2
- c1 b3
- cable0 b1
- c-1 b3
- c64k b2
- c5 b4
- b-1
- b big
- b 2^32+1

### syCblCheckBroadcast (`0C1501EC`, 58 bytes, `src/sg_sycbl.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/sg_sycbl/syCblCheckBroadcast.json`
- '1'
- '2'
- '3'
- '0'
- 0
- '4'
- 0xff
- 0xb1
- 47

### syHwFinish (`0C14FFAE`, 60 bytes, `src/sg_syhw.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sg_syhw/syHwFinish.json`
- mask 0
- mask 15
- mask 7, T and S set
- mask 3, M and Q set
- mask 12

### syMmuCacheCtrl (`0C16E2A4`, 80 bytes, `src/sg_mmu.c`)
- equivalent on 5 development and 6 holdout cases, in `tests/sg_mmu/syMmuCacheCtrl.json`
- idx=0 val=0 cur=ffffffff
- idx=1 val=f cur=0
- idx=3f val=7f cur=12345678
- idx=40 val=ff cur=ffffffff
- idx=64 val=1 cur=0
- idx=5 val=80 cur=ffffffff
- idx=5 val=1ff cur=0
- idx=3f val=fffffff6 cur=a5a5a5a5
- idx=ffffffff val=3 cur=55
- idx=40 val=0 cur=7
- idx=2 val=9 cur=9

### syRtcGetAndCheckCount (`0C14FCC6`, 118 bytes, `src/sg_syrtc.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/sg_syrtc/syRtcGetAndCheckCount.json`
- equal ok
- differ
- first fail
- first fail diff
- second fail
- both fail
- neg equal
- max differ
- fail ret neg
- zero all
- one bit differ

### syRtcGetDate (`0C14F9DA`, 76 bytes, `src/sg_syrtc.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sg_syrtc/syRtcGetDate.json`
- flag1
- flag0
- flag3 (bit0 set)
- flag2 (bit0 clear)
- neg year
- max year
- flag high bits only
- flag 0xffffffff

### syTmrInit (`0C1614B8`, 38 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vt_vtsdk_d/syTmrInit.json`
- regs zero
- regs ones
- mixed

### texFreeMem (`0C073BE0`, 24 bytes, `src/sdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_a/texFreeMem.json`
- free mem call
- call returns something
- again

### vmsfs_c_setparam (`0C163590`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/vmsfs_c_setparam.json`
- slot 0
- slot 1
- slot 3
- negatives
- slot 7
- slot 2 again

### vmsfs_exit (`0C163AC0`, 24 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vt_vtsdk_c/vmsfs_exit.json`
- run
- r4 set
- dirty

### volumeToDb (`0C02E222`, 96 bytes, `src/misc.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/misc/volumeToDb.json`
- level 0
- level 127
- level 64
- level 1
- negative byte
- byte 0 of a bigger value
- level 255 as -1
- level 100
- log below -5 (very negative)
- level 0x80 (-128)

### vsklRotate (`0C06AF8C`, 38 bytes, `src/camera.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/camera/vsklRotate.json`
- x and y axes
- general vectors
- zero vectors
- negative
- same vector twice
