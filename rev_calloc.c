#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1;
    int *a = NULL;
    int *b = NULL;
    a = (int *)malloc(n * sizeof(int));
    b = (int *)calloc(n, sizeof(int));
    if (a == NULL || b == NULL)
    {
        printf("Memory is not allocated");
        exit(1);
    }
    printf("enter a=\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);

    free(a);
    free(b);
    return 0;
}