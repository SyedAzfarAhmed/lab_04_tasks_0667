#include<stdio.h>
int main()
{
    int n, price;
    printf("Enter the amount of pizzas: ");
    scanf("%d", n);
    if(n==1)
    {
        printf("1 pizza costs $8");
    }
    else if(n==2)
    {
        printf("2 pizza costs $15");
    }
    else if(n==3)
    {
        printf("3 pizza costs $21");
    }
    else
    printf("Invalid input");

}