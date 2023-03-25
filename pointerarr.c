//------------------------Darkcodes---------------------------------//
// Accesing value of arrays in pointer
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i, n;
    int a[30];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter values in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Value printing of array\n");
    for (i = 0; i < n; i++)
    {
        int *p = &a[i];

        // *p = *p + i;
        printf("%d\n", *p);
    }
    printf("Value of address of pointers\n");
    for ( i = 0; i < n; i++)
    {
        int *p= &a[i];
        printf("%u\n",p);
    }
    
    

    return 0;
}