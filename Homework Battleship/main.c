#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

int row = 5;
int col =5;
char gameTable[10][10];
char screenTable[10][10];

void clear()
{
    system("clear");
}

void prepTables()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            char c = '0';
            if (i == 0)
            {
                c += j;
            }
            else if (j == 0)
            {
                c += i;
            }
            else
            {
                c = ' ';
            }
        }
    }
}

void printTable()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", screenTable[i][j]);
        }
        printf("\n");
    }   
}

char getUserInput()
{
    char c;

    return c;
}
int main()
{
    prepTables();
    printTable();
}