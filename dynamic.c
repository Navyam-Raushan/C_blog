#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, *ptr, i, sum = 0;
    scanf("%d", &n);

    ptr = (int *)(malloc(n * sizeof(int)));
    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    printf("%d", sum);

    return 0;
}