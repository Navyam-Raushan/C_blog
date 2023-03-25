#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct hotel
{
    char hname[20];
    int rate;
    float price;
} hotel;

int main()
{
    //  int n,i,j;
    hotel h1 =
        {"Nagraj",
         5,
         2000};
    hotel h2 =
        {
            "name", 6, 422};
    printf("%s %d %f", h1.hname, h1.rate, h1.price); 

    return 0;
}