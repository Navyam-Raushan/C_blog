
// This code is to print natural number
#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number \n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index); // use line break inside ""always.
        index = index + 1;
    } while (index < num);
    // char ch, index='a';
    // printf("Enter a letter:\n");
    // scanf ("%c", &ch);
    // do
    // {
    //     printf("%c\n", index);
    //     index=index=1;
    // } while (index<'m');

    return 0;
}