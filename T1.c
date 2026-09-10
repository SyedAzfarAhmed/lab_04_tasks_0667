#include<stdio.h>
int main()
{
    int size;
    printf ("Enter the base size of the pizza: ");
    scanf("%d", &size);
    if(size==1)
    {
        printf("The size is small");
    }
    else if(size==2)
    {
        printf("The size is medium");
    }
    else if(size==3)
    {
        printf("The size is large");
    }
    else
    {
    printf("Invalid input");
    }
}