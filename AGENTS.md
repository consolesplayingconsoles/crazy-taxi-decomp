# Decompiling this game

This repo rebuilds the game's `1ST_READ.BIN` byte for byte. Keep it that way: every change ends
with `./build.sh` printing `MATCH`.

## Layout
- `asm/<addr>_<name>.src`: one file per function, in link order (`objects.txt`). Each starts as data
  words (`.DATA.W`), which is what makes the first build match.
- `BASE`: the address the executable is linked at.
- `1ST_READ.BIN`: the original, from your own disc. Never committed.
- Names: `FUN_<addr>` is unknown; anything else came from SDK signatures or a reference decomp.

## The loop (one function at a time)
1. Pick the next function: smallest unnamed `FUN_` files first, leaves before callers.
2. Disassemble it (Ghidra project, or any SH-4 disassembler) and replace its `.DATA.W` lines with
   instructions and labels. Literal pools stay data. Build: must still `MATCH`.
3. Write C for it in `src/`, compile with the SDK's `shc.exe` (`-cpu=sh4 -endian=little`), and
   compare the object against the asm one (sh4objtest, or a byte compare of the code section).
   Iterate on the C until it matches, then swap the `.src` for the C object in `objects.txt`.
4. Rename it (`FUN_0c02d5xx` -> what it does) in the file name, the label and the Ghidra project.

Small, verifiable steps. A function that will not match after a fair try stays asm; move on.
