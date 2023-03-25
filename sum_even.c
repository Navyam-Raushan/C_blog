#include <stdio.h>
int main()
{
    int a, b, i, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for (i = a+1;  i < b; ++i)
    {
        if (i % 2 == 0)
        {
            c = c + i;
        }
    }

    printf("%d", c);

    return 0;
}