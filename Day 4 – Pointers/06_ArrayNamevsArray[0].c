// Array Name vs &Array[0] ⭐

#include <stdio.h>

int main()
{
    int arr[5];

    printf("%p %p\n", arr, &arr[0]);

    return 0;
}