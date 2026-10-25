// program to check whether loan is approved or not

#include <stdio.h>

int main()
{
    int age,MI,CS; //MI=monthly income,CS=credit score
    printf("enter age,monthly income,credit score:");
    scanf("%d%d%d",&age,&MI,&CS);
    if(age>=21&&age<=60)
    {
        if(MI>=25000)
        {
            if(CS>=700)
            {
                printf("Loan approved");
            }
            else
            printf("loan rejected:credit score below 700");
        }
        else
        printf("loan rejected:monthly income below 25000");
    }
    else
    printf("loan rejected:age is not in 21 to 60");
    return 0;
}