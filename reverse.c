// code to reverse a number.
#include <stdio.h>
int main()
{
    int a,c,n=0;
    scanf("%d", &a);
    int m=a;
    while (a!=0) //use num itself.
    {
        c = a % 10;
        
        a = a / 10;
        n=n*10+c;

    }

    printf("%d\n",n);
    if (m==n)
    {
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not a palindrome");
    }

    return 0;
}