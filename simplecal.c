#include <stdio.h>

int main()
{
    char c;
    int a, b;
    scanf("%c", &c);
    scanf("%d %d", &a, &b);
    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
         break;
    case '/':
        printf("%f", (float)a / (float)b);
        break;
    default:
        printf("invalid");
        break;
    }

    return 0;
}