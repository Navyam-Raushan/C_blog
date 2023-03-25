#include <stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    FILE *myfile;
    
    myfile=fopen("file.txt", "r");
    int count=0;
    
    while ((ch=fgetc(myfile)) !=EOF)
    {
        if (isdigit(ch))
        {   
            count++;
           printf("%c\n",ch);
        }
        
    }
    printf("Total no. of numbers in file\n");
    printf("%d", count);

}