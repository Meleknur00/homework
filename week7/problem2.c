#include <stdio.h>
#define PI 3.14159f

void mainMenu();
void circleMenu();
void rectangleMenu();
void squareMenu();
void askExit();

int main()
{
    mainMenu();
}

void mainMenu()
{
    int a;
    printf("Hi,Please Choose One of them:  \n");
    printf("1: Circle                      \n");
    printf("2: Rectangle                   \n");
    printf("3: Square                      \n");
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        circleMenu();
        break;
    case 2:
        rectangleMenu();
        break;
    case 3:
        squareMenu();
        break;
    }
}

void circleMenu()
{
    float radius, area, perimeter;
    printf("Circle Selected.\nPlease Enter Radius of the Circle: \n");
    scanf("%f",&radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
 
    printf("Area of circle: %.2f \nPerimeter of circle: %.2f\n", area, perimeter);
    askExit();
}

void rectangleMenu()
{
    double area, perimeter, height, width;    
    printf("Enter the Height and Width of the rectangle Seperated by space:");
    scanf("%lf %lf",&height,&width);
    perimeter = 2 * (height + width);
    printf("Perimeter of the rectangle = %.2lf inches\n", perimeter);       
    area = height * width;
    printf("Area of the rectangle = %.2lf square inches\n", area);
    askExit();
}

void squareMenu()
{
    float side, perimeter, area;
    printf("Enter side of square:");
    scanf("%f", &side);
	perimeter = 4 * side;
    area = side * side;
    printf("Area Of Square: %.2f\n", area);
	printf("Perimeter Of Square: %.2f\n", perimeter);
    askExit();
}

void askExit()
{
    int x;
    printf("Do you want to continue?\n 1-Yes      2-No\n");
    scanf("%d", &x);

    if (x == 1)
    {
        mainMenu();
    }
}