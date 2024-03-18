#include <stdio.h>

int main(void)
{
    char day = 'H';  // here, let's make H stand for Thursday

    switch (day) {
        // Weekdays
        case 'M':
        case 'T':
        case 'W':
        case 'H':
        case 'F': 
            printf("%c is a weekday!\n", day); 
            break;

        // Weekend
        case 'S':
        case 'N': // here, let's make N stand for Sunday
            printf("%c is a weekend!\n", day);
            break;

        // If the user entered an invalid day
        default:
            break;
    }

    return 0;
}