// Find Largest Element in Array

#include <stdio.h>

int main()
{
    int arr[5] = {12, 45, 7, 89, 23};
    int max = arr[0];
    int i;

    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Largest = %d\n", max);

    return 0;
}