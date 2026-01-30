// Check Whether a Number Is Power of 2 ⭐⭐⭐

#include <stdio.h>

int main()
{
    int num = 16;

    if (num > 0 && (num & (num - 1)) == 0)
        printf("Power of 2\n");
    else
        printf("Not Power of 2\n");

    return 0;
}
