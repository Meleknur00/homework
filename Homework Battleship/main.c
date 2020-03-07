#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"
soldier
char input;
int row = 5;
int col =5;
void whichOne();
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
void placeAdmiral(int r, int c)
{
    table[r][c] = 'A';
    table[r-1][c-1] = 'A';
    table[r-1][c+1] = 'A';
    table[r+1][c-1] = 'A';
    table[r+1][c+1] = 'A';
}
void removeAdmiral(int r, int c)
{
    table[r][c] = ' ';
    table[r-1][c-1] = ' ';
    table[r-1][c+1] = ' ';
    table[r+1][c-1] = ' ';
    table[r+1][c+1] = ' ';
}
void moveAdmiral(int r, int c)
{
    removeAdmiral(row,col);
    placeAdmiral(r,c);
    row = r;
    col = c;
}
void placeHTrio(int r, int c)
{
    table[row][col]='E';
    table[row][col+1]='E';
    table[row][col-1]='E';
}
void removeHTrio(int r, int c)
{
    table[row][col]=' ';
    table[row][col+1]=' ';
    table[row][col-1]=' ';
}
void moveHtrio(int r, int c)
{
    removeHTrio(row,col);
    placeHTrio(r,c);
    row = r;
    col = c;
}
void placeVTrio(int r, int c)
{
    table[row][col]='W';
    table[row+1][col]='W';
    table[row-1][col]='W';
}
void removeVTrio(int r, int c)
{
    table[row][col]=' ';
    table[row+1][col]=' ';
    table[row-1][col]=' ';
}
void moveVTrio(int r, int c)
{
    removeVTrio(row,col);
    placeVTrio(r,c);
    row = r;
    col = c;
}
void placeHDuo(int r, int c)
{
    table[row][col]='U';
    table[row][col+1]='U';
}
void removeHDuo(int r, int c)
{
    table[row][col]=' ';
    table[row][col+1]=' ';
}
void moveHDuo(int r, int c)
{
    removeHDuo(row,col);
    placeHDuo(r,c);
    row = r;
    col = c;
}
void placeVduo(int r, int c)
{
    table[row][col]='C';
    table[row][col+1]='C';
}
void removeVDuo(int r, int c)
{
    table[row][col]=' ';
    table[row][col+1]=' ';
}
void moveVDuo(int r, int c)
{
    removeVDuo(row,col);
    placeVduo(r,c);
    row = r;
    col = c;
}
void placeSoldier1(int r, int c)
{
    table[row][col]='O';
}
void removeSoldier1(int r, int c)
{
    table[row][col]=' ';
}
void moveSoldier1(int r,int c)
{
    removeSoldier1(row,col);
    placeHDuo(r,c);
    row = r;
    col = c;
}
void placeSoldier2(int r, int c)
{
    table[row][col]='O';
}
void removeSoldier2(int r, int c)
{
    table[row][col]='0';
}
void removeSoldier2(int r, int c)
{
    table[row][col]=' ';
}
void placeSoldier3(int r, int c)
{

    table[row][col]='O';
}
void removeSoldier3(int r, int c)
{
    table[row][col]='0';
}
void placeSoldier4(int r, int c)
{
    table[row][col]='O';
}
void removeSoldier4(int r, int c)
{
    table[row][col]='0';
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
void whichOne()
{
    char input;
    printf("Amiral - Horizontal trio - Vertical trio - Horizontal duo - Vertical duo - Soldier1- Soldier2 -Soldier3 or Soldier4??");
    scanf("%c",input);
    start();
}
void start()
{
    clearTable();
    whichOne();
    if (input == 'amiral')
    {
        placeAdmiral(row,col);
    }
    else if (input == 'horizontal trio')
    {
        placeHTrio(row,col);
    }
    else if (input == 'vertical trio')
    {
        placeVTrio(row,col);
    }
    else if (input == 'horizontal duo')
    {
        placeHDuo(row,col);
    }
    else if (input == 'vertical duo')
    {
        placeVduo(row,col);
    }
    else if (input == 'soldier1')
    {
        placeSoldier1(row,col);
    }

    else if (input == 'soldier2')
    {
        placeSoldier2(row,col);
    }

    else if (input == 'soldier3')
    {
        placeSoldier3(row,col);
    } 

    else if (input == soldier4)
    {
        placeSoldier4(row,col);
    }
    

    printTable();
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
    
    printTable();
    c = get_ch();
    nr = row;
    nc = col;
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
    if (input == 'amiral')
    {
        moveAdmiral(nr,nc);
    }
    else if (input == 'horizontal trio')
    {
        moveHTrio(nr,nc);
    }
    else if (input == 'vertical trio')
    {
        moveVTrio(nr,nc);
    }
    else if (input == 'horizontal duo')
    {
        moveHDuo(nr,nc);
    }
    else if (input == 'vertical duo')
    {
        moveVduo(nr,nc);
    }
    else if (input == 'soldier1')
    {
        moveSoldier1(nr,nc);
    }

    else if (input == 'soldier2')
    {
        moveSoldier2(nr,nc);
    }

    else if (input == 'soldier3')
    {
        moveSoldier3(nr,nc);
    } 

    else if (input == 'soldier4')
    {
        moveSoldier4(nr,nc);
    }
        printTable();
}
int main()
{
    while (1)
    {
    start();
    }
    
}