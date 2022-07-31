//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%3==0||a%7==0)
        printf("Either a number divisible by 7 or 3");
    else
        printf("A number is not divisble by 7 or 3");
    return 0;
}