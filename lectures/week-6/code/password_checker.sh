#!/bin/sh
readonly stored_password="myPassword"

read -p "Enter your password: " password

while [ $password != $stored_password ]
do
    read -p "Incorrect password. Enter your password: " password
done

echo "Welcome!"
    