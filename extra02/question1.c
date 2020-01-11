#include <stdio.h>

int main()
{
    int a, b;
    
    printf("Enter the values for a and b\n");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Number1 and Number2 are equal\n");
    }
    else
    {
        printf("Number1 and Number2 are not equal\n");
    }
}