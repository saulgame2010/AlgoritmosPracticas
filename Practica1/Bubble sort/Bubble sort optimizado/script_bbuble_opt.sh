#!/bin/bash

g++ bubble_opt_sort.cpp tiempo.c -o bubble_opt_sort
./bubble_opt_sort 500000 < numeros10millones.txt >> tRealBubble.txt
