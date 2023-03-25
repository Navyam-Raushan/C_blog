#include <stdio.h>
int main()
{
    int a, c, s = 0;
    printf("Enter the number\n");
    scanf("%d", &a);
    int m=a;
    while (a!=0)
    {

        c = a % 10;

        a = a / 10;
        s = s*10+c;
    }
    printf("%d\n", s);
     if (m==s)
    {
        printf("The number is palindrome\n");
    }
    else{
        printf("The number is not a palindrome");
    }

    return 0;
}