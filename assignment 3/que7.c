//7. Write a program to check whether roots of a given quadratic equation are real & 
//   distinct, real & equal or imaginary roots.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter the coefficient of x^2,x and constant term:");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf(" \"Real and Distinct Roots\"\n");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("Roots are x=%.2f x=%.2f",x,y);
    }
    if(D==0)
    {
        printf(" \"Real and Equal Roots\"\n");
        x=-b/(2.0*a);
        printf("Roots are x=%.2f",x);
    }
    if(D<0)
        printf(" \"Imaginary Roots\"");
    return 0;
}