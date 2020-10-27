#!/bin/bash

g++ bubble_sort.cpp tiempo.c -o bubble_sort
./bubble_sort 500000 < numeros10millones.txt >> tRealBubble.txt

