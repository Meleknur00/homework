#include <stdio.h>
int main()
{
    float neKoysamBulamadim1[]={2.5, 3,5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5, 17.5, 18.5, 19.5, 20.5};
    float toplam =0;
    for (int i = 0; i < 20; i++)
    {
        toplam =toplam + neKoysamBulamadim1[i];
    }
    printf("Toplam = %.2f\n",toplam);
}