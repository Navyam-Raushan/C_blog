// Taking input for integer in array
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter 5 numbers \n");
    int a[5]; // don't declare a two times.
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("These are the printed no.");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}