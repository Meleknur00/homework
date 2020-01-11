#include <stdio.h>
#define foot 30.48f


void menu1();
int getInput()
{
    int a;
    scanf("%d", &a);
    return a;
}

void menu2()
{
    int b;
    printf("_______LENGTH_______\n");
    printf("|1. cm to feet     |\n");
    printf("|2. feet to cm     |\n");
    printf("|3. Back           |\n");
    printf("|4. Exit           |\n");
    printf("````````````````````\n");
    printf("CHOOSE ONE!");
    scanf("%d", &b);

    if (b == 1)
    {
        printf("Enter an integer in cm: ");
        scanf("%d", &b);
        printf("%.2f feet\n", b / foot);
    }
    if (b == 2)
    {
        printf("Enter an integer in feet:   ");
        scanf("%d", &b);
        printf("%.2f cm\n ", b * foot);
    }
    if (b == 3)
    {
        menu1();
    }
    
}
void menu3()
{
    int c;
    double celcius,fahrenheit;
    printf("______DEGREES_______\n");
    printf("|1. f to c         |\n");
    printf("|2. c to f         |\n");
    printf("|3. Back           |\n");
    printf("|4. Exit           |\n");
    printf("````````````````````\n");
    printf("CHOOSE ONE!");
    scanf("%d",&c);

    if (c == 1)
    {
        printf("Enter the degrees in fahrenheit: ");
        scanf("%lf", &fahrenheit);
        printf("%.2lf celcius \n", (fahrenheit - 32) / 1.8);
    }
    if (c == 2)
    {
        printf("Enter the degrees in celcius: ");
        scanf("%lf", &celcius);
        printf("%.2lf fahrenheit\n", celcius * 1.8 + 32);
    }
    if (c == 3)
    {
        menu1();
    }
}
void menu1()
{
    printf("_____CHOOSE ONE____\n1. Length         |\n2. Degrees        |\n4. Exit           |\n--------------------\n");
    int x = getInput();
    switch (x)
    {
    case 1:
        menu2();
        break;
    case 2:
        menu3();
        break;
    case 3:
        printf("THREE!\n");
        break;
    default:
        printf("Wrong Choise!!!\n");
        break;
    }
}
int main()
{
    menu1();
}