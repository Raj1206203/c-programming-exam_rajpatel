#include <stdio.h>
#include <string.h>

int main() 
{
    char num[20];
    printf("Enter 3 num: ");
    gets(num);
    strrev(num);
    printf("the rev num is: %s",num);
    
    return 0;
}