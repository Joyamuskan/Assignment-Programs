// program to find the final amount that customer has to pay

#include <stdio.h>

int main()
{
    int mem;
    float oa,d,delivery,Amount; //oa==order amount,d==discount
    printf("enter order amount:");
    scanf("%f",&oa);
    printf("enter membership type (1 for premium,0 for regular):");
    scanf("%d",&mem);
    if(oa>=500)
    {
       delivery=0;
       printf("\n delivery charges:%.2f",delivery);
       if(mem==1) 
       {
           d=oa*0.10;
           printf("\n discount:%.2f",d);
           Amount=oa-oa*0.10+0;
           printf("\n Final amount:%.2f",Amount);
       }
       else
       {
           d==0;
           printf("\n discount:%.2f",d);
           Amount=oa-0+0;
           printf("\n Final amount:%f",Amount);
       }
    }
    else
    {
        d=0;
        printf("\n dicount:%.2f",d);
        delivery=50;
        printf("\n delivery charges:%.2f",delivery);
        Amount=oa-0+50;
        printf("\n Final amount:%.2f",Amount);
    }
    return 0;
}
