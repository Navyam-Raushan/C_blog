#include <stdio.h>
int main()
{   int n,i;
    printf("Enter the number upto which we need reverse counting \n");
    scanf("%d", &n);
    printf("This is reverse counting upto given no.\n");
    for (i = n; i >=1 ; i--)
    {
        printf("%d\n",i);
    }
    

    return 0;
}