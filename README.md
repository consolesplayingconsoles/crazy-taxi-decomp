# Crazy Taxi decomp (kick-off)

A matching decompilation of the Dreamcast **Crazy Taxi**, in progress. It rebuilds the game's
executable byte for byte from one assembly file per function, with 734 of its 2,391 functions
named so far.

**This repository contains no game code or data.** You supply your own disc; `setup.sh` generates
everything game-derived on your machine, and `.gitignore` keeps it out of git.

## Supported version

| | |
|---|---|
| Release | Crazy Taxi (Europe) (En,Ja), GD-ROM, MK-51035, V1.000, 2000-01-20 |
| `1ST_READ.BIN` | 1,477,040 bytes, SHA-1 `2756d6c828b5a3848189cd84cac62bc9cb0a94b7` |
| Linked at | `0x0C010000` |
| SDK era | Shinobi 1.62, KAMUI 1.11.0.1, ADXT 5.66 |

Other releases are different builds: `setup.sh` refuses them rather than produce a broken split.

## Building

You need: your own copy of the disc as a `.gdi` (a `.chd` converts with
`chdman extractcd -i game.chd -o game.gdi`), Python 3, Docker, and a Katana SDK (its Hitachi
assembler and linker do the build; any folder layout works).

```
bash setup.sh "path/to/your disc.gdi"
echo 'SDK_PATH="/path/to/katana-sdk"' > .env      # once: where your SDK is (not committed)
bash build.sh
```

`build.sh` should end with `MATCH`. It builds its own small tools image the first time (Docker
must be running). The first build assembles every file (a few minutes); after
that only changed files. (Running the scripts with `bash` means file permissions never matter;
`./build.sh` works too once `setup.sh` has run.) Docker is required; on Linux x86_64 without
Docker, `DC_LOCAL=1` runs the tools through `wibo` instead.

## What is here

| path | what |
|---|---|
| `functions.txt` | every function: address, size, name (`FUN_<addr>` = not named yet) |
| `globals.txt` | named global variables: address, name |
| `BASE` | link address |
| `setup.sh` | extract + verify your executable, generate `asm/` and `text-map/` |
| `build.sh` | assemble, link, convert, compare with your original |
| `disc.sh` | build a playable disc image of your version (files you put under `disc/`) |
| `textures.sh` | optional: every standard texture on one page, to find text drawn into images |
| `tools/` | disc reader, splitter, text mapper |
| `src/` | matching C units (see below) |
| `sdk.txt` | which code is Sega's SDK, not the game (for `tools/progress.py`) |
| `symbols.txt` | addresses the C units use that no file defines yet (RAM, data inside asm) |
| `AGENTS.md` | the per-function decompilation loop |
| `docs/engine.md` | what is known about the game's code and data |

`text-map/` (generated) lists the executable's strings with every pointer to them, the text density
of each disc file with the code that opens it, how text is drawn, and image files that probably
hold text (candidates). These are heuristics for you to check, not a verdict.

## C units

A file `src/<name>.c` whose first line is `/* @unit <start>-<end> [shc options] */` replaces every
asm file in that address range. `build.sh` compiles it with the SDK's `shc` to assembly, lays it
out exactly like the original (`tools/fill.py`: alignment as nops, reserved gaps as `0xEE`, padded
to `<end>`), assembles it and links it in place; the result still has to `MATCH`. A unit with
constant data (initialised local arrays, const tables, string literals) also names where the
original link put that data: `/* @unit <start>-<end> @data <dstart>-<dend> [shc options] */`. The
data becomes its own piece at that range, in source order; both ranges must start and end on asm
file boundaries (add them to `functions.txt`: `F <addr> 0 FUN_<addr>` for a function start,
`D <addr> 0 data_<addr>` for a data boundary, which is not counted as a function). A unit is one
original source file: all its functions share literal pools, so it goes in only when all of it
matches. `python3 tools/progress.py` reports the state in several measures, game code and SDK apart
(`sdk.txt` marks the SDK): matching C (bytes, functions, units), named functions and globals, and
functions documented in `docs/*.md`.

## Progress

<!-- progress -->
```
GAME CODE                         1402 functions, 281591 bytes of code
  matching C, bytes         0.4%  1166 bytes, 2 units
  matching C, functions     0.6%  8 of 1402
  named functions          25.0%  351 of 1402
  named code, bytes        37.2%  code in named functions
  documented functions      6.5%  91 in docs/*.md
  named globals                   45
SDK (Sega libraries)              1000 functions, 105732 bytes of code
  named functions          52.8%  528 of 1000 (signatures)
```
<!-- /progress -->

Updated on every commit by `tools/hooks/pre-commit` (enable once per clone:
`git config core.hooksPath tools/hooks`).

## Names

Names come from signature matching: 385 matches from the Katana SDK R10.1's own libraries, 112 more
from SDK R9 (the release closest to the game's library banners) and 30 from the public Tokyo Bus
Guide decomp (only unique matches are applied); small wrappers inherit the name of the function they
call. The Progress block above has the current counts.
The rest were named by reading the code, using the original names from the Android build where a
function is identified; `docs/engine.md` has what is known about them.

## How this was started

This repo was autogenerated using
[dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff).

## Third-party sources

The build needs a Katana SDK and benefits from a reference decomp. Repositories that hold such
material (for example `Kochise/dreamcast-docs`, `lhsazevedo/tbg-decomp`, `lhsazevedo/sh4objtest`)
are named solely as examples of the type of material required. We have no affiliation with, and
make no representation regarding, those repositories, their contents, or their licensing. You are
solely responsible for determining whether you are entitled to obtain and use any such material.

Crazy Taxi and its publisher's trademarks belong to their owners. This project is not affiliated with
or endorsed by them.

## Licence

The code and documentation in this repository: GPL-3.0-or-later (`LICENSE`).
