#include <stdio.h>
int main()
{
    int j, m, n, s[10][20], matrix[10][20], matrix2[10][20];
    int i, k;

    // Enter 1st rows and then columns

    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d%d\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // for (i = 0; i < m; i++)
    //  {

    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%d\t", matrix[i][j]);
    //     }
    //     printf("\n"); // this is to print half of matrix in one line and half in other line
    // }

    // taking input for second matrix
    // printf("Enter data for second matrix\n");

    // scanf("%d%d", &m, &n);
    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%d%d\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // for (i = 0; i < m; i++)
    // {

    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%d\t", matrix2[i][j]);
    //     }
    //      printf("\n"); // this is to print half of matrix in one line and half in other line
    // }
    // adding two matrices
    // to take input, to print, to sum, to multiply for each we need two for loops.

    // printf("\nThe multiplication of two matrices is\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            s[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                s[i][j] += matrix[i][k] * matrix2[i][k];
            }
        }
    }

    // This is for printing sum of matrices.
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d\t", s[i][j]);
        }

        printf("\n");
    }

    return 0;
}