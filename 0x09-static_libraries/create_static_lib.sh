#!/bin/bash

c_files=""

for c_files in *.c
do
	gcc -c "$c_files" -o "${c_files%.c}.o"
done

object_files=""

for object_files in *.o
do
	ar rcs liball.a "$object_files"
done

echo Success
