#include<stdio.h>
void reverse(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int index=0;
    char str[1000],c;
    while((c=getchar())!='\n')
    {
        str[index]=c;
        index++;
    }
    str[index]='\0';
    int start, end;
    end=0;
    start=0;
    while(str[end])
    {
        for(end=start;str[end]&&str[end]!=' ';end++);
        reverse(str, start, end-1);
        start=end+1;
    }
        printf("%s ",str);
    return 0;
}