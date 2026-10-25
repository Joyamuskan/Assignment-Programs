// program to check vote eligibility of a person

#include <stdio.h>

int main()
{
 int age;
 printf("enter age:");
 scanf("%d",&age);
 if(age>=18)
 {
     printf("\nEligible to vote",age);
 }
 else
 {
     printf("\nNot Eligible to vote",age);
 }
 return 0;
}

