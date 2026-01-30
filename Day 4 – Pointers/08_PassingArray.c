// Passing Array to Function

#include <stdio.h>

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int a[3] = {10, 20, 30};
    printArray(a, 3);
    return 0;
}