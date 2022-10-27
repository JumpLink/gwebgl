#!/bin/sh
# Usage: ./rundemo.sh demo-2
cd `dirname $0`
builddir=`pwd`/build
export GI_TYPELIB_PATH=${GI_TYPELIB_PATH:${GI_TYPELIB_PATH}:}${builddir}
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH:${LD_LIBRARY_PATH}:}${builddir}

/usr/bin/gjs -m ./examples/$1/main.js
