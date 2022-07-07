#!/bin/sh
find . -name '*.sh' | xargs basename -a -s .sh
