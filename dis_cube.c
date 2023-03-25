#include <stdio.h>
int main()
{
    int a, i, cube;
    printf("Enter the upper limit of the number\n");
    scanf("%d", &a);
    printf("List of cubes for given limit");
    for (i = 0; i < a; i++)
    {
        printf("%d\n", i * i * i);
        cube += i * i * i;
    }
    printf("Sum of cubes of given no.= %d\n", cube);

    return 0;
}