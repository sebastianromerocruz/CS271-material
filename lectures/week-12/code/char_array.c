#include <stdio.h>

void modify_char_array(char* arr, int size) 
{
    for (int i = 0; i < size; i++) {
        arr[i] = 'X'; // Modify each character in the array to 'X'
    }
}

int main() 
{
    char char_array[] = "Hello, World!";
    printf("Before modification: %s\n", char_array);

    // Pass the array by reference to the modify_char_array function
    modify_char_array(char_array, sizeof(char_array) - 1);

    printf("After modification: %s\n", char_array);

    return 0;
}