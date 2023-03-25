#include <stdio.h>
#include <math.h>
int main()
{
    int n, sq, cube;
    printf("Here we are going to get everything for a no.\n");
    printf("Enter the required number:\n");
    scanf("%d\n", &n);
    if (n % 2 == 0) //don't use float numbers.
    {
        printf("Its a even no.\n");
    }
    if (n % 2 != 0)
    {
        printf("Its a odd no.\n");
    }
    cube = n * n * n;
    sq = n * n;
    printf("\nThe square of %d number= %d\n", n, sq);
    printf("\nThe cube of %d number= %d\n", n, cube);
    printf("The cube root of %d no: %f\n", n, cbrt(n));
    printf("The square root of %d no: %f\n", n, sqrt(n));

    return 0;
}