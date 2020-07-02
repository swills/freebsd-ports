#!/bin/sh
# Copyright 2020 The Emscripten Authors.  All rights reserved.
# Emscripten is available under two separate licenses, the MIT license and the
# University of Illinois/NCSA Open Source License.  Both these licenses can be
# found in the LICENSE file.
#
# Entry point for running python scripts on UNIX systems.
#
# To modify this file, edit `tools/run_python.sh` and then run
# `tools/create_entry_points.py`

set -e

PREFIX="$(cd "$(dirname "$(which "$0")")" && cd ../.. && pwd)"
EM_PREFIX="$PREFIX/lib/emscripten"
EMCC="$EM_PREFIX/emcc"
BASENAME="$(basename "$0")"
TARGET="$EM_PREFIX/$BASENAME"

PYS="$(ls "$PREFIX/bin" | grep '^python[0-9].[0-9]\{1,\}$' | sort -r)"

if [ -z "$PYS" ]; then
  echo "Failed to find a Python interpreter"
  exit 1
fi

export PYTHON="$(echo $PYS | awk '{print $1}')"
export LLVM="$EM_PREFIX/llvm/bin"
export BINARYEN="$EM_PREFIX/binaryen"

if [ ! -e "$HOME/.emscripten" ]; then
  "$PYTHON" "${EMCC}.py" >/dev/null 2>&1 || true
  "$PYTHON" "${EMCC}.py" >/dev/null 2>&1 || true
fi

exec "$PYTHON" "${TARGET}.py" "$@"
