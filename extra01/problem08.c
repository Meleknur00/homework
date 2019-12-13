#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("\nIlk sayiyi giriniz: "); 
    scanf("%d", &x);
    printf("\nIkinci sayiyi giriniz: ");
    scanf("%d", &y);
    printf("\nUcuncu  sayiyi giriniz: ");
    scanf("%d", &z);
    // result=(x+y+abs(x-y))/2;
    // max=(result+z+abs(result-z))/2;

    if(x>y)
    {
        if(x>z)
        {
            printf("\nuc sayinin en yuksegi %d", x);
        }
        else
        {
            printf("\nuc sayinin en yuksegi %d", z);
        }
        
    } 
    else
    {
        if(y>z)
        {
            printf("\nuc sayinin en yuksegi %d", y);
        }
        else
        {
            printf("\nuc sayinin en yuksegi %d", z);
        }
    }

    // printf("\nuc sayinin en yuksegi %d", max);
	printf("\n");
    return 0;
}