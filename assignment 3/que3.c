//3. Write a program to check whether a given number is an even number or an odd 
//   number.
#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even no.");
    else
        printf("Odd no.");
    return 0;
}