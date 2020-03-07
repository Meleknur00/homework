#include <stdio.h>
#include <stdlib.h>

void getUserInput();
void clear()
{
    system("clear");
}
char tablo[10][10] =
{
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
    {'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'5', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' '},
    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'8', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
};
int currentRow=5;
int currentCol=5;
    void printTablo()
    {
        clear();
        for (int row = 0; row < 9; row++)
        {
            for (int col = 0; col < 9; col++)
            {
                printf("%c ", tablo[row][col]);
            }
        printf("\n");
        }
        getUserInput();
    }

    void moveChar(int fr, int fc)
    {
        tablo[currentRow][currentCol] = ' ';
        tablo[fr][fc] = 'X';
        currentRow=fr;
        currentCol=fc;
        printTablo();
    }
void getUserInput()
{
    int f;
    printf("2 basamakli bir sayi giriniz: ");
    scanf("%d", &f);
    if (f > 10 && f < 100 && f % 10)
    {
        int row = f / 10;
        int col = f % 10;
        moveChar(row,col);
    }
    printTablo();
}
int main()
{
    printTablo();
}