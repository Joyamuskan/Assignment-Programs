// program to check whether a given character is vowel or not

#include <stdio.h>

int main()
{
 char c;
 printf("enter c:");
 scanf("%c",&c);
 if(c=='a'||c=='e'|| c=='i'|| c=='o'|| c=='u')
 {
     printf("%c is vowel",c);
 }
 else
 {
     printf("%c is consonant,It is not a vowel",c);
 }
    return 0;
}
