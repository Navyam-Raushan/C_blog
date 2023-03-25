#include<stdio.h>
int main(){
    int i, sum;
    printf("First 10 natural numbers:\n");
    
    for ( i = 1; i <= 10; i++ ) //  when i give sum=sum+i in for bracket gives output 65.
    {   sum=sum+i;  // The sum will be ulpdated after every cycle.
        printf("%d ", i); //if u will give space after %d then output have space.
        
    }
    printf("\n The sum is : %d \n", sum);





    return 0;
}