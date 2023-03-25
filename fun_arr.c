#include <stdio.h>
void take_arr(int m, int n, int a[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i, j;
    int m, n,k,p;
    scanf("%d%d", &m, &n);
    int c[m][n];
    int a[m][k];

    take_arr(m, k, a);
    printf("\n");

    int b[k][n];
    printf("\n");

    take_arr(k,n,b);

    for ( i = 0; i <m ; i++)
    {
        for ( p = 0; p < k; p++)
        {
            c[i][p]=0;
           for ( j = 0; j < n; j++)
           {
            c[i][p]+=a[i][j]*b[j][p];
           }
            
        }
        
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
    



    return 0;
}