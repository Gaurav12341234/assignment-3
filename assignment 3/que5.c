//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=3;i++)
    {
        a/=10;
        if(a==0)
            break;
    }
    if(i==3)
        printf("This number is a 3-digit number");
    else
        printf("This number is not a 3-digit number");
    return 0;
}