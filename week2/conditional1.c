#include <stdio.h>

int main()
{
    int a = 4;
    int b = 4;

    if(a > b)
    {
        printf("%d is bigger than %d\n", a, b);
    }
    else if(a < b)
    {
        printf("%d is smaller than %d\n", a, b);
    }
    else
    {
        printf("%d is equal to %d\n", a, b);
    }    

}