#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

union abc
{
    int a;
    float b;
    char c;
};

int main()
{
    //  int n,i,j;
    union abc u;
    u.a = 79;
    u.b = 56.78;
    u.c = 'a';
    union abc *ptr = &u;
    printf("%d %f %c", ptr->a, ptr->b, ptr->c);//observe that only last value will be printed.

    return 0;
}