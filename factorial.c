// #include <stdio.h>
// int main()
// {
//     int a, b, i;
//     unsigned long long c = 1;
//     scanf("%d", &a);
//     if (a < 0)

//         printf("Input must be greater than or equal to zero\n");

//     else
//     {

//         for (i = 1; i <= a; ++i)
//         {
//             c = c * i;
//         }
//     }

//     printf("%llu", c);

//     // printf("%d \n", c);

//     return 0;
// }
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
  
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Input must be greater than or equal to zero");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("%llu",fact);
    }

    return 0;
}
