#include <stdio.h>
int main()
{
    int n, i, m;
    printf("Enter the upper limit:\n");
    scanf("%d", &n);
    printf("These are the squares of numbers for given limit\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", i * i);
        m = m + i * i;
    }
    printf("Sum of squares= %d", m);

    return 0;
}