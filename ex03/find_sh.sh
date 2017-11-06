#!/bin/sh

find . -name '*.sh' -type f -print | rev | cut -f 1 -d '/' | cut --complement -c 1-3 | rev
