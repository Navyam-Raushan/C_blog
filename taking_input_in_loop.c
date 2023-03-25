#include <stdio.h>
int main()
{
    int num, i, sum = 0, avg;
    printf("We have to read 10 numbers from keyboard\n");
    printf("Enter the 10 number\n");
    for (i = 1; i <=5; i++)
    {
        printf(" Number %d = ", i);
        scanf("%d", &num); // that num is the given input no.
        sum = sum + num;
    }
    avg = (float)sum/5.0;
    printf("\n The sum of 10 numbers= %d", sum);
    // printf("\n The average for 10 numbers: %.2f", avg);
    printf("\n The average for 10 numbers: %.2f", avg);

    return 0;
}