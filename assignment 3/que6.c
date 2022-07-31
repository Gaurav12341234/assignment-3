//6. Write a program to print greater between two numbers. Print one number of both are 
//   the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    if(a>=b)
        printf("\nGreater no. is %d",a);
    else    
        printf("\nGreater no. is %d",b);
    return 0;
}