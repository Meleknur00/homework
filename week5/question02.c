#include <stdio.h> 

int main() 
{
    int a,b;
    printf("Enter first integer: \n");
    scanf("%d",&a);
    printf("Enter Second integer: \n");
    scanf("%d",&b);

    if (a == 50 || b  == 50 || a+b == 50)
    {
        printf("TRUE\n");
    } 
    else
    {
        printf("FALSE\n");
    }
}