#!/usr/bin/env bash
# Rebuild 1ST_READ.BIN from asm/ and the matching C units in src/, and check it against the original.
# Runs the SDK's Hitachi tools (asmsh, lnk, elf2bin) under wibo, in a Linux container by default.
#   bash build.sh            (SDK_PATH from .env, written by the kick-off; or set it in the environment)
#   bash build.sh --overlay <name>   opt-in: the same build for one code overlay (overlays/<name>/, load address from overlays.tsv),
#                                    compared with overlays/<name>/<name>.bin; build_overlays.sh runs it for every overlay
# SDK_PATH can be any SDK layout: the tools are found by name (asmsh.exe) anywhere under it.
# Docker is the default (any OS). DC_LOCAL=1 is opt-in for Linux x86_64 without Docker: it runs
# wibo from your PATH (wibo does not run on macOS or Windows).
set -euo pipefail
cd "$(dirname "$0")"
# shellcheck disable=SC1091
[ -z "${SDK_PATH:-}" ] && [ -f .env ] && . ./.env
[ -n "${SDK_PATH:-}" ] || { echo "[ERROR] no SDK_PATH: put SDK_PATH=\"/path/to/your Katana SDK\" in $PWD/.env (or export it)"; exit 1; }
SDK_PATH="$(cd "$SDK_PATH" && pwd)"
ASMSH="$(find "$SDK_PATH" -iname asmsh.exe -print -quit)"
[ -n "$ASMSH" ] || { echo "[ERROR] no asmsh.exe under $SDK_PATH: not a Katana SDK with the Hitachi tools"; exit 1; }
TOOLS_REL="${ASMSH#"$SDK_PATH"/}"; TOOLS_REL="${TOOLS_REL%/*}"
for t in lnk elf2bin shc; do
  [ -n "$(find "$SDK_PATH/$TOOLS_REL" -maxdepth 1 -iname "$t.exe" -print -quit)" ] || { echo "[ERROR] $t.exe missing next to asmsh.exe in $SDK_PATH/$TOOLS_REL"; exit 1; }
done
R="$PWD"; IMG=1ST_READ.BIN; BASE="$(cat BASE)"; OV=""; SHCT="Z:\\app\\build\\tmp"
if [ "${1:-}" = --overlay ]; then       # an overlay is built in its own folder, with the same steps
  OV="${2:?usage: bash build.sh --overlay <name>}"
  BASE="$(python3 tools/overlay/ovtsv.py base "$OV")"; IMG="$OV.bin"
  [ -f "overlays/$OV/$IMG" ] && [ -f "overlays/$OV/objects.txt" ] || { echo "[ERROR] overlays/$OV is not set up: run setup.sh"; exit 1; }
  python3 tools/overlay/place_units.py "$OV"     # its C units, from the one copy of each (overlays/src/, overlays/units.tsv)
  cd "overlays/$OV"
  SHCT="Z:\\tmp\\shc_$OV"           # the compiler cannot open its temp files under a long path: a short one, one per overlay
fi
mkdir -p build/obj
# shc's include folders: the unit's own src/, and the source tree's roots where the repo has them (src, modules, events, sdk:
# the headers of C that keeps its original layout); an overlay builds in its own folder, two levels down
P=""; [ -n "$OV" ] && P="..\\..\\"
INC="-include=src"; for d in src modules events sdk/include sdk; do [ -d "$R/$d" ] && [ -n "$(ls "$R/$d"/*/ 2>/dev/null)$(ls "$R/$d"/*.h 2>/dev/null)" ] && INC="$INC,$P${d//\//\\}"; done
# C units (src/*.c starting with /* @unit <start>-<end> [@data <dstart>-<dend>] [shc options] */)
# replace the asm files in their range(s);
# symbols.txt gives the linker the addresses of globals they use that no file defines.
{
  printf '%s\n' elf "start P($BASE)" "output build\\out.elf"
  python3 "$R/tools/1-2-baseline/units.py" objects.txt | while read -r o; do printf 'input %s\n' "$o"; done
  if [ -n "$(grep -rl --include="*.c" "@unit" src 2>/dev/null)" ]; then
    grep -hoE '[A-Za-z_][A-Za-z0-9_]*' $(grep -rl --include='*.c' '@unit' src 2>/dev/null) /dev/null | sort -u > build/c_idents.txt || true
    if [ -n "$OV" ]; then python3 "$R/tools/overlay/link_defs.py" "$OV" build/c_idents.txt
    elif [ -f symbols.txt ]; then awk 'NR==FNR{u[$1]=1; next} !/^#/ && NF==2 && ($2 in u) {printf "define _%s(%s)\n", $2, $1}' build/c_idents.txt symbols.txt; fi
  fi
  printf '%s\n' exit
} > build/link.sub
python3 "$R/tools/1-2-baseline/units.py" --units > build/units.txt

# The steps, run with $T = the tools folder and the repo as the working directory.
STEPS='
  set -e
  export FILL_IMAGE="$IMG" FILL_BASE="$B"      # the original bytes a unit keeps (+asmfunc) come from this image
  tool() { find "$T" -maxdepth 1 -iname "$1.exe" -print -quit; }
  n=0; i=0; total=$(wc -l < objects.txt | tr -d " ")
  echo "Assembling $total files (first build: a few minutes; later builds: only changed files)"
  while read -r f; do
    i=$((i+1)); [ $((i % 200)) -eq 0 ] && echo "  checked $i/$total, assembled $n"
    o="build/obj/${f%.src}.obj"
    if [ ! -f "$o" ] || [ "asm/$f" -nt "$o" ]; then
      wibo "$(tool asmsh)" "asm\\$f" -object="build\\obj\\${f%.src}.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      n=$((n+1))
    fi
  done < objects.txt
  echo "assembled $n files"
  # C units: shc (its flags: tools/1-2-baseline/shc_flags.txt, shared with tools/fcmp.py) -> asm, gaps filled with 0xEE and padded to the unit size (tools/1-2-baseline/fill.py), asmsh
  mkdir -p build/tmp
  case "$SHCT" in Z:*tmp*shc_*) mkdir -p "/tmp/${SHCT##*\\}";; esac
  while read -r name start end dstart dend opts; do
    [ -n "$name" ] || continue
    on="${name//\//_}"; sw="${name//\//\\}"      # a unit in a folder of src/: objects named after its path
    o="build/obj/c_$on.obj"
    flags="$(cat "$R/tools/1-2-baseline/shc_flags.txt")"; fillopts=""; shcopts=""; shc="$(tool shc)"; shcw="$TW"; pieces=""
    for x in $opts; do case "$x" in
      +*flags) f="${x#+}"; f="$R/tools/1-2-baseline/shc_flags.${f%flags}.txt"       # opt-in (+egflags ...): another set in place of shc_flags.txt
        [ -f "$f" ] || { echo "[ERROR] unit $name: no $f for $x"; exit 1; }
        flags="$(cat "$f")";;
      +r04) [ -n "$R04" ] || { echo "[ERROR] unit $name asks for SHC 5.1r04 (+r04): set SDK_R04_PATH (see README)"; exit 1; }
        shc="$(find "$R04" -maxdepth 1 -iname shc.exe -print -quit)"; shcw="$R04W";;
      @ddata=*|@bdata=*) k="${x#@}"; k="${k%%data=*}"; r="${x#*=}"; pieces="$pieces $k"
        fillopts="$fillopts --${k}sec=build/obj/c_${on}_${k}data.s:${r%-*}:${r#*-}";;
      +*) fillopts="$fillopts --${x#+}";;
      *) shcopts="$shcopts $x";; esac; done
    [ -z "$pieces" ] || fillopts="$fillopts --name=$on"
    if [ ! -f "$o" ] || [ "src/$name.c" -nt "$o" ] || [ src -nt "$o" ]; then
      SHC_LIB="$shcw" SHC_INC="$shcw" SHC_TMP="$SHCT" wibo "$shc" "src\\$sw.c" -code=asm -object="build\\obj\\c_$on.s" \
        ${flags%%-include=*} $INC $shcopts > build/shc.log 2>&1 || { cat build/shc.log; exit 1; }
      # code at <start>-<end>; with @data, the constant data (C section) as its own piece at <dstart>-<dend>; @ddata/@bdata the D and B sections
      if [ "$dstart" = - ]; then
        python3 "$R/tools/1-2-baseline/fill.py" "build/obj/c_$on.s" "build/obj/c_${on}_f.s" "$start" "$end" $fillopts || exit 1
      else
        python3 "$R/tools/1-2-baseline/fill.py" "build/obj/c_$on.s" "build/obj/c_${on}_f.s" "$start" "$end" \
          "build/obj/c_${on}_data.s" "$dstart" "$dend" "$on" $fillopts || exit 1
        pieces="$pieces _"
      fi
      for k in $pieces; do
        p="c_${on}_${k#_}data"; [ "$k" = _ ] && p="c_${on}_data"
        wibo "$(tool asmsh)" "build\\obj\\$p.s" -object="build\\obj\\$p.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
          || { cat build/asm.log; exit 1; }
      done
      wibo "$(tool asmsh)" "build\\obj\\c_${on}_f.s" -object="build\\obj\\c_$on.obj" -cpu=sh4 -endian=little > build/asm.log 2>&1 \
        || { cat build/asm.log; exit 1; }
      echo "  compiled C unit $name"
    fi
  done < build/units.txt
  echo "linking"
  wibo "$(tool lnk)" -subcommand=build\\link.sub > build/link.log 2>&1 || { tr -d "\r" < build/link.log | grep -v "^: input" | tail -20; exit 1; }
  # lnk exits 0 with an unresolved symbol (it is only a warning): the call would go to address 0.
  if grep -qi "UNDEFINED" build/link.log; then tr -d "\r" < build/link.log | grep -i "UNDEFINED"; exit 1; fi
  wibo "$(tool elf2bin)" -s "$B" build\\out.elf > build/elf2bin.log 2>&1 || { cat build/elf2bin.log; exit 1; }
'
if [ "${DC_LOCAL:-0}" = 1 ]; then
  command -v wibo >/dev/null || { echo "[ERROR] DC_LOCAL=1 needs wibo on PATH (github.com/decompals/wibo, Linux x86_64)"; exit 1; }
  TW="Z:$(printf '%s' "$SDK_PATH/$TOOLS_REL" | tr / '\\')"     # wibo maps Z:\ to /
  [ -n "$OV" ] || SHCT="build\\tmp"     # Z:\app is the container's mount: here the repo's own build/tmp
  R04="${SDK_R04_PATH:-}"; R04W=""; [ -n "$R04" ] && R04W="Z:$(printf '%s' "$R04" | tr / '\\')"
  T="$SDK_PATH/$TOOLS_REL" TW="$TW" B="$BASE" IMG="$IMG" R="$R" SHCT="$SHCT" OV="$OV" INC="$INC" R04="$R04" R04W="$R04W" bash -c "$STEPS" </dev/null
else
  . "$R/tools/docker_check.sh"
  docker_ready "$R/tools/tools-image" || exit 1      # builds the dc-tools image (wibo) on first use
  IMAGE="${DC_TOOLS_IMAGE:-dc-tools}"
  TW="Z:$(printf '%s' "/sdk/$TOOLS_REL" | tr / '\\')"
  docker run --rm -v "$SDK_PATH":/sdk:ro -v "$R":/app -w "/app${OV:+/overlays/$OV}" -e T="/sdk/$TOOLS_REL" -e TW="$TW" -e B="$BASE" -e R=/app -e SHCT="$SHCT" -e OV="$OV" -e IMG="$IMG" -e INC="$INC" \
    ${SDK_R04_PATH:+-v "$SDK_R04_PATH":/r04:ro -e R04=/r04 -e R04W='Z:\\r04'} "$IMAGE" bash -c "$STEPS" </dev/null
fi
if cmp -s build/out.bin "$IMG"; then
  echo "MATCH: build/out.bin is byte-identical to $IMG"
else
  echo "DIFFERS: build/out.bin vs $IMG (expected if you changed the game; a failure if you did not)"
  cmp build/out.bin "$IMG" | head -1 || true
  [ "${DC_EXPECT_CHANGES:-0}" = 1 ] || exit 1
fi
