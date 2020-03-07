#include <stdio.h>

int search(int array[], int value)
{
    for (int i = 0; i < 20; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int userEntry;
    int myArray[20] = {10, 15, 20, 40, 60, 80, 100 };
    printf("Enter an Integer: ");
    scanf("%d",&userEntry);
    int f = search(myArray, userEntry)
    printf("%d\n", f);
}