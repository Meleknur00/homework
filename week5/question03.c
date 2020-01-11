#include <stdio.h> 

int main() 
{
   int a;
   printf("Enter an integer: \n");
   scanf("%d",&a);
   if (a % 5 == 0 || a % 9 == 0)
   {
       printf("TRUE\n");
   }
    else
    {
       printf("FALSE\n");
    }
    
}
   