//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
        printf("positive number");
    if(a<0)
        printf("Negative number");
    if(a==0)
        printf("Zero");
    return 0;
}