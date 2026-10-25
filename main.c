// program to determine whether a given number is positive,negative or zero
 
#include <stdio.h>

int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("\n The number %d is positive",num);
    }
    else if(num==0)
    {
        printf("\n The number %d is zero",num);
    }
    else
    {
        printf("\n The number %d is negative",num);
    }
    return 0;
}