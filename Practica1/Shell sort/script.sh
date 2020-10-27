#!/bin/bash

g++ shell_sort.cpp tiempo.c -o shell_sort
./shell_sort 500000 < numeros10millones.txt >> tProcShell.txt

