// switch + fall-through (VERY IMPORTANT)

#include <stdio.h>

int main()
{
    int x = 2;

    switch (x)
    {
    case 1:
        printf("One ");
    case 2:
        printf("Two ");
    case 3:
        printf("Three ");
    default:
        printf("Default");
    }

    return 0;
}