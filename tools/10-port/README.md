# Step 10: native port

The runtime the game is linked with lives in the repo's `port/` (`port/runtime/`, `port/third_party/`); the tools that build and
check the port are here.

| tool | what it does |
|---|---|
| [native_build.py](native_build.py) | Builds the native (x86-64 Linux) game from the game's C in `src/` and the SDK's C in `sdk/<library>/`: compile, census, stubs, dispatch table, link with `port/runtime`. |
| [sh4abi.py](sh4abi.py) | Calls whose declaration puts the arguments where the callee's definition does not, on the host. |
| [forwarded.py](forwarded.py) | Arguments the SH-4 passes on in registers the C leaves out. |
| [dropped_args.py](dropped_args.py) | Functions whose C takes fewer arguments than its callers pass. |
| [frame_reads.py](frame_reads.py) | Functions whose C reads past its own local frame: stack words the caller passed that the C does not declare. |
| [thunks.py](thunks.py) | Short functions that end in a tail jump to another function, passing on argument registers they never write. |
| [extract_disc.py](extract_disc.py) | Every file of the disc into the folder the native game reads (`build/native/data`). |
| [mkpatch.sh](mkpatch.sh) | `port/src_fixes.patch` from the build's fixed copy of `src/` (`build/native/src_fixed`). |
| [where.sh](where.sh) | The host addresses a fault report prints, as functions and source lines. |
| [capture.sh](capture.sh) | Waits for the running game to reach a mode (its `PORT_BOOT_LOG` line), then reads its frame and RAM a few times with `frame_capture.py`. |
| [frame_capture.py](frame_capture.py) | The running game's last frame (every polygon and vertex) and its RAM, read from its memory without stopping it. |

## Contributions

The tools in this folder are based on the tools proposed in the [native-port branch of the fork](https://github.com/Subarasheese/virtua-tennis-decomp/tree/native-port) of [virtua-tennis-decomp](https://github.com/consolesplayingconsoles/virtua-tennis-decomp) by Subarasheese.
