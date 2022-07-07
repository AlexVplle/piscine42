#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed "${FT_LINE1},${FT_LINE2}p" -n | sed ':a;N;$!ba;s/\n/, /g'| sed 's/$/./' | tr -d '\n'
