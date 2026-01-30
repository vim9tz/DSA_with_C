// Count Even and Odd Numbers

#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int even = 0, odd = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d, Odd = %d\n", even, odd);

    return 0;
}