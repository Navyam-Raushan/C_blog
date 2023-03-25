#include<stdio.h>
#include<string.h>
int main(){
    int i,l;
    char ch;
    char s[50];
    printf("Enter string: ");
   gets(ch);
   l= strlen(s);
   
    
    for ( i = 0; i < l/2; i++)
    {   ch=s[i];
        s[i]=s[l-1-i]; //use l-1-i  as its including null character too.
        s[l-1-i]=ch;
        
    }
    
    printf("\nLength of string is %d: \n",l);
    printf("Reverse of string: %s",s);


    return 0;
}