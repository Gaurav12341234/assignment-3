//17. Write a program which takes the length of the sides of a triangle as an input. Display 
//    whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    if(a>0&&b>0&&c>0)
    {
        if((a+b)>c&&(b+c)>a&&(a+c)>b)
            printf("The triangle is Valid");
        else
            printf("The triangle is not Valid");
    }
    else
        printf("The triangle is not Valid!");
    return 0;
} 