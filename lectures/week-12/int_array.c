#include <stdio.h>

void modify_int_array(int* arr, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] *= 2; // Multiply each element in the array by 2
    }
}

int main()
{
    int int_array[] = {1, 2, 3, 4, 5};

    printf("Before modification: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    // Pass the array by reference to the modifyIntArray function
    modify_int_array(int_array, 5);

    printf("After modification: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", int_array[i]);
    }
    printf("\n");

    return 0;
}