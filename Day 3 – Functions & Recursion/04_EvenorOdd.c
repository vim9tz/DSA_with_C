// Check Even or Odd Using Function

#include <stdio.h>

void checkEvenOdd(int);

int main()
{
    int num = 7;
    checkEvenOdd(num);
    return 0;
}

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}