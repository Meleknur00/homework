#include <stdio.h>
int main()
{
    int ages[] = {12, 24, 36, 48, 60};
    char isimBasHarfleri[] = {'M','B','H','M','Z'};
    float takipciSayim[] = {1.9, 2.0, 2.1, 2.2, 2.3};
    int i = 0;
    while(i < 5)
    {
        printf("%d-%c-%.1lf\n", ages[i], isimBasHarfleri[i], takipciSayim[i]);
        i++;
    }
    return 0;
}