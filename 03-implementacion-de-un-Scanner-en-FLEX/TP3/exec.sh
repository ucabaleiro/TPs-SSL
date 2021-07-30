#!/bin/bash
FILE=TP3
make $FILE
if test -f "./$FILE"; then
    ./$FILE
fi