#include<stdio.h>

int main()
{
    int i,j;

    for(i=100;i>=90;i--)
    {
        for(j=100;j>=i;j--)
        {
        printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}