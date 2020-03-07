#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

int row = 4;
int col = 0;
void clear()
{
    system("clear");
}

char maze[10][10] = {
    {'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H'},
    {'H', ' ', ' ', ' ', 'H', 'H', ' ', ' ', ' ', 'H'},
    {'H', ' ', 'H', ' ', ' ', 'H', 'H', ' ', ' ', 'H'},
    {'H', ' ', 'H', 'H', ' ', ' ', ' ', ' ', 'H', 'H'},
    {' ', ' ', 'H', ' ', 'H', ' ', ' ', 'H', ' ', ' '},
    {'H', ' ', 'H', ' ', ' ', 'H', ' ', 'H', ' ', 'H'},
    {'H', ' ', ' ', 'H', ' ', 'H', ' ', 'H', ' ', 'H'},
    {'H', 'H', ' ', 'H', ' ', 'H', ' ', 'H', ' ', 'H'},
    {'H', ' ', ' ', ' ', ' ', 'H', ' ', ' ', ' ', 'H'},
    {'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H', 'H'}
};
void printMaze()
{
    clear();
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%c ", maze[row][col]);
        }
        printf("\n");
    }
        
}
void move(int r, int c)
{
    if (maze[r][c] == ' ')
    {
        maze[row][col] = 'H';
        maze[r][c] = 'P';
        row = r;
        col = c;

    }
    
}
void start()
{
    char c;
    maze[row][col] = 'P';
    printMaze();
    while (!(row == 4 && col == 9 ))
    {
        c = get_ch();

        switch (c)
        {
        case 'W':
        case 'w':
            move(row -1, col);
            break;
        case 'A':
        case 'a':
            move(row, col-1);
            break;
        case 'S':
        case 's':
            move(row +1, col);
            break;
        case 'D':
        case 'd':
            move(row, col+1);
            break;
        }
        printMaze();
    }
    
}
int main()
{
    start();
}