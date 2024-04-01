#include <stdio.h>

int main(void) 
{
    // Pointer to an int
    int a = 5;
    int *ptr_int;
    ptr_int = &a;
    printf("%d", *ptr_int); // Output: 5

    // Pointer to a float
    float b = 3.14;
    float *ptr_float;
    ptr_float = &b;
    printf("%f", *ptr_float); // Output: 3.140000

    // Pointer to a char
    char c = 'A';
    char *ptr_char;
    ptr_char = &c;
    printf("%c", *ptr_char); // Output: A

    // Pointer to a char array
    char string[5] = "Hello";
    char *ptr_array;
    ptr_array = string;
    printf("%s", ptr_array); // Output: Hello

    return 0;
}