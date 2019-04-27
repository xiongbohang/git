#!/bin/bash
x=0
for (( i=0; i<=100; i++ ))
do 
a=$[$i%2]
if test $a -eq 1;then
let x=$x+$i
fi
done 
echo $x
