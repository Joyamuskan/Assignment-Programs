// c program that prints student grade

#include <stdio.h>

int main()
{
 int mark;
 printf("enter mark of the student:");
 scanf("%d",&mark);
 if(mark<0||mark>100)
 {
    printf("invalid mark");
    return 0;
 }
 else if(mark>=90)
     printf("grade:O");
 else if(mark>=80)
     printf("grade:A+");
 else if(mark>=70)
    printf("grade:A");
 else if(mark>=60)
     printf("grade:B");
 else if(mark>=50)
     printf("grade:C");
 else if(mark<50)
     printf("grade:FAIL");
    return 0;
}
