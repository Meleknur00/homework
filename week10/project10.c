#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"
int check(int i);
int nox = 9;
void getUserInput();
void clear()
{
    system("clear");
}
char tablo[10][10] =
{
    {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
    {'1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'2', ' ', ' ', 'X', 'X', ' ', ' ', ' ', ' ', ' '},
    {'3', 'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' '},
    {'4', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' '},
    {'5', ' ', ' ', ' ', ' ', 'Y', ' ', ' ', ' ', ' '},
    {'6', ' ', 'X', ' ', 'X', ' ', ' ', ' ', ' ', ' '},
    {'7', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' '},
    {'8', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'9', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
};
int currentRow=5;
int currentCol=5;
int nom = 0;
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
        printf("Number of moves: %d\n",nom);
        printf("Number of nox: %d\n",nox);
    }

    void moveChar(int fr, int fc)
    {

        fr = check(fr);
        fc = check(fc);
        tablo[currentRow][currentCol] = ' ';
        if (tablo[fr][fc] == 'X')
        {
            tablo[fr][fc] = 'O';
            nox--;
        }
        else
        {    
            tablo[fr][fc] = 'Y';
        }
        currentRow=fr;
        currentCol=fc;
        nom++;
        printTablo();
    }
int check(int i)
{
    if (i == 9)
    {
        i=1;
    }
    if (i == 0)
    {
        i=8;
    }
    
    return i;
}
void getUserInput()
{
    char f = get_ch();
    switch (f)
    {
    case 'w':
    case 'W':
        moveChar(currentRow-1,currentCol);
        break;
    case 'a':
    case 'A':
        moveChar(currentRow,currentCol-1);
        break;
    case 's':
    case 'S':
        moveChar(currentRow+1,currentCol);
        break;
    case 'd':
    case 'D':
        moveChar(currentRow,currentCol+1);
        break;

    default:
        break;
    }
    printTablo();
}
int main()
{
    while (nox > 0)
    {
    printTablo();
    getUserInput();
    }
    clear();
    printf("GAME OVER!!!\n");
}