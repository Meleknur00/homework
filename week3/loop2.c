#include <stdio.h>
int main()
{
    int i = 1; 
    while (i <= 100)
    {
        if(i%5==0)
        {
            printf("%d is divisible by 5\n", i );
        }
        else
        {
            printf("%d is not divisible by 5\n" , i);
        }
        i++;
    }

}