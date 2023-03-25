#include <stdio.h>
int swap(int a,int b)

{     
    
    int *p=&b;
    int *q=&a;
    printf("value of a=%d\n",*p);
    printf("value of b=%d\n",*q);
    printf("address value of a=%x\n",q);
    printf("address value of b=%x\n",p);

}
int main()
{   
    int a=10;
    int b=20;
    swap(a,b);

    return 0;
}