#include <stdio.h>
int main() {
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (lowercase || uppercase)
        printf("The alphabet is a vowel.\n");
    else
        printf("The alphabet is a consonant.\n");
    return 0;
}
// burda  8 ve 10. satirlar icin  internete baktim neden sadece bu harfler var ve calisiyor anlamis degilim !?