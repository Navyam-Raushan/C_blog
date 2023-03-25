#include <stdio.h>
int main(){
    int a= 32;
    int *ptr= &a;
    printf("%d\n", *ptr);
    printf("%d\n", ptr);
    printf("%d\n", &a);
    printf("%p\n", ptr);
    printf("%x\n", ptr);




    return 0;
}
