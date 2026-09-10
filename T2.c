#include<stdio.h>
int main()
{
    int price=8, n;
    printf("Enter the amount of pizzas: ");
    scanf("%d", &n);
    if(n>1)
    {
        printf ("Check our multi-pizza deals.");
    }  
    else
    {
        printf ("Your total is %d", price*n);
    }

}