#include <stdio.h>
int main()
{
    int m, n, i, c;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &c);
    if (m > n && m > c)
    {

        printf("%d", m);
    }

    else if (n > m && n > c)
    {
        printf("%d", n);
    }
    else
        printf("%d", c);

    return 0;
}