#include <stdio.h>
int main()
{
    char c;
    int age;

    printf("Enter first letter of your name\n");
    scanf("%c", &c);
    printf("Enter your age\n");
    scanf("%d", &age);
    // ***********NESTED SWITCH**********//
    switch (age)
    {
    case 18:
        printf("Congratultions, you have wasted 157680 hours.\n");
        // break;
        switch (c)
        {
        case 'a':
            printf("You are a \n ");
            break;
        case 'm':
            printf("You are m.\n");
            break;

        default:
            printf("surpass this code\n");
            break;
        }
        break; // We have to give here break as compiler will come out of previous bracket and execute code here.
    case 12:
        printf("Enjoy kid, you are at your golden age.\n");
        break;

    default:
        printf("NO comments.\n");
        break;
    }

    return 0;
}