#include<stdio.h>
int main(){
    int a,b,i;
    int c=1;
    scanf("%d", &a);
    if (a<0)
    {   printf("Input must be greater than or equal to zero\n");

        return 0;
    }
    
    
    for ( i = 1; i <=a; i++)
    {
        c= c*i;
    }
       

    
    printf("%d",c);
    
    


    return 0;
}