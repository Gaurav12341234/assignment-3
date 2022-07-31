//8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d",&a);
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
                printf("This year is a \"leap year\"");
            else
                 printf("This year is \"Not leap year\"");

        }
        else
             printf("This year is a \"leap year\"");
    }
    else
        printf("This year is \"Not leap year\"");
    return 0;
}