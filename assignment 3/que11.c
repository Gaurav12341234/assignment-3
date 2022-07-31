//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
//    out of 100 and passing marks is 33. Now display whether the candidate passed the 
//    examination or failed.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    printf("Enter your marks:\n");
    printf("math=");
    scanf("%d",&a);
    printf("physics=");
    scanf("%d",&b);
    printf("chemistry=");
    scanf("%d",&c);
    printf("english=");
    scanf("%d",&d);
    printf("hindi=");
    scanf("%d",&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    {
        printf("Cangratulation! you pass the exam\n");
        f=(a+b+c+d+e)/500.0*100;
        printf("Your Percentage is:%.2f%%",f);
    }
    else
        printf("Sorry! you fail the exam");
    return 0;
}