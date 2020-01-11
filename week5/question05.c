#include <stdio.h>
int main()
{
    int a,b;
    printf("ilk sayiyi giriniz:\n");
    scanf("%d",&a);
    printf("ikinci sayiyi giriniz\n");
    scanf("%d",&b);
    if ((a > 5 && a < 18) || (b > 5 && b < 18))
    {
        printf("tebrikler\n");
    }
    else
    {
        printf("kaybettiniz");
    }

    // if((a < 5 || a > 18) && (b < 5 || b > 18))
    // {
    //     printf("kaybettiniz\n");
    // }
}