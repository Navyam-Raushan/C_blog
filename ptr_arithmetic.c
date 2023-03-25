//------------------------Darkcodes---------------------------------//
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, i, *p, *q;
    int a[20];
    // printf("Enter size of an array\n");
    scanf("%d", &n);
    // printf("Enter values of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];
    q = &a[n - 1];
    int size = q - p;

    printf("%d\n", *q);
    printf("%d\n", size + 1);
    // printf("Size of array= %d\n",size);

    return 0;
}