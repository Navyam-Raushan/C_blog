#include <stdio.h>
int main()
{
    char i = 'a';
    printf("Here is the english alphabets.\n");

    // for ( i = 'a'; i <= 'z'; i++)
    // {   printf("%c\n", i);

    // }
    while (i <= 'z' && i >= 'a')

    {
        printf("%c \n", i);
        i = i + 1;
    }

    return 0;
}
