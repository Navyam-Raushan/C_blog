#include <stdio.h>
#include <math.h>
int main()
{
    float n,m ;
    printf("enter a number:\n");
    scanf("%f", &n);
    printf("enter a number:\n");
    scanf("%f", &m);

    printf("The remainder after division of %f and %f is: %f\n", n, m, fmod(n, m));
    printf("The absolute value of %f is: %f\n", n, fabs(n));
    printf("The floor value of %f is: %f\n", n, floor(n));
    printf("The log value of %f is: %f\n", n, log(n));
    printf("The  log value of %f is: %f\n", n, log10(n));
    printf("The  round value of %f is: %.0f\n", n, round(n));
    printf("The  round value of %f is: %f\n", n, ceil(n));

    //logarithmic and trigo values
    printf("The log value of %f is: %f\n", n, log(n));


    return 0;
}