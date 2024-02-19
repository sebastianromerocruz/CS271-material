#!/bin/sh
readonly age_limit=18
read -p "How old are you? " age  # adding user input

# note that this changes to -gt now
if [ $age -gt $age_limit ]
then
    echo "You can watch R-rated movies."
elif [ $age -eq $age_limit ]
then
    echo "Happy birthday! Enjoy the film."
else
    echo "You need to be chaperoned by somebody who is $age_limit or older to watch R-rated movies."
fi