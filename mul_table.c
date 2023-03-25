#include <stdio.h>
int main()
{
    int n, i,c;
    printf("Input a number whose table will be printed.\n");
    scanf("%d", &n);
    printf("The multiplication table for %d is\n", n);
    for (i = 0; i <= 10; i++)
    {
        c=n*i;
        printf("%d\n", c);

    }

    return 0;
}