//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("Upper Case");
    if(a>=97&&a<=122)
        printf("Lower Case");
    if(a<65||a>122)
        printf("Please! Enter an alphabet");
    return 0;
}