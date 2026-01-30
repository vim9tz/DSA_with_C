#include <stdio.h>

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int key = 15;
    int i, found = 0;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}