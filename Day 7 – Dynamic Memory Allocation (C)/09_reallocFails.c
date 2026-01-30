// What Happens If realloc() Fails? ⭐⭐⭐⭐

// •	Tests real-world robustness
// •	Checks if you know that realloc() can return NULL
// •	Many candidates answer this wrong

//     ❓ Problem

// Safely resize an array using realloc() without losing old data if allocation fails.

// ❌ WRONG APPROACH (COMMON MISTAKE)

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr = (int *)malloc(3 * sizeof(int));
//     int i;

//     if (arr == NULL) {
//         printf("Initial malloc failed\n");
//         return 1;
//     }

//     /* Fill initial array */
//     for (i = 0; i < 3; i++) {
//         arr[i] = i + 1;   // 1 2 3
//     }

//     printf("Before realloc: ");
//     for (i = 0; i < 3; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     /*
//       ❌ WRONG:
//       If realloc fails, it returns NULL and arr becomes NULL.
//       Now you have LOST the original pointer => MEMORY LEAK.
//     */
//     arr = (int *)realloc(arr, 1000000000 * sizeof(int));  // huge request to force failure in many systems

//     if (arr == NULL) {
//         printf("realloc failed! arr is NULL now.\n");
//         printf("Original block is leaked because we overwrote the only pointer.\n");
//         return 1;  // can't free original memory anymore (leak)
//     }

//     /* If realloc succeeds (rare for huge allocation), you can use it */
//     for (i = 3; i < 6; i++) {
//         arr[i] = i + 1;
//     }

//     printf("After realloc: ");
//     for (i = 0; i < 6; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     free(arr);
//     return 0;
// }

// ✅ CORRECT & INTERVIEW-READY CODE

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(3 * sizeof(int));
    int *temp;
    int i;

    if (arr == NULL)
    {
        printf("Initial allocation failed\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
        arr[i] = i + 1;

    /* Safe realloc */
    temp = (int *)realloc(arr, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Reallocation failed, old memory still valid\n");
        free(arr);
        return 1;
    }

    arr = temp;

    arr[3] = 4;
    arr[4] = 5;

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}