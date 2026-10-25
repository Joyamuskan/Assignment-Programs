// c program that validates a login

#include <stdio.h>

int main()
{
    int userid,password;
    printf("enter userid:");
    scanf("%d",&userid);
    if(userid!=101)
    {
        printf("\nuser not found");
    }
    else
    {
        printf("\nuser found");
        printf("\nenter password:");
        scanf("%d",&password);
    }
    if(password==4321)
    {
        printf("\nlogin successfully");
    }
    else
    printf("\nincorrect password");
 return 0;
}