# Native Port

**Experimental.** A native port: the game's own C ([src/](../src/), [sdk/<library>/](../sdk/)) built into an x86-64 Linux program that runs
without an emulator. The console's RAM is mapped at its addresses, the game's C is compiled for the host with the SH-4's
sizes, and this runtime stands in for the hardware and the boot ROM. The tools that build and check it are in
[tools/10-port/](../tools/10-port/README.md).

## What is here

| path | what it is |
|---|---|
| [runtime/runner.c](runtime/runner.c) | The program's entry: maps the RAM, loads `1ST_READ.BIN`, runs what the start code runs, then the game's main; the watchdog and the fault reports. |
| [runtime/hw.c](runtime/hw.c) | The hardware registers the game's C touches (system bus, interrupts, timers, DMA, the G2 bus) and the interrupt delivery. |
| [runtime/pvr.c](runtime/pvr.c), [draw.c](runtime/draw.c), [render.c](runtime/render.c), [render.h](runtime/render.h) | The PowerVR: the tile accelerator's lists, textures, and the drawing through OpenGL. |
| [runtime/aica.c](runtime/aica.c), [sound.c](runtime/sound.c), [sound.h](runtime/sound.h), [adx.c](runtime/adx.c) | The sound chip (its ARM7 and channels) and ADX playback. |
| [runtime/files.c](runtime/files.c) | The disc's files from a folder (`--data DIR`): ADXF and the gdFs calls the game makes. |
| [runtime/vmu.c](runtime/vmu.c) | The memory card as a folder of files (the backup library, `bu*`). |
| [runtime/platform.c](runtime/platform.c) | The window, the controller (SDL gamepad or keyboard), the sound thread, the peripheral API (`pd*`). |
| [runtime/boot.c](runtime/boot.c) | The debug log: with `PORT_BOOT_LOG` set, each change of the game's mode and sub-mode, with the frame. |
| [runtime/bios.c](runtime/bios.c), [system.c](runtime/system.c) | The boot ROM's system calls (system information, flash, GD-ROM vector) and the system settings. |
| [runtime/nlib.c](runtime/nlib.c) | The NAOMI library's model kernel and matrix calls, for a game built on that library. |
| [runtime/sh4.c](runtime/sh4.c), [interp.h](runtime/interp.h) | An SH-4 interpreter for the functions that have no C. |
| [runtime/shim.c](runtime/shim.c), [prelude.h](runtime/prelude.h), [port.h](runtime/port.h) | The SH-4 instructions with no C form (fsca, ftrv, fipr, fsrra) and what every game file is compiled with. |
| [runtime/game.c](runtime/game.c), [game.h](runtime/game.h) | **The scaffolding:** this game's addresses and the host versions of its console-only library functions. |
| [third_party/sa_numeric/](third_party/sa_numeric/NOTICE.md) | The SH-4's float approximations. |
| [Dockerfile](Dockerfile) | The build container. |

## To bring up a game

1. **[runtime/game.h](runtime/game.h)**: fill in each address (the comments say where each comes from, with an example), then remove the
   `#error`. They are in [functions.txt](../functions.txt) and [globals.txt](../globals.txt) once steps 1-2 named the SDK: `_INITSCT`, `_INITLIBH`, `main`
   or what the start code calls in its place, the compiler runtime's `errno`, `kmiInterruptHandlerSH`, the library's
   default interrupt handler, and the word the exception code copies INTEVT to.
2. **[runtime/game.c](runtime/game.c)**: keep the functions this game's C does not already have; drop the others.
3. **[runtime/nlib.c](runtime/nlib.c)**: only for a game built on the NAOMI library; without it, remove the file. Its other constants
   (`0x8C07AE58`, `0x8C14A910`-`0x8C14A960`, `0x8C2B30A4`-`0x8C2B7BE8`, the kernel's range `0x0C0739C0`-`0x0C089F26`) are
   those of the game the runtime was first brought up on: each is the same library variable or table in another game at
   another address, found by matching the library functions that use it.
4. **The build container**, once: [Dockerfile](Dockerfile) (clang 16, LLVM 16, SDL 3, Mesa, Xvfb, gdb). Its name goes in the
   repo's `.env` as `PORT_IMAGE`, beside `GDI` (your original disc):

   ```
   docker build -t mygame-port port
   ```

5. **Build** the program, `build/native/game`. With `--keep-objects`, a later build
   compiles again only the files whose text changed:

   ```
   docker run --rm -v "$PWD":/work -w /work "$PORT_IMAGE" python3 tools/10-port/native_build.py
   ```

6. **The disc's files**, once, into the folder the program reads:

   ```
   python3 tools/10-port/extract_disc.py "$GDI"
   ```

7. **Run** it. On x86-64 Linux with SDL 3, directly:

   ```
   build/native/game --data build/native/data
   ```

   Anywhere else, in the container on a virtual screen, with a screenshot every 300 frames (`--seconds` ends the run):

   ```
   docker run --rm --security-opt seccomp=unconfined -v "$PWD":/work -w /work "$PORT_IMAGE" \
       xvfb-run -a -s "-screen 0 1280x960x24" build/native/game --data build/native/data --seconds 60 \
       --screenshot-every 300 build/native/shot
   ```

   When the program crashes it prints where it stopped as host addresses (`rip=...`, `callers ...`);
   [tools/10-port/where.sh](../tools/10-port/where.sh) turns them into function names and source lines.
