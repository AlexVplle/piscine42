#!/bin/sh
ifconfig | grep ether | grep -oE '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'
