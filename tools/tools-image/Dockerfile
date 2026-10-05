# The Hitachi SDK tools (asmsh, lnk, lbr, elf2bin, shc) are Windows programs; wibo runs them on
# Linux. This image is just a small Linux plus a pinned, checksum-verified wibo: nothing pulled from
# anyone else's image. amd64 only (wibo is x86); emulated on Apple Silicon.
#   docker build --platform linux/amd64 -t dc-tools scripts/tools-image
FROM --platform=linux/amd64 debian:bookworm-slim
ARG WIBO_URL=https://github.com/decompals/wibo/releases/download/1.1.0/wibo-x86_64
ARG WIBO_SHA256=b9ab9f2c5eb014bc79a97f1a2bee9a7ab177d905a7d2f637da5735820021c40c
RUN apt-get update && apt-get install -y --no-install-recommends ca-certificates curl make python3 \
 && rm -rf /var/lib/apt/lists/* \
 && curl -fsSL -o /usr/local/bin/wibo "$WIBO_URL" \
 && echo "$WIBO_SHA256  /usr/local/bin/wibo" | sha256sum -c - \
 && chmod +x /usr/local/bin/wibo
# The Hitachi compiler reads these (paths as wibo sees them: Z:\ is the container's /).
ENV KATANA_SDK_DIR=Z:\\sdk SHINOBI_DIR=Z:\\sdk\\shinobi SHC_BIN=Z:\\sdk\\shc\\bin SHC_LIB=Z:\\sdk\\shc\\bin \
    SHC_INC=Z:\\sdk\\shc\\include,Z:\\sdk\\shinobi\\include SHC_TMP=Z:\\app\\build\\tmp
