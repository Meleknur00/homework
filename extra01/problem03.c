#include <stdio.h>

int main()
{
    int Days, Years, Weeks;

    printf("Enter days: ");
    scanf("%d",&Days);

    Years = (Days / 365);   
    Weeks = (Days % 365) / 7;
    Days  = (Days % 365) % 7;

    printf("Years: %d\n", Years);
    printf("Weeks: %d\n", Weeks);
    printf("day: %d\n", Days);

    return 0;
}