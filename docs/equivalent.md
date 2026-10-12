# Equivalent functions

Functions whose C behaves like the original on every test case (`tools/equiv.py`: same calls, same final memory, same result). Written by `tools/equiv.py`; the cases are the evidence. Cases that start from a RAM dump (`"dump": "build/ram/<name>.bin"`) need your own dump there: all of RAM (16 MB from `0C000000`) at that moment, e.g. read with `tools/live.py`.

### extRand (`0C04981E`, 32 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRand.json`

### extRandom (`0C04983E`, 22 bytes, `src/extrand.c`)
- equivalent on 4 development cases, in `tests/extrand/extRandom.json`

### extRandomSeed (`0C049818`, 6 bytes, `src/extrand.c`)
- equivalent on 6 development cases, in `tests/extrand/extRandomSeed.json`

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

### nlInitHeapMemory (`0C0293C8`, 50 bytes, `src/heap.c`)
- equivalent on 2 development and 2 holdout cases, in `tests/heap/nlInitHeapMemory.json`
- a 0x1000-byte heap
- a 0x30000-byte heap
- a 0x1003-byte heap (size not a multiple of 4)
- a 0x40-byte heap

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
