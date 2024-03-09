#include <stdio.h>

int main(void)
{
    /* INTEGERS */
    int year = 1967;
    printf("A good year in music was %d\n", year);

    /* FLOATING-POINT VALUES */
    double speed_of_light = 299792458.00002;
    float acceleration_of_gravity = 9.81f;

    int size_of_double = sizeof(speed_of_light);
    int size_of_float = sizeof(acceleration_of_gravity);

    printf("The size of a double is %d bytes.\n", size_of_double);
    printf("The size of a float is %d bytes.\n", size_of_float);

    printf("The size of %lf should be 4 bytes, but it is instead %lu.\n", 3.14, sizeof(3.14));
    printf("However, if we instead write '%lff', we will get the correct size: %lu.\n", 3.14f, sizeof(3.14f));

    /* CHARS */
    char initial = 'S';
    printf("My first-name initial is %c, which corresponds to the ASCII value %d.\n", initial, initial);

    /* STRINGS */
    char band_name[] = "Velvet Underground";
    printf("I am listening to %s as I write these notes.\n", band_name);

    return 0;
}