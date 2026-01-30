// Use-After-Free Accessing memory after it has been freed → undefined behavior

// ❌ WRONG CODE (MEMORY LEAK)
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *p;

//     p = (int *)malloc(sizeof(int));
//     *p = 10;

//     // Memory leak happens here
//     p = (int *)malloc(sizeof(int));
//     *p = 20;

//     printf("Value = %d\n", *p);

//     // Only frees second allocation
//     free(p);

//     return 0;
// }

// ✅ CORRECT CODE (NO MEMORY LEAK)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    *p = 10;
    printf("Value = %d\n", *p);

    // Free before reusing pointer
    free(p);

    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    *p = 20;
    printf("New Value = %d\n", *p);

    free(p);
    p = NULL;

    return 0;
}