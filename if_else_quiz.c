#include<stdio.h>
int main (){
    int a,b;
    printf("Please give your both subject marks to get prizes.\n");
    printf("1.Maths\n");
    scanf("%d", &a);

    printf("2.Science\n");
    scanf("%d", &b );
if (a>=90 && b>=90)
{
    printf("You will get RS 45.");
}
else if(a>90 ^ b>90) //Its a(^) XOR operator, whenever both codition is true or both are false it prints zero.
{
    printf("You will get RS 15.");
}

else{

    printf("You will not get any prize.");
}
return 0;
}