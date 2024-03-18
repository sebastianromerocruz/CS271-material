#include <stdio.h>

int main(void)
{
    // INCREMENT / DECREMENT
    int age = 30;

    printf("Before my birthday, I was %d-years-old.\n", age++);
    printf("After two birthdays, I was %d-years-old.\n", ++age);

    // UNARY PLUS / MINUS
    float positive_charge = +0.455f;
    float negative_charge = -0.006f;

    printf("\nPositive Charge: %f coulombs.\nNegative Charge: %f coulombs.\n", positive_charge, negative_charge);

    // INTEGER VS FLOAT DIVISION
    int operand_a = 3, 
        operand_b = 2;

    int int_div = operand_a / operand_b;
    float float_div = (float) operand_a / operand_b;

    printf("\nInteger Division: %d\nFloat Division: %f\n", int_div, float_div);

    // RELATIONAL
    printf("\nI am old enough to drink (1 for true, 0 for false): %d\n", 30 >= 21);  // there is no specifier for boolean

    // BITWISE
    printf("\n%d & %d = %d\n", operand_a, operand_b, operand_a & operand_b);
    printf("%d ^ %d = %d\n", operand_a, operand_b, operand_a ^ operand_b);
    printf("%d | %d = %d\n", operand_a, operand_b, operand_a | operand_b);

    // LOGICAL
    age = 31;

    printf("\nage += 10\t---> %d\n", age += 10);
    printf("age /= 2\t---> %d\n", age /= 2);
    printf("age %= 2\t---> %d\n", age %= 2);
    printf("age ^= 2\t---> %d\n", age ^= 2);

    return 0;
}