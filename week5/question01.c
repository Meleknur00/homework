#include <stdio.h>

int main()
{
    int x;
    printf("Bir Sayi Giriniz: ");
    scanf("%d", &x);
    if (x>100)
    {
        printf("%d\n", (x - 100) * 5);
    }
    else
    {
        printf("%d\n", 100 - x);
    }
}