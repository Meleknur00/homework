#include <stdio.h>

int main()
{
    int a;
    printf("Enter first Integer: ");
    scanf("%d", &a);
    int b;
    printf("Enter Second Integer: ");
    scanf("%d", &b);
    if ((a>100 && b<0)||(a<0 && b>100))
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    
}