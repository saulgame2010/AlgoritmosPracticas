#!/bin/bash

g++ tree_sort.cpp tiempo.c  -o tree_sort
./tree_sort 500000 < numeros10millones.txt >> out.txt

