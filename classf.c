#include <stdio.h>
void change(int *mn) // pointer towards a.
{ *mn=20;
    
}
int main()
{
    int a = 13;
   change(&a); //in this way we are sending address value of a to change
    printf("%d",a);

    return 0;
}