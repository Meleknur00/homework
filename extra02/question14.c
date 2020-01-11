#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && a==c)
    {
        printf("This is an Equilateral triangle.");
    }
    if ((a==b)||(b==c)||(c==a))
    {
        printf("This is an Isosceles triangle.");
    }
    else
    {
        printf("This is an Scalene triangle.");
    }
    
}