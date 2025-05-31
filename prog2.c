#include<stdio.h>

int main()
{
    int size=0;

    printf("enter size:");
    scanf("%d",&size);

    int arry[size];

    printf("enter [%d]value:\n",size);
    for(int i = 0 ; i<size;i++)
    {
        scanf("%d",&arry[i]);
    }

    int min = arry[0];

    for(int i = 0; i<size; i++)
    {
        if(arry[i]<min)
        {
            min=arry[i];
        }
    }
    printf("min value is %d",min);
    return 0;
}