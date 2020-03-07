#include <stdio.h>
#include <stdlib.h>
void checkInput(int ir, int ic, int fr, int fc);
int pairCount = 8;
int foundPairs = 0;
void clear()
{
    system("clear");
}
char eslestirme1[5][5] = {
    {'0', '1', '2', '3', '4'},
    {'1', ' ', ' ', ' ', ' '},
    {'2', ' ', ' ', ' ', ' '},
    {'3', ' ', ' ', ' ', ' '},
    {'4', ' ', ' ', ' ', ' '}
};
char eslestirme2[5][5] = {
    {'0', '1', '2', '3', '4'},
    {'1', 'a', 'c', 'e', 'f'},
    {'2', 'c', 'f', 't', 'b'},
    {'3', 'a', 'b', 't', 'e'},
    {'4', 'x', 'y', 'x', 'y'}
};
void getUserInput()
{
    int fc, sc;
    printf("Please enter fc and sc:");
    scanf("%d %d", &fc, &sc);
    checkInput(fc/10,fc%10, sc/10, sc%10);
}
void checkInput(int ir, int ic, int fr, int fc)
{
    if (eslestirme2[ir][ic] == eslestirme2[fr][fc])
    {
        eslestirme1[ir][ic] = eslestirme2[ir][ic];
        eslestirme1[fr][fc] = eslestirme2[fr][fc];
        foundPairs++;
    }
}

void printBoard()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf("%c ",eslestirme1[row][col]);
        }
        printf("\n");
    }

}

void startGame()
{
    while (foundPairs != pairCount)
    {
        clear();
        printBoard();
        getUserInput();
        clear();
        printBoard();
    }
    
}

int main()
{
    startGame();
}