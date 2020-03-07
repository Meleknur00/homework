#include <stdio.h>


int search(char kelime[], char harf)
{
    int i =0;
    while (kelime[i] != '\0')
    {
        if (kelime[i] == harf)
        {
            return i;
        }
        i++;
    }

    return -1;
}
int main()
{
    char userWord[10];
    char userLetter;
    printf("Enter a word and a letter: ");
    scanf("%s %c", userWord, &userLetter);
    int f = search(userWord, userLetter);
    printf("%d\n", f);
}
