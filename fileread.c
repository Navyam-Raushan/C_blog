#include <stdio.h>
#include <ctype.h>
#define pi 6;
int main()
{
    int count = 0;
    int digit = 0;
    
    char ch;
    FILE *fp;
    fp = fopen("sample.txt", "r+");
    if (fp == NULL)
    {
        printf("file is empty");
        return 1;
    }
    fprintf(fp,"hi i am navyam how are you.");
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = toupper(ch);
        printf("%c", ch);
        count++;
       
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isdigit(ch))
        {

            printf("%c", ch);
            digit++;
        }
    }

    fclose(fp);
    printf("\nNo. of characters\n%d", count);
    printf("\nNo. of digits\n%d", digit);

    return 0;
}
