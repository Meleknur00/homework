#include <stdio.h> 

int main()
{
	int width;          
	int height;         

	int area;           
	int perimeter;   

	height = 17;
	width = 51;

    perimeter = 2*(height + width);
	printf("Dikdortgenin cevresi %d dir\n", perimeter);
	
	area = height * width;
	printf("Dikdortgenin alani %d dir\n", area);

	return(0);
}