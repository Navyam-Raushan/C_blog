#include <stdio.h>
int main()
{
    int i, j, m, n, rsum, csum;
    printf("Enter no. of rows\n");
    scanf("%d", &m);
    printf("Enter no. of cols\n");
    scanf("%d", &n);
    int a[m][n];
    // initializing matrix
    for (i = 0; i < m; i++)

    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //printing matrix
    for ( i = 0; i <m ; i++)
    {
        for ( j = 0; j < n; j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    




    //getting sum for rows
    for ( i = 0; i < m; i++)
    { 
        rsum=0;
      for ( j = 0; j < n; j++)
      {
        rsum=rsum+a[i][j];
      }
      
    }
    printf("The sum of rows is %d\n",rsum);
    for ( i = 0; i < n; i++)
    { 
        csum=0;
      for ( j = 0; j < m; j++)
      {
        csum=csum+a[i][j];
      }
      
    }
    
    printf("The sum of columns is %d\n",csum);









    return 0;
}