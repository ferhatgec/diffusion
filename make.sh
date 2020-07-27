#!/bin/sh

g++ -I./include/ -I./difflib/ ./diffusion/DiffVersion.cpp ./diffusion/Interpreter.cpp ./diffusion/DifFusionMain.cpp -o diff && ./diff
g++ -I./include/ -I./difflib/ ./diffusion/DiffVersion.cpp ./diffusion/Interpreter.cpp ./tests/getdata.cpp -o get
