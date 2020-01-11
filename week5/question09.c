#include <stdio.h>

int main()
{
    int i, n;
    printf("Print odd numbers from: ");
    scanf("%d", &i);
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from %d to %d are: \n",i, n);

   for( ; i<=n; i++)
    {
        if(i%2==1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}