#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#pragma pack(1)

struct size
{
    char c;
    int a;
    // float b;
    double d;
};
typedef struct designation
{
    char c;
    int a;

} desi;

int main()
{
    int n, i, j;
    // float d;
    struct size s;
    // printf("Size of the structure\n");
    // printf("%d\n", sizeof(s));
    // printf("%d", sizeof(d));

    desi d={.c='n',.a=2400}; //this is called designation declaration of structure.
    printf("%c %d",d.c,d.a);

    return 0;
}
