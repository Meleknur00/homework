// 3. Write a C program to check whether a given number is positive or negative.
// Test Data: 15
// Expected Output:
// 15 is a positive number

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);

    if (a < 0)
    {
        printf("%d is a negative number\n",a);
    }
    else if (a > 0)
    {
        printf("%d is a positive number\n",a);
    }
    else 
    {
        printf("%d is zero\n",a);
    }
}