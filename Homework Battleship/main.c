#include <stdio.h>
#include <stdlib.h>
#include "c_fun.c"

char gameTable[10][10];
char screenTable[10][10];
int row, col;
char elementTypes[9] = {'A', 'W', 'E', 'U', 'C', 'O', 'O', 'O', 'O'};
int elementValues[9] = {5, 3, 3, 2, 2, 1, 1, 1, 1};
int elementPlaces[5];

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
            if(i == 0)
            {
                c += j;
            }
            else if(j == 0)
            {
                c += i;
            }
            else
            {
                c = ' ';
            }
            gameTable[i][j] = c;
            screenTable[i][j] = c;
        }
    }
}

void printTable()
{
    clear();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", screenTable[i][j]);
        }
        printf("\n");
    }
}

void placeElement(int r, int c, char propType)
{
    screenTable[r][c] = propType;
}

void placeProp(char propType, int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        placeElement(elementPlaces[i]/10, elementPlaces[i]%10, propType);
    }
}

char getUserInput()
{
    char c = get_ch();
    if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }
    return c;
}

void copyTable()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            screenTable[i][j] = gameTable[i][j];
        }
    }
}

void prepValues(char elementType)
{
    switch (elementType)
    {
        case 'A':
            elementPlaces[0] = row * 10 + col;
            elementPlaces[1] = row * 10 + col + 2;
            elementPlaces[2] = (row + 1) * 10 + col + 1;
            elementPlaces[3] = (row + 2) * 10 + col;
            elementPlaces[4] = (row + 2) * 10 + col + 2;
            break;
        case 'W':
            elementPlaces[0] = row * 10 + col;
            elementPlaces[1] = (row + 1) * 10 + col;
            elementPlaces[2] = (row + 2) * 10 + col;
            break;
        case 'E':
            elementPlaces[0] = row * 10 + col;
            elementPlaces[1] = row * 10 + col + 1;
            elementPlaces[2] = row * 10 + col + 2;
            break;
        case 'U':
            elementPlaces[0] = row * 10 + col;
            elementPlaces[1] = (row + 1) * 10 + col;
            break;
        case 'C': 
            elementPlaces[0] = row * 10 + col;
            elementPlaces[1] = row * 10 + col + 1;
            break;
        case 'O':
            elementPlaces[0] = row * 10 + col;
            break;
    }
}

void start()
{
    prepTables();
    printTable();
    for(int i = 0; i < 9; i++)
    {
        char elementType = elementTypes[i];
        int elementValue = elementValues[i];
        row = 5;
        col = 5;
        char c;
        while(1)
        {
            prepValues(elementType);
            placeProp(elementType, elementValue);
            printTable();
            c = getUserInput();
            switch (c)
            {
                case 'w':
                    row--;
                    break;
                case 'a':
                    col--;
                    break;
                case 's':
                    row++;
                    break;
                case 'd':
                    col++;
                    break;
            }
            if(c == '\n')
            {
                // Put element to game table.
                break;
            }
            copyTable();
        }
    }
}


int main()
{
    start();
}