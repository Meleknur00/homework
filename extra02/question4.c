//4. Write a C program to find whether a given year is a leap year or not.
//Test Data: 2016
//Expected Output:
//2016 is a leap year.

#include <stdio.h>

int main()
{
    int f;
    printf("Enter a year: ");
    scanf("%d",&f);

    if (f % 4 ==0)
    {
        printf("%d is a leap year\n",f);
    }
    else
    {
        printf("%d is not a leap year\n",f);
    }
}