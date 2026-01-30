// Find the Maximum Element in a 2D Array

#include <stdio.h>

int main()
{
    int mat[3][3] = {
        {12, 4, 7},
        {3, 25, 6},
        {9, 8, 15}};

    int i, j;
    int max = mat[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (mat[i][j] > max)
            {
                max = mat[i][j];
            }
        }
    }

    printf("Maximum element = %d\n", max);

    return 0;
}