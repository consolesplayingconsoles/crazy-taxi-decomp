# Decompiling this game

This repo rebuilds the game's `1ST_READ.BIN` byte for byte. Keep it that way: every change ends
with `bash build.sh` printing `MATCH`.

## First: the mode

Read the mode before anything else: `grep '^MODE:' status.txt` (no `MODE:` line means `equivalent`).

- **`MODE: matching`**: game code counts as decompiled when its C **rebuilds the original bytes**: an `@unit` file in
  `src/` that the build compiles, lays out like the original and links in place, with `bash build.sh` still printing `MATCH`. Follow the
  sections marked *(matching)* and *(both)*. Ignore the ones marked *(equivalent)*: there are no test cases, no
  `tests/equivalent.txt`, no `partial/` C counted as done, and `python3 tools/progress.py` reports "done: matching C".
- **`MODE: equivalent`** (the default): game code counts as decompiled when its C **behaves like the original** (same calls, same memory writes, same
  result on every test case, checked by `tools/equiv.py`); C that rebuilds the original bytes (Matching) is also done. Follow
  the sections marked *(equivalent)* and *(both)*.

If the mode is anything else, stop: `tools/progress.py` refuses it too.

## The steps of this decomp *(both)*

This repo follows the steps of the dc-decomp-kickoff skill: six to proven C for every function, then three to build, run and stabilise the game from it, then the native port. They are the milestones of the run: say which step you are in, announce
each by its title before you start it (`=== Step N of 10: <title> ===`), and end it by printing the results
(`python3 tools/progress.py`, with generated and hand-written C apart). The user decides at each boundary whether to go on.

In `matching` mode steps 1 to 4 are the same and the rest is one step: **5. Matching C**, the *Matching* section below (one original
source file at a time; where you have the SDK's own library source, `tools/5-generated/sdk_source.py <folder>` reproduces library functions
byte for byte too). Say which step you are in, and end it with `python3 tools/progress.py`. The table is the `equivalent` mode's.

| # | Step | State in this repo |
|---|---|---|
| 1 | Decomp project setup | done by the kickoff |
| 2 | Signature-driven baseline | done by the kickoff: the build matches, names applied |
| 3 | Asset mapping | done by the kickoff |
| 4 | Opportunity-driven optional boosts | whatever the user handed over; never look into their other code for more |
| 5 | Incremental script-generated decomp | `tools/5-generated/sdk_source.py <folder>`, `python3 tools/5-generated/gen_equiv`, `python3 tools/5-generated/gen_equiv --retest` |
| 6 | Experience-driven agentic decomp | you: pocket by pocket (library without source, the game's own code, runtime routines and tables), writing cases for the branches `equiv.py` says no case ran; RAM dumps (`"dump"`) for what depends on run-time state |
| 7 | Code size reduction | `tools/7-reduction/`: `shrink.py <name> ...` writes a function again and keeps the new C only when it compiles smaller and still passes its cases; `hoist.py [--loose] [--apply] <name> ...` holds a value the C reloads at every use in a local, as the original did. The target is the room the original code had: `make c` stops at `layout` while the C does not fit |
| 8 | Build from C | The SDK and the other libraries stay the original bytes by default; building them from C as well is possible, and is work for the user. `make c` (`tools/8-build/retcheck.py` first: every function's result register against its declaration; then the executable from the C, build/cbuild/game.bin), `make disc GDI="<disc>.gdi"` (a disc image with it). The steps are `tools/8-build/cbuild.py` prep, compile, prelim, unity, layout, link; the regions come from `layout.txt` (`tools/layout.py`). The check: the image has the original size, and outside the game code only the pointer words to game functions differ |
| 9 | Runtime repairs | Traces each stop to its function and the step that caused it, fixes it there and builds again until the game is stable; Flycast GDB is the last resort when reading does not settle it. `status.txt` records how far it gets: `[x]` reached, `[ ]` tested and not reached, `[?]` not tested yet |
| 10 | Native port | Runs the game on a host from the proven C (experimental). The steps are in `port/README.md`; `port/runtime/game.h` is the only per-game file. The console build and the decomp are complete without the SDK as C; for a port, every SDK function needs C except the hardware drivers (`sdk.txt`'s `hardware` lines); how to debug it is in "Debugging the native port" below. It needs nothing from steps 7 to 9; what it finds goes back to steps 2, 5 and 6 |

If you are the session that ran the kickoff and the user chose to continue, this file is your instructions. If you are a new session,
you are a guided agent: read this file, run `python3 tools/progress.py` to see where the run stands, and start at the first step not done.

*(equivalent)* A function is only as proven as its cases: `equiv.py` prints how many of the original's instructions they ran. Aim for all of them; an
instruction no case ran is a branch nobody checked. Details: the kickoff skill's `docs/equivalent-pipeline.md` and `docs/agentic-decomp.md`.

## Layout *(both)*
- `functions.txt`: every function (`F <addr> <size> <name>`). The source of truth for names and
  boundaries: `asm/` is generated from it (`python3 tools/1-2-baseline/split_asm.py 1ST_READ.BIN "$(cat BASE)"
  functions.txt .`).
- `asm/<addr>_<name>.src`: one file per function, in link order (`objects.txt`). Each starts as data
  words (`.DATA.W`), which is what makes the first build match.
- `src/<file>.c`: C for the game's code. (equivalent mode: without a header it is checked for behaviour only
  (`tools/equiv.py`) and stays out of the build; in matching mode every file has a header.) A file whose first line is `/* @unit <start>-<end> [shc options] */`
  replaces every asm file in that range (`tools/1-2-baseline/units.py`, `tools/1-2-baseline/fill.py`). A unit with constant
  data (tables, strings) adds `@data <dstart>-<dend>`: the range where the original link put that data. Its ends are
  `D <addr> 0 data_<addr>` lines in `functions.txt` (data boundaries, not counted as functions).
- `sdk/<library>/<file>.c`: the SDK's C (the bundled libraries of `sdk.txt`), one folder per library (`shinobi/`, `kamui/`, `naomi/`, `runtime/`, `sofdec/`). A file is found by its name without `.c`, which is unique across `src/` and `sdk/`; its cases stay in `tests/<name>/`. The console build compiles `src/` alone and gives the same executable with `sdk/` there or not; a port builds from both.
- `symbols.txt`: `<addr> <name>` for what the C uses that no file defines yet (RAM, data still inside
  asm); the linker gets them as defines.
- `sdk.txt`: the bundled Sega SDK's code. `python3 tools/progress.py` reports the state.
- `tests/<file>/<function>.json` *(equivalent)*: test cases for a function (a list; each gives registers, bytes to
  put in memory, return values for the calls it makes, optionally a RAM dump to start from:
  `tools/sh4sim.py`). `tests/equivalent.txt`: the functions `tools/equiv.py` found equivalent.
- `python3 tools/shdis.py <start> <end>`: SH-4 disassembly with FPU, pool values and names, to
  read the original while writing C.
- `BASE`: the address the executable is linked at. `1ST_READ.BIN`: yours, never committed.
- Names: `FUN_<addr>` is unknown; anything else came from SDK signatures or
  reading the code.

## Naming (step 2: fast, safe, worth doing first) *(both)*
Rename in `functions.txt`, delete the old `asm/<addr>_FUN_<addr>.src`, re-run `split_asm.py`, build:
still `MATCH` (names never change bytes). A function missed by the analysis (`tools/1-2-baseline/missed_funcs.py`
lists candidates) is added the same way, as `F <addr> <size> FUN_<addr>`. Its size runs to the end
of its last `rts` and delay slot before the next entry, pool included: a function with a literal
pool in the middle of its body (a stray "branch" inside the pool fools a linear sweep) is sized
that way, not by where the sweep stopped.

Optional, when RetroArch with the Flycast core is at hand: `tools/4-boosts/live.py` reads the running game
by address or by name (`python3 tools/4-boosts/live.py watch <name>`, `vec <name>+4`), so a global's
name can be checked against what the value does in play. Setup and commands: `tools/4-boosts/live.py` with
no arguments. Reading the code stays the evidence; a live value confirms it or sends you back.

## Matching (step 5 in matching mode; also written in step 6 in equivalent mode) *(both)*
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

## Matching notes *(both)*
- Options starting with `+` in an `@unit` header go to `fill.py` or `build.sh` (the original's literal-pool layout: `+pool32`, `+pool00`,
  `+tail0900`, `+poolafter=`, `+synth16`; another `shc` flag set: `+<x>flags`; another `shc` release: `+r04`, from `SDK_R04_PATH` in `.env`;
  `@ddata`/`@bdata` pieces; a unit in a folder of `src/`), the others to `shc`. A unit that asks for none gets the default layout. What each is
  for: the kickoff skill's `docs/matching-units.md`. `python3 tools/fcmp.py src/<file>.c [function ...] -v` compares a file function by
  function; `python3 tools/permute.py src/<file>.c <function>` tries rewrites that keep the meaning.
- Code overlays (a game with `overlays.tsv`): `bash build.sh --overlay <name>`, `bash build_overlays.sh`; the kickoff skill's `docs/overlays.md`.
- Library-style code padded with `nop`s to 16 or 32 bytes between functions and before branch
  targets was built with `-align16`: put it in the `@unit` header.
- Gaps the compiler reserves (`.RES`) were filled with `0xEE` by the original link; padding before
  the next unit too. `fill.py` does both.
- Register choice follows how the C is written: `if ((x = f()) != 0)` versus `x = f(); if (x)`,
  `a == b` versus `b == a` (operand order of `cmp/eq`), an early `return` versus an `if` block, a
  value re-read from memory versus the one just stored (`if ((e->prev = p->prev) == 0)`).
- A difference that no rewording moves is worth checking against another compiler version before
  more rewording; if two versions give the same bytes, it is the C.
- Idioms that decide matches (details in the kickoff skill's `docs/matching-c.md`):
  `x ? 1 : 0` for a bit field set from a call (not `!= 0`); one-bit fields rather than `& mask`
  tests on a flags byte (no `extu.b`); a whole-word field (`unsigned int f : 32`) when the original
  stores through a computed address (`mov.w off,r2; add rP,r2; mov.l rX,@r2`); globals read at
  constant offsets as struct members, not array indexing; if/else order decides block layout and
  stack slots (local declaration order does not); a block-scoped temporary can stay in a register
  where a function-scoped one spills; `unsigned` can change which constant register is shared.
- Compiler runtime routines (`__modls`, `__bfslu`, `__quick_evn_mvn`, `__quick_odd_mvn`, ...) are
  named in `functions.txt` with one underscore less (`_modls`): the asm exports `_<name>`, so the
  label is exactly what the compiler calls and a C unit links without `symbols.txt` entries for
  them. If one is still `FUN_...`, rename it.

## Tools to try (steps 5 and 6) *(equivalent)*

Games differ, so there is no fixed order. Try a tool on a small sample, note what it gained and what it cost, keep it if it pays and drop it for this game if it doesn't. Write the result in `state/` (gitignored project state) so the next session does not repeat the experiment.

| Tool | Try it when | What to measure |
|---|---|---|
| `tools/5-generated/gen_equiv` (a try run, then the whole game) | Always first: it is the cheapest and runs in parallel | Functions gained, seconds per function, the blockers in `build/gen_failed.txt` |
| `tools/5-generated/gen_equiv --draw src/<file>.c` | You wrote C by hand and need cases | Instructions the cases ran, as `equiv.py` reports them |
| `tools/5-generated/gen_equiv --retest` | Generated functions have weak coverage | Coverage before and after |
| `tools/1-2-baseline/checksizes.py` (`--hidden`, `--merge`) | Function sizes look wrong or entries run into each other | Entries fixed; `build.sh` still prints MATCH |
| `tools/5-generated/sdk_source.py` | You have the SDK's own library source | Functions verified byte-identical |
| `tools/5-generated/classify.py`, `tools/1-2-baseline/missed_funcs.py` | Choosing what to take next, or finding code not listed as functions | Functions per class; code left unlisted |
| `tools/gdbsnap.py` | A function depends on run-time state (a loop, a dispatcher, a struct) | Struct fields or counters found |
| `tools/5-generated/gen_equiv --recheck [--rebuild]` | You fixed the checker, the compiler flags or the C writer | Kept functions that now pass, without drawing their cases again (`state/kept`) |
| `tools/5-generated/remaining.py` | Choosing what to take next | Functions and bytes per state, and per cause |
| `tools/5-generated/diverge.py <function>` | A generated function differs from the original | The first mismatching call and where each side's value came from |
| `tools/5-generated/overreads.py src/<file>.c [function ...]` | A build from C runs in the emulator but not on the console, or before trusting a file of proven C | Functions whose C differs from the original when unused RAM holds junk instead of 0 (reads memory the original does not); how many cases touched unset memory at all |
| `tools/consistency.py` (`--fix`) | After several runs overlapped, or before a commit. It is expensive: it needs the operator's approval each time | C defined twice, cases without C, C without a recorded pass, a call without an argument the original sets (`short call`) |
| `tools/1-2-baseline/sdk_identical.py` | Functions that look like the SDK's own library code | Functions byte-identical to the compiled SDK libraries |
| Hand-written C with cases | The tools above have run dry | Functions per hour, in the order below |

## The C loop: Equivalent first (step 6) *(equivalent)*

Take the functions that unlock the most others first: many callers, a family of similar siblings, or a neighbour whose size or arguments they settle. Smallest-first is only the tiebreak.

1. **Write `src/<file>.c`**: the functions you read, in C, as the original source would have them
   (one file per original source file is the goal, but a few functions are fine to start).
   Outside names it uses come from `functions.txt`, `globals.txt` and `symbols.txt`.
2. **Write cases** in `tests/<file>/<function>.json`: the inputs that reach each branch (registers,
   memory bytes via `poke`, a RAM dump for the world state), what each call it makes returns, and
   what each case covers (`about`). Split them `{"dev": [...], "holdout": [...]}`: write the dev
   cases first and iterate on them; then write holdout cases the C was never checked against (other
   values, another RAM dump) and run once more. A function counts only when both pass.
   Before writing C, run the three checks (`docs/equivalent-pipeline.md` in the kickoff skill): the
   size is right (`python3 tools/1-2-baseline/checksizes.py <name>`: a literal pool mid-body ends a listing early), the
   function can be C (`python3 tools/5-generated/classify.py <name>`: FPU register banks, `fsrra`, control registers
   other than SR cannot) and every name it uses exists (`python3 tools/6-agentic/poollist.py <name>`; `python3 tools/shdis.py --func <name>`
   prints it).
3. **Check**: `python3 tools/equiv.py src/<file>.c` (`-q`: only what is not Equivalent). Each function runs in the SH-4 interpreter
   twice per case, the original bytes and your compiled C, and must agree on calls (target and the
   arguments the callee takes, from the prototype you declare for it; the compiler's `_...` runtime helpers
   run for real; a stack address is "the stack"), memory writes and the return register (from your prototype).
   A call may fill an output slot: `"poke_arg": {"r7": "<hex>"}`. `DIFFERS` names the
   first case and what differed. A function with all cases agreeing is Equivalent: it goes into
   `tests/equivalent.txt`, and its evidence (address, size, file, case counts, what they cover)
   into `docs/equivalent.md`, one entry per function.
   Blind spot: the simulator gives 0 for RAM a case did not set, so C that reads memory the original does not passes whenever that memory is 0 (a console holds leftovers there). `python3 tools/5-generated/overreads.py src/<file>.c` reruns the cases with junk in unused RAM and lists the functions that differ; a report, it records nothing.
4. **Progress**: `python3 tools/progress.py`.

Cases are the evidence: one case proves little; cover each branch and edge (zero, negative, the
values the game really uses). A RAM dump from the running game (`tools/4-boosts/live.py`) gives real
world state to start from.

## Building from C (step 8) *(equivalent)*
The libraries are not game code, so they are not built from C: before the first build, `keep` in `layout.txt` must cover the
NAOMI library and C runtime (`nl*`, sprites, textures, the `nl_objasm_*` renderer) as well as the Katana libraries. Their functions then
stay as the original bytes at their address, whatever C exists for them. The block starts at the library's first function
(`nlInitCommonTexture`, 0xA0 before `nlFreeCommonTextureAll`, or earlier: every function the library reaches by `bsrf` or `braf` at a fixed distance must be inside the block, or the call lands elsewhere once the code moves) and runs on to the end of the C runtime. Left in
`game`, the library's hand-written assembly passes state in registers and the T flag, so C for part of it breaks what the rest relies on,
and `tools/equiv.py`, which compares results, memory and calls, cannot see it.

Dropped arguments: a pass-through trampoline (a few bytes that jump on to another function, r4-r7
untouched) whose C predates the generator's count of pass-through arguments is `(void)` in C, and
`tools/equiv.py` compares its callers on that, so a call that drops the arguments still passes and the
callee reads leftovers on the console. Before the first build, list the trampolines whose C takes fewer
integer arguments than `state/arity_scan.json` gives for the original, regenerate them and their callers
(`python3 tools/5-generated/gen_equiv --regen <name> ...`), and fix by hand (`/* manual: */`) a caller
that still passes fewer than the original sets before its `jsr` (delay slot included). An entry `"pass-through"` in the scan is
a trampoline that jumps through a table (its target is read from memory): its arity is unknown, not zero, so list those too and
check each caller against the registers the original sets before the call.

## Debugging the native port (step 10) *(equivalent)*
The port is an ordinary host program with symbols. Ask the running program; do not rebuild to ask.

For a port, the SDK code at 100% is required: nothing on the host runs the original SDK, so every SDK function without C is a gap. The `SDK` rows of `tools/progress.py` show how many have C.

- **Use the host's tools first.** A debugger stops the game in a function by name and shows its arguments, its locals and
  the call stack; a watchpoint on a record names the function that writes the bad value at the moment it does. Checkers for
  uninitialised reads and out-of-bounds accesses flag lost arguments as they happen. One build answers many questions.
- **Do not bisect by rebuilding.** Swapping a group of functions and running again costs minutes and answers yes or no.
  Treat a second rebuild for the same question as the sign to stop and look inside the process instead.
- **The picture is the last symptom, not the instrument.** Before reading frames, have the port print the state the
  picture depends on (the game's mode, the camera's eye and target, the texture memory left, the configuration block) once
  a second. A "missing world" was, in turn, a hardware register the host left at 0, an argument order the SH-4 does not care
  about, and matrix register pairs loaded in the wrong order: three causes with one picture.
- **A run that ends is not a run that passed.** Read the log's last lines: a fault near the time limit looks like the time
  limit. Have the port print where it was (host stack by function name) whenever it stops.
- **Take ground truth from the emulator's memory, not from guesses.** The same words read in the emulator and in the port
  at the same screen (allocator counters, the graphics configuration block, a guard flag) settle in minutes which side is
  wrong. Read them when the two first differ, not after reasoning about why they might.
- **Both versions of a function are in the process**: its C, and the original's bytes for the interpreter. Running one
  named function from the original instead of its C tests a single suspect cleanly. Use it for a suspect a stop in the
  debugger gave you, not to search.
- **List what the game calls by address.** Have the port report each address it is called at that `functions.txt` does not
  list, once, with a count at exit: the list is short, and it names the unlisted functions and the jumps into the middle of
  one that the C makes.
- **Read a crash by name.** A fault report's host addresses (`rip=...`, `callers ...`) go through `tools/10-port/where.sh`,
  which gives the functions and source lines.
- **Run it unattended.** `--keys FRAME:BUTTON,...` presses buttons at given frames, and `--screenshot-every N FILE` saves the
  screen, so a path through the menus runs with no one at the keyboard.
- **A stopped picture is a wait.** The watchdog's "no frame for N s" means the game waits on something the runtime never
  gives; the game thread's position in the report says what.

What a port finds that `tools/equiv.py` cannot see, because the SH-4 puts the values in the same places either way and the
host does not. Each goes back to the C of the decomp by its documented step; none is patched in the port:

| What differs | On the SH-4 | On the host |
|---|---|---|
| A caller declares the parameters in another order or shape than the definition, with a structure passed by value among them | every value lands in the same register or stack word | the order picks the register: the callee reads one argument where another was put |
| A caller's C leaves out an argument the original leaves in its register | the callee finds it there | lost, or there by luck |
| A function listed as two entries, its C calling into the middle of the other | the jump works by luck of the frame | the second part runs without the frame the first set up |
| A function that returns through a tail call, written `void` or `int` where the last function of the chain returns a float | the caller reads fr0 anyway | the caller reads a value the C never returned |
| A hardware register the game reads once at start-up to pick a code path (a revision, a cable type) | holds the console's value | reads 0 unless the port sets it, and the game takes the other path silently |

## Changing the game *(equivalent)*
The boot block is not free space. The entry stub copies the start of the executable elsewhere and
runs it there (seen on a game linked at `0x0C010000`: `0x0C010100-0x0C014000` to `0x0C004000`),
and the filler after the boot code, which looks unused and has no pointer into it, can be reused
once gameplay starts: code placed there can give a black screen. Space that has worked for new
code: an unused function the game's own code already calls.
