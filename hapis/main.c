#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

int row = 1;
int col = 1;
void clear()
{
    system("clear");
}

char hapis[6][6] = {
    {'H', 'H', 'H', 'H', 'H', 'H'},
    {'H', ' ', ' ', ' ', ' ', 'H'},
    {'H', ' ', ' ', ' ', ' ', 'H'},
    {'H', ' ', ' ', ' ', ' ', 'H'},
    {'H', ' ', ' ', ' ', ' ', ' '},
    {'H', 'H', 'H', 'H', 'H', 'H'}
};
void printHapis()
{
    clear();
    for (int row = 0; row <6; row++)
    {
        for (int col = 0; col < 6; col++)
        {
            printf("%c ", hapis[row][col]);
        }
        printf("\n");
    }
}
void move(int r, int c)
{
    if (hapis[r][c]==' ')
    {
        hapis[row][col] = 'C';
        hapis[r][c] = 'P';
        row = r;
        col = c;
    }
    
}
void start()
{
    char c;
    hapis[row][col] = 'P';
    printHapis();
    while (!(row==4 && col==5))
    {
        c = get_ch();
        switch (c)
        {
        case 'W':
        case 'w':
            move(row-1, col);
            break;
        case 'A':
        case 'a':
            move(row, col-1);
            break;
        case 'S':
        case 's':
            move(row+1, col);
            break;
        case 'D':
        case 'd':
            move(row, col+1);
            break;
        }
        printHapis();    

    }
    
}

int main()
{
    start();
}