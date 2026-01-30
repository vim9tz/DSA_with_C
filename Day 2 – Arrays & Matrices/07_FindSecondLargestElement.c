// Find Second Largest Element

#include <stdio.h>

int main()
{
    int arr[5] = {10, 40, 30, 20, 50};
    int max = arr[0], secondMax = -1;
    int i;

    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    printf("Second Largest = %d\n", secondMax);

    return 0;
}