//10. Write a program which takes the cost price and selling price of a product from the 
//    user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float CP,SP,PP,LP;
    printf("The cost price of product is:");
    scanf("%f",&CP);
    printf("The selling price of product is:");
    scanf("%f",&SP);
    if(SP>CP)
    {
        PP=(SP-CP)/CP*100;
        printf("Profit Percentage is:%.2f%%",PP);
    }
    else
    {
        LP=(CP-SP)/CP*100;
        printf("Loss percentage is:%.2f%%",LP);
    }
    return 0;
}