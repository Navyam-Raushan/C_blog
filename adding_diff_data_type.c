#include <stdio.h>
int main()
{
    float a, sum;
    char c;

    scanf("%f ", &a); 
    /*
        must give space before using character
        to print character in next line
    
    */
    scanf("%c", &c);
    sum = a + c;
    printf("%f\n", sum);

    return 0;
}