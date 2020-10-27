#!/bin/bash

g++ Insercion.cpp tiempo.c -o Insercion
./Insercion 500000 < numeros10millones.txt >> out.txt

