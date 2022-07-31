//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    c=a;
    while (a!=0)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }
    
    if(sum%3==0&&c%2==0)
        printf("This number is divisble by 3 and 2 Both");
    else
        printf("This number is not divisible by 3 and 2 both");
    return 0;
}