#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

int row = 5;
int col =5;

void clear()
{
    system("clear");
}

char table[10][10];

void clearTable()
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            if (row == 0)
            {
                table[row][col] = '0' + col;
            }
            else if (col == 0)
            {
                table[row][col] = '0' + row;
            }
            else
            {
                table[row][col] = ' ';
            }
        }
    }
}
void placeSoldier(int r, int c)
{
    table[r][c] = 'O';
}
void removeSoldier(int r, int c)
{
    table[r][c] = ' ';
}
void moveSoldier(int r, int c)
{
    removeSoldier(row,col);
    placeSoldier(r,c);
    row = r;
    col = c;
}

void placeAdmiral(int r, int c)
{
    table[r][c] = 'A';
    table[r-1][c-1] = 'A';
    table[r-1][c+1] = 'A';
    table[r+1][c-1] = 'A';
    table[r+1][c+1] = 'A';
}

void printTable()
{
    clear();
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%c ", table[row][col]);
        }
        printf("\n");
    }
}

void getInput()
{
    char c = get_ch();
    int nr = row;
    int nc = col;
    switch (c)
    {
    case 'W':
    case 'w':
        nr--;
        break;
    case 'A':
    case 'a':
        nc--;
        break;
    case 'S':
    case 's':
        nr++;
        break;
    case 'D':
    case 'd':
        nc++;      
        break;
    }
    moveSoldier(nr,nc);
    printTable();
}
void start()
{
    clearTable();
    placeSoldier(row,col);
    printTable();
    placeAdmiral(2,2);
    while (1)
    {
        getInput();
    }
}
int main()
{
    
    start();
    
    
}