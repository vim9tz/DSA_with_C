// Find Row-Wise Sum of a Matrix

#include <stdio.h>

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int i, j, sum;

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + mat[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }

    return 0;
}