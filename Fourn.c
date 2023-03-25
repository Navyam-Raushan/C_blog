#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, a, j, count = 0;

    scanf("%d%d", &m, &n);
    int A[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        a = A[i][0];
        for (j = 0; j < n; j++)
        {
            count++;
            if (count == 4)
            {
                printf("task done");
                exit(0);
            }
            else
            {
                a = A[i][j];
                count = 1;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        a=A[0][i];
        for (j = 0; j < m; j++)
        {
            count++;
            if (a==
            )
            {
                /* code */
            }
            
        }
        
    }
    

    return 0;
}
