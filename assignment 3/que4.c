//4. Write a program to check whether a given number is an even number or an odd 
//   number without using % operator.
#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter a no.");
    scanf("%d",&a);
    result=a&1;
    if(result==0)
        printf("even no.");
    else
        printf("odd no.");
    return 0;
}