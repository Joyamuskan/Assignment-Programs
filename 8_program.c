// program that classifies person's body weight

#include <stdio.h>

int main()
{
    float wt,ht,BMI;
    printf("enter height(in metres):");
    scanf("%f",&ht);
    printf("enter weight(in kg):");
    scanf("%f",&wt);
    BMI=wt/(ht*ht);
    printf("BMI:%f",BMI);
    if(BMI<18.5)
    printf("\ncategory:underweight");
    else if(BMI>=18.5&&BMI<25)
    printf("\ncategory:normal");
     else if(BMI>=25&&BMI<30)
    printf("category:over weight");
     else if(BMI>=30)
    printf("\ncategory:obese");

    return 0;
}
