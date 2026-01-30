// Check Even or Odd Using Bitwise AND

#include <stdio.h>

int main()
{
    int num = 7;

    if (num & 1)
        printf("Odd Number\n");
    else
        printf("Even Number\n");

    return 0;
}