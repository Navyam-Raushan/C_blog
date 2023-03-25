#include <stdio.h>
int main()
{
    int a;
    printf("Enter value of a integer\n");   //ctrl +arrow keys to come out of brackets.
    scanf("%d",&a);
    int *p=&a;
   
    double b;
    printf("Enter value of a double\n");
    scanf("%lf",&b); //use %lf instead of %f;
    double *q=&b;
    char ch;
    printf("Enter value of a character\n");
    scanf("%s",&ch);
    char *c= &ch;
     printf("int=%d\n",*p);
    printf("double=%lf\n",*q);
    printf("char=%c\n",*c);





    return 0;
}