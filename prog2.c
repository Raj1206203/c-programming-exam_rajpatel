#include<stdio.h>

int main()
{
    int arry[5]={1,2,3,4,5};
    int i,z;
    
    z = arry[5];

    for(i=1; i < z ; i++)
    {
        for(int j=1;j<i;j++)
        {
        printf("the smallest int the array is: %d",j);
        }
        printf("\0");
    }

    return 0;
}