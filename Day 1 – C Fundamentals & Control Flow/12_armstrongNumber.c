// Armstrong Number(Advanced Logic)

#include <stdio.h>

int main()
{
    int num = 153, temp, sum = 0, digit;

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}