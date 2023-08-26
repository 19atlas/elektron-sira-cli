#!/bin/bash
for i in $(seq 1 20); do 
	./build/kimyacının_programı.elf64 | echo $i
done