#!/bin/bash

# script to compile constantly
# more an experiment in bash than anything
# not particularly helpful!

i=0

if [ ! -d build ]; then
    mkdir build
fi

while true; do
    printf "Compilation attempt: %i\n" $i
    
    # Compile
    gcc -Wall -O0 -g -o build/main src/main.c
    
    if [ $? -eq 0 ]; then
        echo "Compilation succeeded."
    else
        echo "Compilation failed."
    fi
    
    ((i++))

    sleep 1
done



    

