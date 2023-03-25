#include <iostream>
int main()
{
    int a, b, i, c, s = 0;
    scanf("%d", &a);
    int num=a;
    while (c != 0)
    {
        c = a % 10;
        
        b = c * c * c;
         s = s + b;
        a = a / 10;
        
    }
   
    if(num==s)
    {

        printf("\nNumber is armstrong");
    }
    else
    printf("\nNumber is not armstrong");

    return 0;
}