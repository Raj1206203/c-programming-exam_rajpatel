#include<stdio.h>

int main()
{
    int size ,i;

    printf("\nenter the size of array:");
    scanf("%d",&size);

    int arry[size];

    printf("\nenter array elemnets:\n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&arry[i]);
    }
    int *ptr = arry;

    for(i=0;i<size;i++)
    {
        *(ptr+i)=(*(ptr+i))*(*(ptr+i));
    }

    printf("\nsquare of each elemnets is ");
    for(i=0;i<size;i++)
    {
        printf("\n%d ",arry[i]);
    }
    return 0;
}