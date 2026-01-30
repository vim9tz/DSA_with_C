// Check Whether a Matrix Is Symmetric

#include <stdio.h>

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};

    int i, j, isSymmetric = 1;

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is NOT Symmetric\n");

    return 0;
}