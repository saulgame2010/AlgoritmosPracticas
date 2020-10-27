#!/bin/bash

g++ Seleccion.cpp tiempo.c -o seleccion
./seleccion 500000 < numeros10millones.txt >> out.txt

