// Output Prediction (Pointer Increment)

#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int *p = a;

    printf("%d ", *p++);
    printf("%d ", *p);

    return 0;
}