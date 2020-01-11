#include <stdio.h>
int main() 
{
	void showMenu();

    printf("1:JANUARY\n");
    printf("2:FEBRUARY\n");
    printf("3:MARCH\n");
    printf("4:APRIL\n");
    printf("5:MAY\n");
    printf("6:JUNE\n");
    printf("7:JULY\n");
    printf("8:AUGUST\n");
    printf("9:SEPTEMBER\n");
    printf("10:OCTOBER\n");
    printf("11:NOVEMBER\n");
    printf("12:DECEMBER\n");
    printf("Enter an option (1,2,3,4,5,6,7,8,9,10,11 or 12): ");
    int option;
    scanf("%d", &option);
    if (option == 1)
    {
        printf("JANUARY\n");
    } 
    else if(option == 2)
    {
        printf("FEBRUARY\n");
    }
    else if(option == 3)
    {
        printf("MARCH\n");
    }
    else if(option == 4)
    {
        printf("APRIL\n");
    }
        else if(option == 5)
    {
        printf("MAY\n");
    }
    else if(option == 6)
    {
        printf("JUNE\n");
    }
    else if(option == 7)
    {
        printf("JULY\n");
    }
        else if(option == 8)
    {
        printf("AUGUST\n");
    }
    else if(option == 9)
    {
        printf("SEPTEMBER\n");
    }
    else if(option == 10)
    {
        printf("OCTOBER\n");
    }
        else if(option == 11)
    {
        printf("NOVEMBER\n");
    }
    else if(option == 12)
    {
        printf("DECEMBER\n");
    }
}