// Count Set Bits (1s) in a Number (Bitwise AND)

#include <stdio.h>

int main()
{
    int num = 13;
    int count = 0;

    while (num > 0)
    {
        count += num & 1;
        num = num >> 1;
    }

    printf("Set bits = %d\n", count);

    return 0;
}