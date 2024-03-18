#include <stdio.h>

int main(void)
{
    int age_limit = 18;
    int age = 31;

    if (age > age_limit)
    {
        printf("You are old enough to watch R-Rated films.\n");
    } 
    else if (age == age_limit)
    {
        printf("Happy birthday! You are old enough to watch R-Rated films.\n");
    }
    else
    {
        printf("You are not old enough to watch R-Rated films.\n");
    }

    return 0;
}