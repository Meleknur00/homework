#include <stdio.h>

int main()
{
    int i, n;
    printf("from: ");
    scanf("%d", &i);
    printf("till: ");
    scanf("%d", &n);

    printf("from %d to %d are: \n",i, n);

   for(; i<=n; i++)
    {
        if(i%3==0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}