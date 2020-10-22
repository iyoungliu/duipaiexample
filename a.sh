#!/bin/bash
while true; do
    ./data > data.in
    ./std <data.in >std.out
    ./todobe <data.in >todobe.out
    if diff std.out todobe.out; then
        printf "AC\n"
    else
        printf "Wa\n"
        exit 0
    fi
done
