#include <stdio.h> 

int main() 
{
   int radius;
   float area, perimeter;    
   
   radius = 6;

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f\n", perimeter);
	
	area = 3.14*radius*radius;
	printf("Area of the Circle = %f square\n", area);

   return(0);
}