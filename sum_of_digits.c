#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &a);
    while ( a!=0) //the loop will stop when a is equals to zero.
    {
        b = a % 10;
        a = a / 10;
        sum = sum + b;

    } 
   printf("This is sum of digits: %d", sum);

    return 0;
}