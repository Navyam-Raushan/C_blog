#include <stdio.h>
#include <math.h>
int main()
{
    float n, c, a, b;
    scanf("%f", &n);
    c = sqrt(n);
    a = floor(c);
    b = ceil(c);
    
    if (a == b)
    {
        printf("YES\n");

    }
    else
    printf("NO");

    return 0;
}