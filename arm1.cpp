#include <iostream>
using namespace std;
int main() {
    int num, originalNum, remainder, result = 0;
    
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("Number is an Armstrong", num);
    else
        printf("Number is not an Armstrong", num);

    return 0;
}