#!/bin/sh

readonly amount=$#
sum=0

for number in $@
do
    sum=$((sum+number))
done

average=$((sum/amount))

echo "The floor-average of [$@] is $average."