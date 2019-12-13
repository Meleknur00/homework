#include <stdio.h>

int main() 
{
	int amount, total;
	printf("Enter the amount of money(int): ");
	scanf("%d",&amount);
	total = (int)amount/100;
	printf("There are: ");
	printf("\n%d Note(s) of 100\n", total);
	amount = amount%100;
	total = (int)amount/50;
	printf("%d Note(s) of 50\n", total);
	amount = amount%50;
	total = (int)amount/20;
	printf("%d Note(s) of 20\n", total);
	amount = amount-(total*20);
	total = (int)amount/10;
	printf("%d Note(s) of 10\n", total);
	amount = amount-(total*10);
	total = (int)amount/5;
	printf("%d Note(s) of 5\n", total);
	amount = amount-(total*5);
	total = (int)amount/2;
	printf("%d Note(s) of 2\n", total);
	amount = amount-(total*2);
	total = amount/1;
	printf("%d Note(s) of 1\n", total);
	return 0;
}