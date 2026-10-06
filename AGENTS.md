# Decompiling this game

This repo rebuilds the game's `1ST_READ.BIN` byte for byte. Keep it that way: every change ends
with `bash build.sh` printing `MATCH`.

## Layout
- `functions.txt`: every function (`F <addr> <size> <name>`). The source of truth for names and
  boundaries: `asm/` is generated from it (`python3 tools/split_asm.py 1ST_READ.BIN "$(cat BASE)"
  functions.txt .`).
- `asm/<addr>_<name>.src`: one file per function, in link order (`objects.txt`). Each starts as data
  words (`.DATA.W`), which is what makes the first build match.
- `src/<unit>.c`: matching C. A file whose first line is `/* @unit <start>-<end> [shc options] */`
  replaces every asm file in that range (`tools/units.py`, `tools/fill.py`). A unit with constant
  data (tables, strings) adds `@data <dstart>-<dend>`: the range where the original link put that data.
- `symbols.txt`: `<addr> <name>` for what the C uses that no file defines yet (RAM, data still inside
  asm); the linker gets them as defines.
- `sdk.txt`: which code is Sega's SDK. `python3 tools/progress.py` reports game and SDK apart.
- `BASE`: the address the executable is linked at. `1ST_READ.BIN`: yours, never committed.
- Names: `FUN_<addr>` is unknown; anything else came from SDK signatures, a reference decomp, or
  reading the code.

## Naming (fast, safe, worth doing first)
Rename in `functions.txt`, delete the old `asm/<addr>_FUN_<addr>.src`, re-run `split_asm.py`, build:
still `MATCH` (names never change bytes). A function missed by the analysis (`tools/missed_funcs.py`
lists candidates) is added the same way, as `F <addr> <size> FUN_<addr>`.

## The C loop (one original source file at a time)
1. **Find the unit.** The compiler's literal pools are shared by every function of one source file,
   and `bsr` calls only reach functions of the same file: a unit runs from just after the previous
   file's pool (and its padding) to the end of its own last pool. Both ends must be function
   boundaries in `functions.txt` (`units.py` refuses otherwise).
2. **Write `src/<unit>.c`** with the `@unit` header, every function of the unit in address order.
   Globals and data the code uses go in `symbols.txt` (C names, no leading underscore).
3. **Build.** `build.sh` compiles it (`shc` with the flags in `build.sh` plus the header's options),
   lays it out like the original (`fill.py`) and links it in place. Iterate until `MATCH`.
   Compare function by function while iterating: the first wrong function shifts everything after
   it, so a whole-file byte compare says little.
4. **Progress**: `python3 tools/progress.py`.

A unit goes in only when all of it matches. One that will not match after a fair try stays asm,
written down (what differs) for later; move on.

## Matching notes
- Library-style code padded with `nop`s to 16 or 32 bytes between functions and before branch
  targets was built with `-align16`: put it in the `@unit` header.
- Gaps the compiler reserves (`.RES`) were filled with `0xEE` by the original link; padding before
  the next unit too. `fill.py` does both.
- Register choice follows how the C is written: `if ((x = f()) != 0)` versus `x = f(); if (x)`,
  `a == b` versus `b == a` (operand order of `cmp/eq`), an early `return` versus an `if` block, a
  value re-read from memory versus the one just stored (`if ((e->prev = p->prev) == 0)`).
- A difference that no rewording moves is worth checking against another compiler version before
  more rewording; if two versions give the same bytes, it is the C.
