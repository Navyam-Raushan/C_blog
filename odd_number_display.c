#include <stdio.h>
int main()
{
    int num, i;
    printf("Please specify upper limit to print odd no.\n");
    scanf("%d", &num);
    printf("All odd no. between 1 and %d \n", num);

    for (i = 0; i < num; i++)
    {
        if (i % 5 == 0) // use == when we use if.
        {
           
            printf("%d\n", i); // we must use loop inside loop
        }
    }

    return 0;
}