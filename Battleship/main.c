#include <stdio.h>
#include <stdlib.h>
int col, row, userInput;
void clear()
{
    system("clear");
}
char battleShipTable[10][10];

void clearBattleShipTable()
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            if (row == 0)
            {
                battleShipTable[row][col] = '0' + col;
            }
            else if (col == 0)
            {
                battleShipTable[row][col] = '0' + row;
            }
            else
            {
                battleShipTable[row][col] = ' ';
            }
            
            
        }
        
    }
    
}

void printBattleShipTable()
{
    clear();
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%c ", battleShipTable[row][col]);
        }
        printf("\n");
    }
        
}


void getUserInput (char *name)
{
    printf("Where should I put the %s?\n- ", name);
    scanf("%d",&userInput);
    row = userInput/10;
    col = userInput%10;
}
void placeAdmiral()
{

    battleShipTable[row][col]='A';
    battleShipTable[row+1][col+1]='A';
    battleShipTable[row+1][col-1]='A';
    battleShipTable[row-1][col+1]='A';
    battleShipTable[row-1][col-1]='A';
}
void placeHTrio()
{
    battleShipTable[row][col]='E';
    battleShipTable[row][col+1]='E';
    battleShipTable[row][col-1]='E';
}
void placeVTrio()
{
    battleShipTable[row][col]='W';
    battleShipTable[row+1][col]='W';
    battleShipTable[row-1][col]='W';
}
void placeHDuo()
{
    battleShipTable[row][col]='U';
    battleShipTable[row][col+1]='U';
}
void placeVDuo()
{
    battleShipTable[row][col]='C';
    battleShipTable[row+1][col]='C'; 
}
void placeSoldier()
{
    battleShipTable[row][col]='O';
}

char names[9][16] = {
    "Admiral\0",
    "Horizontal trio\0",
    "Vertical trio\0",
    "Horizontal duo\0",
    "Vertical duo\0",
    "Soldier\0",
    "Soldier\0",
    "Soldier\0",
    "Soldier\0"

};

int placeProps(int i)
{
    switch (i)
    {
    case 0:
        placeAdmiral();
        break;
    case 1:
        placeHTrio();
        break;
    case 2:
        placeVTrio();
        break;
    case 3:
        placeHDuo();
        break;  
    case 4:
        placeVDuo();
        break;  
    default:
        placeSoldier();
        break;
    }
}

int main()
{
    clearBattleShipTable();
    printBattleShipTable();
    for (int i = 0; i < 9; i++)
    {
        getUserInput(names[i]);
        placeProps(i);
        printBattleShipTable();

    }

}