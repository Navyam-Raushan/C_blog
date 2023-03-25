// Finding second largest number
#include <stdio.h>

int main()
{

    int m, sub, i;
    printf("Input no. of elements\n");
    scanf("%d", &m);
    // getting input for all four number
    //  scanf("%d %d %d %d",&a,&b,&c,&d);
    int a[m];
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    int largest = 0;
    for (i = 1; i < m; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    int smallest = a[0];
    for (i = 1; i < m; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("smallest no.:%d\n", smallest);
    printf("largest no.:%d\n", largest);

    // find a largest no. again which is not equal to largest.
    int max2 = 0;
    for (i = 0; i < m; i++)
    {if (a[i]==largest)
    {
       continue;
    }
    
       else if ((a[i] > max2))
        {
            max2 = a[i];
        }
    }
    printf("sec largest=%d", max2);

    return 0;
}
