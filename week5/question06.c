#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a - b < c)
    {
        printf("this three integers can represent a triangle\n");
    }
    else
    {
        printf("this three integers can not represent a triangle\n");
    }
    
}