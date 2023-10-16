#!/bin/bash

# Set the URL for the raw libhack.so file on GitHub
GITHUB_URL="https://raw.githubusercontent.com/CletsyMedia/alx-low_level_programming/master/0x18-dynamic_libraries/data/libhack.so"

# Download libhack.so
wget -O libhack.so $GITHUB_URL

# Export LD_PRELOAD with the absolute path to libhack.so
export LD_PRELOAD="$(pwd)/libhack.so"

# Run the Giga Millions program with the desired numbers
./gm 9 8 10 24 75 9
