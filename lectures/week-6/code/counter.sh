#!/bin/sh
readonly limit=10
number=1

while [ $number -le $limit ]
do
    echo $number
    number=$((number+1))
done

for number in 1 2 3 4 5 6 7 8 9 10
do
    echo $number
done