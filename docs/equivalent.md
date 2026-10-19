# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### ADXAMP_Destroy (`0C167A02`, 44 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/ADXAMP_Destroy.json`
- amp
- null
- amp 2

### ADXAMP_ExecHndl (`0C167BE4`, 376 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/ADXAMP_ExecHndl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXAMP_ExecServer (`0C168DE8`, 40 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_z/ADXAMP_ExecServer.json`
- two open
- none open
- last open
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXAMP_GetStat (`0C167A2E`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXAMP_GetStat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXAMP_Start (`0C167A32`, 66 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_ze/ADXAMP_Start.json`
- 2 channels
- none
- 6

### ADXAMP_Stop (`0C167A74`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXAMP_Stop.json`
- fill ff
- fill 00
- fill a5

### ADXB_CheckAu (`0C17354C`, 50 bytes, `src/gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_m/ADXB_CheckAu.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_CheckSpsd (`0C173D32`, 20 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/ADXB_CheckSpsd.json`
- match
- no match
- no match, positive

### ADXB_CheckWav (`0C174328`, 52 bytes, `src/gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_m/ADXB_CheckWav.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_CopyExtraBufMono (`0C1715C0`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXB_CopyExtraBufMono.json`
- pos 8, 4
- pos 0

### ADXB_Create (`0C171014`, 140 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXB_Create.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_DecodeHeader (`0C1711F6`, 186 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXB_DecodeHeader.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_Destroy (`0C1710A0`, 36 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/ADXB_Destroy.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_EndDecode (`0C1715D8`, 210 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXB_EndDecode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_EntryAddWrFunc (`0C1712F6`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/ADXB_EntryAddWrFunc.json`
- two
- others

### ADXB_EntryData (`0C17137C`, 82 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXB_EntryData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_EntryGetWrFunc (`0C1712EC`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/ADXB_EntryGetWrFunc.json`
- two
- others

### ADXB_EvokeDecode (`0C1714A4`, 188 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXB_EvokeDecode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_ExecOneAiff (`0C17330E`, 16 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXB_ExecOneAiff.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXB_ExecOneAu (`0C173A5C`, 28 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXB_ExecOneAu.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ADXB_GetAdxpd (`0C17143E`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetAdxpd.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetBlkLen (`0C171352`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetBlkLen.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetBlkSmpl (`0C17134E`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetBlkSmpl.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetCof (`0C17135A`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetCof.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetDecDtLen (`0C171416`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetDecDtLen.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetDecNumSmpl (`0C171438`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetDecNumSmpl.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetFormat (`0C171304`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetFormat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpEndOfst (`0C171374`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetLpEndOfst.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpEndPos (`0C171370`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetLpEndPos.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpInsNsmpl (`0C17135E`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetLpInsNsmpl.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpStartOfst (`0C17136C`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetLpStartOfst.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetLpStartPos (`0C171368`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetLpStartPos.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetNumChan (`0C17130E`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetNumChan.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetNumLoop (`0C171362`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetNumLoop.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetOutBps (`0C171312`, 60 bytes, `src/sdk_q.c`)
- equivalent on 5 development and 4 holdout cases, in `tests/sdk_q/ADXB_GetOutBps.json`
- mode 0
- 2,2: 4
- 2,1: 8
- 2,3: 16
- 1,2: 4
- 1,1: 16
- 3,2: 16
- -1,2: 16
- 2,0: 16

### ADXB_GetPcmBuf (`0C171300`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetPcmBuf.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetSfreq (`0C17130A`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetSfreq.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetStat (`0C171378`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetStat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_GetTotalNumSmpl (`0C171356`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXB_GetTotalNumSmpl.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXB_Reset (`0C1713F6`, 32 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/ADXB_Reset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ADXF_Close (`0C152E70`, 80 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_ze/ADXF_Close.json`
- reading
- idle
- null
- idle 2

### ADXF_ExecServer (`0C1531E0`, 48 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_l/ADXF_ExecServer.json`
- entries 0 and 2 running
- none
- all 16 running
- state 2 skipped
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXF_Finish (`0C15270E`, 56 bytes, `src/sdk_o.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_o/ADXF_Finish.json`
- finish
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXF_GetFsizeByte (`0C1532F8`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/ADXF_GetFsizeByte.json`
- null: -3
- handle
- another

### ADXF_GetFsizeSct (`0C1532DC`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/ADXF_GetFsizeSct.json`
- null: -3
- handle
- another

### ADXF_GetNumReadSct (`0C153344`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/ADXF_GetNumReadSct.json`
- null: -3
- handle
- another

### ADXF_GetNumReqSct (`0C153314`, 48 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_l/ADXF_GetNumReqSct.json`
- null: error
- values
- other

### ADXF_GetPtinfoSize (`0C152C24`, 10 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/ADXF_GetPtinfoSize.json`
- ptid 1
- ptid 0

### ADXF_GetStat (`0C153360`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/ADXF_GetStat.json`
- null: -3
- handle
- another

### ADXF_Init (`0C1526D4`, 58 bytes, `src/sdk_o.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_o/ADXF_Init.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXF_Open (`0C152D24`, 92 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXF_Open.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_OpenAfs (`0C152DC4`, 96 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXF_OpenAfs.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXF_ReadSj32 (`0C152FA2`, 46 bytes, `src/sdk_l.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_l/ADXF_ReadSj32.json`
- read
- other

### ADXF_Seek (`0C153210`, 144 bytes, `src/sdk_ze.c`)
- equivalent on 6 development and 3 holdout cases, in `tests/sdk_ze/ADXF_Seek.json`
- null
- abs
- rel
- end
- bad mode
- neg
- past
- reading
- end past

### ADXF_Stop (`0C1530BE`, 150 bytes, `src/sdk_ze.c`)
- equivalent on 5 development and 1 holdout cases, in `tests/sdk_ze/ADXF_Stop.json`
- null
- idle
- stopped 3
- reading
- no stream
- state 4

### ADXF_Tell (`0C1532A0`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/ADXF_Tell.json`
- null: -3
- handle
- another

### ADXPD_Create (`0C17439E`, 120 bytes, `src/sdk_za.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_za/ADXPD_Create.json`
- slot 2 free
- all used
- slot 7 free
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXPD_Destroy (`0C17442E`, 20 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_b/ADXPD_Destroy.json`
- null
- object
- object offset
- another

### ADXPD_EntryMono (`0C17444A`, 30 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/ADXPD_EntryMono.json`
- free: set
- busy: 0
- negative

### ADXPD_EntrySte (`0C174468`, 30 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXPD_EntrySte.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXPD_ExecHndl (`0C1744E0`, 154 bytes, `src/sdk_t.c`)
- equivalent on 5 development and 2 holdout cases, in `tests/sdk_t/ADXPD_ExecHndl.json`
- state 0
- state 3
- mono
- stereo even
- stereo odd
- stereo neg odd
- stereo zero

### ADXPD_GetNumBlk (`0C1744BC`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXPD_GetNumBlk.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXPD_GetStat (`0C174446`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXPD_GetStat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXPD_Reset (`0C1744AE`, 14 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_t/ADXPD_Reset.json`
- state 3: cleared
- state 2: kept
- state 0
- state -1

### ADXPD_SetCoef (`0C174416`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXPD_SetCoef.json`
- coef
- another

### ADXPD_SetMode (`0C174442`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXPD_SetMode.json`
- fill ff
- fill 00
- fill a5

### ADXPD_Start (`0C174486`, 18 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/ADXPD_Start.json`
- stopped: start
- running
- state 2

### ADXPD_Stop (`0C174498`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXPD_Stop.json`
- stop
- another

### ADXRNA_Destroy (`0C1680B2`, 18 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXRNA_Destroy.json`
- handle
- another

### ADXRNA_DiscardData (`0C168136`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_DiscardData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_ExecServer (`0C1680F4`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_ExecServer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetBitPerSmpl (`0C168130`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetBitPerSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetNumData (`0C1680E2`, 6 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/ADXRNA_GetNumData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetOutPan (`0C16812A`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetOutPan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetOutVol (`0C168124`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetOutVol.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetSfreq (`0C16811E`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetSfreq.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetStat (`0C1680EE`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_GetTime (`0C1680DC`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_GetTime.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetBitPerSmpl (`0C168118`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetBitPerSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetNumChan (`0C168100`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetNumChan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetOutPan (`0C168112`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetOutPan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetOutVol (`0C16810C`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetOutVol.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetPlaySw (`0C1680D6`, 6 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/ADXRNA_SetPlaySw.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetSfreq (`0C168106`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetSfreq.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetStartSmpl (`0C1680FA`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetStartSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_SetStmHdInfo (`0C16814C`, 20 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/ADXRNA_SetStmHdInfo.json`
- a
- b

### ADXRNA_SetTransSw (`0C1680D0`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_SetTransSw.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_Start (`0C1680C4`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_Start.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXRNA_Stop (`0C1680CA`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXRNA_Stop.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXSJD_Create (`0C168200`, 210 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/ADXSJD_Create.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSJD_Destroy (`0C168300`, 52 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_c/ADXSJD_Destroy.json`
- null
- no buffer
- with buffer
- other buffer
- other r0

### ADXSJD_ExecHndl (`0C168772`, 20 bytes, `src/sdk_i.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_i/ADXSJD_ExecHndl.json`
- state 2: decode
- state 1: prep
- state 0
- state 3

### ADXSJD_ExecServer (`0C1687C0`, 46 bytes, `src/sdk_o.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_o/ADXSJD_ExecServer.json`
- entries 0 and 3 running
- none
- all running
- state 2 skipped
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXSJD_Finish (`0C1681D8`, 10 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ADXSJD_Finish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXSJD_GetStat (`0C168334`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXSJD_GetStat.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXSJD_Init (`0C1681C4`, 20 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/ADXSJD_Init.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXSJD_SetInSj (`0C168338`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXSJD_SetInSj.json`
- fill ff
- fill 00
- fill a5

### ADXSJD_SetMaxDecSmpl (`0C168348`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXSJD_SetMaxDecSmpl.json`
- fill ff
- fill 00
- fill a5

### ADXSJD_SetOutSj (`0C16833C`, 12 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/ADXSJD_SetOutSj.json`
- slot 2
- slot 0

### ADXSJD_Start (`0C16834C`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXSJD_Start.json`
- start
- another

### ADXSJD_Stop (`0C168362`, 26 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/ADXSJD_Stop.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTMF_ExecHndl (`0C168DDA`, 14 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXSTMF_ExecHndl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_Close (`0C168B1E`, 40 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zd/ADXSTM_Close.json`
- with file
- null
- no file

### ADXSTM_EntryEosFunc (`0C168C4C`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXSTM_EntryEosFunc.json`
- fill ff
- fill 00
- fill a5

### ADXSTM_GetBufSize (`0C168E48`, 12 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/ADXSTM_GetBufSize.json`
- basic
- zero
- minus
- big
- swapped

### ADXSTM_GetCurOfst (`0C168E28`, 32 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/ADXSTM_GetCurOfst.json`
- offset
- closed

### ADXSTM_GetFad (`0C168E8A`, 30 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/ADXSTM_GetFad.json`
- info
- another

### ADXSTM_GetFileLen (`0C168E6A`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXSTM_GetFileLen.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXSTM_GetFsizeByte (`0C168ED6`, 30 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/ADXSTM_GetFsizeByte.json`
- info
- another

### ADXSTM_GetFsizeSct (`0C168EA8`, 46 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_ze/ADXSTM_GetFsizeSct.json`
- a
- exact
- negative

### ADXSTM_GetGdfsStat (`0C168E6E`, 28 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/ADXSTM_GetGdfsStat.json`
- basic
- zero
- minus
- big
- other

### ADXSTM_GetSj (`0C168E54`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/ADXSTM_GetSj.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### ADXSTM_Init (`0C168920`, 18 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/ADXSTM_Init.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXSTM_Seek (`0C168C0C`, 64 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXSTM_Seek.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_SetBufSize (`0C168E58`, 8 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/ADXSTM_SetBufSize.json`
- two
- others

### ADXSTM_SetEos (`0C168C52`, 32 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADXSTM_SetEos.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXSTM_SetReqRdSize (`0C168E60`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/ADXSTM_SetReqRdSize.json`
- fill ff
- fill 00
- fill a5

### ADXSTM_Start (`0C168B46`, 42 bytes, `src/sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_u/ADXSTM_Start.json`
- h[5] 0
- h[5] set: tells
- h[5] -1

### ADXSTM_Tell (`0C168BB4`, 36 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/ADXSTM_Tell.json`
- open
- closed
- negative

### ADXT_DiscardSmpl (`0C1524BA`, 46 bytes, `src/gen_n.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_n/ADXT_DiscardSmpl.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXT_GetNumChan (`0C15221A`, 30 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_j/ADXT_GetNumChan.json`
- state 2
- state 1
- state 5
- state -1

### ADXT_GetNumSmpl (`0C1521DE`, 30 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_j/ADXT_GetNumSmpl.json`
- state 2
- state 1
- state 5
- state -1

### ADXT_GetOutPan (`0C15226A`, 12 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/ADXT_GetOutPan.json`
- ch 1
- ch 0, negative

### ADXT_GetSfreq (`0C1521FC`, 30 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_j/ADXT_GetSfreq.json`
- state 2
- state 1
- state 5
- state -1

### ADXT_GetStat (`0C152106`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/ADXT_GetStat.json`
- 3
- -1

### ADXT_GetTime (`0C15210A`, 170 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADXT_GetTime.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADXT_GetTimeReal (`0C1521B4`, 42 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/ADXT_GetTimeReal.json`
- a
- b

### ADXT_Init (`0C151A0E`, 50 bytes, `src/sdk_l.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_l/ADXT_Init.json`
- eight calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ADXT_SetOutPan (`0C152238`, 50 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_d/ADXT_SetOutPan.json`
- in range
- equal -> error
- above -> error
- ch 0 count 0
- signed count
- rna handle

### ADXT_SetOutVol (`0C152276`, 18 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/ADXT_SetOutVol.json`
- vol -30
- vol 0

### ADX_DecodeInfo (`0C167D30`, 254 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADX_DecodeInfo.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ADX_DecodeInfoAiff (`0C172F52`, 152 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/ADX_DecodeInfoAiff.json`
- case 1
- case 3
- case 4
- case 7
- case 8
- case 9
- case 11
- case 13
- case 17
- case 19
- case 23
- case 25
- case 28
- case 32
- case 35
- case 37
- case 38
- case 43
- case 47
- case 48
- case 49
- case 50

### ADX_DecodeInfoExADPCM2 (`0C167E50`, 102 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/ADX_DecodeInfoExADPCM2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Act_Execute (`0C060D4C`, 76 bytes, `src/game_p.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/game_p/Act_Execute.json`
- 600
- 300 busy
- game 2
- other
- 300
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Act_Init (`0C060C04`, 248 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/Act_Init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Advtise (`0C057B6C`, 40 bytes, `src/game_i.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_i/Advtise.json`
- bit 0 and bit 3
- bit 0 only
- bit 3 only
- none
- other bits
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### Bezier (`0C06B0F4`, 142 bytes, `src/game_p.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_p/Bezier.json`
- mid
- start
- end
- quarter

### CableControlInit (`0C047698`, 256 bytes, `src/gen_w.c`)
- equivalent on 13 development and 0 holdout cases, in `tests/gen_w/CableControlInit.json`
- case 0
- case 7
- case 12
- case 18
- case 25
- case 31
- case 33
- case 34
- case 45
- case 52
- case 53
- case 55
- case 57

### CalcHomingVector (`0C03633C`, 60 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/CalcHomingVector.json`
- a
- b

### CalcShadow4Normal (`0C036286`, 88 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/CalcShadow4Normal.json`
- flat
- slope
- steep

### CarSel_Time_Count (`0C051070`, 308 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/CarSel_Time_Count.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ChangeColliObj (`0C03319A`, 154 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/ChangeColliObj.json`
- only to empty
- same
- middle to used
- head to used
- tail to empty

### Chat_Execute (`0C060E00`, 24 bytes, `src/game_d.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_d/Chat_Execute.json`
- two randoms
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Chat_PickSomeoneUp (`0C061D0C`, 56 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/Chat_PickSomeoneUp.json`
- driver 1
- busy
- driver 4
- driver 0
- driver 9
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Check2DAreaDX (`0C032274`, 88 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/Check2DAreaDX.json`
- inside
- outside
- on edge
- last edge
- one point

### CheckAreaGrid (`0C032316`, 138 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/CheckAreaGrid.json`
- first
- next
- later
- none
- wrap
- none 2

### CheckColliWall (`0C0341E8`, 484 bytes, `src/collide.c`)
- equivalent on 7 development and 4 holdout cases, in `tests/collide/CheckColliWall.json`
- empty cell
- no wall
- type 1 inside
- type 1 two inside
- type 1 beyond
- type 2
- pole
- beyond far
- mix then pole
- R 2
- type 2 far

### CheckKyakuArea (`0C035B38`, 64 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/CheckKyakuArea.json`
- a
- b

### CheckSoftReset (`0C041068`, 320 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/CheckSoftReset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### ConvertSwitch2 (`0C02A2D4`, 40 bytes, `src/game_e.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_e/ConvertSwitch2.json`
- copies
- other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### CourseObj_Init (`0C04EAC0`, 98 bytes, `src/game_k.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_k/CourseObj_Init.json`
- mode 0
- mode 1
- mode 2: tables only
- mode -1
- count 8
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### CourseSplineGet (`0C04D202`, 24 bytes, `src/game_b.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_b/CourseSplineGet.json`
- course 1
- course 0

### CourseSplineNumGet (`0C04D1EE`, 20 bytes, `src/game_b.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_b/CourseSplineNumGet.json`
- course 2
- course 0

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

### DispVector (`0C0499E0`, 146 bytes, `src/game_p.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/game_p/DispVector.json`
- mode 0
- mode 1
- mode 2
- mode 3
- mode 4
- mode 5
- mode 6
- mode -1

### Drv_PickSomeoneUp (`0C0645DE`, 36 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/Drv_PickSomeoneUp.json`
- late
- early
- much later
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ExecHelicopter (`0C0375A8`, 162 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/ExecHelicopter.json`
- start
- wait
- follow
- arrived
- gone
- started
- follow 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ExecKyakuArea (`0C0356F8`, 184 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/ExecKyakuArea.json`
- plain
- mg19 step0
- mg19 step3
- mg19 step9
- mg19 wrap
- cm 1

### ExecSetObject (`0C0382FA`, 158 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/ExecSetObject.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 19
- case 20
- case 22
- case 23
- case 24
- case 25

### Exec_Balloon (`0C05EBB8`, 246 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/Exec_Balloon.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c020080 (`0C020080`, 18 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c020080.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c020092 (`0C020092`, 20 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/FUN_0c020092.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0200aa (`0C0200AA`, 12 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/FUN_0c0200aa.json`
- index 3
- index 0 negative
- index 0x10001 as int

### FUN_0c0208d6 (`0C0208D6`, 248 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0208d6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0210d4 (`0C0210D4`, 268 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0210d4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0211e0 (`0C0211E0`, 54 bytes, `src/game_o.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_o/FUN_0c0211e0.json`
- half
- corner
- odd
- big

### FUN_0c0217b4 (`0C0217B4`, 130 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/FUN_0c0217b4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c022250 (`0C022250`, 264 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c022250.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c022358 (`0C022358`, 54 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c022358.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0246dc (`0C0246DC`, 8 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c0246dc.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c025b30 (`0C025B30`, 168 bytes, `src/game_p.c`)
- equivalent on 6 development and 7 holdout cases, in `tests/game_p/FUN_0c025b30.json`
- box10 here
- box10 other
- box14 match
- box14 miss
- orig15 7
- orig15 other
- arcade
- box 5
- box14 other stop
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Crazy Box 1-1)
- live RAM (Total Records screen)

### FUN_0c0287c2 (`0C0287C2`, 18 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0287c2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0287d4 (`0C0287D4`, 12 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c0287d4.json`
- two
- zero

### FUN_0c0288ca (`0C0288CA`, 10 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c0288ca.json`
- three
- others

### FUN_0c0288d4 (`0C0288D4`, 12 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c0288d4.json`
- two
- other

### FUN_0c0288e0 (`0C0288E0`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c0288e0.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c0288f0 (`0C0288F0`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c0288f0.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c028908 (`0C028908`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c028908.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c0289be (`0C0289BE`, 328 bytes, `src/gen_af.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_af/FUN_0c0289be.json`
- case 0
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### FUN_0c028b06 (`0C028B06`, 168 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c028b06.json`
- reset
- plain
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c028f50 (`0C028F50`, 138 bytes, `src/game_p.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_p/FUN_0c028f50.json`
- no reset
- reset
- far
- mid
- live
- live

### FUN_0c028fda (`0C028FDA`, 56 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c028fda.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c029748 (`0C029748`, 178 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c029748.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0297fa (`0C0297FA`, 78 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c0297fa.json`
- one
- other
- two
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c029a94 (`0C029A94`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c029a94.json`
- two calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c029aa6 (`0C029AA6`, 126 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c029aa6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02bb60 (`0C02BB60`, 60 bytes, `src/gen_j.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_j/FUN_0c02bb60.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02bbf4 (`0C02BBF4`, 30 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c02bbf4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02bc24 (`0C02BC24`, 42 bytes, `src/game_e.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_e/FUN_0c02bc24.json`
- 0: to 1
- 1: to 0
- 2: nothing
- -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02c094 (`0C02C094`, 22 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/FUN_0c02c094.json`
- on: 900
- off: 0
- other value

### FUN_0c02c528 (`0C02C528`, 294 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c02c528.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02c6d8 (`0C02C6D8`, 36 bytes, `src/game_k.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_k/FUN_0c02c6d8.json`
- reset
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02d918 (`0C02D918`, 36 bytes, `src/game_a.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_a/FUN_0c02d918.json`
- below: 0
- between: 1
- at upper: 2
- equal lower: 0
- negative values
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02da42 (`0C02DA42`, 30 bytes, `src/game_o.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_o/FUN_0c02da42.json`
- x 5
- negative
- big

### FUN_0c02dc84 (`0C02DC84`, 84 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/FUN_0c02dc84.json`
- blink
- dark
- reset
- x 1
- mode 1 dark
- mode 1 blink

### FUN_0c02dcd8 (`0C02DCD8`, 98 bytes, `src/game_p.c`)
- equivalent on 5 development and 1 holdout cases, in `tests/game_p/FUN_0c02dcd8.json`
- f338 done 7
- f338 not done
- plain done other
- plain running
- 9 early
- 9 late

### FUN_0c02dd3a (`0C02DD3A`, 16 bytes, `src/game_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_a/FUN_0c02dd3a.json`
- bit 3 set
- clear
- other bits
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02dd52 (`0C02DD52`, 4 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c02dd52.json`
- nothing
- nothing again

### FUN_0c02dd5a (`0C02DD5A`, 4 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c02dd5a.json`
- nothing
- nothing again

### FUN_0c02dfbc (`0C02DFBC`, 96 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c02dfbc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02e1ce (`0C02E1CE`, 84 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c02e1ce.json`
- playing
- not yet
- stat 2

### FUN_0c02e282 (`0C02E282`, 72 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c02e282.json`
- 127
- 0
- 64 mode 1
- 300 low byte
- 256

### FUN_0c02e2ca (`0C02E2CA`, 84 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/FUN_0c02e2ca.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02e31e (`0C02E31E`, 78 bytes, `src/gen_o.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_o/FUN_0c02e31e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02e36c (`0C02E36C`, 20 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c02e36c.json`
- values
- others

### FUN_0c02e3c0 (`0C02E3C0`, 106 bytes, `src/game_p.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/game_p/FUN_0c02e3c0.json`
- off
- delay
- fade
- end
- fade neg
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02e42a (`0C02E42A`, 46 bytes, `src/game_o.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_o/FUN_0c02e42a.json`
- v 0
- v 8
- v 200
- v 255
- v 3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02e458 (`0C02E458`, 60 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c02e458.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02e494 (`0C02E494`, 30 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c02e494.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02e4b2 (`0C02E4B2`, 192 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c02e4b2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02e572 (`0C02E572`, 24 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c02e572.json`
- slot 2
- slot 0

### FUN_0c02e58a (`0C02E58A`, 48 bytes, `src/game_f.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_f/FUN_0c02e58a.json`
- stat 3: yes
- stat 1: no
- stat 5: no
- stat 4: yes
- stat -1: no
- stat 2: yes

### FUN_0c02e682 (`0C02E682`, 48 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c02e682.json`
- a
- b

### FUN_0c02e71e (`0C02E71E`, 60 bytes, `src/game_p.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_p/FUN_0c02e71e.json`
- a
- b
- c

### FUN_0c02e75a (`0C02E75A`, 30 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/FUN_0c02e75a.json`
- slot 1, pan 5
- pan -3 (byte)
- slot 0, 0x80 sign

### FUN_0c02e800 (`0C02E800`, 60 bytes, `src/game_f.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_f/FUN_0c02e800.json`
- table
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02e90e (`0C02E90E`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c02e90e.json`
- sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02e940 (`0C02E940`, 164 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c02e940.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02eb86 (`0C02EB86`, 340 bytes, `src/gen_u.c`)
- equivalent on 15 development and 6 holdout cases, in `tests/gen_u/FUN_0c02eb86.json`
- case 0
- case 4
- case 7
- case 10
- case 13
- case 15
- case 16
- case 17
- case 18
- case 22
- case 29
- case 34
- case 35
- case 36
- case 38
- case 39
- case 43
- case 54
- case 56
- case 58
- case 59

### FUN_0c02edd4 (`0C02EDD4`, 44 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c02edd4.json`
- once
- once again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02f02a (`0C02F02A`, 290 bytes, `src/gen_aa.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_aa/FUN_0c02f02a.json`
- case 0
- case 1
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 21
- case 22
- case 23

### FUN_0c02f14c (`0C02F14C`, 22 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c02f14c.json`
- sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c02f220 (`0C02F220`, 74 bytes, `src/game_g.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_g/FUN_0c02f220.json`
- open ok, close first
- open ok, nothing to close
- open fails
- fails after close
- another id

### FUN_0c02f362 (`0C02F362`, 48 bytes, `src/game_g.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_g/FUN_0c02f362.json`
- two models
- none
- one

### FUN_0c02f392 (`0C02F392`, 828 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/FUN_0c02f392.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c02f7e4 (`0C02F7E4`, 76 bytes, `src/game_g.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_g/FUN_0c02f7e4.json`
- three entries
- none
- one

### FUN_0c02f830 (`0C02F830`, 64 bytes, `src/game_g.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_g/FUN_0c02f830.json`
- memory grows on the first try
- grows on the third
- never grows (100 tries)
- unsigned compare

### FUN_0c02f870 (`0C02F870`, 66 bytes, `src/game_g.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_g/FUN_0c02f870.json`
- two entries
- null list: nothing
- none
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03006a (`0C03006A`, 76 bytes, `src/gen_o.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_o/FUN_0c03006a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0300b6 (`0C0300B6`, 26 bytes, `src/game_d.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_d/FUN_0c0300b6.json`
- 1: calls
- 0: nothing
- 2: nothing
- -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03012c (`0C03012C`, 110 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c03012c.json`
- playing
- idle
- off
- playing 0
- none
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03019a (`0C03019A`, 34 bytes, `src/game_d.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_d/FUN_0c03019a.json`
- sequence
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0301bc (`0C0301BC`, 30 bytes, `src/game_b.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_b/FUN_0c0301bc.json`
- sequence
- another

### FUN_0c0302e6 (`0C0302E6`, 680 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/FUN_0c0302e6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c030914 (`0C030914`, 60 bytes, `src/game_g.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_g/FUN_0c030914.json`
- not 5: loads
- 5: nothing
- 4
- -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c030a3e (`0C030A3E`, 66 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c030a3e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c030a80 (`0C030A80`, 62 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c030a80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c030b10 (`0C030B10`, 88 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c030b10.json`
- a
- b

### FUN_0c030b68 (`0C030B68`, 18 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c030b68.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c030b7a (`0C030B7A`, 8 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c030b7a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c030e34 (`0C030E34`, 62 bytes, `src/game_f.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_f/FUN_0c030e34.json`
- three entries
- none
- group 0, one

### FUN_0c030e72 (`0C030E72`, 42 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/FUN_0c030e72.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c030ebc (`0C030EBC`, 80 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/FUN_0c030ebc.json`
- case 0
- case 4
- case 7
- case 8
- case 10
- case 15
- case 16
- case 20
- case 23
- case 24
- case 25
- case 28
- case 29
- case 35
- case 36
- case 42
- case 44
- case 49
- case 51
- case 53
- case 54
- case 57

### FUN_0c03101a (`0C03101A`, 16 bytes, `src/game_m.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_m/FUN_0c03101a.json`
- x 2
- negative
- zero

### FUN_0c031036 (`0C031036`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c031036.json`
- four and word
- others

### FUN_0c031048 (`0C031048`, 20 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c031048.json`
- zeros
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0310a0 (`0C0310A0`, 14 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/FUN_0c0310a0.json`
- reset
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0310ae (`0C0310AE`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/FUN_0c0310ae.json`
- append
- another

### FUN_0c0310c0 (`0C0310C0`, 30 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/FUN_0c0310c0.json`
- string
- empty
- one char

### FUN_0c031408 (`0C031408`, 28 bytes, `src/game_a.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_a/FUN_0c031408.json`
- on
- off
- on over ones
- off over zero

### FUN_0c031480 (`0C031480`, 18 bytes, `src/game_b.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_b/FUN_0c031480.json`
- sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c031492 (`0C031492`, 84 bytes, `src/game_j.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/game_j/FUN_0c031492.json`
- m 0 count 6 s 1 g 0
- m 0 count 3 s 4 g 0
- m 0 count 0 s 0 g 0
- m 3 count 1 s 1 g 0
- m 2 count 3 s 1 g 0
- m 1 count 2 s 1 g 0
- m 0 count 5 s 2 g 2
- m 3 count 5 s 1 g 0
- m 2 count 2 s 4 g 0
- m -1 count 2 s 1 g 0
- m 3 count 0 s 0 g 0

### FUN_0c031934 (`0C031934`, 126 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c031934.json`
- cm0
- cm1
- cm2
- cm3
- cm2 b

### FUN_0c031c5a (`0C031C5A`, 264 bytes, `src/collide.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/collide/FUN_0c031c5a.json`
- zero
- null cell
- one cell stop
- two cells
- far entries
- ten cells
- hit 8

### FUN_0c032080 (`0C032080`, 196 bytes, `src/collide.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/collide/FUN_0c032080.json`
- inside
- far
- outside x
- outside z
- kind3 inside
- slope
- outside neg
- kind3 outside
- edge
- rev winding

### FUN_0c0321c2 (`0C0321C2`, 178 bytes, `src/game_p.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/game_p/FUN_0c0321c2.json`
- mid
- left
- below
- eq x
- eq z
- right
- above
- edge cross
- edge on
- edge right
- b below

### FUN_0c0357b0 (`0C0357B0`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c0357b0.json`
- sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c036256 (`0C036256`, 48 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c036256.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0364b8 (`0C0364B8`, 50 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0364b8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c037534 (`0C037534`, 104 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c037534.json`
- case 0
- case 1
- case 3
- case 4
- case 6
- case 11
- case 14
- case 15
- case 17
- case 18
- case 19
- case 22
- case 25
- case 29
- case 34
- case 36
- case 37
- case 41
- case 45
- case 48
- case 51
- case 52

### FUN_0c0376b0 (`0C0376B0`, 80 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c0376b0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c038ed0 (`0C038ED0`, 22 bytes, `src/game_b.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_b/FUN_0c038ed0.json`
- clears 70 words
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c038ee6 (`0C038EE6`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c038ee6.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c038eec (`0C038EEC`, 12 bytes, `src/game_c.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_c/FUN_0c038eec.json`
- index 3
- index 0

### FUN_0c038f78 (`0C038F78`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c038f78.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c038f80 (`0C038F80`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c038f80.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0391fc (`0C0391FC`, 60 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c0391fc.json`
- a
- b

### FUN_0c039280 (`0C039280`, 24 bytes, `src/game_b.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_b/FUN_0c039280.json`
- two calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03932e (`0C03932E`, 16 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/FUN_0c03932e.json`
- not 2: set 1
- 2: kept
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03933e (`0C03933E`, 16 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/FUN_0c03933e.json`
- positive: -1
- zero: kept
- negative: kept
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03934e (`0C03934E`, 42 bytes, `src/game_p.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_p/FUN_0c03934e.json`
- inside
- above
- below
- above no flag
- zero
- one

### FUN_0c039540 (`0C039540`, 32 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c039540.json`
- on
- off
- minus
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c039560 (`0C039560`, 62 bytes, `src/game_p.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/game_p/FUN_0c039560.json`
- zero
- minus
- one
- two
- five
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c039680 (`0C039680`, 92 bytes, `src/game_p.c`)
- equivalent on 7 development and 6 holdout cases, in `tests/game_p/FUN_0c039680.json`
- 0
- 25
- 26
- 35
- 36
- 39
- 41
- -5
- 37
- 38
- 40
- 42
- 100

### FUN_0c0396dc (`0C0396DC`, 112 bytes, `src/game_p.c`)
- equivalent on 7 development and 7 holdout cases, in `tests/game_p/FUN_0c0396dc.json`
- 48
- 57
- 65
- 90
- 46
- 38
- 33
- 63
- 64
- 42
- 47
- 91
- 321
- 255

### FUN_0c03974c (`0C03974C`, 156 bytes, `src/game_p.c`)
- equivalent on 6 development and 5 holdout cases, in `tests/game_p/FUN_0c03974c.json`
- SEX
- XX 
- ABC
- X  
-    
-    
- b'XXX'
- b'   '
- b'SEA'
- b'X\x00X'
- b'SEY'

### FUN_0c03a3e0 (`0C03A3E0`, 60 bytes, `src/gen_h.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_h/FUN_0c03a3e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03a640 (`0C03A640`, 8 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c03a640.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03a704 (`0C03A704`, 64 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c03a704.json`
- a
- b

### FUN_0c03ac62 (`0C03AC62`, 20 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/FUN_0c03ac62.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03ace8 (`0C03ACE8`, 32 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/FUN_0c03ace8.json`
- equal: 0
- different: 1
- different, negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03b158 (`0C03B158`, 58 bytes, `src/game_o.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_o/FUN_0c03b158.json`
- init
- another

### FUN_0c03b544 (`0C03B544`, 152 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c03b544.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c03b674 (`0C03B674`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c03b674.json`
- fill ff
- fill 00
- fill a5

### FUN_0c03bf42 (`0C03BF42`, 52 bytes, `src/game_i.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_i/FUN_0c03bf42.json`
- bit 1 clear: 0
- bit 1 set: counts down
- reaches zero: flag
- wraps to m
- wraps to m = 0

### FUN_0c03bf76 (`0C03BF76`, 108 bytes, `src/game_l.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/game_l/FUN_0c03bf76.json`
- bit 3 clear: 0
- counting
- reaches 0, bit 0 set: calls
- reaches 0, flag set: calls
- reaches 0, neither: no call
- wraps to m
- wraps to m = 0: starts closing
- negative p

### FUN_0c03c10e (`0C03C10E`, 58 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c03c10e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03d594 (`0C03D594`, 228 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c03d594.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c03d678 (`0C03D678`, 74 bytes, `src/game_h.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_h/FUN_0c03d678.json`
- m 1, loaded ok: written back
- m 1, load fails
- m 0
- m 5, value 0x1FF to a byte

### FUN_0c03d9b4 (`0C03D9B4`, 78 bytes, `src/game_h.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_h/FUN_0c03d9b4.json`
- m 1, loaded: set
- m 1, fails
- m 0
- m 2, loaded

### FUN_0c03dc82 (`0C03DC82`, 424 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c03dc82.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c03df1a (`0C03DF1A`, 84 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c03df1a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03dfc8 (`0C03DFC8`, 50 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c03dfc8.json`
- request
- count
- ends
- count 2
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03dffa (`0C03DFFA`, 48 bytes, `src/gen_o.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_o/FUN_0c03dffa.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03f216 (`0C03F216`, 406 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c03f216.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c03f3ac (`0C03F3AC`, 70 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c03f3ac.json`
- bit 2
- bit 4
- none
- flag off
- both
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c03f912 (`0C03F912`, 92 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c03f912.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c03f96e (`0C03F96E`, 588 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c03f96e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0409a6 (`0C0409A6`, 44 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c0409a6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c040a50 (`0C040A50`, 176 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c040a50.json`
- reverse
- from 1
- from 3
- from 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c040b00 (`0C040B00`, 84 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c040b00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c040b54 (`0C040B54`, 68 bytes, `src/game_p.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_p/FUN_0c040b54.json`
- arm
- keep, off
- keep, on
- mode 3

### FUN_0c040b98 (`0C040B98`, 116 bytes, `src/game_p.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/game_p/FUN_0c040b98.json`
- k0 arm
- k1 noflag
- k1 ok
- k1 bad
- k0 flag

### FUN_0c040de6 (`0C040DE6`, 54 bytes, `src/game_i.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_i/FUN_0c040de6.json`
- state 3, other drive, ready
- state 3, other drive, not ready
- state 3, same drive
- state 2
- ready returns 2

### FUN_0c040e1c (`0C040E1C`, 170 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c040e1c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### FUN_0c041016 (`0C041016`, 18 bytes, `src/game_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_b/FUN_0c041016.json`
- m 0, lang 3
- m 1, lang 3
- m 1, lang 0
- m 0, lang 0
- m 5, lang -1

### FUN_0c041c14 (`0C041C14`, 160 bytes, `src/game_p.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_p/FUN_0c041c14.json`
- idle note
- open
- cancel
- run
- pending 0
- idle quiet
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c041ce2 (`0C041CE2`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c041ce2.json`
- fill ff
- fill 00
- fill a5

### FUN_0c041ce8 (`0C041CE8`, 32 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c041ce8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c041d68 (`0C041D68`, 184 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c041d68.json`
- a
- b

### FUN_0c043524 (`0C043524`, 58 bytes, `src/game_e.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/game_e/FUN_0c043524.json`
- bit 5 set: up
- bit 4 set: down
- both: same
- none
- down from 0: wraps to 21
- up from 21: wraps to 0
- negative input

### FUN_0c043b68 (`0C043B68`, 192 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c043b68.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c044b80 (`0C044B80`, 204 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c044b80.json`
- case 0
- case 4
- case 8
- case 10
- case 13
- case 15
- case 17
- case 18
- case 19
- case 24
- case 25
- case 27
- case 31
- case 32
- case 33
- case 37
- case 38
- case 42
- case 43
- case 50
- case 52
- case 54

### FUN_0c04a38a (`0C04A38A`, 72 bytes, `src/game_h.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_h/FUN_0c04a38a.json`
- small difference
- big, b above a
- big, b below a
- exactly half
- half + 1
- c = 1
- negative values

### FUN_0c04a4d6 (`0C04A4D6`, 84 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c04a4d6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c04bb70 (`0C04BB70`, 66 bytes, `src/game_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_j/FUN_0c04bb70.json`
- course 0
- course 1
- m 5, course 0
- m 0, course 3

### FUN_0c04bef4 (`0C04BEF4`, 32 bytes, `src/game_b.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_b/FUN_0c04bef4.json`
- >= 4
- < 4
- negative
- big
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c04bf14 (`0C04BF14`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c04bf14.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c04bf1a (`0C04BF1A`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c04bf1a.json`
- fill ff
- fill 00
- fill a5

### FUN_0c04c0dc (`0C04C0DC`, 40 bytes, `src/game_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_c/FUN_0c04c0dc.json`
- three courses
- none
- one

### FUN_0c04d1ac (`0C04D1AC`, 24 bytes, `src/game_b.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_b/FUN_0c04d1ac.json`
- course 3
- course 0

### FUN_0c04d30a (`0C04D30A`, 38 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c04d30a.json`
- a
- b

### FUN_0c04d3ee (`0C04D3EE`, 56 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c04d3ee.json`
- a
- origin
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c04e194 (`0C04E194`, 136 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c04e194.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c04eb4a (`0C04EB4A`, 98 bytes, `src/game_p.c`)
- equivalent on 1 development and 5 holdout cases, in `tests/game_p/FUN_0c04eb4a.json`
- range
- empty
- one
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c04f1b0 (`0C04F1B0`, 56 bytes, `src/game_n.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_n/FUN_0c04f1b0.json`
- init
- negative

### FUN_0c0500d8 (`0C0500D8`, 94 bytes, `src/game_p.c`)
- equivalent on 11 development and 13 holdout cases, in `tests/game_p/FUN_0c0500d8.json`
- 486
- 490
- 491
- 503
- 630
- 639
- 700
- 735
- 787
- 590
- 752
- 485
- 501
- 505
- 629
- 640
- 732
- 737
- 785
- 789
- 591
- 687
- 0
- -1

### FUN_0c0504bc (`0C0504BC`, 72 bytes, `src/game_o.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_o/FUN_0c0504bc.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c050542 (`0C050542`, 276 bytes, `src/gen_v.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_v/FUN_0c050542.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c050716 (`0C050716`, 60 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c050716.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c050b4c (`0C050B4C`, 110 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c050b4c.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c050bbe (`0C050BBE`, 76 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c050bbe.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c050c0a (`0C050C0A`, 92 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c050c0a.json`
- base 1
- base 250
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c050f80 (`0C050F80`, 108 bytes, `src/game_p.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_p/FUN_0c050f80.json`
- timer
- late
- done
- neg

### FUN_0c050fec (`0C050FEC`, 76 bytes, `src/game_p.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_p/FUN_0c050fec.json`
- 0
- 1
- 2
- 3
- negative
- big
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0511a4 (`0C0511A4`, 264 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0511a4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0512ac (`0C0512AC`, 94 bytes, `src/game_j.c`)
- equivalent on 8 development and 11 holdout cases, in `tests/game_j/FUN_0c0512ac.json`
- state 0 sw 10000 0
- state 0 sw 30000 4
- state 0 sw 0 4
- state 0 sw 10000 4
- state 1 sw 10000 0
- state 1 sw 30000 4
- state 1 sw 0 4
- state 1 sw 10000 4
- state 2 sw 10000 0
- state 2 sw 30000 4
- state 2 sw 0 4
- state 2 sw 10000 4
- state 3 sw 10000 0
- state 3 sw 30000 4
- state 3 sw 0 4
- state 3 sw 10000 4
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05130a (`0C05130A`, 114 bytes, `src/game_p.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_p/FUN_0c05130a.json`
- same
- m0
- m1
- m2
- m3
- m1 b
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05153e (`0C05153E`, 24 bytes, `src/sdk_s.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_s/FUN_0c05153e.json`
- state 0: both
- state 1: one
- state -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051556 (`0C051556`, 96 bytes, `src/game_j.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/game_j/FUN_0c051556.json`
- not state 1
- counter above limit, index 0
- counter below: increments
- index 2: 3
- index 1: 8
- equal counter: increments
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051746 (`0C051746`, 308 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c051746.json`
- case 0
- case 4
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 15
- case 20
- case 24
- case 25
- case 26
- case 27
- case 28
- case 29
- case 30
- case 31
- case 33
- case 34
- case 35
- case 36

### FUN_0c051992 (`0C051992`, 76 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c051992.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0519de (`0C0519DE`, 92 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c0519de.json`
- base 1
- base 250
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051a3a (`0C051A3A`, 110 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c051a3a.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051aa8 (`0C051AA8`, 58 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c051aa8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c051bc0 (`0C051BC0`, 22 bytes, `src/game_b.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_b/FUN_0c051bc0.json`
- five calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051bd6 (`0C051BD6`, 76 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c051bd6.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051c22 (`0C051C22`, 64 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c051c22.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051c62 (`0C051C62`, 72 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c051c62.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c051caa (`0C051CAA`, 64 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c051caa.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051cea (`0C051CEA`, 56 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c051cea.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051d22 (`0C051D22`, 22 bytes, `src/game_b.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_b/FUN_0c051d22.json`
- five calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051d38 (`0C051D38`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c051d38.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c051d44 (`0C051D44`, 174 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c051d44.json`
- case 0
- case 4
- case 7
- case 8
- case 13
- case 14
- case 17
- case 20
- case 21
- case 26
- case 27
- case 28
- case 29
- case 31
- case 32
- case 33
- case 34
- case 36
- case 37
- case 40
- case 41
- case 44

### FUN_0c051e4c (`0C051E4C`, 158 bytes, `src/game_p.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_p/FUN_0c051e4c.json`
- pick 0
- pick 2
- pick 3
- none

### FUN_0c052138 (`0C052138`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c052138.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c052268 (`0C052268`, 156 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c052268.json`
- a
- b

### FUN_0c052574 (`0C052574`, 64 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c052574.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0525b4 (`0C0525B4`, 72 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c0525b4.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0525fc (`0C0525FC`, 96 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c0525fc.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0526a0 (`0C0526A0`, 156 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c0526a0.json`
- a
- b

### FUN_0c05273c (`0C05273C`, 92 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c05273c.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0527ec (`0C0527EC`, 166 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0527ec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0528c8 (`0C0528C8`, 246 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0528c8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c052a1c (`0C052A1C`, 642 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c052a1c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c052c9e (`0C052C9E`, 84 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c052c9e.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c052d28 (`0C052D28`, 86 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c052d28.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c052d7e (`0C052D7E`, 106 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c052d7e.json`
- init
- init 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05308c (`0C05308C`, 20 bytes, `src/game_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_b/FUN_0c05308c.json`
- b 0: bit set
- b 1: kept
- b 0 with other bits

### FUN_0c0530a0 (`0C0530A0`, 18 bytes, `src/game_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_b/FUN_0c0530a0.json`
- 0: bit clear
- 1: kept
- 0 already clear

### FUN_0c053100 (`0C053100`, 50 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c053100.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05317e (`0C05317E`, 12 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c05317e.json`
- all set: bit cleared
- only the bit
- already clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05318a (`0C05318A`, 64 bytes, `src/game_f.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_f/FUN_0c05318a.json`
- init
- another

### FUN_0c05322c (`0C05322C`, 10 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c05322c.json`
- two
- other

### FUN_0c053236 (`0C053236`, 10 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c053236.json`
- two
- other

### FUN_0c053240 (`0C053240`, 14 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c053240.json`
- three
- other

### FUN_0c05324e (`0C05324E`, 60 bytes, `src/game_p.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_p/FUN_0c05324e.json`
- mid
- end
- zero
- big
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05328a (`0C05328A`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05328a.json`
- sets 1
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c053292 (`0C053292`, 18 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c053292.json`
- sets bit, clears word
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0532a4 (`0C0532A4`, 12 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c0532a4.json`
- all set: bit cleared
- only the bit
- already clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0532de (`0C0532DE`, 12 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c0532de.json`
- all set: bit cleared
- only the bit
- already clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0532ea (`0C0532EA`, 66 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c0532ea.json`
- game 0
- game 2
- game 1

### FUN_0c05332c (`0C05332C`, 12 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c05332c.json`
- all set: bit cleared
- only the bit
- already clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0533ba (`0C0533BA`, 44 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c0533ba.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0533e6 (`0C0533E6`, 12 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c0533e6.json`
- all set: bit cleared
- only the bit
- already clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0534ec (`0C0534EC`, 114 bytes, `src/gen_j.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_j/FUN_0c0534ec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05355e (`0C05355E`, 70 bytes, `src/game_h.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_h/FUN_0c05355e.json`
- run
- Game_No 2: nothing
- NoArrow set: nothing
- Game_No 1
- Game_No -1, arrow
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0535fc (`0C0535FC`, 70 bytes, `src/game_h.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_h/FUN_0c0535fc.json`
- run
- Game_No 2: nothing
- NoArrow set: nothing
- Game_No 1
- Game_No -1, arrow
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05364e (`0C05364E`, 40 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c05364e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c053ac0 (`0C053AC0`, 38 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c053ac0.json`
- game 2
- menu
- no menu
- game 1 menu
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c053b44 (`0C053B44`, 50 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c053b44.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05423a (`0C05423A`, 416 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c05423a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0543fc (`0C0543FC`, 86 bytes, `src/gen_i.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_i/FUN_0c0543fc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c054452 (`0C054452`, 58 bytes, `src/game_e.c`)
- equivalent on 2 development and 6 holdout cases, in `tests/game_e/FUN_0c054452.json`
- amount 100: 60 moved
- amount 25: all moved
- amount 60
- amount 0: nothing
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0544a8 (`0C0544A8`, 260 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0544a8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### FUN_0c05473e (`0C05473E`, 72 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c05473e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c054a38 (`0C054A38`, 102 bytes, `src/game_p.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_p/FUN_0c054a38.json`
- off
- on
- neg
- 2
- zero
- big
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0551c6 (`0C0551C6`, 234 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0551c6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0552b0 (`0C0552B0`, 30 bytes, `src/game_c.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_c/FUN_0c0552b0.json`
- below 8: three calls
- 8: nothing
- negative
- 9
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c055310 (`0C055310`, 82 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c055310.json`
- all set
- one clear
- state 1
- state 5 last clear
- state 6
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0558a2 (`0C0558A2`, 98 bytes, `src/game_p.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/game_p/FUN_0c0558a2.json`
- lv 1
- lv -1 end
- lv 3
- lv -2
- lv 2
- lv 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c055aca (`0C055ACA`, 78 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c055aca.json`
- big
- small
- off
- mid
- other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c055b38 (`0C055B38`, 180 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/FUN_0c055b38.json`
- state0
- state1
- state2 wait
- state2 done
- state2 done 99
- state3 to 4
- state3 wait
- state4 done
- state4 run
- state6

### FUN_0c055cf4 (`0C055CF4`, 36 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c055cf4.json`
- both set
- one clear
- other clear
- none
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0563f8 (`0C0563F8`, 18 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c0563f8.json`
- init
- another

### FUN_0c056e80 (`0C056E80`, 88 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c056e80.json`
- start
- third
- done
- mid
- third 59
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c056ff8 (`0C056FF8`, 136 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c056ff8.json`
- 0
- 2
- 3
- live RAM (arcade)
- live RAM (box)
- live RAM (Total Records screen)

### FUN_0c057080 (`0C057080`, 92 bytes, `src/game_p.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_p/FUN_0c057080.json`
- 3
- 0
- neg
- 1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0572de (`0C0572DE`, 96 bytes, `src/game_p.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/game_p/FUN_0c0572de.json`
- shown
- hidden
- alt
- wrap
- edge
- edge 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057388 (`0C057388`, 148 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/FUN_0c057388.json`
- first 3 sprites
- one sprite
- skip window
- at 105
- hide
- wrap 61
- at 105 skip
- hide late
- live live
- live records

### FUN_0c05741c (`0C05741C`, 96 bytes, `src/game_p.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/game_p/FUN_0c05741c.json`
- shown
- hidden
- alt
- wrap
- edge
- edge 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05765c (`0C05765C`, 204 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c05765c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c057728 (`0C057728`, 98 bytes, `src/gen_ae.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ae/FUN_0c057728.json`
- case 0
- case 3
- case 5
- case 8
- case 9
- case 10
- case 11
- case 14
- case 15
- case 16
- case 17
- case 22
- case 23
- case 25
- case 28
- case 32
- case 33
- case 34
- case 37
- case 38
- case 39
- case 40

### FUN_0c05778a (`0C05778A`, 14 bytes, `src/gen_f.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_f/FUN_0c05778a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0577dc (`0C0577DC`, 18 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c0577dc.json`
- four calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057930 (`0C057930`, 80 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c057930.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057980 (`0C057980`, 64 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c057980.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0579c0 (`0C0579C0`, 132 bytes, `src/game_p.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_p/FUN_0c0579c0.json`
- run
- live
- records

### FUN_0c057aac (`0C057AAC`, 176 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c057aac.json`
- ones
- zeros

### FUN_0c057b5c (`0C057B5C`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c057b5c.json`
- sets 8
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057b64 (`0C057B64`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c057b64.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057bdc (`0C057BDC`, 96 bytes, `src/game_p.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_p/FUN_0c057bdc.json`
- k 0
- k -1
- k 3
- k 0 2

### FUN_0c057c3c (`0C057C3C`, 32 bytes, `src/game_d.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_d/FUN_0c057c3c.json`
- sets
- bit 0 only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057e9e (`0C057E9E`, 68 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c057e9e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c057fe2 (`0C057FE2`, 54 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c057fe2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c058828 (`0C058828`, 242 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c058828.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05891a (`0C05891A`, 18 bytes, `src/game_m.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_m/FUN_0c05891a.json`
- state 1: zero
- state 0: kept
- state 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c058968 (`0C058968`, 80 bytes, `src/game_p.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/game_p/FUN_0c058968.json`
- kind 1
- kind 3 none
- kind 3 last
- kind 5 own
- kind 9
- kind 6 earlier set
- kind 7
- kind -1

### FUN_0c058f08 (`0C058F08`, 48 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c058f08.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c058f38 (`0C058F38`, 94 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c058f38.json`
- base 1
- base 250

### FUN_0c058ff0 (`0C058FF0`, 194 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c058ff0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0591ea (`0C0591EA`, 72 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c0591ea.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c059254 (`0C059254`, 188 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c059254.json`
- case 0
- case 4
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 17
- case 22
- case 24
- case 25
- case 26
- case 27
- case 28
- case 30
- case 31
- case 32
- case 35
- case 37

### FUN_0c059450 (`0C059450`, 54 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/FUN_0c059450.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c059514 (`0C059514`, 160 bytes, `src/game_p.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/game_p/FUN_0c059514.json`
- past
- no button
- done flag
- before
- mid
- at start
- post start
- just under

### FUN_0c0595e8 (`0C0595E8`, 152 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c0595e8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0596ac (`0C0596AC`, 336 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c0596ac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0597fc (`0C0597FC`, 106 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c0597fc.json`
- 3 hud
- -1
- 1 no hud
- 2 hud
- 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05999c (`0C05999C`, 94 bytes, `src/gen_r.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_r/FUN_0c05999c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0599fa (`0C0599FA`, 94 bytes, `src/gen_r.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_r/FUN_0c0599fa.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c059eb0 (`0C059EB0`, 124 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c059eb0.json`
- shown
- not yet
- shown 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05a350 (`0C05A350`, 94 bytes, `src/game_p.c`)
- equivalent on 5 development and 3 holdout cases, in `tests/game_p/FUN_0c05a350.json`
- entry clear
- k 1
- k 3 none
- k 4 later
- k 8
- k 7 set
- k 5 none
- k 9

### FUN_0c05a3ae (`0C05A3AE`, 142 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c05a3ae.json`
- 3 shown
- none
- all
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05a460 (`0C05A460`, 330 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c05a460.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05a742 (`0C05A742`, 90 bytes, `src/gen_g.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_g/FUN_0c05a742.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05ab80 (`0C05AB80`, 142 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c05ab80.json`
- 2 shown
- none
- all
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05ac4c (`0C05AC4C`, 124 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/FUN_0c05ac4c.json`
- shown
- not yet
- shown 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05aefc (`0C05AEFC`, 112 bytes, `src/game_p.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/game_p/FUN_0c05aefc.json`
- wobble
- stop
- small
- off
- no stop
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05af6c (`0C05AF6C`, 26 bytes, `src/game_m.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_m/FUN_0c05af6c.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05af86 (`0C05AF86`, 8 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c05af86.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05af8e (`0C05AF8E`, 76 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c05af8e.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05b044 (`0C05B044`, 92 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c05b044.json`
- base 1
- base 250
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05b0a0 (`0C05B0A0`, 124 bytes, `src/gen_h.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_h/FUN_0c05b0a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05b7a8 (`0C05B7A8`, 72 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c05b7a8.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05b7f0 (`0C05B7F0`, 154 bytes, `src/game_p.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_p/FUN_0c05b7f0.json`
- k4
- k2
- k1
- k3
- k0
- k5

### FUN_0c05b88a (`0C05B88A`, 78 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c05b88a.json`
- mg 3
- mg 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05baf4 (`0C05BAF4`, 30 bytes, `src/game_o.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_o/FUN_0c05baf4.json`
- value 3.7
- negative
- big
- tiny

### FUN_0c05bb12 (`0C05BB12`, 18 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05bb12.json`
- sets
- bit 2 only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05bb24 (`0C05BB24`, 64 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c05bb24.json`
- go timer
- go no timer
- done
- other
- negative timer
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05bb64 (`0C05BB64`, 18 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05bb64.json`
- sets
- bit 4 only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05bb76 (`0C05BB76`, 72 bytes, `src/game_i.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_i/FUN_0c05bb76.json`
- both clear: starts
- first set
- second set
- both clear, no sound
- negative sound

### FUN_0c05c2d4 (`0C05C2D4`, 48 bytes, `src/game_i.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_i/FUN_0c05c2d4.json`
- t 0: starts
- t 100
- t 209: reaches 210
- t 300
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05c3fe (`0C05C3FE`, 72 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c05c3fe.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05c72e (`0C05C72E`, 126 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c05c72e.json`
- timeout
- goal near
- done
- near only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05c7ac (`0C05C7AC`, 68 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c05c7ac.json`
- done
- nothing yet
- starts
- blocked
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05ca3e (`0C05CA3E`, 276 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c05ca3e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05cb52 (`0C05CB52`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c05cb52.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05cb80 (`0C05CB80`, 564 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c05cb80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05cdb4 (`0C05CDB4`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05cdb4.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05cde4 (`0C05CDE4`, 84 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c05cde4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05ce38 (`0C05CE38`, 8 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05ce38.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d076 (`0C05D076`, 138 bytes, `src/game_p.c`)
- equivalent on 7 development and 5 holdout cases, in `tests/game_p/FUN_0c05d076.json`
- flag set
- clear
- drop+clear
- mg6 low
- mg6 high
- mg5 zero
- mg5 pos
- mg3
- mg6 20
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1)
- live RAM (Total Records screen)

### FUN_0c05d492 (`0C05D492`, 18 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05d492.json`
- sets
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d4fc (`0C05D4FC`, 90 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c05d4fc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d662 (`0C05D662`, 64 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c05d662.json`
- drop, more left
- drop, last
- no drop
- none left
- drop 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d6e0 (`0C05D6E0`, 40 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c05d6e0.json`
- entry 3
- none
- game 14
- entry 5 game 14
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d708 (`0C05D708`, 290 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/FUN_0c05d708.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05d82a (`0C05D82A`, 40 bytes, `src/gen_l.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_l/FUN_0c05d82a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05d852 (`0C05D852`, 16 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05d852.json`
- copies
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05da9c (`0C05DA9C`, 198 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c05da9c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c05db72 (`0C05DB72`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c05db72.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05df48 (`0C05DF48`, 22 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/FUN_0c05df48.json`
- sets
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05df5e (`0C05DF5E`, 12 bytes, `src/game_d.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_d/FUN_0c05df5e.json`
- all set
- only the bit
- clear
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05e2fa (`0C05E2FA`, 78 bytes, `src/game_p.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/game_p/FUN_0c05e2fa.json`
- big
- small
- off
- mid
- other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05e8c8 (`0C05E8C8`, 102 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c05e8c8.json`
- reset
- reset 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05ead0 (`0C05EAD0`, 130 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c05ead0.json`
- k2
- k25

### FUN_0c05ef68 (`0C05EF68`, 82 bytes, `src/game_i.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_i/FUN_0c05ef68.json`
- 43=2, 44=5: set flag
- 43=2, 44=3: 0
- 43=1, 44=2, bit set: clear flag
- 43=1, 44=2, bit clear
- 43=1, 44=1
- 43=3, 44=5 (not 2)

### FUN_0c05f482 (`0C05F482`, 22 bytes, `src/game_d.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_d/FUN_0c05f482.json`
- port 1
- port 3

### FUN_0c05f93c (`0C05F93C`, 38 bytes, `src/game_d.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_d/FUN_0c05f93c.json`
- ten calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c05fa48 (`0C05FA48`, 114 bytes, `src/game_p.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_p/FUN_0c05fa48.json`
- k 0
- k 7
- k 12
- k 4
- k 9
- k -3

### FUN_0c05fcc6 (`0C05FCC6`, 78 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c05fcc6.json`
- near
- far
- big index

### FUN_0c05fd70 (`0C05FD70`, 32 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/FUN_0c05fd70.json`
- voice 2
- voice 0

### FUN_0c05ff66 (`0C05FF66`, 450 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/FUN_0c05ff66.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c060160 (`0C060160`, 144 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/FUN_0c060160.json`
- state3
- s2 3
- ease
- grow below
- grow cut
- state0 ease
- state4 grow
- state2 grow over
- live live
- live records

### FUN_0c060334 (`0C060334`, 98 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/FUN_0c060334.json`
- under 14
- under sys
- under none
- above sys
- above
- subway
- edge
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0603a2 (`0C0603A2`, 86 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/FUN_0c0603a2.json`
- no ground
- subway
- subway area 21
- above
- below
- area 0
- kind 16 above
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c060428 (`0C060428`, 52 bytes, `src/game_f.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_f/FUN_0c060428.json`
- clears and sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c06047c (`0C06047C`, 8 bytes, `src/game_d.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_d/FUN_0c06047c.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c06048c (`0C06048C`, 10 bytes, `src/game_d.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_d/FUN_0c06048c.json`
- sets bit 0
- keeps others
- already set
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c060586 (`0C060586`, 136 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/FUN_0c060586.json`
- port0
- port1 pressed flag
- port2 pressed no flag
- port1 not pressed
- port5
- port 14 flag

### FUN_0c060616 (`0C060616`, 28 bytes, `src/game_d.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_d/FUN_0c060616.json`
- m 1: clear bit 2
- m 0: clear bit 1
- m 7
- m 0 on zero

### FUN_0c060660 (`0C060660`, 50 bytes, `src/game_f.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_f/FUN_0c060660.json`
- block 12288 bytes
- pattern
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c060692 (`0C060692`, 62 bytes, `src/game_p.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_p/FUN_0c060692.json`
- p 1
- p 7
- p 13
- p 0
- p 11
- p 20

### FUN_0c0606e2 (`0C0606E2`, 94 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0606e2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0608ac (`0C0608AC`, 50 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c0608ac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0608de (`0C0608DE`, 64 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c0608de.json`
- a
- b

### FUN_0c060934 (`0C060934`, 228 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/FUN_0c060934.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c060a5c (`0C060A5C`, 146 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c060a5c.json`
- pad
- no pad
- pad no flag

### FUN_0c060aee (`0C060AEE`, 92 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c060aee.json`
- flag
- no flag
- flag 2

### FUN_0c060b84 (`0C060B84`, 112 bytes, `src/game_p.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_p/FUN_0c060b84.json`
- k 0
- k 6
- k 3
- k 1

### FUN_0c060da6 (`0C060DA6`, 22 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c060da6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c062ff4 (`0C062FF4`, 64 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c062ff4.json`
- 1
- 2

### FUN_0c0630a2 (`0C0630A2`, 48 bytes, `src/game_p.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_p/FUN_0c0630a2.json`
- same
- new id
- new value
- both

### FUN_0c0631c6 (`0C0631C6`, 56 bytes, `src/game_n.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/game_n/FUN_0c0631c6.json`
- speed 0
- speed 1717
- speed 3434
- speed -100
- speed 6000
- speed -32768
- speed 32767
- speed -1
- speed 200
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c063292 (`0C063292`, 60 bytes, `src/gen_k.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_k/FUN_0c063292.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c063ad0 (`0C063AD0`, 40 bytes, `src/game_n.c`)
- equivalent on 4 development and 8 holdout cases, in `tests/game_n/FUN_0c063ad0.json`
- x 5.0
- x 10.0
- x 20.0
- x -3.0
- x 0.0
- x 10.5
- x -0.0
- x 1e+30
- x 0.001
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c063dc6 (`0C063DC6`, 104 bytes, `src/gen_o.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_o/FUN_0c063dc6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c064420 (`0C064420`, 152 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/FUN_0c064420.json`
- advance both
- none
- wrap
- one
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c066bf0 (`0C066BF0`, 164 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c066bf0.json`
- a
- b

### FUN_0c067a28 (`0C067A28`, 22 bytes, `src/game_d.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_d/FUN_0c067a28.json`
- two calls
- another

### FUN_0c06b028 (`0C06B028`, 74 bytes, `src/game_p.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_p/FUN_0c06b028.json`
- 45
- 90
- 0

### FUN_0c06b0ce (`0C06B0CE`, 32 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c06b0ce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c06b0ee (`0C06B0EE`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/FUN_0c06b0ee.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c070bf8 (`0C070BF8`, 100 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c070bf8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c070c64 (`0C070C64`, 108 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c070c64.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c070e8a (`0C070E8A`, 84 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c070e8a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c070ede (`0C070EDE`, 38 bytes, `src/sdk_w.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_w/FUN_0c070ede.json`
- found at 2
- not found
- first
- last

### FUN_0c071258 (`0C071258`, 104 bytes, `src/gen_o.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_o/FUN_0c071258.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0714f2 (`0C0714F2`, 108 bytes, `src/gen_c.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_c/FUN_0c0714f2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c071d34 (`0C071D34`, 100 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c071d34.json`
- case 3
- case 4
- case 6
- case 7
- case 8
- case 10
- case 11
- case 12
- case 13
- case 14
- case 16
- case 18
- case 19
- case 20
- case 21
- case 22
- case 24
- case 25
- case 26
- case 28
- case 30
- case 31

### FUN_0c071d98 (`0C071D98`, 32 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c071d98.json`
- event
- null
- event 2

### FUN_0c071db8 (`0C071DB8`, 88 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c071db8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c072348 (`0C072348`, 172 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c072348.json`
- k0
- k1 wrap
- k2

### FUN_0c072502 (`0C072502`, 10 bytes, `src/game_m.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_m/FUN_0c072502.json`
- x 1.5
- x -2
- zero
- big

### FUN_0c07250c (`0C07250C`, 40 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c07250c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c072884 (`0C072884`, 68 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c072884.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c0728c8 (`0C0728C8`, 68 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c0728c8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c072dd4 (`0C072DD4`, 98 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c072dd4.json`
- reset
- reset 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c072e36 (`0C072E36`, 28 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_s/FUN_0c072e36.json`
- four calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c072e52 (`0C072E52`, 62 bytes, `src/game_p.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_p/FUN_0c072e52.json`
- mode 1 all
- mode 0
- mode 1 none
- mode 2 ch0 free
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c072e90 (`0C072E90`, 136 bytes, `src/game_p.c`)
- equivalent on 5 development and 1 holdout cases, in `tests/game_p/FUN_0c072e90.json`
- start
- wait
- playing short
- playing long
- next
- last

### FUN_0c072fe8 (`0C072FE8`, 104 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/FUN_0c072fe8.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c07387c (`0C07387C`, 50 bytes, `src/gen_j.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_j/FUN_0c07387c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0738ae (`0C0738AE`, 10 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c0738ae.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0738bc (`0C0738BC`, 112 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c0738bc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c074200 (`0C074200`, 108 bytes, `src/gen_s.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_s/FUN_0c074200.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 20
- case 21
- case 22
- case 24
- case 25

### FUN_0c0742f0 (`0C0742F0`, 4 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c0742f0.json`
- the constant
- again

### FUN_0c074300 (`0C074300`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c074300.json`
- 1
- -1

### FUN_0c074510 (`0C074510`, 154 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c074510.json`
- a
- b

### FUN_0c0745e0 (`0C0745E0`, 152 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c0745e0.json`
- a
- b

### FUN_0c074680 (`0C074680`, 8 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c074680.json`
- 100000.0
- again

### FUN_0c074690 (`0C074690`, 108 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c074690.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c074990 (`0C074990`, 22 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/FUN_0c074990.json`
- a
- b

### FUN_0c0749b0 (`0C0749B0`, 22 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/FUN_0c0749b0.json`
- a
- b

### FUN_0c074ca0 (`0C074CA0`, 98 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c074ca0.json`
- fill ff
- fill 00
- fill a5

### FUN_0c074d10 (`0C074D10`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c074d10.json`
- 2
- 0

### FUN_0c074d20 (`0C074D20`, 52 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c074d20.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c074de0 (`0C074DE0`, 100 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c074de0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c074eb0 (`0C074EB0`, 84 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c074eb0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c075090 (`0C075090`, 42 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c075090.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c0753f0 (`0C0753F0`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/FUN_0c0753f0.json`
- timer 0 count
- another count
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c075400 (`0C075400`, 16 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c075400.json`
- 100 x 0.5
- -7 x 3.25

### FUN_0c075410 (`0C075410`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/FUN_0c075410.json`
- 10 - 3
- 0 - 1

### FUN_0c075430 (`0C075430`, 20 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/FUN_0c075430.json`
- count 1000, kept 5000
- other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c075570 (`0C075570`, 54 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zd/FUN_0c075570.json`
- on
- off
- on 2

### FUN_0c076670 (`0C076670`, 34 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_m/FUN_0c076670.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c077290 (`0C077290`, 68 bytes, `src/gen_q.c`)
- equivalent on 15 development and 6 holdout cases, in `tests/gen_q/FUN_0c077290.json`
- case 0
- case 1
- case 3
- case 7
- case 8
- case 10
- case 13
- case 14
- case 18
- case 19
- case 22
- case 28
- case 29
- case 31
- case 33
- case 34
- case 41
- case 43
- case 44
- case 47
- case 59

### FUN_0c0775d0 (`0C0775D0`, 74 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c0775d0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c077a00 (`0C077A00`, 224 bytes, `src/gen_ag.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ag/FUN_0c077a00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c077df0 (`0C077DF0`, 74 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c077df0.json`
- 2 to 3
- 0 to 1
- same

### FUN_0c077f60 (`0C077F60`, 10 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/FUN_0c077f60.json`
- top 0C810080
- top 0C900040
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c077f70 (`0C077F70`, 8 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/FUN_0c077f70.json`
- view 0C810000
- view 0C820040
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c077f80 (`0C077F80`, 14 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/FUN_0c077f80.json`
- push view, multiply
- other pointers
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c078750 (`0C078750`, 30 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/FUN_0c078750.json`
- 0.5
- -1

### FUN_0c0789c0 (`0C0789C0`, 26 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/FUN_0c0789c0.json`
- vector
- zero

### FUN_0c078a70 (`0C078A70`, 32 bytes, `src/game_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_m/FUN_0c078a70.json`
- add
- negatives

### FUN_0c078fa0 (`0C078FA0`, 32 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_m/FUN_0c078fa0.json`
- sequence
- another matrix
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c078ff0 (`0C078FF0`, 32 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_m/FUN_0c078ff0.json`
- sequence
- another matrix
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c079e70 (`0C079E70`, 40 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_m/FUN_0c079e70.json`
- sequence
- others
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c079f10 (`0C079F10`, 52 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_m/FUN_0c079f10.json`
- sequence
- again

### FUN_0c07aad0 (`0C07AAD0`, 14 bytes, `src/sdk_h.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07aad0.json`
- -1 kept
- 5 becomes 1
- 0 becomes 1

### FUN_0c07b710 (`0C07B710`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07b710.json`
- 0
- 0 again

### FUN_0c07b970 (`0C07B970`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07b970.json`
- three arguments
- others

### FUN_0c07b980 (`0C07B980`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07b980.json`
- three arguments
- others

### FUN_0c07b9d0 (`0C07B9D0`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07b9d0.json`
- one argument
- another

### FUN_0c07b9e0 (`0C07B9E0`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07b9e0.json`
- one argument
- another

### FUN_0c07bd30 (`0C07BD30`, 162 bytes, `src/gen_q.c`)
- equivalent on 15 development and 6 holdout cases, in `tests/gen_q/FUN_0c07bd30.json`
- case 0
- case 4
- case 7
- case 10
- case 14
- case 15
- case 17
- case 18
- case 25
- case 31
- case 33
- case 34
- case 35
- case 37
- case 39
- case 49
- case 52
- case 53
- case 55
- case 58
- case 59

### FUN_0c07be20 (`0C07BE20`, 188 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c07be20.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07bee0 (`0C07BEE0`, 138 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c07bee0.json`
- general
- dz0 dx!=0
- dz0 dx0
- dz0 dy0
- neg

### FUN_0c07bf70 (`0C07BF70`, 140 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c07bf70.json`
- general
- dz0 dx!=0
- dz0 dx0
- dz0 dy0
- neg

### FUN_0c07c100 (`0C07C100`, 68 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/FUN_0c07c100.json`
- both below
- a below
- b below
- none
- equal
- a below b equal

### FUN_0c07c1d0 (`0C07C1D0`, 134 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c07c1d0.json`
- a
- b

### FUN_0c07c260 (`0C07C260`, 126 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c07c260.json`
- a
- b

### FUN_0c07c2e0 (`0C07C2E0`, 118 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c07c2e0.json`
- a
- b

### FUN_0c07c3f0 (`0C07C3F0`, 118 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c07c3f0.json`
- a
- b

### FUN_0c07c6b0 (`0C07C6B0`, 138 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/FUN_0c07c6b0.json`
- a
- b
- c

### FUN_0c07c830 (`0C07C830`, 64 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/FUN_0c07c830.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c07d430 (`0C07D430`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/FUN_0c07d430.json`
- the four words
- again

### FUN_0c07d4f0 (`0C07D4F0`, 28 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/FUN_0c07d4f0.json`
- four
- others

### FUN_0c07d510 (`0C07D510`, 40 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/FUN_0c07d510.json`
- a
- b

### FUN_0c07d5c0 (`0C07D5C0`, 34 bytes, `src/sdk_m.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_m/FUN_0c07d5c0.json`
- positive, has data
- negative
- no data
- zero and data

### FUN_0c07d5f0 (`0C07D5F0`, 36 bytes, `src/sdk_m.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_m/FUN_0c07d5f0.json`
- positive, has data
- negative
- no data
- zero and data

### FUN_0c07d620 (`0C07D620`, 38 bytes, `src/sdk_m.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_m/FUN_0c07d620.json`
- one record, bits clear
- two records
- mask already set
- three records, mixed

### FUN_0c07d6a0 (`0C07D6A0`, 54 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_l/FUN_0c07d6a0.json`
- leaf: no resource, no child, no sibling
- with resource and sibling
- resource only

### FUN_0c07e580 (`0C07E580`, 258 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c07e580.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07e880 (`0C07E880`, 18 bytes, `src/sdk_s.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_s/FUN_0c07e880.json`
- set
- clear
- high bit
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c07e8a0 (`0C07E8A0`, 182 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c07e8a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07eca0 (`0C07ECA0`, 422 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c07eca0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07f5c0 (`0C07F5C0`, 78 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c07f5c0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07fc10 (`0C07FC10`, 40 bytes, `src/sdk_m.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_m/FUN_0c07fc10.json`
- in use, locked: value
- in use, unlocked: 0
- not in use
- index 0x10001 (short 1)

### FUN_0c07fc40 (`0C07FC40`, 168 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c07fc40.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c07fd00 (`0C07FD00`, 36 bytes, `src/sdk_m.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_m/FUN_0c07fd00.json`
- unlocked in use: freed
- locked: kept
- not in use

### FUN_0c07fd30 (`0C07FD30`, 66 bytes, `src/game_k.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/game_k/FUN_0c07fd30.json`
- in use, not started: starts
- in use, started: returns 1
- free: returns 0
- other state 2
- index 0x10003 as short
- started with big value

### FUN_0c07ff20 (`0C07FF20`, 12 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c07ff20.json`
- i 2
- i 0x1FFFF (short -1)

### FUN_0c080470 (`0C080470`, 134 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c080470.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c080500 (`0C080500`, 70 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c080500.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c080990 (`0C080990`, 336 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/FUN_0c080990.json`
- case 0
- case 4
- case 8
- case 11
- case 12
- case 15
- case 17
- case 20
- case 26
- case 28
- case 33
- case 34
- case 35
- case 36
- case 39
- case 41
- case 42
- case 46
- case 48
- case 50
- case 51
- case 52

### FUN_0c0813d0 (`0C0813D0`, 14 bytes, `src/sdk_h.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_h/FUN_0c0813d0.json`
- 5
- -5
- 0
- min int

### FUN_0c0813e0 (`0C0813E0`, 52 bytes, `src/sdk_m.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_m/FUN_0c0813e0.json`
- equal 3
- differ at 2
- n 0
- differ first, unsigned
- last differs

### FUN_0c081650 (`0C081650`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c081650.json`
- nothing
- nothing again

### FUN_0c087e1a (`0C087E1A`, 16 bytes, `src/sdk_h.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_h/FUN_0c087e1a.json`
- word 1: clears the byte
- word 2: nothing
- word 0

### FUN_0c087e2a (`0C087E2A`, 22 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/FUN_0c087e2a.json`
- word 1: 0
- word 2, bit 6 set
- word 0, bit clear

### FUN_0c0886cc (`0C0886CC`, 100 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c0886cc.json`
- round up with carries
- round down
- n 1
- carry to front
- exactly 5

### FUN_0c08933c (`0C08933C`, 120 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/FUN_0c08933c.json`
- no borrow
- underflow
- zero
- underflow signed
- n 0

### FUN_0c0893b8 (`0C0893B8`, 52 bytes, `src/sdk_m.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_m/FUN_0c0893b8.json`
- equal 3
- differ at 2
- n 0
- differ first, unsigned
- last differs

### FUN_0c089738 (`0C089738`, 76 bytes, `src/sdk_r.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_r/FUN_0c089738.json`
- 80 01
- ff ff ff
- 00 00
- 01
- 7f 80 00 01
- n 0
- negative n

### FUN_0c0897f8 (`0C0897F8`, 32 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_m/FUN_0c0897f8.json`
- word
- negative

### FUN_0c089c80 (`0C089C80`, 70 bytes, `src/sdk_r.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_r/FUN_0c089c80.json`
- 80 01
- ff ff ff
- 00 00
- 01
- 7f 80 00 01
- n 0
- negative n

### FUN_0c089cc8 (`0C089CC8`, 34 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_m/FUN_0c089cc8.json`
- halfword
- high

### FUN_0c14ab88 (`0C14AB88`, 8 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/FUN_0c14ab88.json`
- handle
- another
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c14ab90 (`0C14AB90`, 8 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/FUN_0c14ab90.json`
- handle
- another
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c14ab98 (`0C14AB98`, 90 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c14ab98.json`
- a
- b

### FUN_0c14ceee (`0C14CEEE`, 88 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c14ceee.json`
- foreign
- two libs
- none

### FUN_0c14cf46 (`0C14CF46`, 88 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c14cf46.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c14cfe2 (`0C14CFE2`, 34 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/FUN_0c14cfe2.json`
- match
- mismatch last
- mismatch first
- first byte ignored

### FUN_0c14d2fa (`0C14D2FA`, 22 bytes, `src/sdk_i.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_i/FUN_0c14d2fa.json`
- count 2: copy
- count 1: nothing
- null
- count 5

### FUN_0c14f59e (`0C14F59E`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c14f59e.json`
- nothing
- nothing again

### FUN_0c1519be (`0C1519BE`, 76 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c1519be.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c152292 (`0C152292`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c152292.json`
- 0x1234
- 0x18000 (short)

### FUN_0c152330 (`0C152330`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c152330.json`
- 0x7F
- 0x1FF (byte)

### FUN_0c152340 (`0C152340`, 100 bytes, `src/sdk_za.c`)
- equivalent on 1 development and 5 holdout cases, in `tests/sdk_za/FUN_0c152340.json`
- two open
- none open
- last open
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1534a0 (`0C1534A0`, 42 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_zc/FUN_0c1534a0.json`
- both
- none
- c only
- b only

### FUN_0c1534ca (`0C1534CA`, 30 bytes, `src/sdk_j.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_j/FUN_0c1534ca.json`
- none
- 0x02000000
- 0x03000000
- 0x02400000
- 0x03400000
- 0x01000000 only

### FUN_0c1534e8 (`0C1534E8`, 20 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/FUN_0c1534e8.json`
- flag set
- flag clear
- flag set, n 0

### FUN_0c1534fc (`0C1534FC`, 52 bytes, `src/sdk_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_p/FUN_0c1534fc.json`
- whole word
- split
- flag off: nothing
- split, n 0
- whole, n 5

### FUN_0c153530 (`0C153530`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/FUN_0c153530.json`
- flag
- no flag
- flag, n 0

### FUN_0c1566a0 (`0C1566A0`, 162 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c1566a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c157160 (`0C157160`, 156 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_ze/FUN_0c157160.json`
- empty
- chain
- limit
- none
- best
- slot1
- mixed

### FUN_0c1573a0 (`0C1573A0`, 44 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_l/FUN_0c1573a0.json`
- first free
- second free
- third free, high bits
- first used, bit 0 only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1573cc (`0C1573CC`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/FUN_0c1573cc.json`
- entry 0 found
- entry 3 found
- not an entry
- outside

### FUN_0c1573f2 (`0C1573F2`, 36 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/FUN_0c1573f2.json`
- empty list
- one node in list
- another list

### FUN_0c15748a (`0C15748A`, 194 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c15748a.json`
- case 0
- case 1
- case 2
- case 4
- case 5
- case 6
- case 7
- case 9
- case 10
- case 11
- case 15
- case 16
- case 18
- case 19
- case 21
- case 23
- case 24
- case 26
- case 29
- case 31
- case 32
- case 33

### FUN_0c157ba0 (`0C157BA0`, 296 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c157ba0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c157cc8 (`0C157CC8`, 44 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_l/FUN_0c157cc8.json`
- first free
- second free
- third free, high bits
- first used, bit 0 only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c157d20 (`0C157D20`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/FUN_0c157d20.json`
- entry 0 found
- entry 3 found
- not an entry
- outside

### FUN_0c157d46 (`0C157D46`, 18 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/FUN_0c157d46.json`
- empty list
- one node
- another

### FUN_0c157d58 (`0C157D58`, 48 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/FUN_0c157d58.json`
- node is head
- node in the middle
- node last
- single

### FUN_0c157f40 (`0C157F40`, 64 bytes, `src/sdk_p.c`)
- equivalent on 7 development and 7 holdout cases, in `tests/sdk_p/FUN_0c157f40.json`
- x 00000000
- x 003ffffc
- x 003fffff
- x 00400000
- x 00400003
- x 007ffffc
- x 007fffff
- x 00800000
- x 00bfffff
- x 00c00000
- x 00c00003
- x 01000000
- x ffffffff
- x 12345678

### FUN_0c15887e (`0C15887E`, 16 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c15887e.json`
- 12 bytes
- 14 bytes: 3 words

### FUN_0c158958 (`0C158958`, 266 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/FUN_0c158958.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c158f00 (`0C158F00`, 92 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/FUN_0c158f00.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c159ae0 (`0C159AE0`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/FUN_0c159ae0.json`
- nothing
- nothing again

### FUN_0c15a9a8 (`0C15A9A8`, 114 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15a9a8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15c746 (`0C15C746`, 62 bytes, `src/sdk_za.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/sdk_za/FUN_0c15c746.json`
- type 3
- mip
- flag 32
- plain
- mip and 32

### FUN_0c15c7a0 (`0C15C7A0`, 84 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15c7a0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15c7f4 (`0C15C7F4`, 94 bytes, `src/sdk_za.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_za/FUN_0c15c7f4.json`
- 256 mip
- 8x8 plain
- 64x16 mip
- 32x32 plain
- 16x128 mip
- 8x8 mip
- 8x16 plain

### FUN_0c15c852 (`0C15C852`, 138 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15c852.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15c8dc (`0C15C8DC`, 132 bytes, `src/gen_ag.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ag/FUN_0c15c8dc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15c960 (`0C15C960`, 42 bytes, `src/sdk_l.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_l/FUN_0c15c960.json`
- level 2
- level 0

### FUN_0c15c98a (`0C15C98A`, 40 bytes, `src/gen_t.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_t/FUN_0c15c98a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15c9e0 (`0C15C9E0`, 96 bytes, `src/gen_t.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_t/FUN_0c15c9e0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15cc6e (`0C15CC6E`, 154 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_ze/FUN_0c15cc6e.json`
- e1
- e2
- e3
- e5
- e0
- e4

### FUN_0c15cd40 (`0C15CD40`, 168 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_ze/FUN_0c15cd40.json`
- e1
- e2
- e3
- e5
- e0
- e4

### FUN_0c15e820 (`0C15E820`, 60 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15e820.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f460 (`0C15F460`, 58 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15f460.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 15
- case 16
- case 17
- case 19
- case 20
- case 22
- case 23
- case 24

### FUN_0c15f49a (`0C15F49A`, 46 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/FUN_0c15f49a.json`
- equal
- different
- negative short
- high bits ignored

### FUN_0c15f4c8 (`0C15F4C8`, 26 bytes, `src/sdk_s.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_s/FUN_0c15f4c8.json`
- 0x45
- 0x99
- 0x00
- 0xFF as signed
- 0x80
- 0x7F
- 0xA3

### FUN_0c15f4e2 (`0C15F4E2`, 54 bytes, `src/gen_p.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_p/FUN_0c15f4e2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15f818 (`0C15F818`, 16 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/FUN_0c15f818.json`
- call
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c15f868 (`0C15F868`, 14 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/FUN_0c15f868.json`
- call
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c15f8ba (`0C15F8BA`, 16 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/FUN_0c15f8ba.json`
- call
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c15f926 (`0C15F926`, 14 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/FUN_0c15f926.json`
- call
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c15f998 (`0C15F998`, 20 bytes, `src/sdk_i.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_i/FUN_0c15f998.json`
- 'a'
- 'Z'
- 'z'
- 'm' with high bits
- '{'

### FUN_0c15fa6c (`0C15FA6C`, 38 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c15fa6c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c15fa92 (`0C15FA92`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/FUN_0c15fa92.json`
- "ab"
- empty
- three chars

### FUN_0c15fab8 (`0C15FAB8`, 150 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/FUN_0c15fab8.json`
- short
- file
- dir
- dot
- dotdot
- file other

### FUN_0c1614de (`0C1614DE`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 5 holdout cases, in `tests/sdk_t/FUN_0c1614de.json`
- count 0x1000
- zero
- all ones
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c162d2c (`0C162D2C`, 46 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c162d2c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c162d5e (`0C162D5E`, 44 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c162d5e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c162d8a (`0C162D8A`, 42 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c162d8a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c162db6 (`0C162DB6`, 34 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/FUN_0c162db6.json`
- bits
- all 1s
- alternating

### FUN_0c167c24 (`0C167C24`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c167c24.json`
- fill ff
- fill 00
- fill a5

### FUN_0c167c4c (`0C167C4C`, 8 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/FUN_0c167c4c.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c16800c (`0C16800C`, 26 bytes, `src/sdk_u.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_u/FUN_0c16800c.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c168026 (`0C168026`, 26 bytes, `src/sdk_u.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_u/FUN_0c168026.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1687f2 (`0C1687F2`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c1687f2.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c1687f6 (`0C1687F6`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c1687f6.json`
- fill ff
- fill 00
- fill a5

### FUN_0c168808 (`0C168808`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/FUN_0c168808.json`
- two
- others

### FUN_0c168812 (`0C168812`, 4 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c168812.json`
- fill ff
- fill 00
- fill a5

### FUN_0c16881a (`0C16881A`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c16881a.json`
- fill ff
- fill 00
- fill a5

### FUN_0c168826 (`0C168826`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/FUN_0c168826.json`
- fill ff
- fill 00
- fill a5

### FUN_0c168832 (`0C168832`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c168832.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16883e (`0C16883E`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c16883e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16884a (`0C16884A`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c16884a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c168856 (`0C168856`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c168856.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c168862 (`0C168862`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c168862.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16887a (`0C16887A`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c16887a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c168892 (`0C168892`, 12 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c168892.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1688aa (`0C1688AA`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1688aa.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1688b6 (`0C1688B6`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1688b6.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1688c2 (`0C1688C2`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1688c2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1688ce (`0C1688CE`, 16 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1688ce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1689c0 (`0C1689C0`, 8 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c1689c0.json`
- a
- b

### FUN_0c168e10 (`0C168E10`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c168e10.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c1697c4 (`0C1697C4`, 42 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1697c4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16bb70 (`0C16BB70`, 196 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c16bb70.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16bca0 (`0C16BCA0`, 682 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c16bca0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16bf4a (`0C16BF4A`, 534 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c16bf4a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16c796 (`0C16C796`, 52 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c16c796.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c16c7ca (`0C16C7CA`, 40 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c16c7ca.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c16c7f2 (`0C16C7F2`, 30 bytes, `src/sdk_w.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_w/FUN_0c16c7f2.json`
- status 0: bit set
- status 5: kept
- already bit
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1701c4 (`0C1701C4`, 16 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_t/FUN_0c1701c4.json`
- 3 words
- 1 word
- n 6 (rounds down)

### FUN_0c17088c (`0C17088C`, 28 bytes, `src/gen_s.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_s/FUN_0c17088c.json`
- case 0
- case 1
- case 4
- case 9
- case 12
- case 13
- case 15
- case 17
- case 18
- case 21
- case 22
- case 23
- case 26
- case 27
- case 29
- case 34
- case 35
- case 36
- case 39
- case 40
- case 41
- case 42

### FUN_0c1708bc (`0C1708BC`, 20 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_i/FUN_0c1708bc.json`
- 5 bytes
- 0 bytes
- 1 byte
- -3

### FUN_0c1708d0 (`0C1708D0`, 56 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c1708d0.json`
- case 0
- case 5
- case 6
- case 7
- case 9
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 18
- case 20
- case 21
- case 22
- case 23
- case 24
- case 28
- case 32
- case 33
- case 34
- case 35

### FUN_0c170908 (`0C170908`, 78 bytes, `src/gen_s.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_s/FUN_0c170908.json`
- case 0
- case 1
- case 2
- case 3
- case 5
- case 6
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 17
- case 18
- case 19
- case 23
- case 24
- case 25
- case 26
- case 27

### FUN_0c170956 (`0C170956`, 80 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c170956.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c170a8c (`0C170A8C`, 188 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c170a8c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c170b48 (`0C170B48`, 200 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c170b48.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c170c10 (`0C170C10`, 88 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/sdk_ze/FUN_0c170c10.json`
- busy
- unused
- good
- bad
- good 0

### FUN_0c170c68 (`0C170C68`, 96 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c170c68.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c170fd0 (`0C170FD0`, 20 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/FUN_0c170fd0.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1718c4 (`0C1718C4`, 72 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c1718c4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c17190c (`0C17190C`, 40 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c17190c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c171cfe (`0C171CFE`, 26 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c171cfe.json`
- case 0
- case 4
- case 6
- case 8
- case 10
- case 11
- case 13
- case 14
- case 15
- case 18
- case 19
- case 20
- case 21
- case 22
- case 23
- case 24
- case 25
- case 27
- case 32
- case 33
- case 34
- case 35

### FUN_0c171d48 (`0C171D48`, 82 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c171d48.json`
- case 0
- case 4
- case 7
- case 9
- case 11
- case 14
- case 17
- case 20
- case 21
- case 22
- case 23
- case 24
- case 27
- case 29
- case 30
- case 31
- case 32
- case 33
- case 35
- case 36
- case 40
- case 41

### FUN_0c171db0 (`0C171DB0`, 30 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/FUN_0c171db0.json`
- set
- another

### FUN_0c171de4 (`0C171DE4`, 126 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c171de4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c171e62 (`0C171E62`, 18 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/FUN_0c171e62.json`
- param
- another

### FUN_0c171f6c (`0C171F6C`, 96 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c171f6c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c171fe8 (`0C171FE8`, 90 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_ze/FUN_0c171fe8.json`
- 0
- 5
- 15
- -3
- 14
- 100

### FUN_0c172042 (`0C172042`, 92 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c172042.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1720ac (`0C1720AC`, 72 bytes, `src/gen_l.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_l/FUN_0c1720ac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1720f4 (`0C1720F4`, 62 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/FUN_0c1720f4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c172132 (`0C172132`, 72 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c172132.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c17217a (`0C17217A`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c17217a.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c1721da (`0C1721DA`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/FUN_0c1721da.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### FUN_0c17277c (`0C17277C`, 14 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_t/FUN_0c17277c.json`
- bit set
- bit clear
- zero
- all

### FUN_0c1727b0 (`0C1727B0`, 26 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/FUN_0c1727b0.json`
- slot 1
- slot 0
- slot 2

### FUN_0c1727d0 (`0C1727D0`, 14 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_t/FUN_0c1727d0.json`
- bit set
- bit clear
- zero
- all

### FUN_0c172f1e (`0C172F1E`, 52 bytes, `src/gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_m/FUN_0c172f1e.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c173328 (`0C173328`, 548 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/FUN_0c173328.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c174394 (`0C174394`, 10 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/FUN_0c174394.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c17467c (`0C17467C`, 178 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c17467c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 8
- case 9
- case 10
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 22
- case 23
- case 24

### FUN_0c17472e (`0C17472E`, 58 bytes, `src/sdk_q.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_q/FUN_0c17472e.json`
- mode 0: signed byte
- mode 0: positive
- mode 1, bit set: 13
- mode 1, bit clear: r5
- mode 2: r5
- mode 1 other bits

### FUN_0c174768 (`0C174768`, 86 bytes, `src/sdk_q.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_q/FUN_0c174768.json`
- mode 0: all stores
- mode 1: only the bit
- mode 2
- mode 0, bit already set
- negative mode
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### FUN_0c1747be (`0C1747BE`, 54 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c1747be.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FUN_0c1747f4 (`0C1747F4`, 60 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/FUN_0c1747f4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### FcvStoreBuffer (`0C0669DC`, 322 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/FcvStoreBuffer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### GS_ComboReset (`0C02DA02`, 64 bytes, `src/game_e.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_e/GS_ComboReset.json`
- both counters
- nothing pending
- 22 zero: kept
- 21 set only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### GetAverageAngle (`0C06AFB2`, 116 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/GetAverageAngle.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### GetCollision (`0C0319B2`, 440 bytes, `src/collide.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/collide/GetCollision.json`
- no hit
- one hit
- two hits
- three hits
- rest 0
- rest 2

### GetCollision2D (`0C031EF4`, 396 bytes, `src/collide.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/collide/GetCollision2D.json`
- pick highest below
- climb within tol
- none below
- skip kind 13
- same height
- empty cell
- out of range
- all rejected
- three above

### GetCollisionFirst (`0C031B6A`, 240 bytes, `src/collide.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/collide/GetCollisionFirst.json`
- none
- hit
- hit kind 5
- full

### GetMenuMode (`0C041CD8`, 10 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/GetMenuMode.json`
- level 0
- level 1
- level 4
- level 2
- level 3

### GetNumRideon (`0C05DB62`, 16 bytes, `src/leaf.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/leaf/GetNumRideon.json`
- count 0
- count 41
- count -1
- count 0x7FFFFFFF
- count 1000
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### GoiTool (`0C0498F8`, 144 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/GoiTool.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### HesLate (`0C07243C`, 198 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/HesLate.json`
- case 0
- case 4
- case 6
- case 10
- case 13
- case 14
- case 15
- case 17
- case 21
- case 22
- case 24
- case 31
- case 33
- case 35
- case 36
- case 37
- case 38
- case 39
- case 42
- case 44
- case 45
- case 47

### InitAdvCamera (`0C0289AC`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/InitAdvCamera.json`
- sets mode 8
- again

### InitArrow (`0C035C94`, 54 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/InitArrow.json`
- a
- b

### InitEffect (`0C0364F4`, 166 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/InitEffect.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### InitHelicopter (`0C03759C`, 12 bytes, `src/game_c.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_c/InitHelicopter.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### InitHomingVector (`0C036422`, 50 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/InitHomingVector.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Init_Adv_Global_Parm (`0C0577EE`, 228 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/Init_Adv_Global_Parm.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Init_Fog (`0C05FD9C`, 134 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/Init_Fog.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Init_Standard (`0C05252C`, 72 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/Init_Standard.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Initialize_Replay_Part (`0C02D00C`, 230 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/Initialize_Replay_Part.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### IsBoyFriend (`0C025F6C`, 68 bytes, `src/game_f.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_f/IsBoyFriend.json`
- 26 plain
- 26 with f: 3 -> no
- 3 with f: 26-23
- 33
- 32
- 52 with f: 29
- 38
- other
- 15 with f: 38-23

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

### LetsPlayTennis (`0C0722E8`, 96 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/LetsPlayTennis.json`
- both
- far
- clipped
- second only
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### LightEffect (`0C030C76`, 66 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/LightEffect.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### LoadBackupData (`0C03AD08`, 156 bytes, `src/gen_ag.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ag/LoadBackupData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### PAL_FreeTexture (`0C02AB4C`, 104 bytes, `src/game_p.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/game_p/PAL_FreeTexture.json`
- lang 0
- lang 2
- lang 3
- lang 1
- lang 4
- lang 7
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### PC_RenderSimpleTaxiShadow (`0C04EBAC`, 580 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/PC_RenderSimpleTaxiShadow.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### Psg_SetPosPtrSet (`0C070B50`, 108 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/Psg_SetPosPtrSet.json`
- case 0
- case 2
- case 4
- case 6
- case 7
- case 8
- case 9
- case 11
- case 12
- case 13
- case 14
- case 16
- case 17
- case 18
- case 19
- case 23
- case 25
- case 26
- case 29
- case 30
- case 31
- case 32

### Put2DObj (`0C03659A`, 54 bytes, `src/gen_af.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_af/Put2DObj.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### PutCourse_Init (`0C04D6BC`, 56 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/PutCourse_Init.json`
- a
- b

### PutVMSMessage (`0C040EC6`, 126 bytes, `src/game_p.c`)
- equivalent on 5 development and 5 holdout cases, in `tests/game_p/PutVMSMessage.json`
- none
- ready
- not ready pad
- no flag no pad
- blink off
- title
- title sub2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Put_Build_Patch (`0C04F090`, 204 bytes, `src/gen_v.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_v/Put_Build_Patch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Put_Combo_Entry (`0C0563AA`, 78 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/Put_Combo_Entry.json`
- replace
- first
- again

### RailroadAreaCheck (`0C046E3C`, 394 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/RailroadAreaCheck.json`
- case 0
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22
- case 23

### ResetFadeColor (`0C030C52`, 36 bytes, `src/misc.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/misc/ResetFadeColor.json`
- white, no offset
- tinted
- negative offset
- zeros
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ResetLight (`0C030B88`, 20 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/ResetLight.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ResetSpark (`0C037B0A`, 8 bytes, `src/leaf.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/leaf/ResetSpark.json`
- flag clear
- flag set
- other value
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### SJMEM_Create (`0C16AF94`, 98 bytes, `src/sdk_za.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_za/SJMEM_Create.json`
- slot 2 free
- all used
- first free

### SJMEM_Destroy (`0C16AFF6`, 30 bytes, `src/sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_u/SJMEM_Destroy.json`
- handle
- null
- another

### SJMEM_EntryErrFunc (`0C16B018`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/SJMEM_EntryErrFunc.json`
- fill ff
- fill 00
- fill a5

### SJMEM_Finish (`0C16AF86`, 14 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/SJMEM_Finish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJMEM_GetBufPtr (`0C16B202`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJMEM_GetBufPtr.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJMEM_GetBufSize (`0C16B206`, 6 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJMEM_GetBufSize.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJMEM_GetUuid (`0C16B014`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJMEM_GetUuid.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJMEM_Init (`0C16AF6A`, 28 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_ze/SJMEM_Init.json`
- first
- again
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### SJMEM_Reset (`0C16B01E`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/SJMEM_Reset.json`
- reset
- another

### SJRBF_Create (`0C16B268`, 98 bytes, `src/sdk_za.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_za/SJRBF_Create.json`
- slot 3 free
- all used
- last free

### SJRBF_Destroy (`0C16B2CA`, 30 bytes, `src/sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_u/SJRBF_Destroy.json`
- handle
- null
- another

### SJRBF_EntryErrFunc (`0C16B2EC`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/SJRBF_EntryErrFunc.json`
- fill ff
- fill 00
- fill a5

### SJRBF_Finish (`0C16B25A`, 14 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/SJRBF_Finish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJRBF_GetBufPtr (`0C16B622`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJRBF_GetBufPtr.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_GetBufSize (`0C16B626`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJRBF_GetBufSize.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_GetUuid (`0C16B2E8`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJRBF_GetUuid.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_GetXtrSize (`0C16B62A`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJRBF_GetXtrSize.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJRBF_Init (`0C16B23E`, 28 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_ze/SJRBF_Init.json`
- first
- again
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### SJRBF_Reset (`0C16B2F2`, 14 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/SJRBF_Reset.json`
- reset
- another

### SJUNI_Create (`0C16B68C`, 106 bytes, `src/sdk_za.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_za/SJUNI_Create.json`
- slot 1 free
- all used
- mode 255

### SJUNI_Destroy (`0C16B6F6`, 30 bytes, `src/sdk_u.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_u/SJUNI_Destroy.json`
- handle
- null
- another

### SJUNI_EntryErrFunc (`0C16B718`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/SJUNI_EntryErrFunc.json`
- fill ff
- fill 00
- fill a5

### SJUNI_Finish (`0C16B67E`, 14 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/SJUNI_Finish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SJUNI_GetNumChainPool (`0C16BAD2`, 26 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/SJUNI_GetNumChainPool.json`
- 2
- none
- one

### SJUNI_GetNumChunk (`0C16BAB4`, 30 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/SJUNI_GetNumChunk.json`
- 3 chunks
- empty
- one

### SJUNI_GetUuid (`0C16B714`, 4 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/SJUNI_GetUuid.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### SJUNI_Init (`0C16B662`, 28 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_ze/SJUNI_Init.json`
- first
- again
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### SJUNI_Reset (`0C16B71E`, 80 bytes, `src/sdk_q.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_q/SJUNI_Reset.json`
- 4 cells
- 1 cell
- 2 cells
- 0 count

### SJ_SplitChunk (`0C16BAEC`, 44 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_ze/SJ_SplitChunk.json`
- split
- short
- zero
- equal

### SetAudio (`0C041028`, 28 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/SetAudio.json`
- audio 1
- audio 0
- audio 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### SetCameraPosVelocity (`0C0361F2`, 52 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/SetCameraPosVelocity.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### SetFadeColorMulti (`0C030BB8`, 66 bytes, `src/gen_c.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_c/SetFadeColorMulti.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### SetFadeColorOffset (`0C030BAA`, 14 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetFadeColorOffset.json`
- white
- channels
- zero
- negative
- large

### SetFadeColorOffsetMulti (`0C030C26`, 44 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/SetFadeColorOffsetMulti.json`
- a
- b

### SetLandmarkDist (`0C0318EA`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/SetLandmarkDist.json`
- value 0.0
- value 1.5
- value 100.0
- value -2.0
- value 1e+30

### SetMVShadow (`0C04EB22`, 40 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/SetMVShadow.json`
- mode 0
- mode 2
- mode 1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### SetSEvolume (`0C041044`, 36 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/SetSEvolume.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### Set_StandWaitDist (`0C06B200`, 74 bytes, `src/game_n.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_n/Set_StandWaitDist.json`
- mode 1
- mode 0
- mode 2
- mode -1

### SklSfPlay (`0C069590`, 72 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/SklSfPlay.json`
- a
- b

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

### TrafficLevelChange (`0C042A5A`, 46 bytes, `src/game_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_e/TrafficLevelChange.json`
- timer positive, within range
- above 23
- below minimum
- timer zero: nothing
- equal minimum

### VSklSfPlay (`0C06AF44`, 72 bytes, `src/gen_ae.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ae/VSklSfPlay.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### Voice_Request (`0C072F18`, 68 bytes, `src/game_p.c`)
- equivalent on 6 development and 3 holdout cases, in `tests/game_p/Voice_Request.json`
- mode 1 ch 0
- mode 1 ending ch 2
- mode 1 no ending ch 2
- mode 0 off
- mode 0 on ch 0
- mode 0 on ch 1
- busy slot
- mode 3 on ch 0 ending
- mode 1 ending ch 0

### _allzero (`0C088E64`, 30 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_j/_allzero.json`
- zeros
- a byte set
- n 0
- last byte set

### acSystemGetSystemFlag (`0C060396`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/leaf/acSystemGetSystemFlag.json`
- flag 3
- flag 0
- flag 2
- flag 4
- flag -3
- flag 0x103
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### adxStartAfs1 (`0C02E134`, 24 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/adxStartAfs1.json`
- slot 1
- slot 0

### adxStartAfs2 (`0C02E706`, 24 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/adxStartAfs2.json`
- slot 1
- slot 0

### adxf_AllocAdxFs (`0C152C2E`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_k/adxf_AllocAdxFs.json`
- first free
- third free
- all 16 used
- last free
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### adxf_ChkPrmPt (`0C1527D2`, 50 bytes, `src/sdk_l.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_l/adxf_ChkPrmPt.json`
- valid
- negative
- too big
- 255 ok
- null p
- big and null

### adxf_CreateAdxFs (`0C152C54`, 50 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_l/adxf_CreateAdxFs.json`
- alloc ok
- none
- another entry
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### adxf_ExecOne (`0C153154`, 68 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/adxf_ExecOne.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxf_read_sj32 (`0C152EC0`, 226 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/adxf_read_sj32.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxf_wait_1ms (`0C1527C8`, 10 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_s/adxf_wait_1ms.json`
- spins
- again

### adxpd_error (`0C1744C0`, 8 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/adxpd_error.json`
- sets
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### adxsjd_clear (`0C1681E2`, 30 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/adxsjd_clear.json`
- clears
- another

### adxsjd_decode_exec (`0C168738`, 58 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/adxsjd_decode_exec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxstm_sj_internal_error (`0C168C72`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/adxstm_sj_internal_error.json`
- inc
- wrap
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### adxt_eos_entry (`0C168FCC`, 40 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/adxt_eos_entry.json`
- positive
- negative
- small positive

### adxt_set_outpan (`0C168FF4`, 168 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/adxt_set_outpan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxt_start_stm (`0C151FCC`, 62 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/adxt_start_stm.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### adxt_stat_decend (`0C1693DE`, 34 bytes, `src/gen_g.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_g/adxt_stat_decend.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buAnalyzeBackupFileImage (`0C15111C`, 332 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/buAnalyzeBackupFileImage.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### buCloseFile (`0C1508B0`, 70 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buCloseFile.json`
- ready
- busy
- another handle

### buConnect (`0C15055E`, 60 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_n/buConnect.json`
- ready
- busy
- drive 0
- busy -1

### buCreateExecFile (`0C15083E`, 46 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_l/buCreateExecFile.json`
- ready
- busy
- another

### buCreateFile (`0C150808`, 46 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_l/buCreateFile.json`
- ready
- busy
- another

### buDefragDisk (`0C150BD2`, 102 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/buDefragDisk.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buDeleteFile (`0C1509C2`, 76 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buDeleteFile.json`
- ready
- busy
- another

### buDeleteFileEx (`0C150A0E`, 70 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buDeleteFileEx.json`
- ready
- busy
- another

### buExit (`0C150362`, 82 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/buExit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buExitForce (`0C150344`, 30 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/buExitForce.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buFbrCreateFiber (`0C1728AE`, 220 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/buFbrCreateFiber.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buFbrDestroyServer (`0C1729D8`, 62 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/buFbrDestroyServer.json`
- none live
- empty

### buFbrExit (`0C1729AC`, 44 bytes, `src/sg_bup.c`)
- equivalent on 4 development and 7 holdout cases, in `tests/sg_bup/buFbrExit.json`
- created=0,0
- created=1,0
- created=0,1
- created=1,1
- created=0xffffffff,0x0
- created=0x0,0x80000000
- created=0x7,0x9
- created=0x100,0x0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buFbrInit (`0C1727F8`, 32 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/buFbrInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buFbrKillFiberLevel (`0C172A7E`, 68 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/buFbrKillFiberLevel.json`
- mixed
- none
- all

### buFbrSleepFiber (`0C172ADE`, 62 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/buFbrSleepFiber.json`
- case 0
- case 4
- case 6
- case 7
- case 9
- case 12
- case 14
- case 15
- case 17
- case 19
- case 20
- case 21
- case 22
- case 23
- case 24
- case 28
- case 29
- case 30
- case 31
- case 32
- case 33
- case 34

### buFbrSleepVFiber (`0C172B1C`, 4 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/buFbrSleepVFiber.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buFbrWakeupFiber (`0C172AC2`, 28 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_c/buFbrWakeupFiber.json`
- idx0 set
- idx0 clear
- idx2 set
- idx3 clear
- idx1 set other
- idx4 set

### buFindExecFile (`0C1507A8`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buFindExecFile.json`
- ready
- busy
- another
- busy -1

### buFindFirstFile (`0C1506E8`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buFindFirstFile.json`
- ready
- busy
- another
- busy -1

### buFindFirstFileEx (`0C150744`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/buFindFirstFileEx.json`
- ready
- busy
- another
- busy -1

### buFindNextFile (`0C150716`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buFindNextFile.json`
- ready
- busy
- another
- busy -1

### buFindNextFileEx (`0C150776`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/buFindNextFileEx.json`
- ready
- busy
- another
- busy -1

### buGetDiskFree (`0C1506BA`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buGetDiskFree.json`
- ready
- busy
- another
- busy -1

### buGetDiskInfo (`0C15068C`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buGetDiskInfo.json`
- ready
- busy
- another
- busy -1

### buGetFileInfo (`0C150AE2`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/buGetFileInfo.json`
- ready
- busy
- another
- busy -1

### buGetFileSize (`0C150BA4`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buGetFileSize.json`
- ready
- busy
- another
- busy -1

### buGetLastError (`0C150B2E`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/buGetLastError.json`
- ready
- busy
- drive 0

### buGetVersion (`0C150516`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/buGetVersion.json`
- version
- 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buInterruptHandler (`0C150278`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/buInterruptHandler.json`
- server
- returns -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buIsExistFile (`0C150AB4`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buIsExistFile.json`
- ready
- busy
- another
- busy -1

### buIsFormat (`0C1505C6`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buIsFormat.json`
- argument passed
- another

### buIsReady (`0C15051C`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buIsReady.json`
- argument passed
- another

### buLoadFile (`0C150C38`, 88 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/buLoadFile.json`
- ok
- busy
- ok 2

### buLoadFileEx (`0C150D4C`, 86 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/buLoadFileEx.json`
- ok
- busy
- ok 2

### buMount (`0C150522`, 60 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_n/buMount.json`
- ready
- busy
- drive 0
- busy -1

### buMountDisk (`0C150E8C`, 32 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/buMountDisk.json`
- work set: mount
- failed
- another
- failed -1

### buOpenFile (`0C1507D6`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/buOpenFile.json`
- ready
- busy
- another
- busy -1

### buReadDiskImage (`0C150DF8`, 68 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buReadDiskImage.json`
- ready
- busy
- another

### buRemount (`0C15059A`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buRemount.json`
- argument passed
- another

### buRenameFile (`0C150B54`, 80 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buRenameFile.json`
- ready
- busy
- another

### buRewriteExecFile (`0C150DA2`, 86 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/buRewriteExecFile.json`
- ok
- busy
- ok 2

### buSaveExecFile (`0C150CEE`, 94 bytes, `src/gen_z.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_z/buSaveExecFile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSaveFile (`0C150C90`, 94 bytes, `src/gen_z.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_z/buSaveFile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### buSetCallbackParam (`0C150510`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buSetCallbackParam.json`
- argument passed
- another

### buSetCompleteCallback (`0C150504`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buSetCompleteCallback.json`
- argument passed
- another

### buSetFileAttr (`0C150A54`, 96 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/buSetFileAttr.json`
- ok
- busy
- ok 2

### buSetPrintFunc (`0C150E80`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buSetPrintFunc.json`
- function
- none

### buSetProgressCallback (`0C15050A`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buSetProgressCallback.json`
- argument passed
- another

### buSetRetryCount (`0C150E86`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/buSetRetryCount.json`
- argument passed
- another

### buStat (`0C150B14`, 26 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_j/buStat.json`
- ready
- busy
- -1

### buUnmount (`0C15059E`, 40 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/buUnmount.json`
- ready
- busy
- drive 0

### buUnmountDisk (`0C150EAC`, 36 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/buUnmountDisk.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### buWriteDiskImage (`0C150E3C`, 68 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buWriteDiskImage.json`
- ready
- busy
- another

### buWriteFile (`0C150978`, 74 bytes, `src/sdk_n.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_n/buWriteFile.json`
- ready
- busy
- other

### calcCheck (`0C045A2E`, 236 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/calcCheck.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### calcColliCheck (`0C0459A8`, 134 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/calcColliCheck.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### callGoBackAdvertise (`0C040C8A`, 96 bytes, `src/gen_d.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_d/callGoBackAdvertise.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### callTryAgain (`0C0409D2`, 66 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/callTryAgain.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### camPlayScript (`0C064648`, 70 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/camPlayScript.json`
- mode 0
- mode 1
- mode 7

### camRestore (`0C0646E4`, 52 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/camRestore.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### camSetAngles (`0C028888`, 66 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/camSetAngles.json`
- mode 0
- mode 1
- mode 2

### camSetEye (`0C02871C`, 68 bytes, `src/camera.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/camera/camSetEye.json`
- mode 0 (homing vector)
- mode 1 (clears +12, copies +24)
- mode 2 (copies +24 only)
- mode 0, other vector
- mode 1, zero vector
- mode 3
- mode -1

### camSetMode (`0C0286FA`, 28 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/camSetMode.json`
- changes
- same: nothing
- from 0

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

### carColliReflection (`0C043AAE`, 102 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/carColliReflection.json`
- a
- b

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

### check_caps (`0C166DB0`, 160 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/check_caps.json`
- case 0
- case 4
- case 7
- case 10
- case 12
- case 14
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22
- case 25
- case 28
- case 31
- case 32
- case 33
- case 36
- case 37
- case 39
- case 40
- case 42

### check_fat_all (`0C166086`, 110 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_ze/check_fat_all.json`
- ok
- bad sys
- bad save
- ok 2

### clear_file (`0C165534`, 140 bytes, `src/sdk_zb.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_zb/clear_file.json`
- 3 blocks
- bad chain
- none
- 0 blocks
- 1 block

### close_file_handle (`0C166BA0`, 8 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/close_file_handle.json`
- a
- b

### colliBoxAhead (`0C033588`, 74 bytes, `src/game_p.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_p/colliBoxAhead.json`
- ahead
- behind
- edge
- bit 0

### colliNodeAlloc (`0C032B12`, 32 bytes, `src/game_b.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/game_b/colliNodeAlloc.json`
- first free
- third free
- none (all used)
- last free
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### convert_support (`0C14E8DC`, 34 bytes, `src/sdk_k.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_k/convert_support.json`
- plain
- bit 17
- bits 16 and 17
- all ones
- bit 16
- zero

### copy_device (`0C1619C0`, 66 bytes, `src/sdk_o.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_o/copy_device.json`
- records
- another
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### courseCarType (`0C041EFC`, 64 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/courseCarType.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### courseStatusInit (`0C0420F4`, 162 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/courseStatusInit.json`
- first
- again
- fail
- none
- zero len

### direntry (`0C166B40`, 24 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_b/direntry.json`
- unit 1 entry 3
- entry 0
- unit 0
- entry negative
- unit 7 big entry
- unit 3 entry 1

### discardVertexBuffer (`0C0755F0`, 8 bytes, `src/sdk_e.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_e/discardVertexBuffer.json`
- plain
- other result
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### dropOutCheck (`0C045C36`, 16 bytes, `src/leaf.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/leaf/dropOutCheck.json`
- well above
- well below
- exactly -35000
- just below the line
- just above
- very low
- very high

### drvAccelDot (`0C06FD62`, 10 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/drvAccelDot.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### execAdvSprite (`0C057C88`, 534 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/execAdvSprite.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### execMiniLight (`0C05DEA8`, 160 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/execMiniLight.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### extRand (`0C04981E`, 32 bytes, `src/extrand.c`)
- equivalent on 8 development cases, in `tests/extrand/extRand.json`
- live RAM (arcade, passenger on board, paused)
- live RAM (Total Records screen)

### extRandom (`0C04983E`, 22 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRandom.json`
- live RAM (arcade, passenger on board, paused)
- live RAM (Total Records screen)

### extRandomSeed (`0C049818`, 6 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRandomSeed.json`

### fmMngFormat (`0C170DCC`, 140 bytes, `src/sdk_ze.c`)
- equivalent on 6 development and 2 holdout cases, in `tests/sdk_ze/fmMngFormat.json`
- no state
- bad mode
- refused
- short
- ok
- final err
- mode -1
- ok 0

### fmMngInit (`0C170CC8`, 260 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/fmMngInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 6
- case 7
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 20
- case 22
- case 23
- case 24
- case 25

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

### fmcalccrc (`0C172C00`, 52 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zd/fmcalccrc.json`
- hello
- empty
- bytes

### frameFlip (`0C074370`, 24 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_b/frameFlip.json`
- flag clear
- flag set
- other
- big
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### frame_make (`0C16E8AA`, 256 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/frame_make.json`
- case 0
- case 4
- case 8
- case 11
- case 12
- case 15
- case 17
- case 21
- case 22
- case 23
- case 24
- case 26
- case 28
- case 29
- case 30
- case 33
- case 34
- case 35
- case 37
- case 40
- case 42
- case 44

### fsInit (`0C02E778`, 74 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/fsInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gameState10 (`0C02CCD6`, 32 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/gameState10.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState11 (`0C02CCF6`, 18 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/gameState11.json`
- two
- from 5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState12 (`0C02D40C`, 126 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/gameState12.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState14 (`0C03A220`, 192 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/gameState14.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gameState2 (`0C02CBEA`, 100 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/gameState2.json`
- menu 2
- next
- next 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState3 (`0C02CC4E`, 58 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/gameState3.json`
- counting
- done
- long done
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState4 (`0C02CD08`, 62 bytes, `src/game_f.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_f/gameState4.json`
- sequence
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState8 (`0C02CC88`, 52 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/gameState8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gameState9 (`0C02CCBC`, 26 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/gameState9.json`
- three calls
- from -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gdFsChangeDir (`0C15FFD4`, 24 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/gdFsChangeDir.json`
- a
- b

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

### gdFsCreateDirhn (`0C15FFC8`, 12 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsCreateDirhn.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### gdFsGetDirInfoG (`0C14DA16`, 74 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/gdFsGetDirInfoG.json`
- found 2
- missing
- found 1

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

### gdFsGetNumRd (`0C1605B4`, 22 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsGetNumRd.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdFsGetStat (`0C16059C`, 24 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsGetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdFsGetTransStat (`0C1604F0`, 26 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_b/gdFsGetTransStat.json`
- null
- zero state
- ok
- negative short
- zero value
- ffff
- 7fff

### gdFsInit (`0C14D62E`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdFsLoadDirFast (`0C14E3AC`, 22 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/gdFsLoadDirFast.json`
- null
- object
- other object
- arg zero
- arg minus

### gdFsLoadDirFastG (`0C14D9AA`, 4 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsLoadDirFastG.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdFsMemcpy (`0C15F9AC`, 24 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_z/gdFsMemcpy.json`
- five bytes
- zero
- negative
- one

### gdFsOpen (`0C14E3EE`, 22 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/vt_vtsdk_d/gdFsOpen.json`
- table set
- null table
- other args
- other target

### gdFsOpenFastG (`0C14DB48`, 4 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsOpenFastG.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### gdFsSearchName (`0C15FC1E`, 112 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_ze/gdFsSearchName.json`
- exact found
- loose
- none
- empty
- miss

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

### gdFsTell (`0C1600BE`, 22 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/gdFsTell.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdc_CourseReq (`0C02ECDA`, 250 bytes, `src/gen_v.c`)
- equivalent on 15 development and 5 holdout cases, in `tests/gen_v/gdc_CourseReq.json`
- case 0
- case 4
- case 7
- case 10
- case 14
- case 15
- case 19
- case 21
- case 24
- case 25
- case 31
- case 33
- case 35
- case 41
- case 45
- case 46
- case 50
- case 54
- case 57
- case 58

### gdc_CourseSet (`0C02F8B2`, 414 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/gdc_CourseSet.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdc_FileLoadInitAll (`0C02F162`, 190 bytes, `src/gen_s.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_s/gdc_FileLoadInitAll.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### gdc_SpriteFreeMenu (`0C0301DE`, 264 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/gdc_SpriteFreeMenu.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### gdc_SpriteSetGame (`0C0307D2`, 158 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/gdc_SpriteSetGame.json`
- done
- menu jp
- state 5 en
- menu en
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gdc_StopStreamSongAll (`0C02E15A`, 8 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/gdc_StopStreamSongAll.json`
- stop
- another
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### gdc_StopStreamVoice (`0C02E5BA`, 14 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/gdc_StopStreamVoice.json`
- slot 3
- slot 0

### gdc_StopStreamVoiceAll (`0C02E624`, 34 bytes, `src/game_a.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_a/gdc_StopStreamVoiceAll.json`
- four stops
- zeros
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### getAreaFromPos (`0C0323A8`, 138 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/getAreaFromPos.json`
- first
- wrap
- none
- later
- bad start

### getGoiToolFlag (`0C049878`, 18 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/getGoiToolFlag.json`
- bit set
- bit clear
- mask 0
- several, one set
- high bit
- flags 0

### getNearLineIndexAll (`0C049C4A`, 156 bytes, `src/game_p.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/game_p/getNearLineIndexAll.json`
- 3 courses
- first best
- none close
- one

### getPieceWindow (`0C04E284`, 138 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/getPieceWindow.json`
- case 0
- case 2
- case 5
- case 9
- case 16
- case 17
- case 18
- case 21
- case 22
- case 24
- case 28
- case 30
- case 32
- case 35
- case 38
- case 40
- case 42
- case 43
- case 44
- case 48
- case 50
- case 51

### getReplayPassenger (`0C04BF20`, 210 bytes, `src/gen_af.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_af/getReplayPassenger.json`
- case 9
- case 10
- case 11
- case 12
- case 13
- case 15
- case 16
- case 17
- case 18
- case 19
- case 21
- case 22
- case 24
- case 25
- case 26
- case 27
- case 29
- case 32
- case 34
- case 35
- case 37
- case 38

### getSwitch (`0C02A2FC`, 22 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/getSwitch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### getSystemMetrics (`0C0751C0`, 8 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_d/getSystemMetrics.json`
- returns 0
- returns 12345678
- returns FFFFFFFF
- returns 1
- returns 80000000
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### get_fat (`0C166A8C`, 32 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/get_fat.json`
- drive 1
- drive 0

### hudDraw (`0C052E1C`, 624 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/hudDraw.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### hudDrawTime (`0C054E80`, 382 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/hudDrawTime.json`
- case 0
- case 1
- case 4
- case 7
- case 8
- case 11
- case 13
- case 14
- case 17
- case 18
- case 24
- case 26
- case 31
- case 32
- case 35
- case 39
- case 40
- case 41
- case 42
- case 44
- case 46
- case 47

### hudHidePickUpNag (`0C0535F0`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/leaf/hudHidePickUpNag.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### hudInit (`0C052304`, 96 bytes, `src/game_p.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/game_p/hudInit.json`
- game 2
- menu off
- menu on
- game 1 menu
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### hudShowPickUpNag (`0C0535B0`, 64 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/hudShowPickUpNag.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### hwInit (`0C150014`, 40 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/vt_vtsdk_a/hwInit.json`
- empty table
- one entry
- three entries
- same addr twice
- four
- one other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### initPlayer (`0C02DD56`, 4 bytes, `src/leaf.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/leaf/initPlayer.json`
- nothing happens
- with a register set

### initPlayerADV (`0C02DD4A`, 8 bytes, `src/leaf.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/leaf/initPlayerADV.json`
- word clear
- word set
- other value
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### init_KyakuMain (`0C025FB0`, 162 bytes, `src/game_p.c`)
- equivalent on 4 development and 6 holdout cases, in `tests/game_p/init_KyakuMain.json`
- arcade
- box 10
- orig 1
- noarrow
- cm0 mg15
- box 5
- box 12
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### init_sub (`0C161A02`, 164 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_ze/init_sub.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### isPosInArea (`0C0322CC`, 74 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/isPosInArea.json`
- inside
- outside
- other winding
- edge
- far

### kbCfgIni (`0C167770`, 80 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_ze/kbCfgIni.json`
- set
- blank
- fail
- half blank
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kdDevGetFD (`0C16237A`, 48 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_z/kdDevGetFD.json`
- second set bit
- bit not set
- bit 0
- top bit

### kdDmaEndHandler1 (`0C16194A`, 8 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdDmaEndHandler1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdExecGun (`0C1618D8`, 114 bytes, `src/kaede.c`)
- equivalent on 4 development and 8 holdout cases, in `tests/kaede/kdExecGun.json`
- count0
- count1
- count2
- count5
- count -1
- count 65536
- count 32768
- high buf
- max
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kdGetDevice (`0C162094`, 18 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/kdGetDevice.json`
- 0
- 1
- 3
- 7
- negative
- 100

### kdGetDeviceInfo (`0C1620A6`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetDeviceInfo.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdGetDriverMode (`0C162692`, 110 bytes, `src/sdk_ze.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/sdk_ze/kdGetDriverMode.json`
- 0
- 2
- 4
- 6
- 8
- 1
- 3
- 5
- 7
- 9
- 10
- -1

### kdGetGunLatchedPort (`0C162712`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetGunLatchedPort.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdGetGunPosition (`0C162706`, 12 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetGunPosition.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdGetPortStatus (`0C1620B4`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetPortStatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdGetStatus (`0C1620C2`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetStatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdGetVersion (`0C162368`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdGetVersion.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdIsChanged (`0C16236E`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdIsChanged.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdRecognizeChanged (`0C162374`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdRecognizeChanged.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdSetGunCallback (`0C162720`, 6 bytes, `src/gen_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/gen_a/kdSetGunCallback.json`
- fill ff
- fill 00
- fill a5

### kdSetGunTrigger (`0C162718`, 8 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdSetGunTrigger.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdVbInHandler (`0C161864`, 12 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/kdVbInHandler.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kdVbOverHandler (`0C161952`, 110 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kdVbOverHandler.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmActivateFrameBuffer (`0C15A216`, 446 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmActivateFrameBuffer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmBlankScreen (`0C15928E`, 114 bytes, `src/gen_o.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_o/kmBlankScreen.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmChangeContextClampUV (`0C15E41E`, 30 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmChangeContextClampUV.json`
- mode 3
- mode 0
- mode 7
- mode 1

### kmChangeContextColorClamp (`0C15E4F2`, 78 bytes, `src/sdk_w.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_w/kmChangeContextColorClamp.json`
- on
- off
- on over ones
- off over zero

### kmChangeContextColorType (`0C15E0D6`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/kmChangeContextColorType.json`
- type 2
- type 1

### kmChangeContextCullingMode (`0C15E10C`, 30 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmChangeContextCullingMode.json`
- mode 3
- mode 0
- mode 7
- mode 1 over pattern

### kmChangeContextDepthMode (`0C15E0EE`, 30 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmChangeContextDepthMode.json`
- mode 3
- mode 0
- mode 7
- mode 1 over pattern

### kmChangeContextFilterMode (`0C15E43C`, 62 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_ze/kmChangeContextFilterMode.json`
- 0
- 2
- 1
- 3

### kmChangeContextFlipUV (`0C15E400`, 30 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmChangeContextFlipUV.json`
- mode 3
- mode 0
- mode 7
- mode 1

### kmChangeContextFogMode (`0C15E38E`, 114 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmChangeContextFogMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmChangeContextPaletteBank (`0C15E540`, 56 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmChangeContextPaletteBank.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmChangeContextStripLength (`0C15E578`, 30 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmChangeContextStripLength.json`
- length 2
- length 0
- length 3
- length 7

### kmChangeContextUserClipMode (`0C15E596`, 106 bytes, `src/gen_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/gen_b/kmChangeContextUserClipMode.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3

### kmChangeContextZWriteDisable (`0C15E12A`, 118 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmChangeContextZWriteDisable.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmChangeVertexOffset (`0C14BB30`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/kmChangeVertexOffset.json`
- buffer 2, 16 words
- buffer 0, -1

### kmChangeVertexPCW (`0C14BB48`, 56 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/kmChangeVertexPCW.json`
- a
- b

### kmCreateCombinedTextureSurface (`0C15BC20`, 474 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmCreateCombinedTextureSurface.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmCreateFrameBufferSurface (`0C159740`, 418 bytes, `src/gen_af.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_af/kmCreateFrameBufferSurface.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmCreateTextureSurface (`0C15BBAC`, 68 bytes, `src/gen_l.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_l/kmCreateTextureSurface.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmDiscardVertexBuffer (`0C14BA32`, 54 bytes, `src/sdk_r.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_r/kmDiscardVertexBuffer.json`
- freed ok
- free fails
- another
- negative
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmFreeTexture (`0C15C228`, 36 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmFreeTexture.json`
- type 3: VQ free
- other: free by [7]
- high half ignored
- 0x10003 high bit set: still VQ

### kmGarbageCollectTexture (`0C15C3B4`, 20 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/kmGarbageCollectTexture.json`
- returns 0
- returns 1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmGetCurrentVertexOffset (`0C14BB12`, 30 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/kmGetCurrentVertexOffset.json`
- 16 words
- negative -2 bytes

### kmGetFreeTextureMem (`0C15C280`, 56 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/kmGetFreeTextureMem.json`
- a
- b

### kmGetTexture (`0C15C322`, 146 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_ze/kmGetTexture.json`
- pvr
- type3
- fb flags 0
- direct
- f8
- f32
- low bits 1 high
- type3 hi

### kmInitDevice (`0C158F6C`, 144 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmInitDevice.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmLoadRectangleTexturePart (`0C15BF66`, 204 bytes, `src/gen_z.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_z/kmLoadRectangleTexturePart.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmLoadVQCodebook (`0C15C19E`, 138 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmLoadVQCodebook.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmQueryFinishFlushVertexBuffer (`0C14B85C`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_j/kmQueryFinishFlushVertexBuffer.json`
- done
- running
- other channel, 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmRenderDirect (`0C15B000`, 96 bytes, `src/gen_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/gen_a/kmRenderDirect.json`
- fill ff
- fill 00
- fill a5
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmResetPointer (`0C15BA80`, 256 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmResetPointer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmResetRenderer (`0C14B232`, 110 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/kmResetRenderer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmSetAutoSortMode (`0C14AF84`, 38 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_ze/kmSetAutoSortMode.json`
- same 1
- same 0
- other
- same 5

### kmSetBackGroundPlane (`0C14AF60`, 36 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/kmSetBackGroundPlane.json`
- plane 2
- plane 3
- plane 2, other word

### kmSetBackGroundRenderState (`0C14AEA6`, 148 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_ze/kmSetBackGroundRenderState.json`
- half
- ones
- zero
- mixed

### kmSetBorderColor (`0C14AE96`, 16 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmSetBorderColor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetCheapShadowMode (`0C15E03C`, 96 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmSetCheapShadowMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetColorClampValue (`0C14AC96`, 24 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmSetColorClampValue.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetCullingRegister (`0C14AC7A`, 28 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/kmSetCullingRegister.json`
- 2.5
- -2.5
- 0

### kmSetEORCallback (`0C158ADE`, 28 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/kmSetEORCallback.json`
- callback
- none

### kmSetEndOfVertexCallback (`0C158DCA`, 28 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmSetEndOfVertexCallback.json`
- callback
- none

### kmSetEndOfYUVCallback (`0C158DE6`, 28 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmSetEndOfYUVCallback.json`
- callback
- none

### kmSetFogDensity (`0C14AD78`, 24 bytes, `src/game_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_k/kmSetFogDensity.json`
- 0x1234
- 0
- -1

### kmSetFogTable (`0C14AD10`, 104 bytes, `src/sdk_za.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_za/kmSetFogTable.json`
- ramp
- mixed

### kmSetFogTableColor (`0C14ACAE`, 16 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmSetFogTableColor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetFogVertexColor (`0C14AD00`, 16 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmSetFogVertexColor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetFramebufferTexture (`0C15B980`, 256 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmSetFramebufferTexture.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetGlobalClipping (`0C14AFAA`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/kmSetGlobalClipping.json`
- 640 x 480
- 0 x 0

### kmSetHSyncCallback (`0C158B1C`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_l/kmSetHSyncCallback.json`
- callback set
- none
- another

### kmSetModifierRenderState (`0C15DDC0`, 628 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/kmSetModifierRenderState.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetPALEXTCallback (`0C158E38`, 26 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_s/kmSetPALEXTCallback.json`
- callback
- none

### kmSetPaletteBankData (`0C14AE14`, 130 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmSetPaletteBankData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 11
- case 12
- case 13
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 24
- case 25
- case 27

### kmSetPaletteData (`0C14ADE0`, 52 bytes, `src/sdk_m.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_m/kmSetPaletteData.json`
- 1024 writes
- another

### kmSetPaletteMode (`0C14ADC0`, 32 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmSetPaletteMode.json`
- 2
- 0
- 4: nothing
- -1: nothing

### kmSetPixelClipping (`0C14AFC2`, 170 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmSetPixelClipping.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetStrideWidth (`0C15BB80`, 44 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/kmSetStrideWidth.json`
- width 0x140
- width 0x3FF
- 0
- 0x20

### kmSetStripLength (`0C15E034`, 8 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_s/kmSetStripLength.json`
- 3
- -1

### kmSetStripOverRunCallback (`0C158DAE`, 28 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmSetStripOverRunCallback.json`
- callback
- none

### kmSetTexOverflowCallback (`0C158D92`, 28 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_j/kmSetTexOverflowCallback.json`
- callback
- none

### kmSetUserClipLevelAdjust (`0C14B06C`, 450 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmSetUserClipLevelAdjust.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetVSyncCallback (`0C158AFA`, 34 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmSetVSyncCallback.json`
- callback
- none

### kmSetVertexRenderState (`0C15DAE0`, 698 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/kmSetVertexRenderState.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmSetWaitVsyncCallback (`0C158E02`, 28 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmSetWaitVsyncCallback.json`
- callback
- none

### kmSetWaitVsyncCount (`0C14B2C6`, 10 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmSetWaitVsyncCount.json`
- 2
- 0

### kmUnloadDevice (`0C060D98`, 14 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/kmUnloadDevice.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmUseAnotherModifier (`0C14B2A0`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/sdk_k/kmUseAnotherModifier.json`
- bit 0 set
- bit 0 clear
- 1
- 0
- -1

### kmfSetCommonModifier (`0C15A01E`, 98 bytes, `src/sdk_y.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_y/kmfSetCommonModifier.json`
- off
- aligned
- a misaligned
- b misaligned
- both misaligned
- zero a aligned

### kmfSetFatalErrorCallback (`0C158E1E`, 26 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_s/kmfSetFatalErrorCallback.json`
- callback
- none

### kmfSetTimeOutCount (`0C159EE8`, 188 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmfSetTimeOutCount.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmfSetVertexBufferBaseAddress (`0C159D60`, 12 bytes, `src/sdk_s.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_s/kmfSetVertexBufferBaseAddress.json`
- two
- others

### kmfSetVirticalFilterMode (`0C15A080`, 320 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmfSetVirticalFilterMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiABSalloc (`0C155EE0`, 62 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/kmiABSalloc.json`
- big
- small
- equal

### kmiAddSysConfigFlag (`0C14CB20`, 12 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiAddSysConfigFlag.json`
- or 4
- or 0x80000000

### kmiAllocSysConfig (`0C14C9A0`, 384 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiAllocSysConfig.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiCBalloc (`0C155E74`, 108 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiCBalloc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiCh2DMAtoTA (`0C1558D6`, 138 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiCh2DMAtoTA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiCheckRenderer (`0C157FBE`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiCheckRenderer.json`
- nothing
- nothing again

### kmiConvertUVnum (`0C15D020`, 128 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiConvertUVnum.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiCopyDummyGlobalData (`0C14C480`, 388 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiCopyDummyGlobalData.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22
- case 24

### kmiCopyFromFrameBuffer (`0C159C62`, 36 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmiCopyFromFrameBuffer.json`
- copy and purge
- another

### kmiCopyFromPVRMemory (`0C159B32`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/kmiCopyFromPVRMemory.json`
- offset 0x100
- offset 0x200

### kmiCopyToPVRMemory (`0C159B1C`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/kmiCopyToPVRMemory.json`
- offset 0x100, 16 bytes
- offset 0

### kmiCreateDummyRegionforAvoidCacheBug (`0C15E9C8`, 36 bytes, `src/sdk_k.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_k/kmiCreateDummyRegionforAvoidCacheBug.json`
- offset
- another

### kmiCreateGlobalParameter (`0C15D0C0`, 608 bytes, `src/gen_x.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_x/kmiCreateGlobalParameter.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiDMAHazardReset (`0C155422`, 88 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiDMAHazardReset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiExecuteDMAChain (`0C155700`, 312 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmiExecuteDMAChain.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiFBGarbageCollect (`0C15662E`, 60 bytes, `src/sdk_v.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_v/kmiFBGarbageCollect.json`
- first ok
- first 0, second 7
- both 0
- first -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiFBSortQueue (`0C1565EE`, 64 bytes, `src/sdk_v.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_v/kmiFBSortQueue.json`
- four calls
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiFBallocEx (`0C155CAE`, 210 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmiFBallocEx.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiFinalizeRender (`0C16C51E`, 278 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/kmiFinalizeRender.json`
- case 0
- case 2
- case 4
- case 6
- case 7
- case 8
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 20
- case 21
- case 22
- case 24
- case 25
- case 26
- case 27

### kmiGetNativeRegOBPSize (`0C14C604`, 244 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiGetNativeRegOBPSize.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiGetSysConfigFlag (`0C14CBA8`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/kmiGetSysConfigFlag.json`
- value
- 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiInitCallback (`0C158900`, 88 bytes, `src/sdk_o.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_o/kmiInitCallback.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiInitInterrupt (`0C16BB20`, 80 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiInitInterrupt.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiInitVGA (`0C16DBC0`, 232 bytes, `src/gen_z.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_z/kmiInitVGA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiInitializeBackGroundPlane (`0C15354C`, 96 bytes, `src/sdk_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_p/kmiInitializeBackGroundPlane.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiInitializeDMA (`0C1553C0`, 98 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiInitializeDMA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiInitializeFog (`0C1582E0`, 84 bytes, `src/gen_r.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_r/kmiInitializeFog.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiInitializeHardware (`0C1586BC`, 106 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiInitializeHardware.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiInitializeTA (`0C15F120`, 70 bytes, `src/gen_h.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_h/kmiInitializeTA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiMIPalloc (`0C155F40`, 178 bytes, `src/gen_z.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_z/kmiMIPalloc.json`
- case 0
- case 2
- case 4
- case 5
- case 13
- case 14
- case 16
- case 17
- case 19
- case 29
- case 30
- case 31
- case 32
- case 33
- case 34
- case 36
- case 39
- case 43
- case 45
- case 47
- case 49
- case 50

### kmiProcessVertex_04 (`0C153C40`, 348 bytes, `src/gen_y.c`)
- equivalent on 15 development and 1 holdout cases, in `tests/gen_y/kmiProcessVertex_04.json`
- case 0
- case 4
- case 7
- case 10
- case 14
- case 16
- case 26
- case 27
- case 28
- case 35
- case 36
- case 41
- case 51
- case 54
- case 55
- case 58

### kmiProcessVertex_06 (`0C1540C0`, 696 bytes, `src/gen_af.c`)
- equivalent on 12 development and 0 holdout cases, in `tests/gen_af/kmiProcessVertex_06.json`
- case 0
- case 4
- case 7
- case 10
- case 12
- case 18
- case 26
- case 27
- case 46
- case 50
- case 51
- case 54

### kmiProcessVertex_08 (`0C154640`, 550 bytes, `src/gen_y.c`)
- equivalent on 15 development and 1 holdout cases, in `tests/gen_y/kmiProcessVertex_08.json`
- case 0
- case 4
- case 7
- case 10
- case 15
- case 16
- case 18
- case 23
- case 24
- case 36
- case 40
- case 43
- case 45
- case 47
- case 54
- case 58

### kmiProcessVertex_12 (`0C154D00`, 364 bytes, `src/gen_y.c`)
- equivalent on 12 development and 0 holdout cases, in `tests/gen_y/kmiProcessVertex_12.json`
- case 0
- case 4
- case 7
- case 10
- case 18
- case 25
- case 26
- case 30
- case 33
- case 34
- case 49
- case 59

### kmiProcessVertex_14 (`0C155140`, 550 bytes, `src/gen_af.c`)
- equivalent on 12 development and 0 holdout cases, in `tests/gen_af/kmiProcessVertex_14.json`
- case 0
- case 4
- case 7
- case 10
- case 17
- case 18
- case 19
- case 20
- case 26
- case 34
- case 38
- case 55

### kmiPurgeMemory (`0C159AEE`, 40 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_k/kmiPurgeMemory.json`
- 96 bytes: 4 lines (inclusive end)
- 0 bytes: 1 line
- 31 bytes: 1 line
- 32 bytes: 2 lines

### kmiPutGlobalParam (`0C15E09C`, 58 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiPutGlobalParam.json`
- case 0
- case 4
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 19
- case 20
- case 21
- case 22
- case 23
- case 24
- case 25
- case 26
- case 30

### kmiQueryFinishDMA (`0C155838`, 92 bytes, `src/sdk_za.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_za/kmiQueryFinishDMA.json`
- queued
- done
- second queue
- other id
- empty

### kmiReadRegister (`0C159B16`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiReadRegister.json`
- offset 0xB0
- offset 0x40

### kmiReleaseHardware (`0C1586A0`, 28 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_j/kmiReleaseHardware.json`
- loaded
- not loaded
- loaded, other value
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiReqRestOfDMA (`0C15A400`, 178 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/kmiReqRestOfDMA.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiResetBoard (`0C157FA0`, 30 bytes, `src/sdk_j.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_j/kmiResetBoard.json`
- reset
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmiSetSysConfigFlag (`0C14CBA0`, 8 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiSetSysConfigFlag.json`
- 5
- 0

### kmiTAallocEx (`0C155D80`, 108 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/kmiTAallocEx.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### kmiTXalloc (`0C155E20`, 84 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_ze/kmiTXalloc.json`
- split upper
- split lower
- one pool
- equal

### kmiUnloadDevice (`0C158334`, 4 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiUnloadDevice.json`
- nothing
- nothing again

### kmiWaitForFinishDMA (`0C1558C0`, 22 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/kmiWaitForFinishDMA.json`
- done at once
- done on the third query
- 2 then 1

### kmiWriteRegister (`0C159AE4`, 10 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/kmiWriteRegister.json`
- fog colour register
- offset 0x40

### kmiWriteRegisters (`0C159C86`, 32 bytes, `src/gen_q.c`)
- equivalent on 12 development and 0 holdout cases, in `tests/gen_q/kmiWriteRegisters.json`
- case 0
- case 10
- case 12
- case 13
- case 17
- case 25
- case 31
- case 38
- case 41
- case 42
- case 54
- case 58

### kmtex_GetTextureLevel (`0C15C6A0`, 166 bytes, `src/gen_ah.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ah/kmtex_GetTextureLevel.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### kmyResetTA (`0C15F3EC`, 20 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/kmyResetTA.json`
- reset
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kmytex_FBEnQueueEntry (`0C157416`, 28 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_a/kmytex_FBEnQueueEntry.json`
- empty queue
- nonempty queue
- empty, other layout
- nonempty, other layout
- empty, third layout

### kyakuClearVoiceBit24 (`0C0535A4`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/leaf/kyakuClearVoiceBit24.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kyakuClearVoiceBit26 (`0C053642`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 6 holdout cases, in `tests/leaf/kyakuClearVoiceBit26.json`
- all set
- only that bit
- none
- others set
- pattern
- bit above
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### kyakuCountDest (`0C0200B6`, 12 bytes, `src/leaf.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/leaf/kyakuCountDest.json`
- index 0
- index 3
- index 7
- wraps at 32767
- negative
- index 5

### kyakuMiniGameAreaOk (`0C025C64`, 184 bytes, `src/game_p.c`)
- equivalent on 7 development and 4 holdout cases, in `tests/game_p/kyakuMiniGameAreaOk.json`
- cm 1
- mg 3
- mg 8 bf
- mg 8 no
- mg 10 gs 0
- mg 10 still in
- mg 10 still out
- mg 10 moving
- mg 10 turning
- mg 10 neg
- mg 8 gs 0

### kyakuStopAreaVisible (`0C025BD8`, 116 bytes, `src/game_p.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/game_p/kyakuStopAreaVisible.json`
- mg 10
- mg 8 bf
- mg 8 no
- cm 1 boarding
- cm 1
- cm 2 mg 3
- cm 2 mg 3 free
- mg 14
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Crazy Box 1-1)
- live RAM (Total Records screen)

### memcpy2 (`0C171560`, 20 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/memcpy2.json`
- 3 halfwords
- 0
- 1

### memmove (`0C081414`, 68 bytes, `src/sdk_v.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_v/memmove.json`
- same
- forward (d below s)
- backward (d above s)
- n 0
- apart
- overlap by 1 backward

### memset (`0C081458`, 24 bytes, `src/sdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_b/memset.json`
- n=0
- n=1
- n=13
- value over a byte
- n=32
- negative val
- n=3 odd start

### menuEnterStep (`0C03C048`, 198 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/menuEnterStep.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### menuOpenStep (`0C03BFE2`, 102 bytes, `src/game_l.c`)
- equivalent on 5 development and 7 holdout cases, in `tests/game_l/menuOpenStep.json`
- state 1: 0
- bit clear: 0
- running, p 5
- p reaches 0
- p wraps to 20
- p 15: second q kept
- p 14: second q steps and clamps
- q below 64
- negative p
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### menuPutFrame (`0C03C148`, 38 bytes, `src/gen_d.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_d/menuPutFrame.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### menuPutHelpBar (`0C03C16E`, 84 bytes, `src/game_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_p/menuPutHelpBar.json`
- a
- b

### menuSetMode (`0C03F89A`, 120 bytes, `src/game_p.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/game_p/menuSetMode.json`
- arcade
- original
- box
- box 17
- other
- box 2
- live RAM
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### menuTopHandler (`0C0406F0`, 104 bytes, `src/game_p.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_p/menuTopHandler.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### motionClearRootZ (`0C06B1CC`, 42 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zd/motionClearRootZ.json`
- 3 frames
- none
- 2 frames 3 nodes

### mpdrv_check_port (`0C16F716`, 176 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 4 holdout cases, in `tests/sdk_ze/mpdrv_check_port.json`
- mode1
- mode0
- none under
- none over
- neg byte
- none 0
- live RAM live
- live RAM records

### mpdrv_frame_recv_post (`0C16EBBC`, 22 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/vt_vtsdk_d/mpdrv_frame_recv_post.json`
- basic
- flag was set
- other
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### mpdrv_get_device (`0C16ED60`, 16 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/mpdrv_get_device.json`
- zero
- three
- minus
- big
- other base

### mpdrv_get_portstatus (`0C16ED82`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/mpdrv_get_portstatus.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mpdrv_get_version (`0C16EE5A`, 24 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/mpdrv_get_version.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mpdrv_init_memory (`0C170190`, 12 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/mpdrv_init_memory.json`
- sets
- another
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### mpdrv_memset_l (`0C170170`, 22 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_z/mpdrv_memset_l.json`
- three words
- none
- negative count
- one

### mpdrv_sdckbenable (`0C16F694`, 72 bytes, `src/sdk_y.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_y/mpdrv_sdckbenable.json`
- enable
- x 0x7fff
- x negative

### mpdrv_set_allstatreq_ns (`0C16FE44`, 24 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_allstatreq_ns.json`
- port 1
- port 3

### mpdrv_set_arctrl_ns (`0C170054`, 36 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_arctrl_ns.json`
- a
- b

### mpdrv_set_bread_ns (`0C16FEE0`, 46 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_bread_ns.json`
- a
- b

### mpdrv_set_dkill_ns (`0C16FDBC`, 24 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_dkill_ns.json`
- port 1
- port 3

### mpdrv_set_dreq_ns (`0C16FD78`, 24 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_dreq_ns.json`
- port 1
- port 3

### mpdrv_set_dreset_ns (`0C16FE00`, 24 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_dreset_ns.json`
- port 1
- port 3

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

### mpdrv_set_hreset (`0C170128`, 4 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/mpdrv_set_hreset.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mpdrv_set_hreset_ns (`0C17012C`, 4 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/mpdrv_set_hreset_ns.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mpdrv_set_setcond_ns (`0C170104`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mpdrv_set_setcond_ns.json`
- 1..4
- zero
- negative
- big
- other
- port 2

### mpdrv_set_transagain_ns (`0C170010`, 24 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/mpdrv_set_transagain_ns.json`
- port 1
- port 3

### mpdrv_stat (`0C16EDC4`, 26 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/mpdrv_stat.json`
- same
- other
- zero

### mpdrv_swaplong (`0C1727E4`, 20 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/mpdrv_swaplong.json`
- 2 words
- 1 word

### mwRnaErrEntryFunc (`0C171808`, 30 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/mwRnaErrEntryFunc.json`
- set
- clear
- set 2

### mwRnaFlush (`0C169E04`, 40 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zc/mwRnaFlush.json`
- handle
- null
- already

### mwRnaGetAutoSw (`0C16A8DA`, 42 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_c/mwRnaGetAutoSw.json`
- null
- bit set
- bit clear
- all
- zero
- bit 3 only
- bits 2,0

### mwRnaGetBitPerSmpl (`0C16AC58`, 30 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaGetBitPerSmpl.json`
- null
- value
- negative
- zero

### mwRnaGetDrctLvl (`0C16AD64`, 32 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaGetDrctLvl.json`
- null
- value
- negative
- zero

### mwRnaGetFilter (`0C16ADDA`, 40 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zc/mwRnaGetFilter.json`
- handle
- null
- handle 2

### mwRnaGetFx (`0C16ACE4`, 64 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zc/mwRnaGetFx.json`
- handle
- null
- handle 2

### mwRnaGetNumData (`0C16A904`, 30 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaGetNumData.json`
- null
- value
- negative
- zero

### mwRnaGetNumRoom (`0C16A922`, 34 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaGetNumRoom.json`
- null
- room
- negative
- equal

### mwRnaGetOutVol (`0C16AC94`, 32 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaGetOutVol.json`
- null
- value
- negative
- zero

### mwRnaGetPitch (`0C16AD24`, 64 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zc/mwRnaGetPitch.json`
- handle
- null
- handle 2

### mwRnaGetPlaySw (`0C16A8B2`, 40 bytes, `src/sdk_x.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_x/mwRnaGetPlaySw.json`
- null
- byte1 00
- byte1 07
- byte1 ff
- byte1 02
- byte1 04
- byte1 01
- byte1 85

### mwRnaGetSfreq (`0C16AC76`, 30 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/mwRnaGetSfreq.json`
- null
- 44100
- zero
- negative
- 48000
- big

### mwRnaGetStat (`0C16A86C`, 32 bytes, `src/sdk_x.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_x/mwRnaGetStat.json`
- null
- byte1 00
- byte1 07
- byte1 ff
- byte1 02
- byte1 04
- byte1 01
- byte1 85

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

### mwRnaIsPause (`0C16A738`, 32 bytes, `src/sdk_x.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_x/mwRnaIsPause.json`
- null
- set
- clear
- byte 0x80

### mwRnaSetSfreq (`0C16AA42`, 58 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_b/mwRnaSetSfreq.json`
- null object
- ok
- zero freq
- negative
- other freq
- null other freq

### mwRnaSetStartSmpl (`0C16A9CA`, 32 bytes, `src/sdk_zc.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_zc/mwRnaSetStartSmpl.json`
- handle
- null
- handle 2

### mwRnaSetupSnd (`0C169B0E`, 10 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/mwRnaSetupSnd.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mwRnaStop (`0C169DB4`, 80 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_ze/mwRnaStop.json`
- playing
- stopped
- null
- playing 2

### mwlRnaAddFlshPos (`0C16A088`, 48 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/mwlRnaAddFlshPos.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mwlRnaAlloc (`0C169B98`, 40 bytes, `src/sdk_p.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_p/mwlRnaAlloc.json`
- first free
- third
- none
- last
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### mwlRnaInsrtSlntDat (`0C16A3F2`, 210 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/mwlRnaInsrtSlntDat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### mwlRnaIsCopyEnd (`0C169E6A`, 142 bytes, `src/game_p.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/game_p/mwlRnaIsCopyEnd.json`
- idle
- both done
- second not
- first not
- one chan
- none

### mwlRnaSetInitMember (`0C169B4C`, 76 bytes, `src/sdk_p.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_p/mwlRnaSetInitMember.json`
- init
- another

### mwlSbAlloc (`0C171934`, 38 bytes, `src/sdk_w.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_w/mwlSbAlloc.json`
- first free
- third
- none
- last
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### mwlSbGetPitch (`0C17209E`, 14 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/mwlSbGetPitch.json`
- two
- others

### ndPuru2Reset (`0C05F42C`, 56 bytes, `src/sdk_z.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_z/ndPuru2Reset.json`
- mode 2 pack
- mode 2 no pack
- mode 1
- mode 2 pack first try

### ndPuru2Start (`0C05F004`, 118 bytes, `src/game_p.c`)
- equivalent on 6 development and 4 holdout cases, in `tests/game_p/ndPuru2Start.json`
- 28
- 24
- 16
- blocked
- off
- menu
- mode lim
- mode lim no
- sub 2
- other mask

### nd_Init_Puru2 (`0C05EEF4`, 116 bytes, `src/game_k.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/game_k/nd_Init_Puru2.json`
- init
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### njSetConstantAttr (`0C168040`, 10 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/njSetConstantAttr.json`
- two
- others

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

### nlArcTan (`0C0759B0`, 134 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/nlArcTan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlCommonTextureClearTextureIndex (`0C073CA0`, 36 bytes, `src/nltex.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/nltex/nlCommonTextureClearTextureIndex.json`
- index 37
- index -1: nothing
- index 31

### nlCommonTextureGetNextTextureIndex (`0C073C20`, 126 bytes, `src/nltex.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/nltex/nlCommonTextureGetNextTextureIndex.json`
- first word full, second has bit 3 free
- all full: -1
- empty: index 0
- third word, bit 31
- no words: -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlCot (`0C075BC0`, 96 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/nlCot.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlCreateTextureParam (`0C073EF0`, 38 bytes, `src/nltex.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/nltex/nlCreateTextureParam.json`
- surface accepted: nlCreateTextureParamA
- surface refused: the dummy texture's TSP bits and TCW
- surface 3 refused (error -2)

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

### nlDispStripLoadPalette (`0C0806A0`, 160 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlDispStripLoadPalette.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlDispStripX (`0C080790`, 112 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/nlDispStripX.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlExecuteEvent (`0C029702`, 38 bytes, `src/nlevent.c`)
- equivalent on 4 development and 5 holdout cases, in `tests/nlevent/nlExecuteEvent.json`
- empty list
- one event
- three events
- stale next-to-run
- two events
- five events
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlFloor (`0C075CA0`, 70 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/nlFloor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlFogDensityF (`0C076B50`, 66 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_ze/nlFogDensityF.json`
- 1.0
- 3.5
- 0.25
- 100.0
- 0.0078125
- 1.75

### nlFogTableColor (`0C076AF0`, 58 bytes, `src/game_p.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/game_p/nlFogTableColor.json`
- a
- b
- c

### nlFogTableOff (`0C076AC0`, 48 bytes, `src/sdk_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_a/nlFogTableOff.json`
- call
- call with r4
- another

### nlFogTableSet (`0C076B40`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/nlFogTableSet.json`
- table
- another table

### nlFraction (`0C075CF0`, 54 bytes, `src/gen_aj.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_aj/nlFraction.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlFreePalette (`0C074070`, 110 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlFreePalette.json`
- case 0
- case 2
- case 4
- case 6
- case 8
- case 9
- case 10
- case 11
- case 12
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22
- case 23
- case 25
- case 26
- case 28

### nlFreePaletteAll (`0C074060`, 16 bytes, `src/sdk_a.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_a/nlFreePaletteAll.json`
- normal
- zero
- negative short
- big
- sign bit
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlFreeTextureAll (`0C073F20`, 100 bytes, `src/nltex.c`)
- equivalent on 1 development and 5 holdout cases, in `tests/nltex/nlFreeTextureAll.json`
- 3 surfaces: in use, refused, unused
- 2 surfaces both in use
- no surfaces
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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
- equivalent on 4 development and 5 holdout cases, in `tests/nlevent/nlInitEvent.json`
- empty list
- one event
- three events
- events with extra blocks
- five events
- one event with three blocks
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlInitPrint (`0C0764D0`, 136 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/nlInitPrint.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlIntrGetEvent (`0C07B7C0`, 112 bytes, `src/gen_b.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/gen_b/nlIntrGetEvent.json`
- pattern ff
- pattern 00
- pattern a5
- pattern 3c
- pattern c3
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlInvLightVector (`0C07B220`, 50 bytes, `src/nlobjput.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/nlobjput/nlInvLightVector.json`
- the five calls
- other registers

### nlInvLightVectorUseViewMatrix (`0C07B260`, 122 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/nlInvLightVectorUseViewMatrix.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlLdexpf (`0C075D70`, 168 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/nlLdexpf.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlLineSetDiv (`0C07B9F0`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/nlLineSetDiv.json`
- 2.5
- -1

### nlLineSetThickness (`0C07BA00`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/nlLineSetThickness.json`
- 2.5
- -1

### nlLoadDummyTexture (`0C073FA0`, 40 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_c/nlLoadDummyTexture.json`
- 8x8
- 64x32
- negative short
- 256x256
- zero
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlLoadTextureMem (`0C073940`, 126 bytes, `src/nltex.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/nltex/nlLoadTextureMem.json`
- accepted, no callback
- refused by Kamui: 1, no load
- callback gives another address
- callback returns 0: data kept

### nlLocate (`0C0769A0`, 136 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/nlLocate.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlLog (`0C075E20`, 106 bytes, `src/gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_m/nlLog.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlMakeModelProjectMatrix_objput (`0C07B420`, 16 bytes, `src/nlobjput.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/nlobjput/nlMakeModelProjectMatrix_objput.json`
- push, load
- again, other registers

### nlMakeModelViewProjectMatrix_objput (`0C07B430`, 24 bytes, `src/nlobjput.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/nlobjput/nlMakeModelViewProjectMatrix_objput.json`
- push, multiply by the matrix at *(0C2B31F4 + 8)
- another matrix pointer
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlObjPutLoadTextureCallBack (`0C07B940`, 12 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/nlObjPutLoadTextureCallBack.json`
- a value
- 0

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

### nlObjPutSetLightDirectionV (`0C07AE00`, 66 bytes, `src/gen_g.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_g/nlObjPutSetLightDirectionV.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlObjPutSetReplaceTextureDirName (`0C07DAF0`, 70 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_e/nlObjPutSetReplaceTextureDirName.json`
- no entries
- one entry
- three entries
- results or together
- all zero
- four

### nlObjPutSetVtxColorMode (`0C07AF90`, 44 bytes, `src/nlobjput.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/nlobjput/nlObjPutSetVtxColorMode.json`
- 0
- 1
- 2
- 3: unchanged
- -1: unchanged

### nlObjPutTrnsl (`0C07AD30`, 52 bytes, `src/nlobjput.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/nlobjput/nlObjPutTrnsl.json`
- word 1 bit 1 clear: lights first
- word 1 bit 1 set: no lights
- word 1 = 2

### nlObjPutUseViewMatrix (`0C07AD00`, 34 bytes, `src/nlobjput.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/nlobjput/nlObjPutUseViewMatrix.json`
- second word 1: lights set up
- second word 3 (bit 1): no light set-up
- second word 2, first word 0
- second word 0

### nlObjPutUseViewMatrixTrnsl (`0C07AD70`, 44 bytes, `src/nlobjput.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/nlobjput/nlObjPutUseViewMatrixTrnsl.json`
- word 1 bit 1 clear: lights first
- word 1 bit 1 set: no lights
- word 1 = 2

### nlOuterProduct (`0C078B00`, 52 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlOuterProduct.json`
- x cross y
- y cross z
- general ints
- parallel
- fractions
- negatives

### nlPrintColor (`0C076A30`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/nlPrintColor.json`
- FFFF0000
- 0

### nlPrintMonitorMode (`0C076560`, 16 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_b/nlPrintMonitorMode.json`
- 0
- 2
- -1
- large

### nlPrintSetOpaqueMode (`0C076570`, 176 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/nlPrintSetOpaqueMode.json`
- x 0
- x 1
- x neg
- x 5 zeros
- x 0 mixed

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

### nlPrintf (`0C076A40`, 60 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/nlPrintf.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlPrnIndentOff (`0C076820`, 16 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_g/nlPrnIndentOff.json`
- bit 0 set
- bit 0 clear
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlPrnIndentOn (`0C076810`, 10 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_c/nlPrnIndentOn.json`
- clear
- set
- other bits
- all
- bit 1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlRand (`0C075F70`, 30 bytes, `src/sdk_g.c`)
- equivalent on 2 development and 5 holdout cases, in `tests/sdk_g/nlRand.json`
- seed 1
- seed 0
- seed FFFFFFFF
- seed 12345678
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlRandom (`0C075F90`, 22 bytes, `src/sdk_g.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_g/nlRandom.json`
- 32767
- 0
- 1234
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### nlRandomSeed (`0C075FB0`, 6 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/nlRandomSeed.json`
- 1
- 0xDEADBEEF

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

### nlRenderTextureFree (`0C076DB0`, 156 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/nlRenderTextureFree.json`
- case 0
- case 1
- case 2
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 21
- case 22
- case 23
- case 24
- case 25

### nlRenderTextureFreeAll (`0C076E50`, 96 bytes, `src/game_p.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_p/nlRenderTextureFreeAll.json`
- 3
- 0
- 1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlRenderTextureSet_Stride (`0C076BF0`, 16 bytes, `src/sdk_g.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_g/nlRenderTextureSet_Stride.json`
- four arguments, then 0
- others

### nlRotate (`0C0783E0`, 54 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlRotate.json`
- x axis
- mixed
- negative
- zero vec
- large

### nlRoundOff (`0C075FC0`, 86 bytes, `src/gen_ai.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ai/nlRoundOff.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlSearchPalette (`0C074140`, 190 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlSearchPalette.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlSec (`0C076070`, 48 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/nlSec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlSetCommonTextureOffset (`0C073AC0`, 6 bytes, `src/nltex.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/nltex/nlSetCommonTextureOffset.json`
- 1938
- 0

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

### nlSetScaleFactor (`0C079EA0`, 6 bytes, `src/nlobjput.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/nlobjput/nlSetScaleFactor.json`
- 2.0
- -0.5

### nlSetTextureParameter (`0C073E00`, 38 bytes, `src/nltex.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/nltex/nlSetTextureParameter.json`
- surface 2: TSP keeps its top bits, takes the size; TCW replaced
- surface 0, other bits

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

### nlSinh (`0C076140`, 96 bytes, `src/gen_aj.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_aj/nlSinh.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlSpriteClearSpriteIndex (`0C07E7B0`, 30 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_d/nlSpriteClearSpriteIndex.json`
- index 0
- index 33
- index 31
- index 255 pattern
- already clear
- index 100

### nlSpriteF2C (`0C07E7D0`, 50 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlSpriteF2C.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlSpriteFreeTexture (`0C07DE30`, 64 bytes, `src/sdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_a/nlSpriteFreeTexture.json`
- empty
- one
- three or
- zeros
- four
- minus one first entry only

### nlSpriteFreeTextureGI (`0C07DE80`, 80 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/nlSpriteFreeTextureGI.json`
- three
- none
- one

### nlSpriteGetImaginaryScreenSize (`0C07DEF0`, 16 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/nlSpriteGetImaginaryScreenSize.json`
- 640x480
- square
- zero
- negative
- wide

### nlSpriteGetNextSpriteIndex (`0C07E700`, 162 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/nlSpriteGetNextSpriteIndex.json`
- case 0
- case 4
- case 6
- case 7
- case 10
- case 14
- case 16
- case 18
- case 23
- case 25
- case 26
- case 27
- case 28
- case 29
- case 32
- case 34
- case 38
- case 40
- case 41
- case 43
- case 44
- case 46

### nlSpriteSetImaginaryScreenSize (`0C07DED0`, 24 bytes, `src/sdk_b.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_b/nlSpriteSetImaginaryScreenSize.json`
- 640x480
- 2x4
- 1x1
- wide
- fractions

### nlSpriteSetVtxContext (`0C07E690`, 106 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlSpriteSetVtxContext.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlTan (`0C076360`, 136 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlTan.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### nlTanh (`0C0763F0`, 160 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/nlTanh.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlTriPutSetAttribCulling (`0C07A980`, 32 bytes, `src/sdk_k.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_k/nlTriPutSetAttribCulling.json`
- v 1
- v 0
- v 3
- v 2 over a pattern
- v 7 (masked)

### nlTriPutSetAttribFaceColor (`0C07A8D0`, 22 bytes, `src/sdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_e/nlTriPutSetAttribFaceColor.json`
- white
- channels
- zero
- negative
- large

### nlTriPutSetAttribGouraud (`0C07A9A0`, 32 bytes, `src/sdk_k.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_k/nlTriPutSetAttribGouraud.json`
- v 1
- v 0
- v 3
- v 2 over a pattern
- v 7 (masked)

### nlTriPutSetAttribOffsetColor (`0C07A8B0`, 32 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlTriPutSetAttribOffsetColor.json`
- white
- channels
- zero
- negative
- large

### nlTriPutSetAttribPointNum (`0C07A810`, 80 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/nlTriPutSetAttribPointNum.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### nlTriPutSetPoint (`0C07AA20`, 76 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/nlTriPutSetPoint.json`
- a
- b

### nlTriPutTextureInit (`0C07A5D0`, 42 bytes, `src/sdk_d.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_d/nlTriPutTextureInit.json`
- basic
- zero args
- pointer tex
- other seed
- v 5

### nlobjput_sub (`0C07B340`, 64 bytes, `src/nlobjput.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/nlobjput/nlobjput_sub.json`
- first word 0
- first word 1
- first word 2: only the pop
- first word -1

### nlobjput_sub_trnsl (`0C07B3B0`, 64 bytes, `src/nlobjput.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/nlobjput/nlobjput_sub_trnsl.json`
- first word 0
- first word 1
- first word 5: only the pop
- first word -1

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
- equivalent on 4 development and 5 holdout cases, in `tests/sdk_b/nlsndG2DmaHandleOpen.json`
- all free
- first two used
- last free
- all used
- gap
- only last used
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### nlsndStreamSetHdOctFns (`0C07FEB0`, 16 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_h/nlsndStreamSetHdOctFns.json`
- oct 3, fns 0x155
- oct -1 (0xFFFF), fns 0
- oct 0x10005 (short 5), fns 0x7FF

### nlsndStreamSetHdPan (`0C07FF30`, 12 bytes, `src/vt_vtsdk_b.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/vt_vtsdk_b/nlsndStreamSetHdPan.json`
- i=0
- i=3
- i=-1
- v wider than a byte
- i high bits set
- i=15 v negative
- i=-8

### nlstripSetVertexContext (`0C080910`, 122 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/nlstripSetVertexContext.json`
- case 0
- case 4
- case 7
- case 10
- case 12
- case 16
- case 18
- case 23
- case 24
- case 26
- case 27
- case 28
- case 33
- case 34
- case 36
- case 38
- case 39
- case 41
- case 42
- case 43
- case 45
- case 47

### open_file_handle (`0C166B72`, 46 bytes, `src/sdk_o.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sdk_o/open_file_handle.json`
- first free
- third free
- none free: error
- no handles
- first used byte 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### ovInit (`0C14CD6A`, 10 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/ovInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### ovLibDeleteTbl (`0C14CE54`, 134 bytes, `src/sg_ov.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sg_ov/ovLibDeleteTbl.json`
- none
- first
- middle
- last

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

### p2_cache_set (`0C14FFFA`, 26 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/p2_cache_set.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### padPortAConnected (`0C040DC8`, 30 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/padPortAConnected.json`
- connected
- not
- high word
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### padReadSlot (`0C029C42`, 60 bytes, `src/game_p.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_p/padReadSlot.json`
- slot 0
- slot 1
- slot 2
- slot 7

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

### pcarEnd (`0C045C00`, 54 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/pcarEnd.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### pcarSpawn (`0C041F3C`, 324 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/pcarSpawn.json`
- case 0
- case 4
- case 8
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 22
- case 23
- case 25
- case 26
- case 28
- case 29
- case 30
- case 31
- case 32
- case 35
- case 36
- case 37
- case 38

### pdExecPeripheralServer (`0C14E982`, 12 bytes, `src/sg_pad.c`)
- equivalent on 2 development and 6 holdout cases, in `tests/sg_pad/pdExecPeripheralServer.json`
- zero
- one
- -1
- min
- 256
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### pdExitPeripheral (`0C14EAAC`, 72 bytes, `src/sg_pad.c`)
- equivalent on 3 development and 7 holdout cases, in `tests/sg_pad/pdExitPeripheral.json`
- active=0
- active=1
- active=0
- active=ffffffff
- active=100
- active=80000000
- active=2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### pdGetMode (`0C14EB14`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGetMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGetOptimize (`0C14EB26`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGetOptimize.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGetPeripheralInfo (`0C14EAFE`, 10 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/vt_vtsdk_e/pdGetPeripheralInfo.json`
- zero
- two
- minus
- big
- ret minus

### pdGunCheck (`0C14EB88`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGunCheck.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGunEnter (`0C14EB3E`, 36 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGunEnter.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGunGetFlashColor (`0C14EBA0`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGunGetFlashColor.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGunGetPosition (`0C14EB8E`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGunGetPosition.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGunLeave (`0C14EB62`, 38 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdGunLeave.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdGunSetFlashColor (`0C14EB94`, 12 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/pdGunSetFlashColor.json`
- a
- b

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

### pdInitPeripheral (`0C14E58C`, 158 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/pdInitPeripheral.json`
- with driver
- no driver
- b only

### pdSetMode (`0C14EB08`, 12 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/pdSetMode.json`
- a
- b

### pdSetOptimize (`0C14EB1A`, 12 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/pdSetOptimize.json`
- a
- b

### pdSetThreshold (`0C14EB34`, 10 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/pdSetThreshold.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pdVibGetInfo (`0C151720`, 60 bytes, `src/vt_vtsdk_e.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/vt_vtsdk_e/pdVibGetInfo.json`
- ok
- positive
- negative
- zero ret
- ret min
- other dev

### pdVibIsReady (`0C15155C`, 38 bytes, `src/sdk_k.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_k/pdVibIsReady.json`
- bit set
- bit clear
- only that bit

### pdVibSetStopTime (`0C151582`, 180 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/pdVibSetStopTime.json`
- case 0
- case 2
- case 3
- case 4
- case 5
- case 7
- case 9
- case 12
- case 15
- case 17
- case 18
- case 20
- case 22
- case 23
- case 24
- case 26
- case 27
- case 28
- case 29
- case 33
- case 37
- case 38

### pdVibSetUnitInfo (`0C15175C`, 204 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/pdVibSetUnitInfo.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### pedPickIdle (`0C050284`, 114 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/pedPickIdle.json`
- special
- special 4
- plain
- wrap
- plain wrap

### pedStand (`0C050264`, 32 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/pedStand.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### pfColor (`0C03102A`, 12 bytes, `src/game_a.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/game_a/pfColor.json`
- four
- others

### pfLocate (`0C030FA2`, 30 bytes, `src/game_m.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_m/pfLocate.json`
- flag clear
- flag set
- negative flag

### pfPuts (`0C031390`, 24 bytes, `src/game_a.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_a/pfPuts.json`
- three chars
- empty
- one

### pfSetFont (`0C030F0C`, 150 bytes, `src/gen_ae.c`)
- equivalent on 13 development and 0 holdout cases, in `tests/gen_ae/pfSetFont.json`
- case 0
- case 4
- case 6
- case 7
- case 9
- case 11
- case 16
- case 19
- case 30
- case 31
- case 38
- case 47
- case 51

### pfSetZ (`0C030FC0`, 46 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_z/pfSetZ.json`
- z 2
- z 0
- z negative
- z 0.5

### pfSize (`0C030FEE`, 44 bytes, `src/game_m.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_m/pfSize.json`
- flag clear
- flag set
- other

### pointEventGet (`0C042398`, 28 bytes, `src/game_b.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_b/pointEventGet.json`
- set
- clear
- index 0

### psgEnterState1 (`0C06B724`, 684 bytes, `src/gen_ad.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ad/psgEnterState1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### psgFrameState0 (`0C06E2D8`, 232 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/psgFrameState0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### psgFrameState5 (`0C0706DC`, 386 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/psgFrameState5.json`
- case 0
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22

### psgPlayBlend (`0C071198`, 136 bytes, `src/game_p.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/game_p/psgPlayBlend.json`
- zero
- mid
- end
- start
- last

### psgPutShadow (`0C070F04`, 54 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/psgPutShadow.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### psgSeatMatrix (`0C070F7C`, 204 bytes, `src/gen_aa.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_aa/psgSeatMatrix.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### psgSetCurrent (`0C06E246`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/psgSetCurrent.json`
- value 0
- value 209715200
- value 202519632
- value 4294967295
- value 7

### rankingInsert (`0C0533F2`, 200 bytes, `src/gen_y.c`)
- equivalent on 15 development and 4 holdout cases, in `tests/gen_y/rankingInsert.json`
- case 0
- case 14
- case 16
- case 17
- case 21
- case 25
- case 27
- case 28
- case 30
- case 32
- case 35
- case 39
- case 40
- case 44
- case 45
- case 46
- case 49
- case 57
- case 58

### read_dir (`0C166274`, 110 bytes, `src/sdk_zb.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_zb/read_dir.json`
- chain of 3
- read fails
- limit reached
- none

### read_sys (`0C1666FE`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/read_sys.json`
- drive 1
- drive 0

### rinRandomSeed (`0C06B0C8`, 6 bytes, `src/leaf.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/leaf/rinRandomSeed.json`
- value 0
- value 1
- value 305419896
- value 4294967295
- value 2147483648

### rtcGetSeconds (`0C03AC42`, 32 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_ze/rtcGetSeconds.json`
- a
- b
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### saveBufferInit (`0C03AC20`, 34 bytes, `src/gen_e.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_e/saveBufferInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### search_exec_file (`0C166692`, 62 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_zd/search_exec_file.json`
- found
- none
- past limit
- first

### search_fat_free_xross (`0C1669B0`, 70 bytes, `src/sdk_zd.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/sdk_zd/search_fat_free_xross.json`
- first ok
- none
- one crossing
- two crossings then none

### search_free_dir (`0C1666D0`, 46 bytes, `src/sdk_zd.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_zd/search_free_dir.json`
- third
- none
- past limit
- first

### search_subst_fat_top (`0C166816`, 126 bytes, `src/sdk_zb.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_zb/search_subst_fat_top.json`
- first run fits
- none
- second try
- n 1
- n 0

### setBorderColor (`0C074A10`, 26 bytes, `src/sdk_c.c`)
- equivalent on 3 development and 2 holdout cases, in `tests/sdk_c/setBorderColor.json`
- rgb
- already opaque
- zero
- half alpha
- all ones

### setObjGroupExec (`0C038148`, 320 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ac/setObjGroupExec.json`
- case 0
- case 2
- case 4
- case 6
- case 8
- case 11
- case 13
- case 16
- case 17
- case 19
- case 24
- case 27
- case 29
- case 30
- case 31
- case 36
- case 37
- case 39
- case 43
- case 45
- case 46
- case 49

### setObjGroupOpen (`0C038288`, 114 bytes, `src/gen_ac.c`)
- equivalent on 15 development and 4 holdout cases, in `tests/gen_ac/setObjGroupOpen.json`
- case 0
- case 5
- case 9
- case 11
- case 12
- case 24
- case 26
- case 27
- case 29
- case 30
- case 35
- case 36
- case 37
- case 39
- case 43
- case 49
- case 50
- case 51
- case 57

### setObjPieceExec (`0C0385AC`, 54 bytes, `src/game_p.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/game_p/setObjPieceExec.json`
- high
- low
- edge

### setObjPieceExecSleep (`0C0385E2`, 86 bytes, `src/game_p.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/game_p/setObjPieceExecSleep.json`
- high
- slow 5
- fast 5
- kind 3
- kind 5 edge

### setObjPlace (`0C037FEC`, 348 bytes, `src/gen_ab.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_ab/setObjPlace.json`
- case 0
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 17
- case 18
- case 19
- case 20
- case 21
- case 22
- case 23
- case 24

### set_event (`0C029586`, 74 bytes, `src/nlevent.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/nlevent/set_event.json`
- empty list
- one event
- size below 20
- allocation fails
- three events
- size 19
- size 20, fails, empty list

### set_vmstime (`0C166CB8`, 134 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/set_vmstime.json`
- a
- b

### stopingCarSpawn (`0C0420B0`, 68 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/stopingCarSpawn.json`
- case 0
- case 4
- case 7
- case 9
- case 11
- case 13
- case 14
- case 16
- case 17
- case 18
- case 20
- case 22
- case 23
- case 25
- case 27
- case 29
- case 30
- case 31
- case 32
- case 34
- case 35
- case 36

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

### strncmp (`0C081494`, 62 bytes, `src/sdk_v.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_v/strncmp.json`
- equal
- differ
- both end early
- n 0
- unsigned bytes
- limit before difference
- a shorter

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
- equivalent on 4 development and 8 holdout cases, in `tests/sg_sybt/syBtExit.json`
- a1 b1
- a1 b0
- a0
- a0 b1
- a1 b2
- a2 b1
- a255 b255
- a1 b255
- a0x101? 
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syCblCheck (`0C150226`, 70 bytes, `src/sg_sycbl.c`)
- equivalent on 5 development and 10 holdout cases, in `tests/sg_sycbl/syCblCheck.json`
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
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syCblCheckBroadcast (`0C1501EC`, 58 bytes, `src/sg_sycbl.c`)
- equivalent on 4 development and 8 holdout cases, in `tests/sg_sycbl/syCblCheckBroadcast.json`
- '1'
- '2'
- '3'
- '0'
- 0
- '4'
- 0xff
- 0xb1
- 47
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syCblCheckCable (`0C162DDC`, 18 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syCblCheckCable.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCblCheckCableType (`0C162DEE`, 12 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syCblCheckCableType.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgConvLang (`0C15137E`, 6 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_h/syCfgConvLang.json`
- '3'
- 0

### syCfgExit (`0C1512C6`, 10 bytes, `src/sdk_h.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_h/syCfgExit.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syCfgGetBroadcastType (`0C15140C`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/syCfgGetBroadcastType.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetCountryCode (`0C151354`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/syCfgGetCountryCode.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetDefaultLanguage (`0C1513E2`, 42 bytes, `src/sdk_l.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_l/syCfgGetDefaultLanguage.json`
- block: byte (negative) stored
- no block
- null pointer
- another block

### syCfgGetIDAddress (`0C15147C`, 26 bytes, `src/sdk_j.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_j/syCfgGetIDAddress.json`
- ok
- failed
- failed -1
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syCfgGetIndividualID (`0C151436`, 70 bytes, `src/gen_o.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_o/syCfgGetIndividualID.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgGetLanguage (`0C151384`, 94 bytes, `src/gen_m.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_m/syCfgGetLanguage.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgGetSoundMode (`0C151306`, 78 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/syCfgGetSoundMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syCfgIIDCheckSum (`0C1514B8`, 68 bytes, `src/sdk_q.c`)
- equivalent on 3 development and 4 holdout cases, in `tests/sdk_q/syCfgIIDCheckSum.json`
- valid
- bad sum
- bad complement
- all zero: sum 0 compl ff
- zeros wrong
- wrapping sum
- wrapping, wrong

### syCfgInit (`0C1512B4`, 18 bytes, `src/sdk_i.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_i/syCfgInit.json`
- work
- null: -1
- another work

### syCfgSetSoundMode (`0C1512D0`, 54 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 1 holdout cases, in `tests/sdk_ze/syCfgSetSoundMode.json`
- stereo
- mono fails
- bad
- no cfg
- mono

### syG2DmaReset (`0C16E3B8`, 198 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/syG2DmaReset.json`
- case 0
- case 4
- case 7
- case 10
- case 12
- case 13
- case 19
- case 20
- case 31
- case 35
- case 37
- case 39
- case 40
- case 41
- case 42
- case 44
- case 45
- case 47
- case 48
- case 49
- case 50
- case 52

### syG2DmaResume (`0C172790`, 26 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/syG2DmaResume.json`
- slot 1
- slot 0
- slot 2

### syG2DmaResumeAll (`0C16E484`, 52 bytes, `src/sdk_z.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_z/syG2DmaResumeAll.json`
- table at 0C800000
- table at 0C810010
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syG2DmaSetProtect (`0C16E4C8`, 40 bytes, `src/sdk_p.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/sdk_p/syG2DmaSetProtect.json`
- two addresses
- masked
- zero
- mixed
- low bits

### syG2DmaSuspendAll (`0C16E500`, 52 bytes, `src/sdk_z.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_z/syG2DmaSuspendAll.json`
- table at 0C800000
- table at 0C810010
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syHwFinish (`0C14FFAE`, 60 bytes, `src/sg_syhw.c`)
- equivalent on 3 development and 5 holdout cases, in `tests/sg_syhw/syHwFinish.json`
- mask 0
- mask 15
- mask 7, T and S set
- mask 3, M and Q set
- mask 12
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syHwInit2 (`0C14FF9E`, 16 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syHwInit2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syMallocChangeIF (`0C14F58A`, 20 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syMallocChangeIF.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### syMmuDeleteAllEntries (`0C160F36`, 70 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_ze/syMmuDeleteAllEntries.json`
- list
- list 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### syRtcAicaGetCount (`0C14FDA8`, 92 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_ze/syRtcAicaGetCount.json`
- ok
- fail
- high bits

### syRtcAicaSetDateHi (`0C14FE52`, 38 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/syRtcAicaSetDateHi.json`
- a
- b

### syRtcAicaSetDateLo (`0C14FE2C`, 38 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/syRtcAicaSetDateLo.json`
- a
- b

### syRtcAicaSetWriteFlag (`0C14FE04`, 40 bytes, `src/sdk_zc.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zc/syRtcAicaSetWriteFlag.json`
- a
- b

### syRtcDbgSetLogAddr (`0C14FF34`, 20 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcDbgSetLogAddr.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syRtcExecServer (`0C14F9B0`, 42 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcExecServer.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syRtcFinish (`0C14F9A2`, 14 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcFinish.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

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

### syRtcGetStat (`0C14FA98`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcGetStat.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syRtcInit (`0C14F978`, 42 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcInit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syRtcMakeAgeOfMoon (`0C14FEB4`, 72 bytes, `src/sdk_ze.c`)
- equivalent on 2 development and 3 holdout cases, in `tests/sdk_ze/syRtcMakeAgeOfMoon.json`
- after
- before
- exact
- zero
- max

### syRtcMakeDayOfWeek (`0C14FE78`, 60 bytes, `src/sdk_ze.c`)
- equivalent on 3 development and 3 holdout cases, in `tests/sdk_ze/syRtcMakeDayOfWeek.json`
- (2000, 1, 1)
- (1999, 12, 31)
- (2024, 2, 29)
- (1998, 11, 27)
- (2001, 3, 1)
- (0, 0, 0)

### syRtcSetDate (`0C14FA40`, 82 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_ze/syRtcSetDate.json`
- ok
- ticked
- wrong
- flag fails
- hi fails
- lo fails

### syRtcSetServerMode (`0C14FA92`, 6 bytes, `src/gen_zz.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_zz/syRtcSetServerMode.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### syTmrInit (`0C1614B8`, 38 bytes, `src/vt_vtsdk_d.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/vt_vtsdk_d/syTmrInit.json`
- regs zero
- regs ones
- mixed
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### texFreeMem (`0C073BE0`, 24 bytes, `src/sdk_a.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_a/texFreeMem.json`
- free mem call
- call returns something
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c02a9ac (`0C02AB40`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c02a9ac.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c0409d2 (`0C05BBBE`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c0409d2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c072fe8 (`0C0738B8`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c072fe8.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c158b80 (`0C07B930`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c158b80.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c15fa1c (`0C15FA10`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c15fa1c.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c169a20 (`0C1680A0`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c169a20.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c169a7a (`0C1680A6`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c169a7a.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c170880 (`0C170870`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c170880.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_FUN_0c1708b2 (`0C1708A8`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_FUN_0c1708b2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_kmSetFogTable (`0C0749D0`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_kmSetFogTable.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_kmiWriteRegister (`0C158726`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_kmiWriteRegister.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_mwRnaCreate (`0C1680AC`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_mwRnaCreate.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_mwRnaErrEntryFunc (`0C16AD84`, 6 bytes, `src/gen_f.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_f/thunk_mwRnaErrEntryFunc.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_njSetConstantAttr (`0C1524AE`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_njSetConstantAttr.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_nlCloseEvent (`0C0572D8`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_nlCloseEvent.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### thunk_syCfgExit (`0C03A648`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/thunk_syCfgExit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### trafficLevelControl (`0C042ACC`, 228 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/trafficLevelControl.json`
- case 0
- case 4
- case 6
- case 7
- case 8
- case 10
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 20
- case 21
- case 22
- case 23
- case 24
- case 26
- case 27
- case 31
- case 33

### trainControlExec (`0C0482F4`, 200 bytes, `src/gen_q.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_q/trainControlExec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vibIsReady (`0C040F44`, 18 bytes, `src/game_b.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/game_b/vibIsReady.json`
- ready
- not
- 2
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vibStart (`0C05F3C4`, 68 bytes, `src/game_i.c`)
- equivalent on 3 development and 1 holdout cases, in `tests/game_i/vibStart.json`
- ready, started
- ready, start fails
- not ready
- another

### vmsfb_create (`0C17020A`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/vmsfb_create.json`
- fiber
- another

### vmsfb_end (`0C170238`, 40 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfb_end.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfb_exec (`0C170222`, 8 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfb_exec.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfb_exit (`0C17022A`, 8 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfb_exit.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfb_init (`0C1701F4`, 22 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/vmsfb_init.json`
- server 7
- server 0
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfb_sleep (`0C170232`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfb_sleep.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_exit (`0C1631C4`, 18 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_i/vmsfs_c_exit.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber0 (`0C1631DC`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber0.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber1 (`0C1631E0`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber2 (`0C1631E4`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber2.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber3 (`0C1631E8`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber3.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber4 (`0C1631EC`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber4.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_fiber5 (`0C1631F0`, 4 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_fiber5.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_c_getstate (`0C163570`, 16 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/sdk_t/vmsfs_c_getstate.json`
- drive 2
- drive 0
- drive 1 big

### vmsfs_c_init (`0C163098`, 300 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/vmsfs_c_init.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_c_setcallbackparam (`0C163554`, 28 bytes, `src/sdk_y.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_y/vmsfs_c_setcallbackparam.json`
- callback
- none
- negative

### vmsfs_c_setcompletecallback (`0C16351C`, 28 bytes, `src/sdk_y.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_y/vmsfs_c_setcompletecallback.json`
- callback
- none
- negative

### vmsfs_c_setfname (`0C1635E0`, 118 bytes, `src/sdk_zb.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_zb/vmsfs_c_setfname.json`
- short names
- long names

### vmsfs_c_setfunc (`0C163580`, 16 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/vmsfs_c_setfunc.json`
- drive 1
- drive 3

### vmsfs_c_setparam (`0C163590`, 36 bytes, `src/vt_vtsdk_a.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/vt_vtsdk_a/vmsfs_c_setparam.json`
- slot 0
- slot 1
- slot 3
- negatives
- slot 7
- slot 2 again

### vmsfs_c_setprogresscallback (`0C163538`, 28 bytes, `src/sdk_y.c`)
- equivalent on 1 development and 2 holdout cases, in `tests/sdk_y/vmsfs_c_setprogresscallback.json`
- callback
- none
- negative

### vmsfs_c_settime (`0C163656`, 26 bytes, `src/sdk_ze.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_ze/vmsfs_c_settime.json`
- drive 1
- drive 3

### vmsfs_c_setvolume (`0C1635B4`, 36 bytes, `src/sdk_z.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_z/vmsfs_c_setvolume.json`
- drive 0
- drive 2

### vmsfs_c_synch (`0C1631D6`, 6 bytes, `src/gen_e.c`)
- equivalent on 15 development and 10 holdout cases, in `tests/gen_e/vmsfs_c_synch.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_exit (`0C163AC0`, 24 bytes, `src/vt_vtsdk_c.c`)
- equivalent on 2 development and 1 holdout cases, in `tests/vt_vtsdk_c/vmsfs_exit.json`
- run
- r4 set
- dirty

### vmsfs_fgetsize (`0C165C2C`, 154 bytes, `src/sdk_ze.c`)
- equivalent on 6 development and 2 holdout cases, in `tests/sdk_ze/vmsfs_fgetsize.json`
- ok
- gone
- none
- unformatted
- open
- missing
- not mounted
- flag 2 off

### vmsfs_fread (`0C164EB6`, 114 bytes, `src/sdk_zb.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_zb/vmsfs_fread.json`
- three ok
- no file
- not ready
- second fails
- zero blocks
- one

### vmsfs_fread1 (`0C164F28`, 238 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/vmsfs_fread1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_fwrite1 (`0C164C92`, 284 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/vmsfs_fwrite1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_getvolume (`0C165E28`, 142 bytes, `src/sdk_ze.c`)
- equivalent on 4 development and 2 holdout cases, in `tests/sdk_ze/vmsfs_getvolume.json`
- ok
- none
- gone
- format
- not mounted
- flag8

### vmsfs_init_work_new (`0C1637DC`, 60 bytes, `src/sdk_v.c`)
- equivalent on 4 development and 3 holdout cases, in `tests/sdk_v/vmsfs_init_work_new.json`
- 15
- 33
- 65
- 122
- other: -256
- negative
- 123

### vmsfs_isready (`0C163B00`, 58 bytes, `src/sdk_z.c`)
- equivalent on 1 development and 5 holdout cases, in `tests/sdk_z/vmsfs_isready.json`
- mixed
- all ready
- none
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmsfs_memcmp (`0C170754`, 32 bytes, `src/sdk_t.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_t/vmsfs_memcmp.json`
- equal
- differ in the middle
- differ first
- differ last

### vmsfs_scanfile (`0C167538`, 106 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/vmsfs_scanfile.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsfs_setdevicetype (`0C1636B4`, 46 bytes, `src/sdk_o.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_o/vmsfs_setdevicetype.json`
- type 1
- type 0
- type 3 (bit 0 set)
- type 2

### vmsfs_setretry (`0C162E00`, 8 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_t/vmsfs_setretry.json`
- 3
- -1

### vmsfs_xcreate (`0C164702`, 356 bytes, `src/gen_y.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_y/vmsfs_xcreate.json`
- case 0
- case 1
- case 5
- case 7
- case 8
- case 9
- case 10
- case 11
- case 16
- case 19
- case 23
- case 25
- case 26
- case 27
- case 28
- case 30
- case 31
- case 32
- case 33
- case 35
- case 36
- case 37

### vmsfs_xwrite1 (`0C164DAE`, 264 bytes, `src/gen_u.c`)
- equivalent on 15 development and 7 holdout cases, in `tests/gen_u/vmsfs_xwrite1.json`
- case 0
- case 1
- case 2
- case 3
- case 4
- case 5
- case 6
- case 7
- case 8
- case 9
- case 10
- case 11
- case 12
- case 13
- case 14
- case 15
- case 16
- case 17
- case 18
- case 19
- case 20
- case 21

### vmsio_init (`0C170260`, 8 bytes, `src/sdk_t.c`)
- equivalent on 1 development and 4 holdout cases, in `tests/sdk_t/vmsio_init.json`
- clears
- again
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

### vmuExit (`0C03A6D8`, 20 bytes, `src/sdk_z.c`)
- equivalent on 2 development and 4 holdout cases, in `tests/sdk_z/vmuExit.json`
- first try
- two retries
- one retry
- live RAM (arcade, passenger on board, paused)
- live RAM (Crazy Box 1-1, paused after go)
- live RAM (Total Records screen)

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

### write_fat_1 (`0C166798`, 126 bytes, `src/sdk_zb.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/sdk_zb/write_fat_1.json`
- three ok
- second fails
- none
- first fails

### write_sys (`0C166716`, 24 bytes, `src/sdk_i.c`)
- equivalent on 1 development and 1 holdout cases, in `tests/sdk_i/write_sys.json`
- drive 1
- drive 0
