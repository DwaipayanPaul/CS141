#!/bin/sh
echo "what is your name"
read NAME
echo "your name is $NAME"
mkdir $NAME
for i in 1 2 3 4 5
do
touch $NAME/$NAME$i.cpp
done
