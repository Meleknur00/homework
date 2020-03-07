#include <stdio.h>

int main()
{
    for (int row = 0; row < 11; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            printf("%3d ",row*col);
        }
        printf("\n");
    }
    
}