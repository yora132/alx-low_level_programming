#!/bin/bash
wget -P /tmp/ https://github.com/yora132/alx-low_level_programming/tree/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
