#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct food
{
    int orderNo;
    char cosName[50];
    float price;
};

int main()
{
    //  int n,i,j;
    struct food cos1 = {
        2, "Navyam", 240.56};
    struct food cos2 = {
        4, "Santosh", 140.56};
    struct food cos3;
    printf("Enter Info for costumer\n");
    printf("Order No.= \n");
    scanf("%d", &cos3.orderNo);
    printf("Name= \n");
    scanf("%s", cos3.cosName);

    printf("Total Price= \n");
    scanf("%f", &cos3.price);

    printf("Info for costumer 1\n");
    printf("Order NO.= %d\n", cos1.orderNo);
    printf("cosName= %s\n", cos1.cosName);
    printf("Total price= %f\n", cos1.price);
    printf("Info for costumer 2\n");

    printf("Order NO.= %d\n", cos2.orderNo);
    printf("cosName= %s\n", cos2.cosName);
    printf("Total price= %f\n", cos2.price);
    printf("Info for costumer 3\n");

    printf("Order NO.= %d\n", cos3.orderNo);
    printf("cosName= %s\n", cos3.cosName);
    printf("Total price= %f\n", cos3.price);

    return 0;
}