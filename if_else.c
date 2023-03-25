#include<stdio.h>
int main(){
int age;
printf("Enter your age\n");
scanf("%d", &age);

if (age>18)
{
    printf("You are allowed to make girlfriends.\n");

}
else if (age>10)
{
    printf("You are a child, you can only see girls.");
}
else
{
    printf("You are a baby, This code is not for you.");
}

return 0;

}

