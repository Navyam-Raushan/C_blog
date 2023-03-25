#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct arr
{
    int rollno;
    float marks;
    char name[20];
};

int main()
{
    int i;
    struct arr a[4];
    for (i = 0; i < 4; i++)
    {
        printf("Enter Rollno.\n");
        scanf("%d %f %s", &a[i].rollno, &a[i].marks, a[i].name);
        // printf("Enter marks\n");
        // scanf("%f", &a[i].marks);
        // printf("Enter name\n");
        // scanf("%s", a[i].name);
    }
    for (i = 0; i < 2; i++)
    {
        printf("%d, %f, %s", a[i].rollno, a[i].marks, a[i].name);
    }

    return 0;
}