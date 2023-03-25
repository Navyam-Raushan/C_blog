#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("These are number greater than input but less than 100.");
    while (num <= 100) // Never use ; in while loop.
    {
        printf("%d\n", num);
        num = num + 1;
    }

    return 0;
}