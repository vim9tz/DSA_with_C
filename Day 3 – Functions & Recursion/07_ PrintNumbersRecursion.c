//  Print Numbers from 1 to N Using Recursion

#include <stdio.h>

void printNumbers(int);

int main()
{
    printNumbers(5);
    return 0;
}

void printNumbers(int n)
{
    if (n == 0)
        return;

    printNumbers(n - 1);
    printf("%d ", n);
}