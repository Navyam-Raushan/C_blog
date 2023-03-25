#include <stdio.h>
int z = 10;
int add1(int x, int y);
int add2(int k);
int main()
{
    int a = 2, b = 3, c = 0, d = 0,e=0;
    c = add1(a, b);
    d = add2(-5);
    e = add2(c);
    printf("z=%d\n",d);
    printf("z=%d\n",c);
    printf("z=%d\n",e);
    

    return 0;
}
int add1(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int add2(int k)

{
    int m = 0;
    m = z + k + 5;
    return m;
}
