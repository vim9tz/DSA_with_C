//  Allocate 2D Array Using Dynamic Memory ⭐⭐⭐⭐
// 	•	Tests malloc + pointers
// 	•	Bridge between DMA & data structures
// 	•	Foundation for matrices, graphs, DP

// ⸻

// ❓ Problem

// Create a 2D array dynamically, store values, and print them

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 3, cols = 3;
    int **mat;
    int i, j;

    /* Allocate memory for rows */
    mat = (int **)malloc(rows * sizeof(int *));
    if (mat == NULL)
    {
        printf("Row allocation failed\n");
        return 1;
    }

    /* Allocate memory for columns */
    for (i = 0; i < rows; i++)
    {
        mat[i] = (int *)malloc(cols * sizeof(int));
        if (mat[i] == NULL)
        {
            printf("Column allocation failed\n");
            return 1;
        }
    }

    /* Assign values */
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            mat[i][j] = i + j;

    /* Print matrix */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    /* Free memory */
    for (i = 0; i < rows; i++)
        free(mat[i]);

    free(mat);

    return 0;
}