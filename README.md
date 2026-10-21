# Crazy Taxi decomp

![decomp progress](badge.svg?p=87.8&b=58.0&a=80)

**Explore this decomp project with [Shuriken Explorer](https://consolesplayingconsoles.github.io/dc-shuriken-explorer/) and see the game's models, skeletons, animations, textures, images, sounds, text and side-by-side C and assembly code directly in your browser.**

A decompilation of the Dreamcast **Crazy Taxi**, in progress. It rebuilds the game's executable byte for byte.
A function is **done** when its C behaves like the original (Equivalent);
byte-identical C (Matching) is the bonus tier.

_**This is not a traditional, human-idiomatic decompilation.** It is structured and documented for AI consumption,
and its tooling is built for the automation and scale of that paradigm.
If needed, a human-idiomatic rewrite can start from it, as a fork or a new project.
This project constitutes a solid stepping stone for such a target: it contains equivalent C, the asset maps,
the Shuriken Explorer code and asset views, the build pipeline and the author's notes in [docs/engine.md](docs/engine.md)._

**This repository contains no game code or data.** You supply your own disc; `setup.sh` generates
everything game-derived on your machine, and `.gitignore` keeps it out of git.

## Progress

<!-- progress -->
```
TEST COVERAGE QUALITY THRESHOLD          80%  configurable, drops anything below this value (MIN_COVERAGE in tools/equiv.py)
FUNCTIONS LEFT          (87.8% complete) 388  of the 3186 functions that can be C (60 with no C form are counted apart)
BYTES LEFT           (58.0% complete) 226870  of 539766 bytes of code that can be C
FUNCTIONS                                     what is left, counting down to zero
  unnamed                               1503  functions still called FUN_... (1503 of 3246)
  Not read                                 0  0 bytes
  Read with errors                         0  0 bytes
  Not drawn                                6  4334 bytes
  Drawn with errors                       57  37214 bytes
  Checked with errors                    171  94784 bytes
  Below 80% test coverage threshold      154  90538 bytes
  No C form                             1.8%  60 functions of the 3246: an instruction or a register convention with no C form (tools/classify.py names it); the counts above are of the 3186 that can be C
  documented                           42.1%  1367 named functions in docs/*.md
GAME ASSETS (EXTRA)                           reverse engineering: what the model map identifies; it does not affect the measures above and is not done work
  models named                         37.1%  1010 of 2723 models: a name, or a named table or collection
  characters named                     15.5%  9 of 58 characters (note rules)
  sounds named                          3.1%  22 of 716 sounds (sound rules)
  tables named                          1.1%  1 of 95 model tables (table rules)
```
<!-- /progress -->

Updated on every commit by `tools/hooks/pre-commit` (enable once per clone:
`git config core.hooksPath tools/hooks`).

## The steps

This decomp follows the six steps of the dc-decomp-kickoff skill, from the disc to proven C for every function. `AGENTS.md` has the detail.

| # | Step                                    | Decomp completion         | You provide                        | What it does                                                                                                                                                                                                                                                                                                               |
|---|-----------------------------------------|---------------------------|------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1 | **Decomp project setup**                | -                         | The disc as a `.gdi`, a Katana SDK | Installs the tools (Docker, Python 3) and checks your game disc and SDK.                                                                                                                                                                                                                                                   |
| 2 | **Signature-driven baseline**           | -                         |                                    | Reads the disc, splits the executable into one assembly file per function, rebuilds it **byte for byte** with the SDK's own assembler and linker, and names every function it can match by signature.                                                                                                                      |
| 3 | **Asset mapping**                       | -                         |                                    | Writes the text map (every string with its pointers, text per disc file), the model map, the texture list and the audio map.                                                                                                                                                                                               |
| 4 | **Opportunity-driven optional boosts**  | Varies greatly by project | The materials                      | Uses what you hand over to save work in every step after it, the earlier the better: a later port (Android is the strongest), a prototype or debug build, cheat codes, other regions, existing notes, the same game on another console, a sibling decomp. It never looks for these itself and never reads your other code. |
| 5 | **Incremental script-generated decomp** | ~25% (higher with boosts) | SDK library sources (optional)     | Proves C for what the tools can write on their own: the SDK's own library source where you have it, then generated C, then a second pass that draws the test cases again to cover more of the original. Generated C is reported apart from hand-written C.                                                                 |
| 6 | **Experience-driven agentic decomp**    | 100%                      |                                    | Takes what is left one pocket at a time, function by function: C and test cases until each function is proven. The plan is in the repo's `AGENTS.md`.                                                                                                                                                                      |

## Supported version

|                |                                                                   |
|----------------|-------------------------------------------------------------------|
| Release        | Crazy Taxi (Europe) (En,Ja), GD-ROM, MK-51035, V1.000, 2000-01-20 |
| `1ST_READ.BIN` | 1,477,040 bytes, SHA-1 `2756d6c828b5a3848189cd84cac62bc9cb0a94b7` |
| Linked at      | `0x0C010000`                                                      |
| SDK era        | Shinobi 1.62, KAMUI 1.11.0.1, ADXT 5.66                           |

Other releases are different builds: `setup.sh` refuses them rather than produce a broken split.

## Building

You need: your own copy of the disc as a `.gdi` with its track files, Python 3, Docker, and a Katana SDK (its Hitachi
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

**Instructions for agents and people working on the decomp**

| path           | what                                                                                                                                               |
|----------------|----------------------------------------------------------------------------------------------------------------------------------------------------|
| [AGENTS.md](AGENTS.md)    | The six steps this decomp follows, and the per-function loop: Equivalent first, Matching as the bonus. The tools to try at step 6 are listed there |
| [KICKOFF](KICKOFF)      | The version of dc-decomp-kickoff this repo follows                                                                                                 |
| [.recomp.json](.recomp.json) | The project's metadata (game, version, status, approach) in the recomp.fyi format                                                                  |

**Documentation**

| path                             | what                                                                                                                                                   |
|----------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------|
| [README.md](README.md)                      | This file                                                                                                                                              |
| [docs/engine.md](docs/engine.md) | The author's notes: the particularities of this game's code and data, and what was learned                                                             |
| [docs/equivalent.md](docs/equivalent.md)             | The evidence for each Equivalent function (written by [tools/equiv.py](tools/equiv.py))                                                                                |
| text-map/                      | (generated) The executable's strings, how much text each disc file holds, and every image file (`images.tsv`): counts and lists to read, not a verdict |

**The functions and their names**

| path                       | what                                                                                                                                    |
|----------------------------|-----------------------------------------------------------------------------------------------------------------------------------------|
| [functions.txt](functions.txt)            | Every function: address, size, name (`FUN_<addr>` = not named yet). The source of truth for boundaries; [asm/](asm/) is generated from it     |
| [globals.txt](globals.txt)              | Named globals: address and the original name                                                                                            |
| [symbols.txt](symbols.txt)              | Addresses the C units use that no file defines yet (RAM, data inside asm)                                                               |
| [sdk.txt](sdk.txt)                  | The bundled Sega SDK's code (for [tools/progress.py](tools/progress.py))                                                                                   |
| [models.txt](models.txt), [model-map/](model-map/) | What is known about the game's 3D models: tables whose layout is understood (read by [tools/model_map.py](tools/model_map.py)), and the map built from them |
| [BASE](BASE)                     | Link address                                                                                                                            |

**The C**

| path | what |
|---|---|
| [src/](src/) | C: Equivalent files (checked by [tools/equiv.py](tools/equiv.py), not built; the `gen_*.c` files were written by [tools/gen_equiv](tools/gen_equiv)) and matching C units (built, see below) |
| [partial/](partial/) | C that was written but did not pass the check: drafts, counted apart from done |
| [sdk-verified.txt](sdk-verified.txt) | Library functions whose bytes the SDK source you supplied reproduces (written by [tools/sdk_source.py](tools/sdk_source.py)) |
| [sdk-headers/](sdk-headers/), [sdk-patches.txt](sdk-patches.txt) | The SDK headers and the changes to the supplied sources that [tools/sdk_source.py](tools/sdk_source.py) needs |

**The proof**

| path | what |
|---|---|
| [tests/<file>/<function>.json](tests/) | The test cases of each function |
| [tests/equivalent.txt](tests/equivalent.txt) | The functions found Equivalent, with the coverage bar met |
| [tests/weak.txt](tests/weak.txt) | The functions that pass but whose cases ran less of the original than the bar: not done |
| [badge.svg](badge.svg) | The progress badge (written by [tools/progress.py](tools/progress.py)) |

**Scripts and tools**

| path | what |
|---|---|
| [setup.sh](setup.sh) | Extract and verify your executable, generate [asm/](asm/), [text-map/](text-map/) and [model-map/](model-map/) |
| [build.sh](build.sh) | Assemble, link, convert, compare with your original |
| [disc.sh](disc.sh) | Build a playable disc image of your version (files you put under `disc/`) |
| [textures.sh](textures.sh) | Optional: every standard texture on one page, to look through |
| [tools/](tools/) | Disc reader, splitter, text mapper, model mapper, C-unit layout, progress and remaining reports, missed-function finder, SH-4 disassembler and simulator, the Equivalent check (`equiv.py`) with its helpers, the generator (`gen_equiv/`), `status.py` for what is running |

**Local only (git-ignored; [setup.sh](setup.sh) and the tools regenerate them)**

| path | what |
|---|---|
| 1ST_READ.BIN, asm/, objects.txt | Your executable and the assembly generated from it |
| sdk-source/ | The C of the library functions, from the SDK source you supplied |
| build/ | Build output, the generator's log ([build/gen_run.log](build/gen_run.log)) and its report of why functions failed ([build/gen_failed.txt](build/gen_failed.txt)) |
| state/ | Working state: notes, failed cases, the remaining-functions report ([state/remaining.md](state/remaining.md)) and its cache |

## Model map

`setup.sh` also builds `model-map/game.dcgs` (with `tools/model_map.py`): every model it recognises in the disc files, the
table in the executable that holds it, the texture lists, every sound it recognises (CRI ADX and AHX streams, and the sound
banks), and, where a skeleton is known, characters assembled from their parts. It is plain tab-separated text in sections (`[models]`, `[assemblies]`, `[rigs]`, `[bones]`, `[audio]`, `[textures]`) and it is
**committed**: it holds addresses, offsets, sizes and names only, no game bytes or text (the text map is the one
that stays local). Regenerate it with `python3 tools/model_map.py 1ST_READ.BIN "$(cat BASE)" functions.txt "<your disc>.gdi" model-map`.

- **No setup needed to start.** With no rules the map still lists every model it recognises, grouped by the table that holds it.
- **`models.txt` is what is known about the game's models**, one rule per line: `chars` and `structs` (tables whose
  layout is understood), `rig` / `bone` / `assemble` (a skeleton posed from a motion record), `nodes` / `nodelayout` (linked node structs in
  the executable, each character placed in its bind pose), `textures` (pairs a
  model file with a texture file of another name; matching names are found by themselves), `note`, and the two a
  person adds by naming things: `name <file> <offset> <text>` (one model), `sound <file> <entry> <text>` (one sound), `image <file> <offset> <text>` (one picture) and `table <address> <group> <label>`
  (a whole table). The syntax is in the header of `tools/model_map.py`.
- **Naming convention.** A row shows the name first and the id beside it, and only the id when there is no name.
  Names are tidied the same way everywhere: words separated by single spaces (underscores and camelCase become
  spaces), each word starting with a capital, no parentheses. Ids (hex offsets, table addresses, the game's own
  identifiers) are never changed.
- **Naming things.** Edit `models.txt` and rerun the tool, or use a model viewer that opens this folder and writes
  the `name` and `table` lines for you, into two sorted blocks at the end of the file, so a naming session is a small
  `git diff`. Commit the diff.

## Equivalent C and shared library code

How strong an Equivalent function is depends on its test cases, so `tools/equiv.py` reports how many of the original's instructions they
run. The original's code is kept as one assembly file per function, the baseline the build keeps checking. C written by `tools/gen_equiv` is
the lower gate: it is generated, checked on generated cases, and then polished (`gen_equiv --retest`, and cases by hand for the branches
nobody ran). `AGENTS.md` lists the six steps this decomp follows, up to 100%.

`src/<file>.c` with no `@unit` header is C checked for behaviour only: `python3 tools/equiv.py src/<file>.c`
runs each function in an SH-4 interpreter twice per test case, the original bytes and your compiled C,
and they must agree on calls, memory writes and the result. Passing functions are listed in
`tests/equivalent.txt` and counted as done. The loop, and how to write many of them quickly, is in
`AGENTS.md` and the kickoff skill's `references/equivalent-pipeline.md`.

## Matching C units (the build tier)

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
matches. `python3 tools/progress.py` reports the state,
each function in one bucket: done (equivalent C; matching C and SDK source part of it), named only (a name is
not done work), unnamed; plus documented functions and named globals. `docs/equivalent.md` holds
the evidence for each equivalent function.

## Names

Names come from signature matching against the Katana SDK's own libraries (only unique matches are applied);
small wrappers inherit the name of the function they call.

## How this was started

This repo was autogenerated using
[dc-decomp-kickoff](https://github.com/consolesplayingconsoles/dc-decomp-kickoff) unstable. It follows the six steps above; `AGENTS.md` says how.

## Third-party sources

The build needs a Katana SDK. Repositories that hold such material (for example
`Kochise/dreamcast-docs`)
are named solely as examples of the type of material required. We have no affiliation with, and
make no representation regarding, those repositories, their contents, or their licensing. You are
solely responsible for determining whether you are entitled to obtain and use any such material.

Crazy Taxi and its publisher's trademarks belong to their owners. This project is not affiliated with
or endorsed by them.

## Where this comes from

It came out of real work on Consoles Playing Consoles. See what Pluto has helped me build:

- 📸 **Instagram:** [@consolesplayingconsoles](https://www.instagram.com/consolesplayingconsoles/)
- 🔗 **Everything else:** [beacons.ai/consolesplayingconsoles](https://beacons.ai/consolesplayingconsoles)
