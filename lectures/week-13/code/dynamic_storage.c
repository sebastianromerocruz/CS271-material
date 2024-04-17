#include <stdio.h>

int main(void)
{
    // Dynamically allocating memory for an integer
    int *ptr = (int *) malloc(sizeof(int));

    // Filling in that memory with an actual integer
    *ptr = 42;

    // Using the value being pointed to by ptr pointer
    printf("%d\n", *ptr);

    // Deallocating/freeing up the memory allocated earlier
    // since we no longer need it
    free(ptr);

    // free() only deallocates the memory, but does not 
    // destroy the pointer. This is potentially dangerous
    // (we'll see why later) so let's set this pointer to
    // null
    ptr = NULL;

    return 0;
}