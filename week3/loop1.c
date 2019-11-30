#include <stdio.h>
int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%5==0)
        {
            printf("%d is divisible by 5\n", i );
        }
        else
        {
            printf("%d is not divisible by 5\n" , i);
        }
    }

}