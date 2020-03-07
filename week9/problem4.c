#include <stdio.h>
#include <stdlib.h>

void clear()
{
    system("clear");
}
char atis[10][10] =
{
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
    {'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
};

void printAtisTahtasi()
{
        for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%c ", atis[row][col]);
        }
        printf("\n");
    }
}
void getUserInput()
{
    int a, b, c;
    printf("2 basamakli bir sayi giriniz: ");
    scanf("%d", &a);
    if (a > 10 && a < 100 && a % 10)
    {
        int row = a / 10;
        int col = a % 10;
        atis[row][col] = 'x';
        clear();
    }
    printAtisTahtasi();


    printf("2 basamakli bir sayi giriniz: ");
    scanf("%d", &b);
    clear();
    if (b > 10 && b < 100 && b % 10)
    {
        int row = b / 10;
        int col = b % 10;
        atis[row][col] = 'x';
    }
    printAtisTahtasi();

    printf("2 basamakli bir sayi giriniz: ");
    scanf("%d", &c);
    clear();
    if (c > 10 && c < 100 && c % 10)
    {
        int row = c / 10;
        int col = c % 10;
        atis[row][col] = 'x';
    }
    printAtisTahtasi();

}
int main()
{
    printAtisTahtasi();
    getUserInput();

}
