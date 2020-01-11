#include <stdio.h>

int main()
{
//     Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot
    int a;
    printf("Enter temperature in centigrade:\n");
    scanf("%d ",&a);
    if (a < 0)
    {
        printf("it is freezing weather\n");
    }
    if (a >10 && a< 20)
    {
        printf("it is very cold weather\n");
    }
    if (a >20 && a< 30)
    {
        printf("Normal in Temp\n");
    }
    if (a >30 && a< 40)
    {
        printf("it is hot");
    }
    if (a >=40)
    {
        printf("it is very hot");
    }
    
}