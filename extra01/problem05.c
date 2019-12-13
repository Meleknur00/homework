#include <stdio.h>
 
int main()
{
    printf( "Input two integer separated by whitespace: ");
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("Product of %d and %d is %d\n", a, b, a*b);
    return 0;
}