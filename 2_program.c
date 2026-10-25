//program to find area and perimeter of rectangle

#include <stdio.h>

int main()
{
 float A,P,l,b;
 printf("enter length of the rectangle:");
 scanf("%f",&l);
 printf("enter breadth of the rectangle:");
 scanf("%f",&b);
 A=l*b;
 printf("area of the rectangle:%f",A);
 P=2*(l+b);
 printf("perimeter of the rectangle:%f",P);
return 0;
}
