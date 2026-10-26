#!/usr/bin/env bash
# Source this: docker_ready [image dir] -> checks Docker is installed AND reachable, and enough memory;
# with an image dir, builds that image (tag = DC_IMAGE_TAG, default dc-tools) on first use.
# Fails loudly with what to do, never falls back silently.
docker_ready() {
  command -v docker >/dev/null 2>&1 || { echo "[ERROR] Docker is not installed. Install Docker Desktop (Mac, Windows) or Docker Engine (Linux)." >&2; return 1; }
  docker info >/dev/null 2>&1 || { echo "[ERROR] Docker is installed but not running or not reachable from this shell: start Docker Desktop (or 'colima start'), then retry. If it is running, check 'docker context ls'." >&2; return 1; }
  if [ -n "${1:-}" ]; then
    local tag="${DC_IMAGE_TAG:-dc-tools}"
    if ! docker image inspect "$tag" >/dev/null 2>&1; then
      echo "Building the $tag image (once, a minute or two)" >&2
      docker build --platform linux/amd64 -t "$tag" "$1" >/dev/null </dev/null || { echo "[ERROR] building the $tag image failed" >&2; return 1; }
    fi
  fi
}
docker_low_memory() { [ "$(docker info --format '{{.MemTotal}}' 2>/dev/null || echo 0)" -lt 3500000000 ] 2>/dev/null; }
