#!/bin/sh

g++ -I./include/ ./diffusion/DiffVersion.cpp ./diffusion/Interpreter.cpp ./diffusion/DifFusionMain.cpp -o diff && ./diff
