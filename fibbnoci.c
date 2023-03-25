#include <stdio.h>
int main()
{
    int a, b, c, i, range;
    printf("range:");
    scanf("%d", &range);
    a = 0;
    b = 1;
    
    for (i = 0; i <= range; i++)
    {
        printf("%d ", a);
        
        
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}