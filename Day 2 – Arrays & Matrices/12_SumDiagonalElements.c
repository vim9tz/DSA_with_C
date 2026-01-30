// Sum of Diagonal Elements

#include <stdio.h>

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int i, sum = 0;

    for (i = 0; i < 3; i++)
    {
        sum = sum + mat[i][i];
    }

    printf("Diagonal Sum = %d\n", sum);

    return 0;
}