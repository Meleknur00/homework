#include <stdio.h>
int main()
{
    int a, b;
 
    printf("Enter the values for a and b\n");
    scanf("%d %d", &a, &b);
    if(a%b==0 || b%a==0)
    {   
        printf("congratulations they are multiple of each other\n");
    }
    else
    {
        printf("sorry they are not multiple of each other\n");
    }
    
    return 0;
}