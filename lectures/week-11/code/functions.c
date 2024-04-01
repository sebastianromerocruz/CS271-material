#include <stdio.h>

void increment(int num)
{
    num++;
    printf("Incremented value: %d\n", num);
}

void multiply(float num)
{
    num *= 2;
    printf("Multiplied value: %.2f\n", num);
}

void change_case(char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        c = c - 'a' + 'A';
    }

    printf("Changed character: %c\n", c);
}

void capitalize(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Capitalized string: %s\n", str);
}

int main() 
{
    // Integers
    int integer = 5;

    increment(integer);
    printf("Original value: %d\n", integer);

    // Floats
    float floating_point = 3.5;

    multiply(floating_point);
    printf("Original value: %.2f\n", floating_point);

    // Chars
    char letter = 'b';

    change_case(letter);
    printf("Original character: %c\n", letter);

    // Strings
    char text[] = "hello";

    capitalize(text);
    printf("Original string: %s\n", text);

    return 0;
}