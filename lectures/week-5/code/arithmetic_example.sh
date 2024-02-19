#!/bin/sh
# Step 1
read -p "Enter your first operand: " first_operand

# Step 2
read -p "Enter your second operand: " second_operand

# Step 3
read -p "Enter your operator: " operator

# Step 4
if [ "$operator" = "+" ]
then
    echo "$first_operand $operator $second_operand = $((first_operand + second_operand))"
elif [ "$operator" = "-" ]
then
    echo "$first_operand $operator $second_operand = $((first_operand - second_operand))"
elif [ "$operator" = "*" ]
then
    echo "$first_operand $operator $second_operand = $((first_operand * second_operand))"
elif [ "$operator" = "/" ]
then
    if [ $second_operand -eq 0 ]
    then
        # Step 4.1
        echo "$first_operand $operator $second_operand is an illegal operation."
    else
        # Step 4.2
        echo "$first_operand $operator $second_operand = $((first_operand / second_operand))"
    fi
fi
