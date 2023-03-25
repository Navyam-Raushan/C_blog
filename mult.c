#include <stdio.h>
int main()
{
    int j,k,i,m,n;
   
    // printf("Enter the data for 1st matrix:\n");
    // printf("Enter number of rows:\n");
    scanf("%d", &m);
    // printf("Enter number of columns:\n");
    scanf("%d", &n);
    int a[m][n];
   

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            scanf("%d", &a[i][j]);
        }
    }
    // printf("Enter data for 2nd matrix:\n");
     int b[m][n];
     scanf("%d %d",&m,&n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            scanf("%d", &b[i][j]);
        }
    }
    // This is multiplication of matrix
    int c[m][n];
    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
      
        {   c[i][j]=0;

            for (k = 0; k < n; k++)
            {
                c[i][j]+=a[i][k]* b[k][j];
            }
        }
    }
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            printf("%d\t", c[i][j]);
          
        }
        printf("\n");
    }

    return 0;
}




