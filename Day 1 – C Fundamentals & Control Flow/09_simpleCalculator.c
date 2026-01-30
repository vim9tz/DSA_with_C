// Simple Calculator Using switch

#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    char op = '+';

    switch (op)
    {
    case '+':
        printf("Sum = %d\n", a + b);
        break;
    case '-':
        printf("Difference = %d\n", a - b);
        break;
    case '*':
        printf("Product = %d\n", a * b);
        break;
    case '/':
        printf("Quotient = %d\n", a / b);
        break;
    default:
        printf("Invalid Operator\n");
    }

    return 0;
}